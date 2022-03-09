# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/tools

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
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/diagtool/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/driver/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/apinotes-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-diff/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-format/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-format-vs/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-fuzzer/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-import-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-nvlink-wrapper/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-offload-bundler/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-offload-wrapper/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-scan-deps/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-repl/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/c-index-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-rename/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-refactor/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/arcmt-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/c-arcmt-test/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-check/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/clang-extdef-mapping/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/scan-build/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/scan-build-py/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/scan-view/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/libclang/cmake_install.cmake")
  include("C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/tools/amdgpu-arch/cmake_install.cmake")

endif()

