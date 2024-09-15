// Example of updating and rendering an object
void renderObjectWithDamage(GLuint VAO) {
    glUseProgram(shaderProgram);

    // Bind the damage map and other textures
    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, texture1);
    glUniform1i(glGetUniformLocation(shaderProgram, "texture1"), 0);

    glActiveTexture(GL_TEXTURE1);
    glBindTexture(GL_TEXTURE_2D, damageMapTexture);
    glUniform1i(glGetUniformLocation(shaderProgram, "damageMap"), 1);

    // Render the object
    glBindVertexArray(VAO);
    glDrawElements(GL_TRIANGLES, indicesCount, GL_UNSIGNED_INT, 0);
}
