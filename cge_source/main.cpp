#include <iostream>
#include "libs/universal/custom_libraries/enginewindow/engine_window.h"

int main(){
    std::cout << "Program started..." << std::endl;
    EngineWindow engine_window(800,600,"CGE");
    engine_window.MainLoop();
    return 0;
}

