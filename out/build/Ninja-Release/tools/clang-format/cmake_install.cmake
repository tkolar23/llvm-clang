# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/tools/clang-format

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "C:/Users/Tom/projects/llvm-project/clang/out/build/Ninja-Release/bin/clang-format.exe")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/clang" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/clang-format-bbedit.applescript")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/clang" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/clang-format-diff.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/clang" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/clang-format-sublime.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/clang" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/clang-format.el")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/clang" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/clang-format.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-formatx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "C:/Users/Tom/projects/llvm-project/clang/tools/clang-format/git-clang-format")
endif()

