# Install script for directory: C:/Users/Tom/projects/llvm-project/clang/lib/Headers

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/14.0.0/include" TYPE FILE FILES
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/adxintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/altivec.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ammintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/amxintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/arm_acle.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/arm_cmse.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/armintr.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/arm64intr.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx2intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512bf16intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512bwintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512bitalgintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlbitalgintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512cdintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512dqintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512erintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512fintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512fp16intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512ifmaintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512ifmavlintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512pfintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vbmiintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vbmivlintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vbmi2intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlbf16intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlbwintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlcdintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vldqintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlfp16intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vp2intersectintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vnniintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avx512vlvnniintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avxintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/avxvnniintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/bmi2intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/bmiintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/builtins.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_math.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_cmath.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_device_functions.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_texture_intrinsics.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_hip_libdevice_declares.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_hip_cmath.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_hip_math.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__clang_hip_runtime_wrapper.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cetintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cet.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cldemoteintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/clzerointrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/crc32intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cpuid.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/clflushoptintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/clwbintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/emmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/enqcmdintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/f16cintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/float.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/fma4intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/fmaintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/fxsrintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/gfniintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/hexagon_circ_brev_intrinsics.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/hexagon_protos.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/hexagon_types.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/hvx_hexagon_protos.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/hresetintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/htmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/htmxlintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ia32intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/immintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/inttypes.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/invpcidintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/iso646.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/keylockerintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/limits.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/lwpintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/lzcntintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/mm3dnow.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/mmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/mm_malloc.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/module.modulemap"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/movdirintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/msa.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/mwaitxintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/nmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/opencl-c.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/opencl-c-base.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/pkuintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/pmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/pconfigintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/popcntintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/prfchwintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ptwriteintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/rdseedintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/rtmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/serializeintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/sgxintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/s390intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/shaintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/smmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdalign.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdarg.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdatomic.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdbool.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stddef.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__stddef_max_align_t.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdint.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/stdnoreturn.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/tbmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/tgmath.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/tmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/tsxldtrkintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/uintrintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/unwind.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/vadefs.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/vaesintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/varargs.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/vecintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/vpclmulqdqintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/waitpkgintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/wasm_simd128.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/wbnoinvdintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/wmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__wmmintrin_aes.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/__wmmintrin_pclmul.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/x86gprintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/x86intrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xopintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xsavecintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xsaveintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xsaveoptintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xsavesintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/xtestintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_neon.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_fp16.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_sve.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_bf16.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_mve.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/arm_cde.h"
    "C:/Users/Tom/projects/llvm-project/clang/out/build/x64-Debug/lib/Headers/riscv_vector.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/14.0.0/include/cuda_wrappers" TYPE FILE FILES
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cuda_wrappers/algorithm"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cuda_wrappers/complex"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/14.0.0/include/ppc_wrappers" TYPE FILE FILES
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/pmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/tmmintrin.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/ppc_wrappers/smmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/14.0.0/include/openmp_wrappers" TYPE FILE FILES
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/math.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/cmath"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/complex.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/complex"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/__clang_openmp_device_functions.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/complex_cmath.h"
    "C:/Users/Tom/projects/llvm-project/clang/lib/Headers/openmp_wrappers/new"
    )
endif()

