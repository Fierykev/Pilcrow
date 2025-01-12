#version 330 core
in vec2 TexCoords;
out vec4 color;

uniform sampler2D diffuse1;

void main()
{    
    color = texture(diffuse1, TexCoords);
}