// Guards to make sure it is not included in the same file
// more than once
#ifndef WINDOW_H
#define WINDOW_H


// Including the dependencies
#include "textrenderer/TextRenderer.h"
#include <GLFW/glfw3.h>
#include <string>

class Window {
public:
    Window(int width, int height, const char* title);
    ~Window();

    virtual void MainLoop();

    static void InputListener(GLFWwindow* window, int key,
                              int scancode, int action, int mods);
    
    TextRenderer SetupTextRenderer(const char* vertexPath, const char* fragmentPath,
                           std::string& fontPath, GLuint fontSize,
                           int sWidth, int sHeight);

protected:
    GLFWwindow* window;
    void Initialize();
    void Shutdown();
    void CreateInputListener();
    virtual void Render();
};

#endif // WINDOW_H


