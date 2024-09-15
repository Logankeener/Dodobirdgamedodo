enum GameState {
    MAIN_MENU,
    PLAYING,
    PAUSED,
    GAME_OVER
};

GameState currentState;

void updateGameState() {
    switch (currentState) {
        case MAIN_MENU:
            renderMenu();
            break;
        case PLAYING:
            // Update and render game elements
            break;
        case PAUSED:
            // Render pause menu
            break;
        case GAME_OVER:
            // Render game over screen
            break;
    }
}
