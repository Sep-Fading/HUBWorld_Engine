#include "engine_window.h"

void EngineWindow::MainLoop(){
    while (!glfwWindowShouldClose(window)){
        // Poll for and process events.
        glfwPollEvents();
        //Create an input listener.
        CreateInputListener();
        
        // CALL RENDERER HERE
        Render();

        // Swap front & back buffers.
        glfwSwapBuffers(window);
    }
}

void EngineWindow::Render(){
    // RENDER CODE HERE
}
