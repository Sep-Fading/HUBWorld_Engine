# Set the system name to Windows
set(CMAKE_SYSTEM_NAME Windows)

# Specify the cross-compiler
set(CMAKE_C_COMPILER x86_64-w64-mingw32-gcc)
set(CMAKE_CXX_COMPILER x86_64-w64-mingw32-g++)

# Specify the sysroot (might not be necessary depending on your setup)
set(CMAKE_SYSROOT /usr/local/Cellar/mingw-w64/5.0.4_2/toolchain-x86_64)

# Set the CMake find root path (adjust the path according to your MinGW installation)
set(CMAKE_FIND_ROOT_PATH /usr/local/Cellar/mingw-w64/5.0.4_2/toolchain-x86_64)

# Configure CMake to use the cross-compiler exclusively
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)

