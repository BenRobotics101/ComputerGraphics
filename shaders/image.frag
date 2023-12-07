
#version 330 core
out vec4 FragColor; // Returns FragColor

in vec2 texCoord; // Receives FragPos

uniform sampler2D ourTexture;

void main()
{
    FragColor = texture(ourTexture, texCoord);
}
