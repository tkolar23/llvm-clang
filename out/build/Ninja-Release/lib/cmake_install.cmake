# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Users/Tom/projects/llvm-project/clang/out/install/Ninja-Release")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Headers/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Basic/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/APINotes/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Lex/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Parse/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/AST/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/ASTMatchers/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/CrossTU/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Sema/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/CodeGen/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Analysis/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Edit/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Rewrite/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/ARCMigrate/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Driver/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Serialization/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Frontend/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/FrontendTool/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Tooling/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/DirectoryWatcher/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Index/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/IndexSerialization/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/StaticAnalyzer/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Format/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Testing/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/lib/Interpreter/cmake_install.cmake")

endif()

