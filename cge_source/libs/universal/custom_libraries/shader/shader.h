#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader {
public:
    // The shader program ID
    unsigned int  ID;

    // Constructor reads and builds the shader.
    Shader(const char* vertexPath, const char* fragmentPath);

    // Use/activate the shader
    void use();
};

#endif
