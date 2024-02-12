# CGE/HW_Engine

## Dependencies:
### GLFW

This comes by default with the precompiled binaries for Mac-OS by default, you will need to edit CMakeLists.txt to accomodate for universal usage or for other CPU Architectures.

### GLAD + GLM
You need to install these, if you have problems with them look under libs/universal and also refer to CMakeLists.txt and make sure the libraries are correctly linked to your project.

If that does not solve your issues, you may need to look at the libs/universal/custom_libraries and configure the includes to correctly include the libraries.

### Sep's Custom Libraries for CGED

This comes by default under the libs/universal/custom_libraries directory. I've tried to provide everything in the most modular form possible to provide for more customizability.

So you can jump into any of these libraries and have a look for yourself and add or remove features as you wish.

### FreeType

You will need to install this yourself if you want to be able to recompile the software. Depending on the system you're using and how you've installed FreeType either in the project or on your system, you might need to edit CMakeLists.txt to make sure CMake is able to find and include it in your project.

#### Notes for myself (You can ignore this):

Need to figure out x86 Compilation for windows from MacOS using mingw and toolchain files from cmake.
