#include <iostream>
#include "window.h"

int main(){
    std::cout << "Program started..." << std::endl;
    Window EngineWindow(800,600,"CGE");
    EngineWindow.MainLoop();
    return 0;
}

