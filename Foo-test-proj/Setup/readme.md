# Introduction

The goal of this guide is to setup a C++17 build environment in Windows. If you already have a different C++17 build environment setup, feel free to use it.

The provided set of files is meant to be a template and to prove out the proper configuration of the build environment. Once setup is complete, the files should be customized to fit your needs.

Here is documentation for the tools referenced below:

* https://sourceforge.net/p/mingw-w64/wiki2/Home
* https://gcc.gnu.org/onlinedocs
* https://code.visualstudio.com/Docs
* https://cmake.org/cmake/help/latest/index.html

# Setup

1. Download and install **MinGW-w64** (direct link: https://sourceforge.net/projects/mingw-w64/files/latest/download).
2. Download and install **cmake** (direct link: https://github.com/Kitware/CMake/releases/download/v3.19.5/cmake-3.19.5-win64-x64.msi).
3. Download and install **Visual Studio Code** (direct link: https://code.visualstudio.com/sha/download?build=stable&os=win32-x64).
4. Open this "oo_training" directory with VS code.
5. Add the following extensions (View -> Extensions) to VS code:
   * C/C++ (Publisher: Microsoft)
   * CMake Tools (Publisher: Microsoft)

# Configure CMake (VS Code)

1. Open the CMake view (View -> Open View... -> CMake).
2. Click "Configure All Projects" button at the top, and select appropriate compiler kit from dropdown menu (e.g. GCC 8.0.0).

# Build (VS Code)

1. Open the CMake view (View -> Open View... -> CMake).
2. Build target (right-click "foo [foo.exe]" -> Build).

# Run (VS Code)

1. Open the CMake view (View -> Open View... -> CMake).
2. Run target (right-click "foo [foo.exe]" -> Run in Terminal).

# Debug (VS Code)

1. Set breakpoint somewhere in the code (e.g. at the start of the main() function in main.cpp).
2. Open the CMake view (View -> Open View... -> CMake).
3. Debug target (right-click "foo [foo.exe]" -> Debug).
4. Step through the code (controls appear at the center-top of the screen).
