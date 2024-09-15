// Example of basic rendering setup in C++
void RenderScene() {
    // Set up the camera
    SetCamera();
    
    // Render objects
    for (auto& object : sceneObjects) {
        DrawObject(object);
    }
}
