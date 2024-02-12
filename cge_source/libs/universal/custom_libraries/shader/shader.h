#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <glm/glm.hpp>


class Shader {
public:
    // The shader program ID
    unsigned int  ID;

    // Constructor reads and builds the shader.
    Shader(const char* vertexPath, const char* fragmentPath);

    // Use/activate the shader
    void use();
    

    // Utility uniform functions
    void setMat4(const std::string &name, const glm::mat4 &mat) const;
    void setVec3(const std::string &name, float x, float y, float z) const; // Floats
    void setVec3GLM(const std::string &name, const glm::vec3 &value) const; // glm vec3
    void setInt(const std::string &name, int value) const;
};

#endif
