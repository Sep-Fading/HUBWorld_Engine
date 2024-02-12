#include <glad/glad.h>
#include "window.h"
#include "textrenderer/TextRenderer.h"
#include <GLFW/glfw3.h>
#include <cstdlib>
#include <iostream>
#include <ostream>

Window::Window(int width, int height, const char* title){
    if (!glfwInit()) {
        std::cerr << "Failed to initialise GLFW"<< std::endl;
        std::exit(EXIT_FAILURE);
    }

    // Set GLFW to use OpenGL Core Profile and forward compatibility
    // This is required for macOS and good practice for other platforms
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // Choose OpenGL major version
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3); // Choose OpenGL minor version
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // Use Core Profile
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // Required on macOS
    window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if (!window) {
        glfwTerminate();
        std::cerr << "Failed to create GLFW window" << std::endl;
        std::exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(window);

    // Initializing GLAD, MUST BE RIGHT AFTER CREATING AN OPENGL CONTEXT!
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cerr << "Failed to initialize GLAD \n";
        std::exit(EXIT_FAILURE);
    }
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

void Window::Render(){
}

TextRenderer Window::SetupTextRenderer(const char* vertexPath, const char* fragmentPath,
                               std::string& fontPath, GLuint fontSize,
                               int sWidth, int sHeight){

    Shader textShader(vertexPath, fragmentPath);

    // Init the text rednerer with the screen width, height, shader program ID
    TextRenderer textRenderer(sWidth, sHeight, textShader.ID);

    // Load the font with the desired font size
    textRenderer.LoadFont(fontPath, fontSize);

    return textRenderer;
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
