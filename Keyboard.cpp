void processInput(GLFWwindow *window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
        glfwSetWindowShouldClose(window, true);
    }
}

int main() {
    // Set up the window (same code as above)

    // Main game loop
    while (!glfwWindowShouldClose(window)) {
        // Clear the screen
        glClear(GL_COLOR_BUFFER_BIT);

        // Process input
        processInput(window);

        // Poll for events
        glfwPollEvents();

        // Swap buffers
        glfwSwapBuffers(window);
    }

    // Clean up and exit
    glfwTerminate();
    return 0;
}
