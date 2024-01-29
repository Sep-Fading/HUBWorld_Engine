#include "window.h"
#include "libs/macos/glfw/glfwMACOS/include/GLFW/glfw3.h"
#include <cstdlib>
#include <iostream>
#include <ostream>

Window::Window(int width, int height, const char* title){
    if (!glfwInit()) {
        std::cerr << "Failed to initialise GLFW"<< std::endl;
        std::exit(EXIT_FAILURE);
    }

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if (!window) {
        glfwTerminate();
        std::cerr << "Failed to create GLFW window" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);
}

Window::~Window() {
    Shutdown();
}

void Window::MainLoop() {
    while (!glfwWindowShouldClose(window)){
        // Poll for and process events
        glfwPollEvents();
        // Create an input listener.
        CreateInputListener();
        // Render here
        
        // Swap front & back buffers
        glfwSwapBuffers(window);
    }
}

void Window::Initialize() {
    // Intialize the window
}

void Window::Shutdown() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void Window::CreateInputListener() {
    glfwSetKeyCallback(window, Window::InputListener);
}

void Window::InputListener(GLFWwindow* window, int key, int scancode
                            , int action, int mods){
    // Probably want to setup some keymaps here
    // But for testing purposes lets just have something here.

    if (key == GLFW_KEY_1 && action == GLFW_PRESS){
        std::cout << "Keypress recognised" << std::endl;
    }

}
