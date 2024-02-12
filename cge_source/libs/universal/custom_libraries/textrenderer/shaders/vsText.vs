#version 330 core

layout (location = 0) in vec4 vertex; // {position.x, position.y, 
    texCoord.x, texCoord.y}

out vec2 TexCoords;

uniform mat4 projection;

void main() {
    gl_Position = project * vec4(vertex.xy, 0.0, 1.0);
    TexCoords = vertex.zw;
}


