#include "TextRenderer.h"
#include "glad/glad.h"
#include "glm/fwd.hpp"

TextRenderer::TextRenderer(GLuint width, GLuint height, GLuint shaderProgram) {
    // Load and configure shader
}

void TextRenderer::LoadFont(const std::string& fontPath, GLuint fontSize){
    // Initialize and load the FreeType library
    // Load font as face
    // Set size to load glyphs as
    // Disable byte-alignment restriction
    // pre-load/compile the first 128 ASCII characters
}

void TextRenderer::RenderText(const std::string& text, GLfloat x, 
                              GLfloat y, GLfloat scale, glm::vec3 color){
    // Activate corresponding render state
    // Iterate through all characters
    // render glyph texture over quad
    // Now advance cursors for next glyph
    // ...
}

void TextRenderer::initRenderData() {
    // Configure VAO/VBO for texture quads
}
