#include "TextRenderer.h"
#include "glm/ext/matrix_clip_space.hpp"
#include <cstddef>
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <iostream>

TextRenderer::TextRenderer(GLuint width, GLuint height, GLuint shaderProgram) : 
    TextShader("debug/shaders/vsText.vs", "debug/shaders/fsText.fs") {
    
    // Load and configure
    initRenderData();

    // Setup the projection matrix for the text shader.
    // This project matrix converts the text coordinates to
    // normalized device coordinates that OpenGL uses for rendering.
    glm::mat4 projection = glm::ortho(0.0f, static_cast<float>(width),
                                      0.0f, static_cast<float>(height));
    
    // Activate the Shader
    TextShader.use();
    
    // Set the projection matrix uniform in the shader.
    TextShader.setMat4("projection", projection);

}

void TextRenderer::LoadFont(const std::string& fontPath, GLuint fontSize){
    // Initialize and load the FreeType library
    // Load font as face
    // Set size to load glyphs as
    // Disable byte-alignment restriction
    // pre-load/compile the first 128 ASCII characters
    
    FT_Library ft;

    if (FT_Init_FreeType(&ft)) {
        std::cerr << "ERROR::FREETYPE: Could not init FreeType Library" << std::endl;
        return;
    }

    
    FT_Face face;
    if (FT_New_Face(ft, fontPath.c_str(), 0, &face)) {
        std::cerr << "ERROR::FREETYPE: Failed to load font" << std::endl;
        return;
    }

    FT_Set_Pixel_Sizes(face, 0, fontSize);

    for (GLubyte c = 0; c < 128; c++) {

        // Load char glyphs into FT.
        if (FT_Load_Char(face, c, FT_LOAD_RENDER)) {
            std::cerr << "ERROR::FREETYPE: Failed to load Glyph" << std::endl;
            continue;
        }

        // Generate an OpenGL texture for the glyph bitmap
        GLuint texture;
        glGenTextures(1, &texture);
        glBindTexture(GL_TEXTURE_2D, texture);
        glTexImage2D(
            GL_TEXTURE_2D,
            0,
            GL_RED,
            face->glyph->bitmap.width,
            face->glyph->bitmap.rows,
            0,
            GL_RED,
            GL_UNSIGNED_BYTE,
            face->glyph->bitmap.buffer
        );

        // Set texture filtering and wrapping options
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP_TO_EDGE);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

        // Store character information for later use.
        Character character = {
            texture,
            glm::ivec2(face->glyph->bitmap.width,
                       face->glyph->bitmap.rows),
            glm::ivec2(face->glyph->bitmap_left,
                       face->glyph->bitmap_top),
            static_cast<GLuint>(face->glyph->advance.x)
        };
        Characters[c] = character;
    }

    // Clean up FT Resources
    FT_Done_Face(face);
    FT_Done_FreeType(ft);
    
}

void TextRenderer::RenderText(const std::string& text, GLfloat x, 
                              GLfloat y, GLfloat scale, glm::vec3 color){
    // Activate corresponding render state
    // Iterate through all characters
    // render glyph texture over quad
    // Now advance cursors for next glyph
    // ...
    
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    TextShader.use();
    TextShader.setVec3GLM("textColor", color);

    glActiveTexture(GL_TEXTURE0);
    TextShader.setInt("text", 0);
    
    glBindVertexArray(VAO); // Bind VAO
    
    for (std::string::const_iterator c = text.begin(); c != text.end(); c++) {
        Character ch = Characters[*c];
        
        // x,y position
        GLfloat xpos = x + ch.Bearing.x * scale;
        GLfloat ypos = y - (ch.Size.y - ch.Bearing.y) * scale;
        
        // glyph width,height
        GLfloat w = ch.Size.x * scale;
        GLfloat h = ch.Size.y * scale;
        
        // Define vertices for the glyph quad
        GLfloat vertices[6][4] = {
            { xpos,      ypos + h,  0.0f,  0.0f },
            { xpos,      ypos,      0.0f,  1.0f },
            { xpos + w,  ypos,      1.0f,  1.0f },
            { xpos    ,  ypos + h,  0.0f,  0.0f },
            { xpos + w,  ypos,      1.0f,  1.0f },
            { xpos + w,  ypos + h,  1.0f,  0.0f }
        };

        // Render glyph texture over quad
        glBindTexture(GL_TEXTURE_2D, ch.TextureID);
        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBufferSubData(GL_ARRAY_BUFFER, 0, sizeof(vertices), vertices);

        glDrawArrays(GL_TRIANGLES, 0, 6); 
        x += (ch.Advance >> 6) * scale; // Go next glyph
    }

    glBindVertexArray(0); // Unbind VAO
    glBindTexture(GL_TEXTURE_2D, 0); // Unbind texture
}


void TextRenderer::initRenderData() {
    // Configure VAO/VBO for texture quads
    glGenVertexArrays(1, &VAO); // Generate VAO
    glGenBuffers(1, &VBO); // Generate VBO
    glBindVertexArray(VAO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);

    // Memory allocation for the VBO
    glBufferData(GL_ARRAY_BUFFER, sizeof(GLfloat) * 6 * 4, NULL, GL_DYNAMIC_DRAW);
    glEnableVertexAttribArray(0); // Enable vertex attribute at location 0
    glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), (void*)0);

    glBindBuffer(GL_ARRAY_BUFFER, 0); // Unbind VBO
    glBindVertexArray(0); // Unbind the VAO
}

TextRenderer::~TextRenderer() {
    // Release dynamic resources, if any
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    // For other dynamically allocated resources, add the cleanup code here
}

