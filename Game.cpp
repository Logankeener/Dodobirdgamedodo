void processInput(GLFWwindow* window, Player& player) {
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        player.moveForward();
    }
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        player.moveBackward();
    }
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        player.strafeLeft();
    }
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
        player.strafeRight();
    }
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) {
        player.jump();
    }
}
