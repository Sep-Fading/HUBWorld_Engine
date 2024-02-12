#version 330 core
layout (location = 0) in vec4 vertex; // (position.x, position.y, texCoords.x, texCoords.y)

out vec2 TexCoords;

uniform mat4 projection;

void main() {
    gl_Position = projection * vec4(vertex.xy, 0.0, 1.0);
    TexCoords = vertex.zw;
}

