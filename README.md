# CGE/HW_Engine

## Dependencies:
### GLFW

This comes by default with the precompiled binaries for Mac-OS by default, you will need to edit CMakeLists.txt to accomodate for universal usage or for other CPU Architectures.

### GLAD + GLM
These also come by default, shouldn't have to worry about them but if you have problems with them look under libs/universal and also refer to CMakeLists.txt and make sure the libraries are correctly linked to your project.

### Sep's Custom Libraries for CGED

This comes by default under the libs/universal/custom_libraries directory.

### FreeType

You will need to install this yourself if you want to be able to recompile the software. Depending on the system you're using and how you've installed FreeType either in the project or on your system, you might need to edit CMakeLists.txt to make sure CMake is able to find and include it in your project.

