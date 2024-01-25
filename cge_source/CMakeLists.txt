# SETTING MINIMUM CMAKE VERSION
cmake_minimum_required(VERSION 3.20)

# SETTING CPU BUILD ARCHITECTURE
set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64" CACHE STRING "" FORCE)

# SETTING BUILD OUTPUT DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/debug)

# INCLUDING THE DIRECTORY FOR GLFW
include_directories(${PROJECT_SOURCE_DIR}/libs/macos/glfw/glfw-3.3.9.bin-2.MACOS/include)# MAC-OS
link_directories(${CMAKE_BINARY_DIR}/libs/macos/glfw/glfw-3.3.9.bin-2.MACOS)

# PROJECT NAME/DETAILS
project(CGEngine)

# LINK THE CODE FILE TO AN EXECUTABLE
add_executable(cge_macos_build main.cpp)

# LINK GLFW WITH THE PROJECT
set(GLFW_LIBRARY "${PROJECT_SOURCE_DIR}/libs/macos/glfw/glfw-3.3.9.bin-2.MACOS/lib-arm64/libglfw3.a")# MAC-OS
target_link_libraries(cge_macos_build "${GLFW_LIBRARY}")

