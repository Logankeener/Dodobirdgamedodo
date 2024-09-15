const char* fragmentShaderSource = R"(
#version 330 core
in vec2 TexCoord;
out vec4 FragColor;

uniform sampler2D texture1;
uniform sampler2D damageMap; // New uniform for the damage map

void main()
{
    vec4 color = texture(texture1, TexCoord);
    vec4 damage = texture(damageMap, TexCoord);
    
    // Apply damage effect based on damage map
    // For simplicity, we'll darken the color based on damage
    float damageIntensity = damage.r; // Assuming damage map is in red channel
    FragColor = mix(color, vec4(0.0, 0.0, 0.0, 1.0), damageIntensity);
}
)";
