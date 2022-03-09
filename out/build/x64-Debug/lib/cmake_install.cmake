# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/lib

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Basic/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/APINotes/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Lex/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Parse/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/AST/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/ASTMatchers/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/CrossTU/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Sema/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/CodeGen/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Analysis/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Edit/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Rewrite/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/ARCMigrate/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Driver/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Serialization/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Frontend/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/FrontendTool/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Tooling/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/DirectoryWatcher/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Index/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/IndexSerialization/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/StaticAnalyzer/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Format/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Testing/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Interpreter/cmake_install.cmake")

endif()

