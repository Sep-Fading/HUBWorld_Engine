#include "engine_window.h"
#include <OpenGL/OpenGL.h>
#include <glm/glm.hpp>

void EngineWindow::MainLoop(TextRenderer textRenderer){
    while (!glfwWindowShouldClose(window)){
        // Poll for and process events.
        glfwPollEvents();
        //Create an input listener.
        CreateInputListener();
               
        // CALL RENDERER HERE
        Render(textRenderer);

        // Swap front & back buffers.
        glfwSwapBuffers(window);
    }
}

void EngineWindow::Render(TextRenderer textRenderer){
    // RENDER CODE HERE
    
    // Clear the color buffer
    glClearColor(0.3f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    textRenderer.RenderText("Hello World", 25.0f, 25.0f, 1.0f, 
                            glm::vec3(1.0f, 1.0f, 1.0f));

}
