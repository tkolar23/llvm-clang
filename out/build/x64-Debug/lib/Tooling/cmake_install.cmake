# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/lib/Tooling

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Tom/projects/llvm-project/clang/out/install/x64-Debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangToolingx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/clangTooling.lib")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/Core/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/Inclusions/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/Refactoring/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/ASTDiff/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/DumpTool/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/Syntax/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/DependencyScanning/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/Transformer/cmake_install.cmake")

endif()

