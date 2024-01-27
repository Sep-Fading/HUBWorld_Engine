#include <iostream>
#include "window.h"

int main(){
    std::cout << "Program started..." << std::endl;
    Window window(800,600,"CGE");
    window.MainLoop();
    return 0;
}

