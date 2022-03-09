# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/tools

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
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/diagtool/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/driver/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/apinotes-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-diff/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-format/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-format-vs/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-fuzzer/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-import-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-nvlink-wrapper/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-offload-bundler/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-offload-wrapper/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-scan-deps/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-repl/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/c-index-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-rename/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-refactor/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/arcmt-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/c-arcmt-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-check/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/clang-extdef-mapping/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/scan-build/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/scan-build-py/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/scan-view/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/libclang/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/tools/amdgpu-arch/cmake_install.cmake")

endif()

