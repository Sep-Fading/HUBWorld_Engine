# SETTING MINIMUM CMAKE VERSION
cmake_minimum_required(VERSION 3.20)

# SETTING CPP VERSION
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# SETTING CPU BUILD ARCHITECTURE
set(CMAKE_OSX_ARCHITECTURES "arm64")

# SETTING BUILD OUTPUT DIRECTORY
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/debug)

# PROJECT NAME/DETAILS
project(CGEngine)

# INCLUDING THE DIRECTORY FOR GLFW
include_directories(${PROJECT_SOURCE_DIR}/libs/macos/glfw/glfwMACOS/include)
include_directories(${PROJECT_SOURCE_DIR}/libs/universal/custom_libraries)
include_directories(${PROJECT_SOURCE_DIR}/libs/universal)
include_directories(${PROJECT_SOURCE_DIR}/libs/universal/glad/include)


link_directories(${CMAKE_BINARY_DIR}/libs/macos/glfw/glfwMACOS)
link_directories(${CMAKE_BINARY_DIR}/libs/universal/glad/include)
link_directories(${CMAKE_BINARY_DIR}/libs/universal)

# FINDING LIBRARIES INSTALL ON YOUR MACHINE
# Set FreeType paths manually if necessary
set(FREETYPE_INCLUDE_DIRS "/opt/homebrew/include/freetype2")
find_package(Freetype REQUIRED)
include_directories(${FREETYPE_INCLUDE_DIRS})

# LINK THE CODE FILE TO AN EXECUTABLE
add_executable(cge_macos_build main.cpp 
  ${PROJECT_SOURCE_DIR}/libs/universal/custom_libraries/window/window.cpp 
  ${PROJECT_SOURCE_DIR}/libs/universal/custom_libraries/enginewindow/engine_window.cpp 
  ${PROJECT_SOURCE_DIR}/libs/universal/glad/src/glad.c 
  ${PROJECT_SOURCE_DIR}/libs/universal/custom_libraries/shader/shader.cpp 
  ${PROJECT_SOURCE_DIR}/libs/universal/custom_libraries/textrenderer/TextRenderer.cpp
)

# LINK GLFW WITH THE PROJECT
set(GLFW_LIBRARY "${PROJECT_SOURCE_DIR}/libs/macos/glfw/glfwMACOS/lib-universal/libglfw.3.dylib")
target_link_libraries(cge_macos_build "${GLFW_LIBRARY}" "${FREETYPE_LIBRARIES}")

