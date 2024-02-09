#ifndef TEXTRENDERER_H
#define TEXTRENDERER_H

#include <map>
#include <string>
#include <glad/glad.h> // GLAD - For OpenGL function loading
#include <glm/glm.hpp> // Use GLM for Mathematics
#include <ft2build.h>
#include FT_FREETYPE_H
#include "shader/shader.h"


struct Character {
    GLuint TextureID; // ID handle of the glyph texture
    glm::ivec2 Size; // Size of glyph
    glm::ivec2 Bearing; // Offset from baselinbe to left/top of glyph
    unsigned int Advance; // The horizontal offset to advance to next glyph
};

class TextRenderer {
public:
    std::map<GLchar, Character> Characters;
    Shader TextShader;
    GLuint VAO, VBO;
    
    // Constructor
    TextRenderer(GLuint width, GLuint height, GLuint shaderProgram);

    // Destructor
    ~TextRenderer();

    // Loads a font and pre-compiles a list of characters from it.
    void LoadFont(const std::string& fontPath, GLuint fontSize);

    // Renders a string of text using the precompiled list of characters.
    void RenderText(const std::string& text, GLfloat x, GLfloat y, 
                    GLfloat scale, glm::vec3 color = glm::vec3(1.0f));

private:
    // Initialize and configure the quad's buffer and vertex attributes
    void initRenderData();
};

#endif // TEXTRENDERER_H
