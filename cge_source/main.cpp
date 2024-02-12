#include <iostream>
#include <unistd.h>
#include <enginewindow/engine_window.h>
#include <textrenderer/TextRenderer.h>


void printWorkingDirectory() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        std::cout << "CURRENT WORKING DIR: " << cwd << std::endl;
    }
    else {
        perror("getcwd() error");
    }
}

int main(){
    std::cout << "Program started..." << std::endl;
    int screenWidth = 800;
    int screenHeight = 600;
        
    EngineWindow engine_window(screenWidth, screenHeight, "CGE");

    // Setup the text renderer and pass it into main loop for rendering text.
    const char* vertexPath = "debug/shaders/vsText.vs";
    const char* fragmentPath = "debug/shaders/fsText.fs";
    std::string fontPath = "debug/fonts/Silkscreen/slkscr.ttf";
    GLuint fontSize = 14;

    printWorkingDirectory();
    TextRenderer textRenderer = engine_window.SetupTextRenderer(
                                    vertexPath, fragmentPath, fontPath, 
                                    fontSize, screenWidth, screenHeight);
    engine_window.MainLoop(textRenderer);

    printWorkingDirectory();
    return 0;
}

