/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* OpenCL Builtin handling                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/ADT/StringRef.h"
using namespace clang;

enum OpenCLTypeID {
  OCLT_atomic_double,
  OCLT_atomic_flag,
  OCLT_atomic_float,
  OCLT_atomic_half,
  OCLT_atomic_int,
  OCLT_atomic_intptr_t,
  OCLT_atomic_long,
  OCLT_atomic_ptrdiff_t,
  OCLT_atomic_size_t,
  OCLT_atomic_uint,
  OCLT_atomic_uintptr_t,
  OCLT_atomic_ulong,
  OCLT_bool,
  OCLT_char,
  OCLT_clk_event_t,
  OCLT_clk_profiling_info,
  OCLT_double,
  OCLT_event_t,
  OCLT_float,
  OCLT_half,
  OCLT_image1d_t,
  OCLT_image1d_array_t,
  OCLT_image1d_buffer_t,
  OCLT_image2d_t,
  OCLT_image2d_array_t,
  OCLT_image2d_array_depth_t,
  OCLT_image2d_array_msaa_t,
  OCLT_image2d_array_msaa_depth_t,
  OCLT_image2d_depth_t,
  OCLT_image2d_msaa_t,
  OCLT_image2d_msaa_depth_t,
  OCLT_image3d_t,
  OCLT_int,
  OCLT_intptr_t,
  OCLT_long,
  OCLT_cl_mem_fence_flags,
  OCLT_memory_order,
  OCLT_memory_scope,
  OCLT_ndrange_t,
  OCLT_ptrdiff_t,
  OCLT_queue_t,
  OCLT_reserve_id_t,
  OCLT_sampler_t,
  OCLT_short,
  OCLT_size_t,
  OCLT_uchar,
  OCLT_uint,
  OCLT_uintptr_t,
  OCLT_ulong,
  OCLT_ushort,
  OCLT_void,
  OCLT_AGenType1,
  OCLT_AGenTypeN,
  OCLT_AGenTypeNNoScalar,
  OCLT_AI2UGenTypeN,
  OCLT_AIGenType1,
  OCLT_AIGenTypeN,
  OCLT_AIGenTypeNNoScalar,
  OCLT_CharShortGenType1,
  OCLT_FGenTypeN,
  OCLT_GenTypeCharVecAndScalar,
  OCLT_GenTypeCharVecNoScalar,
  OCLT_GenTypeDoubleVec1234,
  OCLT_GenTypeDoubleVecAndScalar,
  OCLT_GenTypeDoubleVecNoScalar,
  OCLT_GenTypeFloatVec1234,
  OCLT_GenTypeFloatVecAndScalar,
  OCLT_GenTypeFloatVecNoScalar,
  OCLT_GenTypeHalfVec1234,
  OCLT_GenTypeHalfVecAndScalar,
  OCLT_GenTypeHalfVecNoScalar,
  OCLT_GenTypeIntVecAndScalar,
  OCLT_GenTypeIntVecNoScalar,
  OCLT_GenTypeLongVecAndScalar,
  OCLT_GenTypeLongVecNoScalar,
  OCLT_GenTypeShortVecAndScalar,
  OCLT_GenTypeShortVecNoScalar,
  OCLT_GenTypeUCharVecAndScalar,
  OCLT_GenTypeUCharVecNoScalar,
  OCLT_GenTypeUIntVecAndScalar,
  OCLT_GenTypeUIntVecNoScalar,
  OCLT_GenTypeULongVecAndScalar,
  OCLT_GenTypeULongVecNoScalar,
  OCLT_GenTypeUShortVecAndScalar,
  OCLT_GenTypeUShortVecNoScalar,
  OCLT_IntLongFloatGenType1,
  OCLT_SGenTypeN,
  OCLT_UGenTypeN,
};

// Image access qualifier.
enum OpenCLAccessQual : unsigned char {
  OCLAQ_None,
  OCLAQ_ReadOnly,
  OCLAQ_WriteOnly,
  OCLAQ_ReadWrite
};

// Represents a return type or argument type.
struct OpenCLTypeStruct {
  // A type (e.g. float, int, ...).
  const OpenCLTypeID ID;
  // Vector size (if applicable; 0 for scalars and generic types).
  const unsigned VectorWidth;
  // 0 if the type is not a pointer.
  const bool IsPointer : 1;
  // 0 if the type is not const.
  const bool IsConst : 1;
  // 0 if the type is not volatile.
  const bool IsVolatile : 1;
  // Access qualifier.
  const OpenCLAccessQual AccessQualifier;
  // Address space of the pointer (if applicable).
  const LangAS AS;
};

// One overload of an OpenCL builtin function.
struct OpenCLBuiltinStruct {
  // Index of the signature in the OpenCLTypeStruct table.
  const unsigned SigTableIndex;
  // Entries between index SigTableIndex and (SigTableIndex + NumTypes - 1) in
  // the SignatureTable represent the complete signature.  The first type at
  // index SigTableIndex is the return type.
  const unsigned NumTypes;
  // Function attribute __attribute__((pure))
  const bool IsPure : 1;
  // Function attribute __attribute__((const))
  const bool IsConst : 1;
  // Function attribute __attribute__((convergent))
  const bool IsConv : 1;
  // OpenCL extension(s) required for this overload.
  const unsigned short Extension;
  // OpenCL versions in which this overload is available.
  const unsigned short Versions;
};

static const char *FunctionExtensionTable[] = {
  // 0: ArmIntegerDotProductAccumulateInt16
  "cl_arm_integer_dot_product_accumulate_int16",
  // 1: ArmIntegerDotProductAccumulateInt8
  "cl_arm_integer_dot_product_accumulate_int8",
  // 2: ArmIntegerDotProductAccumulateSaturateInt8
  "cl_arm_integer_dot_product_accumulate_saturate_int8",
  // 3: ArmIntegerDotProductInt8
  "cl_arm_integer_dot_product_int8",
  // 4: FuncExtFloatAtomicsFp16GenericAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add __opencl_c_ext_fp16_global_atomic_add",
  // 5: FuncExtFloatAtomicsFp16GenericLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store __opencl_c_ext_fp16_local_atomic_load_store",
  // 6: FuncExtFloatAtomicsFp16GenericMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max __opencl_c_ext_fp16_global_atomic_min_max",
  // 7: FuncExtFloatAtomicsFp16GlobalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_add",
  // 8: FuncExtFloatAtomicsFp16GlobalLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_load_store",
  // 9: FuncExtFloatAtomicsFp16GlobalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_global_atomic_min_max",
  // 10: FuncExtFloatAtomicsFp16LocalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_add",
  // 11: FuncExtFloatAtomicsFp16LocalLoadStore
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_load_store",
  // 12: FuncExtFloatAtomicsFp16LocalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp16_local_atomic_min_max",
  // 13: FuncExtFloatAtomicsFp32GenericAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add __opencl_c_ext_fp32_global_atomic_add",
  // 14: FuncExtFloatAtomicsFp32GenericMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max __opencl_c_ext_fp32_global_atomic_min_max",
  // 15: FuncExtFloatAtomicsFp32GlobalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_add",
  // 16: FuncExtFloatAtomicsFp32GlobalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_global_atomic_min_max",
  // 17: FuncExtFloatAtomicsFp32LocalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_add",
  // 18: FuncExtFloatAtomicsFp32LocalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp32_local_atomic_min_max",
  // 19: FuncExtFloatAtomicsFp64GenericAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add __opencl_c_ext_fp64_global_atomic_add",
  // 20: FuncExtFloatAtomicsFp64GenericMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max __opencl_c_ext_fp64_global_atomic_min_max",
  // 21: FuncExtFloatAtomicsFp64GlobalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_add",
  // 22: FuncExtFloatAtomicsFp64GlobalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_global_atomic_min_max",
  // 23: FuncExtFloatAtomicsFp64LocalAdd
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_add",
  // 24: FuncExtFloatAtomicsFp64LocalMinMax
  "cl_ext_float_atomics __opencl_c_ext_fp64_local_atomic_min_max",
  // 25: FuncExtKhrExtendedBitOps
  "cl_khr_extended_bit_ops",
  // 26: FuncExtKhrGlMsaaSharing
  "cl_khr_gl_msaa_sharing",
  // 27: FuncExtKhrGlobalInt32BaseAtomics
  "cl_khr_global_int32_base_atomics",
  // 28: FuncExtKhrGlobalInt32ExtendedAtomics
  "cl_khr_global_int32_extended_atomics",
  // 29: FuncExtKhrInt64BaseAtomics
  "cl_khr_int64_base_atomics",
  // 30: FuncExtKhrInt64ExtendedAtomics
  "cl_khr_int64_extended_atomics",
  // 31: FuncExtKhrLocalInt32BaseAtomics
  "cl_khr_local_int32_base_atomics",
  // 32: FuncExtKhrLocalInt32ExtendedAtomics
  "cl_khr_local_int32_extended_atomics",
  // 33: FuncExtKhrMipmapImage
  "cl_khr_mipmap_image",
  // 34: FuncExtKhrMipmapImageWrites
  "cl_khr_mipmap_image_writes",
  // 35: FuncExtKhrMipmapWritesAndWrite3d
  "cl_khr_mipmap_image_writes cl_khr_3d_image_writes",
  // 36: FuncExtKhrSubgroupBallot
  "cl_khr_subgroup_ballot",
  // 37: FuncExtKhrSubgroupClusteredReduce
  "cl_khr_subgroup_clustered_reduce",
  // 38: FuncExtKhrSubgroupExtendedTypes
  "cl_khr_subgroup_extended_types",
  // 39: FuncExtKhrSubgroupNonUniformArithmetic
  "cl_khr_subgroup_non_uniform_arithmetic",
  // 40: FuncExtKhrSubgroupNonUniformVote
  "cl_khr_subgroup_non_uniform_vote",
  // 41: FuncExtKhrSubgroupShuffle
  "cl_khr_subgroup_shuffle",
  // 42: FuncExtKhrSubgroupShuffleRelative
  "cl_khr_subgroup_shuffle_relative",
  // 43: FuncExtKhrSubgroups
  "cl_khr_subgroups",
  // 44: FuncExtNone
  "",
  // 45: FuncExtOpenCLCPipes
  "__opencl_c_pipes",
  // 46: FuncExtOpenCLCWGCollectiveFunctions
  "__opencl_c_work_group_collective_functions",
  // 47: FuncExtOpenCLCxx
  "__cplusplus",
  // 48: anonymous_9370
  "__opencl_c_integer_dot_product_input_4x8bit",
  // 49: anonymous_9379
  "__opencl_c_integer_dot_product_input_4x8bit_packed",
};

static const OpenCLTypeStruct TypeTable[] = {
  // 0
  {OCLT_AGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 1
  {OCLT_AGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 2
  {OCLT_AGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 3
  {OCLT_AI2UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 4
  {OCLT_AIGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 5
  {OCLT_AIGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 6
  {OCLT_AIGenTypeNNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 7
  {OCLT_atomic_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 8
  {OCLT_atomic_flag, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 9
  {OCLT_atomic_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 10
  {OCLT_atomic_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 11
  {OCLT_atomic_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 12
  {OCLT_atomic_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 13
  {OCLT_atomic_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 14
  {OCLT_atomic_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 15
  {OCLT_atomic_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 16
  {OCLT_atomic_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 17
  {OCLT_atomic_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 18
  {OCLT_atomic_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 19
  {OCLT_bool, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 20
  {OCLT_char, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 21
  {OCLT_CharShortGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 22
  {OCLT_clk_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 23
  {OCLT_clk_profiling_info, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 24
  {OCLT_double, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 25
  {OCLT_event_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 26
  {OCLT_FGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 27
  {OCLT_float, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 28
  {OCLT_GenTypeCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 29
  {OCLT_GenTypeCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 30
  {OCLT_GenTypeDoubleVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 31
  {OCLT_GenTypeDoubleVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 32
  {OCLT_GenTypeDoubleVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 33
  {OCLT_GenTypeFloatVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 34
  {OCLT_GenTypeFloatVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 35
  {OCLT_GenTypeFloatVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 36
  {OCLT_GenTypeHalfVec1234, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 37
  {OCLT_GenTypeHalfVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 38
  {OCLT_GenTypeHalfVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 39
  {OCLT_GenTypeIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 40
  {OCLT_GenTypeIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 41
  {OCLT_GenTypeLongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 42
  {OCLT_GenTypeLongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 43
  {OCLT_GenTypeShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 44
  {OCLT_GenTypeShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 45
  {OCLT_GenTypeUCharVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 46
  {OCLT_GenTypeUCharVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 47
  {OCLT_GenTypeUIntVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 48
  {OCLT_GenTypeUIntVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 49
  {OCLT_GenTypeULongVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 50
  {OCLT_GenTypeULongVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 51
  {OCLT_GenTypeUShortVecAndScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 52
  {OCLT_GenTypeUShortVecNoScalar, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 53
  {OCLT_half, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 54
  {OCLT_image1d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 55
  {OCLT_image1d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 56
  {OCLT_image1d_buffer_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 57
  {OCLT_image2d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 58
  {OCLT_image2d_array_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 59
  {OCLT_image2d_array_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 60
  {OCLT_image2d_array_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 61
  {OCLT_image2d_array_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 62
  {OCLT_image2d_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 63
  {OCLT_image2d_msaa_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 64
  {OCLT_image2d_msaa_depth_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 65
  {OCLT_image3d_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 66
  {OCLT_int, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 67
  {OCLT_IntLongFloatGenType1, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 68
  {OCLT_intptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 69
  {OCLT_long, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 70
  {OCLT_cl_mem_fence_flags, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 71
  {OCLT_memory_order, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 72
  {OCLT_memory_scope, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 73
  {OCLT_ndrange_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 74
  {OCLT_ptrdiff_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 75
  {OCLT_queue_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 76
  {OCLT_reserve_id_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 77
  {OCLT_SGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 78
  {OCLT_sampler_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 79
  {OCLT_short, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 80
  {OCLT_size_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 81
  {OCLT_uchar, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 82
  {OCLT_UGenTypeN, 0, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 83
  {OCLT_uint, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 84
  {OCLT_uintptr_t, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 85
  {OCLT_ulong, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 86
  {OCLT_ushort, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 87
  {OCLT_void, 1, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 88
  {OCLT_double, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 89
  {OCLT_double, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 90
  {OCLT_double, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 91
  {OCLT_double, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 92
  {OCLT_double, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 93
  {OCLT_half, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 94
  {OCLT_half, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 95
  {OCLT_half, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 96
  {OCLT_half, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 97
  {OCLT_half, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 98
  {OCLT_char, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 99
  {OCLT_char, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 100
  {OCLT_char, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 101
  {OCLT_char, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 102
  {OCLT_char, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 103
  {OCLT_uchar, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 104
  {OCLT_uchar, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 105
  {OCLT_uchar, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 106
  {OCLT_uchar, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 107
  {OCLT_uchar, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 108
  {OCLT_short, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 109
  {OCLT_short, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 110
  {OCLT_short, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 111
  {OCLT_short, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 112
  {OCLT_short, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 113
  {OCLT_ushort, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 114
  {OCLT_ushort, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 115
  {OCLT_ushort, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 116
  {OCLT_ushort, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 117
  {OCLT_ushort, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 118
  {OCLT_int, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 119
  {OCLT_int, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 120
  {OCLT_int, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 121
  {OCLT_int, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 122
  {OCLT_int, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 123
  {OCLT_uint, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 124
  {OCLT_uint, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 125
  {OCLT_uint, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 126
  {OCLT_uint, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 127
  {OCLT_uint, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 128
  {OCLT_long, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 129
  {OCLT_long, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 130
  {OCLT_long, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 131
  {OCLT_long, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 132
  {OCLT_long, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 133
  {OCLT_ulong, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 134
  {OCLT_ulong, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 135
  {OCLT_ulong, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 136
  {OCLT_ulong, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 137
  {OCLT_ulong, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 138
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 139
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 140
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 141
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 142
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 143
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 144
  {OCLT_FGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 145
  {OCLT_GenTypeIntVecAndScalar, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 146
  {OCLT_float, 2, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 147
  {OCLT_float, 3, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 148
  {OCLT_char, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 149
  {OCLT_uchar, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 150
  {OCLT_short, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 151
  {OCLT_ushort, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 152
  {OCLT_int, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 153
  {OCLT_uint, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 154
  {OCLT_long, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 155
  {OCLT_ulong, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 156
  {OCLT_float, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 157
  {OCLT_double, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 158
  {OCLT_half, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 159
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 160
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 161
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 162
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 163
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 164
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 165
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 166
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 167
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 168
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 169
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 170
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 171
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 172
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 173
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 174
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 175
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 176
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 177
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 178
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 179
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 180
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 181
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 182
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 183
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 184
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 185
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 186
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 187
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 188
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 189
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 190
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 191
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 192
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 193
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 194
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 195
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 196
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 197
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 198
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 199
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 200
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 201
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 202
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 203
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 204
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 205
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 206
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 207
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 208
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 209
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 210
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 211
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 212
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 213
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 214
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 215
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 216
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 217
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 218
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 219
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 220
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 221
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 222
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 223
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 224
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 225
  {OCLT_float, 4, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 226
  {OCLT_float, 8, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 227
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 228
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 229
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 230
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 231
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 232
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 233
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 234
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 235
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 236
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 237
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 238
  {OCLT_char, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 239
  {OCLT_uchar, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 240
  {OCLT_short, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 241
  {OCLT_ushort, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 242
  {OCLT_int, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 243
  {OCLT_uint, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 244
  {OCLT_long, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 245
  {OCLT_ulong, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 246
  {OCLT_float, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 247
  {OCLT_double, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 248
  {OCLT_half, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 249
  {OCLT_char, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 250
  {OCLT_uchar, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 251
  {OCLT_short, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 252
  {OCLT_ushort, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 253
  {OCLT_int, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 254
  {OCLT_uint, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 255
  {OCLT_long, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 256
  {OCLT_ulong, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 257
  {OCLT_float, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 258
  {OCLT_double, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 259
  {OCLT_half, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_constant},
  // 260
  {OCLT_float, 16, 0, 0, 0, OCLAQ_None, clang::LangAS::Default},
  // 261
  {OCLT_void, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 262
  {OCLT_void, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 263
  {OCLT_void, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 264
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 265
  {OCLT_AGenTypeN, 0, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 266
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 267
  {OCLT_AGenTypeN, 0, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 268
  {OCLT_AGenTypeN, 0, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_local},
  // 269
  {OCLT_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 270
  {OCLT_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 271
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 272
  {OCLT_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 273
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 274
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 275
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 276
  {OCLT_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 277
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 278
  {OCLT_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 279
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 280
  {OCLT_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 281
  {OCLT_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 282
  {OCLT_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 283
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 284
  {OCLT_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 285
  {OCLT_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 286
  {OCLT_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 287
  {OCLT_atomic_int, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 288
  {OCLT_atomic_int, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 289
  {OCLT_atomic_uint, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 290
  {OCLT_atomic_uint, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 291
  {OCLT_atomic_long, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 292
  {OCLT_atomic_long, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 293
  {OCLT_atomic_ulong, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 294
  {OCLT_atomic_ulong, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 295
  {OCLT_atomic_float, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 296
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 297
  {OCLT_atomic_double, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 298
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 299
  {OCLT_atomic_uintptr_t, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 300
  {OCLT_atomic_uintptr_t, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 301
  {OCLT_atomic_flag, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 302
  {OCLT_atomic_flag, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 303
  {OCLT_atomic_half, 1, 0, 0, 1, OCLAQ_None, clang::LangAS::Default},
  // 304
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 305
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 306
  {OCLT_atomic_half, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_generic},
  // 307
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 308
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_global},
  // 309
  {OCLT_atomic_float, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 310
  {OCLT_atomic_double, 1, 1, 0, 1, OCLAQ_None, clang::LangAS::opencl_local},
  // 311
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 312
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 313
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 314
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 315
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 316
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 317
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 318
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 319
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 320
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 321
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 322
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 323
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 324
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 325
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 326
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 327
  {OCLT_image2d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 328
  {OCLT_image2d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 329
  {OCLT_image1d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 330
  {OCLT_image1d_buffer_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 331
  {OCLT_image1d_array_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 332
  {OCLT_image3d_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 333
  {OCLT_image2d_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 334
  {OCLT_image2d_array_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 335
  {OCLT_clk_event_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 336
  {OCLT_clk_event_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 337
  {OCLT_clk_event_t, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_generic},
  // 338
  {OCLT_void, 1, 1, 0, 0, OCLAQ_None, clang::LangAS::opencl_global},
  // 339
  {OCLT_size_t, 1, 0, 1, 0, OCLAQ_None, clang::LangAS::Default},
  // 340
  {OCLT_size_t, 1, 1, 1, 0, OCLAQ_None, clang::LangAS::opencl_private},
  // 341
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 342
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 343
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 344
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadOnly, clang::LangAS::Default},
  // 345
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 346
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 347
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 348
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_ReadWrite, clang::LangAS::Default},
  // 349
  {OCLT_image2d_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 350
  {OCLT_image2d_array_msaa_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 351
  {OCLT_image2d_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
  // 352
  {OCLT_image2d_array_msaa_depth_t, 0, 0, 0, 0, OCLAQ_WriteOnly, clang::LangAS::Default},
};

static const unsigned short SignatureTable[] = {
  // 0
  97, 122, 
  // 2
  53, 66, 
  // 4
  93, 118, 
  // 6
  94, 119, 
  // 8
  95, 120, 
  // 10
  96, 121, 
  // 12
  146, 88, 
  // 14
  53, 83, 
  // 16
  93, 123, 
  // 18
  94, 124, 
  // 20
  95, 125, 
  // 22
  96, 126, 
  // 24
  97, 127, 
  // 26
  147, 89, 
  // 28
  53, 69, 
  // 30
  225, 90, 
  // 32
  93, 128, 
  // 34
  94, 129, 
  // 36
  95, 130, 
  // 38
  96, 131, 
  // 40
  97, 132, 
  // 42
  226, 91, 
  // 44
  53, 85, 
  // 46
  93, 133, 
  // 48
  94, 134, 
  // 50
  95, 135, 
  // 52
  96, 136, 
  // 54
  97, 137, 
  // 56
  260, 92, 
  // 58
  27, 24, 
  // 60
  20, 27, 
  // 62
  98, 146, 
  // 64
  99, 147, 
  // 66
  100, 225, 
  // 68
  101, 226, 
  // 70
  102, 260, 
  // 72
  20, 24, 
  // 74
  98, 88, 
  // 76
  99, 89, 
  // 78
  100, 90, 
  // 80
  101, 91, 
  // 82
  102, 92, 
  // 84
  20, 53, 
  // 86
  98, 93, 
  // 88
  99, 94, 
  // 90
  100, 95, 
  // 92
  101, 96, 
  // 94
  102, 97, 
  // 96
  20, 20, 
  // 98
  98, 98, 
  // 100
  99, 99, 
  // 102
  100, 100, 
  // 104
  101, 101, 
  // 106
  102, 102, 
  // 108
  27, 53, 
  // 110
  20, 81, 
  // 112
  98, 103, 
  // 114
  99, 104, 
  // 116
  100, 105, 
  // 118
  101, 106, 
  // 120
  102, 107, 
  // 122
  146, 93, 
  // 124
  147, 94, 
  // 126
  225, 95, 
  // 128
  20, 79, 
  // 130
  98, 108, 
  // 132
  99, 109, 
  // 134
  100, 110, 
  // 136
  101, 111, 
  // 138
  102, 112, 
  // 140
  226, 96, 
  // 142
  260, 97, 
  // 144
  20, 86, 
  // 146
  98, 113, 
  // 148
  99, 114, 
  // 150
  100, 115, 
  // 152
  101, 116, 
  // 154
  102, 117, 
  // 156
  20, 66, 
  // 158
  98, 118, 
  // 160
  99, 119, 
  // 162
  100, 120, 
  // 164
  101, 121, 
  // 166
  102, 122, 
  // 168
  20, 83, 
  // 170
  98, 123, 
  // 172
  99, 124, 
  // 174
  100, 125, 
  // 176
  101, 126, 
  // 178
  102, 127, 
  // 180
  20, 69, 
  // 182
  98, 128, 
  // 184
  99, 129, 
  // 186
  100, 130, 
  // 188
  101, 131, 
  // 190
  102, 132, 
  // 192
  27, 20, 
  // 194
  20, 85, 
  // 196
  146, 98, 
  // 198
  98, 133, 
  // 200
  99, 134, 
  // 202
  100, 135, 
  // 204
  101, 136, 
  // 206
  102, 137, 
  // 208
  147, 99, 
  // 210
  225, 100, 
  // 212
  81, 27, 
  // 214
  226, 101, 
  // 216
  103, 146, 
  // 218
  104, 147, 
  // 220
  105, 225, 
  // 222
  106, 226, 
  // 224
  107, 260, 
  // 226
  260, 102, 
  // 228
  81, 24, 
  // 230
  103, 88, 
  // 232
  104, 89, 
  // 234
  105, 90, 
  // 236
  106, 91, 
  // 238
  107, 92, 
  // 240
  81, 53, 
  // 242
  103, 93, 
  // 244
  104, 94, 
  // 246
  105, 95, 
  // 248
  106, 96, 
  // 250
  107, 97, 
  // 252
  81, 20, 
  // 254
  103, 98, 
  // 256
  104, 99, 
  // 258
  105, 100, 
  // 260
  106, 101, 
  // 262
  107, 102, 
  // 264
  81, 81, 
  // 266
  103, 103, 
  // 268
  104, 104, 
  // 270
  105, 105, 
  // 272
  106, 106, 
  // 274
  107, 107, 
  // 276
  27, 81, 
  // 278
  146, 103, 
  // 280
  81, 79, 
  // 282
  103, 108, 
  // 284
  104, 109, 
  // 286
  105, 110, 
  // 288
  106, 111, 
  // 290
  107, 112, 
  // 292
  147, 104, 
  // 294
  225, 105, 
  // 296
  226, 106, 
  // 298
  81, 86, 
  // 300
  103, 113, 
  // 302
  104, 114, 
  // 304
  105, 115, 
  // 306
  106, 116, 
  // 308
  107, 117, 
  // 310
  260, 107, 
  // 312
  81, 66, 
  // 314
  103, 118, 
  // 316
  104, 119, 
  // 318
  105, 120, 
  // 320
  106, 121, 
  // 322
  107, 122, 
  // 324
  81, 83, 
  // 326
  103, 123, 
  // 328
  104, 124, 
  // 330
  105, 125, 
  // 332
  106, 126, 
  // 334
  107, 127, 
  // 336
  81, 69, 
  // 338
  103, 128, 
  // 340
  104, 129, 
  // 342
  105, 130, 
  // 344
  106, 131, 
  // 346
  107, 132, 
  // 348
  81, 85, 
  // 350
  103, 133, 
  // 352
  104, 134, 
  // 354
  105, 135, 
  // 356
  106, 136, 
  // 358
  107, 137, 
  // 360
  27, 79, 
  // 362
  146, 108, 
  // 364
  79, 27, 
  // 366
  147, 109, 
  // 368
  108, 146, 
  // 370
  109, 147, 
  // 372
  110, 225, 
  // 374
  111, 226, 
  // 376
  112, 260, 
  // 378
  225, 110, 
  // 380
  226, 111, 
  // 382
  79, 24, 
  // 384
  260, 112, 
  // 386
  108, 88, 
  // 388
  109, 89, 
  // 390
  110, 90, 
  // 392
  111, 91, 
  // 394
  112, 92, 
  // 396
  79, 53, 
  // 398
  108, 93, 
  // 400
  109, 94, 
  // 402
  110, 95, 
  // 404
  111, 96, 
  // 406
  112, 97, 
  // 408
  79, 20, 
  // 410
  108, 98, 
  // 412
  109, 99, 
  // 414
  110, 100, 
  // 416
  111, 101, 
  // 418
  112, 102, 
  // 420
  79, 81, 
  // 422
  108, 103, 
  // 424
  109, 104, 
  // 426
  110, 105, 
  // 428
  111, 106, 
  // 430
  112, 107, 
  // 432
  79, 79, 
  // 434
  108, 108, 
  // 436
  109, 109, 
  // 438
  110, 110, 
  // 440
  111, 111, 
  // 442
  112, 112, 
  // 444
  27, 86, 
  // 446
  146, 113, 
  // 448
  147, 114, 
  // 450
  79, 86, 
  // 452
  108, 113, 
  // 454
  109, 114, 
  // 456
  110, 115, 
  // 458
  111, 116, 
  // 460
  112, 117, 
  // 462
  225, 115, 
  // 464
  226, 116, 
  // 466
  260, 117, 
  // 468
  79, 66, 
  // 470
  108, 118, 
  // 472
  109, 119, 
  // 474
  110, 120, 
  // 476
  111, 121, 
  // 478
  112, 122, 
  // 480
  79, 83, 
  // 482
  108, 123, 
  // 484
  109, 124, 
  // 486
  110, 125, 
  // 488
  111, 126, 
  // 490
  112, 127, 
  // 492
  79, 69, 
  // 494
  108, 128, 
  // 496
  109, 129, 
  // 498
  110, 130, 
  // 500
  111, 131, 
  // 502
  112, 132, 
  // 504
  79, 85, 
  // 506
  108, 133, 
  // 508
  109, 134, 
  // 510
  110, 135, 
  // 512
  111, 136, 
  // 514
  112, 137, 
  // 516
  86, 27, 
  // 518
  27, 66, 
  // 520
  113, 146, 
  // 522
  114, 147, 
  // 524
  115, 225, 
  // 526
  116, 226, 
  // 528
  117, 260, 
  // 530
  146, 118, 
  // 532
  147, 119, 
  // 534
  86, 24, 
  // 536
  225, 120, 
  // 538
  113, 88, 
  // 540
  114, 89, 
  // 542
  115, 90, 
  // 544
  116, 91, 
  // 546
  117, 92, 
  // 548
  226, 121, 
  // 550
  260, 122, 
  // 552
  86, 53, 
  // 554
  113, 93, 
  // 556
  114, 94, 
  // 558
  115, 95, 
  // 560
  116, 96, 
  // 562
  117, 97, 
  // 564
  86, 20, 
  // 566
  113, 98, 
  // 568
  114, 99, 
  // 570
  115, 100, 
  // 572
  116, 101, 
  // 574
  117, 102, 
  // 576
  86, 81, 
  // 578
  113, 103, 
  // 580
  114, 104, 
  // 582
  115, 105, 
  // 584
  116, 106, 
  // 586
  117, 107, 
  // 588
  86, 79, 
  // 590
  113, 108, 
  // 592
  114, 109, 
  // 594
  115, 110, 
  // 596
  116, 111, 
  // 598
  117, 112, 
  // 600
  27, 83, 
  // 602
  86, 86, 
  // 604
  113, 113, 
  // 606
  114, 114, 
  // 608
  115, 115, 
  // 610
  116, 116, 
  // 612
  117, 117, 
  // 614
  146, 123, 
  // 616
  147, 124, 
  // 618
  225, 125, 
  // 620
  86, 66, 
  // 622
  113, 118, 
  // 624
  114, 119, 
  // 626
  115, 120, 
  // 628
  116, 121, 
  // 630
  117, 122, 
  // 632
  226, 126, 
  // 634
  260, 127, 
  // 636
  86, 83, 
  // 638
  113, 123, 
  // 640
  114, 124, 
  // 642
  115, 125, 
  // 644
  116, 126, 
  // 646
  117, 127, 
  // 648
  86, 69, 
  // 650
  113, 128, 
  // 652
  114, 129, 
  // 654
  115, 130, 
  // 656
  116, 131, 
  // 658
  117, 132, 
  // 660
  86, 85, 
  // 662
  113, 133, 
  // 664
  114, 134, 
  // 666
  115, 135, 
  // 668
  116, 136, 
  // 670
  117, 137, 
  // 672
  66, 27, 
  // 674
  118, 146, 
  // 676
  119, 147, 
  // 678
  120, 225, 
  // 680
  121, 226, 
  // 682
  122, 260, 
  // 684
  27, 69, 
  // 686
  66, 24, 
  // 688
  146, 128, 
  // 690
  118, 88, 
  // 692
  119, 89, 
  // 694
  120, 90, 
  // 696
  121, 91, 
  // 698
  122, 92, 
  // 700
  147, 129, 
  // 702
  225, 130, 
  // 704
  66, 53, 
  // 706
  226, 131, 
  // 708
  118, 93, 
  // 710
  119, 94, 
  // 712
  120, 95, 
  // 714
  121, 96, 
  // 716
  122, 97, 
  // 718
  260, 132, 
  // 720
  66, 20, 
  // 722
  118, 98, 
  // 724
  119, 99, 
  // 726
  120, 100, 
  // 728
  121, 101, 
  // 730
  122, 102, 
  // 732
  66, 81, 
  // 734
  118, 103, 
  // 736
  119, 104, 
  // 738
  120, 105, 
  // 740
  121, 106, 
  // 742
  122, 107, 
  // 744
  66, 79, 
  // 746
  118, 108, 
  // 748
  119, 109, 
  // 750
  120, 110, 
  // 752
  121, 111, 
  // 754
  122, 112, 
  // 756
  66, 86, 
  // 758
  118, 113, 
  // 760
  119, 114, 
  // 762
  120, 115, 
  // 764
  121, 116, 
  // 766
  122, 117, 
  // 768
  27, 85, 
  // 770
  146, 133, 
  // 772
  66, 66, 
  // 774
  118, 118, 
  // 776
  119, 119, 
  // 778
  120, 120, 
  // 780
  121, 121, 
  // 782
  122, 122, 
  // 784
  147, 134, 
  // 786
  225, 135, 
  // 788
  226, 136, 
  // 790
  66, 83, 
  // 792
  118, 123, 
  // 794
  119, 124, 
  // 796
  120, 125, 
  // 798
  121, 126, 
  // 800
  122, 127, 
  // 802
  260, 137, 
  // 804
  66, 69, 
  // 806
  118, 128, 
  // 808
  119, 129, 
  // 810
  120, 130, 
  // 812
  121, 131, 
  // 814
  122, 132, 
  // 816
  66, 85, 
  // 818
  118, 133, 
  // 820
  119, 134, 
  // 822
  120, 135, 
  // 824
  121, 136, 
  // 826
  122, 137, 
  // 828
  83, 27, 
  // 830
  123, 146, 
  // 832
  124, 147, 
  // 834
  125, 225, 
  // 836
  126, 226, 
  // 838
  127, 260, 
  // 840
  83, 24, 
  // 842
  123, 88, 
  // 844
  124, 89, 
  // 846
  125, 90, 
  // 848
  126, 91, 
  // 850
  127, 92, 
  // 852
  24, 27, 
  // 854
  88, 146, 
  // 856
  89, 147, 
  // 858
  90, 225, 
  // 860
  83, 53, 
  // 862
  91, 226, 
  // 864
  123, 93, 
  // 866
  124, 94, 
  // 868
  125, 95, 
  // 870
  126, 96, 
  // 872
  127, 97, 
  // 874
  92, 260, 
  // 876
  83, 20, 
  // 878
  123, 98, 
  // 880
  124, 99, 
  // 882
  125, 100, 
  // 884
  126, 101, 
  // 886
  127, 102, 
  // 888
  83, 81, 
  // 890
  123, 103, 
  // 892
  124, 104, 
  // 894
  125, 105, 
  // 896
  126, 106, 
  // 898
  127, 107, 
  // 900
  83, 79, 
  // 902
  123, 108, 
  // 904
  124, 109, 
  // 906
  125, 110, 
  // 908
  126, 111, 
  // 910
  127, 112, 
  // 912
  83, 86, 
  // 914
  123, 113, 
  // 916
  124, 114, 
  // 918
  125, 115, 
  // 920
  126, 116, 
  // 922
  127, 117, 
  // 924
  24, 24, 
  // 926
  88, 88, 
  // 928
  89, 89, 
  // 930
  90, 90, 
  // 932
  83, 66, 
  // 934
  91, 91, 
  // 936
  123, 118, 
  // 938
  124, 119, 
  // 940
  125, 120, 
  // 942
  126, 121, 
  // 944
  127, 122, 
  // 946
  92, 92, 
  // 948
  83, 83, 
  // 950
  123, 123, 
  // 952
  124, 124, 
  // 954
  125, 125, 
  // 956
  126, 126, 
  // 958
  127, 127, 
  // 960
  83, 69, 
  // 962
  123, 128, 
  // 964
  124, 129, 
  // 966
  125, 130, 
  // 968
  126, 131, 
  // 970
  127, 132, 
  // 972
  83, 85, 
  // 974
  123, 133, 
  // 976
  124, 134, 
  // 978
  125, 135, 
  // 980
  126, 136, 
  // 982
  127, 137, 
  // 984
  69, 27, 
  // 986
  128, 146, 
  // 988
  129, 147, 
  // 990
  130, 225, 
  // 992
  131, 226, 
  // 994
  132, 260, 
  // 996
  24, 53, 
  // 998
  88, 93, 
  // 1000
  89, 94, 
  // 1002
  90, 95, 
  // 1004
  69, 24, 
  // 1006
  91, 96, 
  // 1008
  128, 88, 
  // 1010
  129, 89, 
  // 1012
  130, 90, 
  // 1014
  131, 91, 
  // 1016
  132, 92, 
  // 1018
  92, 97, 
  // 1020
  69, 53, 
  // 1022
  128, 93, 
  // 1024
  129, 94, 
  // 1026
  130, 95, 
  // 1028
  131, 96, 
  // 1030
  132, 97, 
  // 1032
  69, 20, 
  // 1034
  128, 98, 
  // 1036
  129, 99, 
  // 1038
  130, 100, 
  // 1040
  131, 101, 
  // 1042
  132, 102, 
  // 1044
  69, 81, 
  // 1046
  128, 103, 
  // 1048
  129, 104, 
  // 1050
  130, 105, 
  // 1052
  131, 106, 
  // 1054
  132, 107, 
  // 1056
  69, 79, 
  // 1058
  128, 108, 
  // 1060
  129, 109, 
  // 1062
  130, 110, 
  // 1064
  131, 111, 
  // 1066
  132, 112, 
  // 1068
  24, 20, 
  // 1070
  88, 98, 
  // 1072
  89, 99, 
  // 1074
  90, 100, 
  // 1076
  69, 86, 
  // 1078
  91, 101, 
  // 1080
  128, 113, 
  // 1082
  129, 114, 
  // 1084
  130, 115, 
  // 1086
  131, 116, 
  // 1088
  132, 117, 
  // 1090
  92, 102, 
  // 1092
  69, 66, 
  // 1094
  128, 118, 
  // 1096
  129, 119, 
  // 1098
  130, 120, 
  // 1100
  131, 121, 
  // 1102
  132, 122, 
  // 1104
  69, 83, 
  // 1106
  128, 123, 
  // 1108
  129, 124, 
  // 1110
  130, 125, 
  // 1112
  131, 126, 
  // 1114
  132, 127, 
  // 1116
  69, 69, 
  // 1118
  128, 128, 
  // 1120
  129, 129, 
  // 1122
  130, 130, 
  // 1124
  131, 131, 
  // 1126
  132, 132, 
  // 1128
  69, 85, 
  // 1130
  128, 133, 
  // 1132
  129, 134, 
  // 1134
  130, 135, 
  // 1136
  131, 136, 
  // 1138
  132, 137, 
  // 1140
  24, 81, 
  // 1142
  88, 103, 
  // 1144
  89, 104, 
  // 1146
  90, 105, 
  // 1148
  85, 27, 
  // 1150
  91, 106, 
  // 1152
  133, 146, 
  // 1154
  134, 147, 
  // 1156
  135, 225, 
  // 1158
  136, 226, 
  // 1160
  137, 260, 
  // 1162
  92, 107, 
  // 1164
  85, 24, 
  // 1166
  133, 88, 
  // 1168
  134, 89, 
  // 1170
  135, 90, 
  // 1172
  136, 91, 
  // 1174
  137, 92, 
  // 1176
  85, 53, 
  // 1178
  133, 93, 
  // 1180
  134, 94, 
  // 1182
  135, 95, 
  // 1184
  136, 96, 
  // 1186
  137, 97, 
  // 1188
  85, 20, 
  // 1190
  133, 98, 
  // 1192
  134, 99, 
  // 1194
  135, 100, 
  // 1196
  136, 101, 
  // 1198
  137, 102, 
  // 1200
  85, 81, 
  // 1202
  133, 103, 
  // 1204
  134, 104, 
  // 1206
  135, 105, 
  // 1208
  136, 106, 
  // 1210
  137, 107, 
  // 1212
  24, 79, 
  // 1214
  88, 108, 
  // 1216
  89, 109, 
  // 1218
  90, 110, 
  // 1220
  85, 79, 
  // 1222
  91, 111, 
  // 1224
  133, 108, 
  // 1226
  134, 109, 
  // 1228
  135, 110, 
  // 1230
  136, 111, 
  // 1232
  137, 112, 
  // 1234
  92, 112, 
  // 1236
  85, 86, 
  // 1238
  133, 113, 
  // 1240
  134, 114, 
  // 1242
  135, 115, 
  // 1244
  136, 116, 
  // 1246
  137, 117, 
  // 1248
  85, 66, 
  // 1250
  133, 118, 
  // 1252
  134, 119, 
  // 1254
  135, 120, 
  // 1256
  136, 121, 
  // 1258
  137, 122, 
  // 1260
  85, 83, 
  // 1262
  133, 123, 
  // 1264
  134, 124, 
  // 1266
  135, 125, 
  // 1268
  136, 126, 
  // 1270
  137, 127, 
  // 1272
  85, 69, 
  // 1274
  133, 128, 
  // 1276
  134, 129, 
  // 1278
  135, 130, 
  // 1280
  136, 131, 
  // 1282
  137, 132, 
  // 1284
  24, 86, 
  // 1286
  88, 113, 
  // 1288
  89, 114, 
  // 1290
  90, 115, 
  // 1292
  85, 85, 
  // 1294
  91, 116, 
  // 1296
  133, 133, 
  // 1298
  134, 134, 
  // 1300
  135, 135, 
  // 1302
  136, 136, 
  // 1304
  137, 137, 
  // 1306
  92, 117, 
  // 1308
  83, 
  // 1309
  80, 83, 
  // 1311
  80, 
  // 1312
  27, 27, 
  // 1314
  26, 26, 
  // 1316
  34, 47, 
  // 1318
  31, 49, 
  // 1320
  37, 51, 
  // 1322
  26, 26, 26, 
  // 1325
  35, 35, 27, 
  // 1328
  32, 32, 24, 
  // 1331
  38, 38, 53, 
  // 1334
  39, 34, 
  // 1336
  39, 31, 
  // 1338
  39, 37, 
  // 1340
  34, 34, 39, 
  // 1343
  35, 35, 66, 
  // 1346
  31, 31, 39, 
  // 1349
  32, 32, 66, 
  // 1352
  37, 37, 39, 
  // 1355
  38, 38, 66, 
  // 1358
  26, 26, 26, 26, 
  // 1362
  26, 26, 138, 
  // 1365
  34, 34, 139, 
  // 1368
  34, 34, 34, 139, 
  // 1372
  31, 31, 139, 
  // 1375
  37, 37, 139, 
  // 1378
  31, 31, 31, 139, 
  // 1382
  37, 37, 37, 139, 
  // 1386
  26, 26, 140, 
  // 1389
  146, 146, 
  // 1391
  34, 34, 141, 
  // 1394
  31, 31, 141, 
  // 1397
  37, 37, 141, 
  // 1400
  34, 34, 34, 141, 
  // 1404
  31, 31, 31, 141, 
  // 1408
  37, 37, 37, 141, 
  // 1412
  26, 26, 142, 
  // 1415
  34, 34, 143, 
  // 1418
  31, 31, 143, 
  // 1421
  37, 37, 143, 
  // 1424
  34, 34, 34, 143, 
  // 1428
  31, 31, 31, 143, 
  // 1432
  37, 37, 37, 143, 
  // 1436
  26, 26, 144, 
  // 1439
  34, 34, 145, 
  // 1442
  31, 31, 145, 
  // 1445
  37, 37, 145, 
  // 1448
  34, 34, 34, 145, 
  // 1452
  31, 31, 31, 145, 
  // 1456
  37, 37, 37, 145, 
  // 1460
  34, 34, 
  // 1462
  34, 34, 34, 
  // 1465
  3, 5, 
  // 1467
  5, 5, 
  // 1469
  3, 5, 5, 
  // 1472
  5, 5, 5, 
  // 1475
  6, 6, 4, 
  // 1478
  43, 28, 45, 
  // 1481
  51, 45, 45, 
  // 1484
  39, 43, 51, 
  // 1487
  47, 51, 51, 
  // 1490
  41, 39, 47, 
  // 1493
  49, 47, 47, 
  // 1496
  5, 5, 5, 5, 
  // 1500
  6, 6, 4, 4, 
  // 1504
  24, 66, 
  // 1506
  39, 39, 39, 39, 
  // 1510
  47, 47, 47, 47, 
  // 1514
  39, 39, 39, 
  // 1517
  47, 47, 47, 
  // 1520
  88, 118, 
  // 1522
  35, 27, 35, 
  // 1525
  32, 24, 32, 
  // 1528
  38, 53, 38, 
  // 1531
  89, 119, 
  // 1533
  35, 35, 27, 27, 
  // 1537
  32, 32, 24, 24, 
  // 1541
  38, 38, 53, 53, 
  // 1545
  35, 35, 35, 27, 
  // 1549
  32, 32, 32, 24, 
  // 1553
  38, 38, 38, 53, 
  // 1557
  35, 27, 27, 35, 
  // 1561
  90, 120, 
  // 1563
  32, 24, 24, 32, 
  // 1567
  38, 53, 53, 38, 
  // 1571
  27, 33, 
  // 1573
  24, 30, 
  // 1575
  53, 36, 
  // 1577
  33, 33, 
  // 1579
  30, 30, 
  // 1581
  36, 36, 
  // 1583
  91, 121, 
  // 1585
  147, 147, 147, 
  // 1588
  89, 89, 89, 
  // 1591
  94, 94, 94, 
  // 1594
  225, 225, 225, 
  // 1597
  90, 90, 90, 
  // 1600
  95, 95, 95, 
  // 1603
  27, 33, 33, 
  // 1606
  24, 30, 30, 
  // 1609
  53, 36, 36, 
  // 1612
  92, 122, 
  // 1614
  42, 32, 
  // 1616
  44, 38, 
  // 1618
  66, 77, 
  // 1620
  39, 34, 34, 
  // 1623
  66, 24, 24, 
  // 1626
  42, 32, 32, 
  // 1629
  66, 53, 53, 
  // 1632
  44, 38, 38, 
  // 1635
  1, 1, 1, 1, 
  // 1639
  77, 77, 77, 77, 
  // 1643
  77, 77, 77, 82, 
  // 1647
  82, 82, 82, 82, 
  // 1651
  82, 82, 82, 77, 
  // 1655
  34, 34, 34, 39, 
  // 1659
  34, 34, 34, 47, 
  // 1663
  31, 31, 31, 41, 
  // 1667
  31, 31, 31, 49, 
  // 1671
  37, 37, 37, 43, 
  // 1675
  37, 37, 37, 51, 
  // 1679
  98, 80, 159, 
  // 1682
  103, 80, 160, 
  // 1685
  108, 80, 161, 
  // 1688
  113, 80, 162, 
  // 1691
  118, 80, 163, 
  // 1694
  123, 80, 164, 
  // 1697
  128, 80, 165, 
  // 1700
  133, 80, 166, 
  // 1703
  146, 80, 167, 
  // 1706
  88, 80, 168, 
  // 1709
  93, 80, 169, 
  // 1712
  87, 98, 80, 170, 
  // 1716
  87, 103, 80, 171, 
  // 1720
  87, 108, 80, 172, 
  // 1724
  87, 113, 80, 173, 
  // 1728
  87, 118, 80, 174, 
  // 1732
  87, 123, 80, 175, 
  // 1736
  87, 128, 80, 176, 
  // 1740
  87, 133, 80, 177, 
  // 1744
  87, 146, 80, 178, 
  // 1748
  87, 88, 80, 179, 
  // 1752
  87, 93, 80, 180, 
  // 1756
  147, 147, 
  // 1758
  99, 80, 159, 
  // 1761
  104, 80, 160, 
  // 1764
  109, 80, 161, 
  // 1767
  114, 80, 162, 
  // 1770
  119, 80, 163, 
  // 1773
  124, 80, 164, 
  // 1776
  129, 80, 165, 
  // 1779
  134, 80, 166, 
  // 1782
  147, 80, 167, 
  // 1785
  89, 80, 168, 
  // 1788
  94, 80, 169, 
  // 1791
  87, 99, 80, 170, 
  // 1795
  87, 104, 80, 171, 
  // 1799
  87, 109, 80, 172, 
  // 1803
  87, 114, 80, 173, 
  // 1807
  87, 119, 80, 174, 
  // 1811
  87, 124, 80, 175, 
  // 1815
  87, 129, 80, 176, 
  // 1819
  87, 134, 80, 177, 
  // 1823
  87, 147, 80, 178, 
  // 1827
  87, 89, 80, 179, 
  // 1831
  87, 94, 80, 180, 
  // 1835
  100, 80, 159, 
  // 1838
  105, 80, 160, 
  // 1841
  110, 80, 161, 
  // 1844
  115, 80, 162, 
  // 1847
  120, 80, 163, 
  // 1850
  125, 80, 164, 
  // 1853
  130, 80, 165, 
  // 1856
  135, 80, 166, 
  // 1859
  225, 80, 167, 
  // 1862
  90, 80, 168, 
  // 1865
  95, 80, 169, 
  // 1868
  87, 100, 80, 170, 
  // 1872
  87, 105, 80, 171, 
  // 1876
  87, 110, 80, 172, 
  // 1880
  87, 115, 80, 173, 
  // 1884
  87, 120, 80, 174, 
  // 1888
  87, 125, 80, 175, 
  // 1892
  87, 130, 80, 176, 
  // 1896
  87, 135, 80, 177, 
  // 1900
  87, 225, 80, 178, 
  // 1904
  87, 90, 80, 179, 
  // 1908
  87, 95, 80, 180, 
  // 1912
  101, 80, 159, 
  // 1915
  106, 80, 160, 
  // 1918
  111, 80, 161, 
  // 1921
  116, 80, 162, 
  // 1924
  121, 80, 163, 
  // 1927
  126, 80, 164, 
  // 1930
  131, 80, 165, 
  // 1933
  136, 80, 166, 
  // 1936
  226, 80, 167, 
  // 1939
  91, 80, 168, 
  // 1942
  96, 80, 169, 
  // 1945
  87, 101, 80, 170, 
  // 1949
  87, 106, 80, 171, 
  // 1953
  87, 111, 80, 172, 
  // 1957
  87, 116, 80, 173, 
  // 1961
  87, 121, 80, 174, 
  // 1965
  87, 126, 80, 175, 
  // 1969
  87, 131, 80, 176, 
  // 1973
  87, 136, 80, 177, 
  // 1977
  87, 226, 80, 178, 
  // 1981
  24, 83, 
  // 1983
  87, 91, 80, 179, 
  // 1987
  87, 96, 80, 180, 
  // 1991
  102, 80, 159, 
  // 1994
  107, 80, 160, 
  // 1997
  112, 80, 161, 
  // 2000
  117, 80, 162, 
  // 2003
  122, 80, 163, 
  // 2006
  127, 80, 164, 
  // 2009
  132, 80, 165, 
  // 2012
  137, 80, 166, 
  // 2015
  88, 123, 
  // 2017
  260, 80, 167, 
  // 2020
  92, 80, 168, 
  // 2023
  97, 80, 169, 
  // 2026
  87, 102, 80, 170, 
  // 2030
  87, 107, 80, 171, 
  // 2034
  87, 112, 80, 172, 
  // 2038
  87, 117, 80, 173, 
  // 2042
  87, 122, 80, 174, 
  // 2046
  87, 127, 80, 175, 
  // 2050
  87, 132, 80, 176, 
  // 2054
  89, 124, 
  // 2056
  87, 137, 80, 177, 
  // 2060
  87, 260, 80, 178, 
  // 2064
  87, 92, 80, 179, 
  // 2068
  87, 97, 80, 180, 
  // 2072
  98, 80, 181, 
  // 2075
  103, 80, 182, 
  // 2078
  108, 80, 183, 
  // 2081
  113, 80, 184, 
  // 2084
  118, 80, 185, 
  // 2087
  123, 80, 186, 
  // 2090
  90, 125, 
  // 2092
  128, 80, 187, 
  // 2095
  133, 80, 188, 
  // 2098
  146, 80, 189, 
  // 2101
  88, 80, 190, 
  // 2104
  93, 80, 191, 
  // 2107
  87, 98, 80, 192, 
  // 2111
  87, 103, 80, 193, 
  // 2115
  87, 108, 80, 194, 
  // 2119
  87, 113, 80, 195, 
  // 2123
  87, 118, 80, 196, 
  // 2127
  91, 126, 
  // 2129
  87, 123, 80, 197, 
  // 2133
  87, 128, 80, 198, 
  // 2137
  87, 133, 80, 199, 
  // 2141
  87, 146, 80, 200, 
  // 2145
  87, 88, 80, 201, 
  // 2149
  87, 93, 80, 202, 
  // 2153
  99, 80, 181, 
  // 2156
  104, 80, 182, 
  // 2159
  109, 80, 183, 
  // 2162
  114, 80, 184, 
  // 2165
  92, 127, 
  // 2167
  119, 80, 185, 
  // 2170
  124, 80, 186, 
  // 2173
  129, 80, 187, 
  // 2176
  134, 80, 188, 
  // 2179
  147, 80, 189, 
  // 2182
  89, 80, 190, 
  // 2185
  94, 80, 191, 
  // 2188
  87, 99, 80, 192, 
  // 2192
  87, 104, 80, 193, 
  // 2196
  87, 109, 80, 194, 
  // 2200
  87, 114, 80, 195, 
  // 2204
  87, 119, 80, 196, 
  // 2208
  87, 124, 80, 197, 
  // 2212
  87, 129, 80, 198, 
  // 2216
  87, 134, 80, 199, 
  // 2220
  87, 147, 80, 200, 
  // 2224
  87, 89, 80, 201, 
  // 2228
  87, 94, 80, 202, 
  // 2232
  100, 80, 181, 
  // 2235
  105, 80, 182, 
  // 2238
  110, 80, 183, 
  // 2241
  115, 80, 184, 
  // 2244
  120, 80, 185, 
  // 2247
  125, 80, 186, 
  // 2250
  130, 80, 187, 
  // 2253
  135, 80, 188, 
  // 2256
  225, 80, 189, 
  // 2259
  90, 80, 190, 
  // 2262
  95, 80, 191, 
  // 2265
  87, 100, 80, 192, 
  // 2269
  87, 105, 80, 193, 
  // 2273
  87, 110, 80, 194, 
  // 2277
  87, 115, 80, 195, 
  // 2281
  87, 120, 80, 196, 
  // 2285
  87, 125, 80, 197, 
  // 2289
  87, 130, 80, 198, 
  // 2293
  87, 135, 80, 199, 
  // 2297
  87, 225, 80, 200, 
  // 2301
  87, 90, 80, 201, 
  // 2305
  87, 95, 80, 202, 
  // 2309
  101, 80, 181, 
  // 2312
  106, 80, 182, 
  // 2315
  111, 80, 183, 
  // 2318
  116, 80, 184, 
  // 2321
  121, 80, 185, 
  // 2324
  126, 80, 186, 
  // 2327
  131, 80, 187, 
  // 2330
  136, 80, 188, 
  // 2333
  226, 80, 189, 
  // 2336
  91, 80, 190, 
  // 2339
  96, 80, 191, 
  // 2342
  87, 101, 80, 192, 
  // 2346
  87, 106, 80, 193, 
  // 2350
  87, 111, 80, 194, 
  // 2354
  87, 116, 80, 195, 
  // 2358
  87, 121, 80, 196, 
  // 2362
  87, 126, 80, 197, 
  // 2366
  87, 131, 80, 198, 
  // 2370
  87, 136, 80, 199, 
  // 2374
  87, 226, 80, 200, 
  // 2378
  225, 225, 
  // 2380
  87, 91, 80, 201, 
  // 2384
  87, 96, 80, 202, 
  // 2388
  102, 80, 181, 
  // 2391
  107, 80, 182, 
  // 2394
  112, 80, 183, 
  // 2397
  117, 80, 184, 
  // 2400
  122, 80, 185, 
  // 2403
  127, 80, 186, 
  // 2406
  132, 80, 187, 
  // 2409
  137, 80, 188, 
  // 2412
  260, 80, 189, 
  // 2415
  92, 80, 190, 
  // 2418
  97, 80, 191, 
  // 2421
  87, 102, 80, 192, 
  // 2425
  87, 107, 80, 193, 
  // 2429
  87, 112, 80, 194, 
  // 2433
  87, 117, 80, 195, 
  // 2437
  87, 122, 80, 196, 
  // 2441
  87, 127, 80, 197, 
  // 2445
  87, 132, 80, 198, 
  // 2449
  87, 137, 80, 199, 
  // 2453
  87, 260, 80, 200, 
  // 2457
  87, 92, 80, 201, 
  // 2461
  87, 97, 80, 202, 
  // 2465
  98, 80, 203, 
  // 2468
  103, 80, 204, 
  // 2471
  108, 80, 205, 
  // 2474
  113, 80, 206, 
  // 2477
  118, 80, 207, 
  // 2480
  123, 80, 208, 
  // 2483
  128, 80, 209, 
  // 2486
  133, 80, 210, 
  // 2489
  146, 80, 211, 
  // 2492
  88, 80, 212, 
  // 2495
  93, 80, 213, 
  // 2498
  87, 98, 80, 214, 
  // 2502
  87, 103, 80, 215, 
  // 2506
  87, 108, 80, 216, 
  // 2510
  87, 113, 80, 217, 
  // 2514
  87, 118, 80, 218, 
  // 2518
  87, 123, 80, 219, 
  // 2522
  87, 128, 80, 220, 
  // 2526
  87, 133, 80, 221, 
  // 2530
  87, 146, 80, 222, 
  // 2534
  87, 88, 80, 223, 
  // 2538
  87, 93, 80, 224, 
  // 2542
  99, 80, 203, 
  // 2545
  104, 80, 204, 
  // 2548
  109, 80, 205, 
  // 2551
  114, 80, 206, 
  // 2554
  119, 80, 207, 
  // 2557
  124, 80, 208, 
  // 2560
  129, 80, 209, 
  // 2563
  134, 80, 210, 
  // 2566
  147, 80, 211, 
  // 2569
  89, 80, 212, 
  // 2572
  94, 80, 213, 
  // 2575
  87, 99, 80, 214, 
  // 2579
  87, 104, 80, 215, 
  // 2583
  87, 109, 80, 216, 
  // 2587
  87, 114, 80, 217, 
  // 2591
  87, 119, 80, 218, 
  // 2595
  87, 124, 80, 219, 
  // 2599
  87, 129, 80, 220, 
  // 2603
  87, 134, 80, 221, 
  // 2607
  87, 147, 80, 222, 
  // 2611
  87, 89, 80, 223, 
  // 2615
  87, 94, 80, 224, 
  // 2619
  100, 80, 203, 
  // 2622
  105, 80, 204, 
  // 2625
  110, 80, 205, 
  // 2628
  115, 80, 206, 
  // 2631
  120, 80, 207, 
  // 2634
  125, 80, 208, 
  // 2637
  130, 80, 209, 
  // 2640
  135, 80, 210, 
  // 2643
  225, 80, 211, 
  // 2646
  90, 80, 212, 
  // 2649
  95, 80, 213, 
  // 2652
  87, 100, 80, 214, 
  // 2656
  87, 105, 80, 215, 
  // 2660
  87, 110, 80, 216, 
  // 2664
  87, 115, 80, 217, 
  // 2668
  87, 120, 80, 218, 
  // 2672
  87, 125, 80, 219, 
  // 2676
  87, 130, 80, 220, 
  // 2680
  87, 135, 80, 221, 
  // 2684
  87, 225, 80, 222, 
  // 2688
  87, 90, 80, 223, 
  // 2692
  87, 95, 80, 224, 
  // 2696
  101, 80, 203, 
  // 2699
  106, 80, 204, 
  // 2702
  111, 80, 205, 
  // 2705
  116, 80, 206, 
  // 2708
  121, 80, 207, 
  // 2711
  126, 80, 208, 
  // 2714
  131, 80, 209, 
  // 2717
  136, 80, 210, 
  // 2720
  226, 80, 211, 
  // 2723
  91, 80, 212, 
  // 2726
  96, 80, 213, 
  // 2729
  87, 101, 80, 214, 
  // 2733
  87, 106, 80, 215, 
  // 2737
  87, 111, 80, 216, 
  // 2741
  87, 116, 80, 217, 
  // 2745
  87, 121, 80, 218, 
  // 2749
  87, 126, 80, 219, 
  // 2753
  87, 131, 80, 220, 
  // 2757
  87, 136, 80, 221, 
  // 2761
  87, 226, 80, 222, 
  // 2765
  87, 91, 80, 223, 
  // 2769
  87, 96, 80, 224, 
  // 2773
  102, 80, 203, 
  // 2776
  107, 80, 204, 
  // 2779
  112, 80, 205, 
  // 2782
  117, 80, 206, 
  // 2785
  122, 80, 207, 
  // 2788
  127, 80, 208, 
  // 2791
  132, 80, 209, 
  // 2794
  137, 80, 210, 
  // 2797
  260, 80, 211, 
  // 2800
  92, 80, 212, 
  // 2803
  97, 80, 213, 
  // 2806
  87, 102, 80, 214, 
  // 2810
  87, 107, 80, 215, 
  // 2814
  87, 112, 80, 216, 
  // 2818
  87, 117, 80, 217, 
  // 2822
  87, 122, 80, 218, 
  // 2826
  87, 127, 80, 219, 
  // 2830
  87, 132, 80, 220, 
  // 2834
  87, 137, 80, 221, 
  // 2838
  87, 260, 80, 222, 
  // 2842
  87, 92, 80, 223, 
  // 2846
  87, 97, 80, 224, 
  // 2850
  98, 80, 227, 
  // 2853
  103, 80, 228, 
  // 2856
  108, 80, 229, 
  // 2859
  113, 80, 230, 
  // 2862
  118, 80, 231, 
  // 2865
  123, 80, 232, 
  // 2868
  128, 80, 233, 
  // 2871
  133, 80, 234, 
  // 2874
  146, 80, 235, 
  // 2877
  88, 80, 236, 
  // 2880
  93, 80, 237, 
  // 2883
  87, 98, 80, 238, 
  // 2887
  87, 103, 80, 239, 
  // 2891
  87, 108, 80, 240, 
  // 2895
  87, 113, 80, 241, 
  // 2899
  87, 118, 80, 242, 
  // 2903
  87, 123, 80, 243, 
  // 2907
  87, 128, 80, 244, 
  // 2911
  87, 133, 80, 245, 
  // 2915
  87, 146, 80, 246, 
  // 2919
  87, 88, 80, 247, 
  // 2923
  87, 93, 80, 248, 
  // 2927
  99, 80, 227, 
  // 2930
  104, 80, 228, 
  // 2933
  109, 80, 229, 
  // 2936
  114, 80, 230, 
  // 2939
  119, 80, 231, 
  // 2942
  124, 80, 232, 
  // 2945
  129, 80, 233, 
  // 2948
  134, 80, 234, 
  // 2951
  147, 80, 235, 
  // 2954
  89, 80, 236, 
  // 2957
  94, 80, 237, 
  // 2960
  24, 69, 
  // 2962
  87, 99, 80, 238, 
  // 2966
  87, 104, 80, 239, 
  // 2970
  87, 109, 80, 240, 
  // 2974
  87, 114, 80, 241, 
  // 2978
  87, 119, 80, 242, 
  // 2982
  87, 124, 80, 243, 
  // 2986
  87, 129, 80, 244, 
  // 2990
  87, 134, 80, 245, 
  // 2994
  87, 147, 80, 246, 
  // 2998
  87, 89, 80, 247, 
  // 3002
  226, 226, 
  // 3004
  88, 128, 
  // 3006
  87, 94, 80, 248, 
  // 3010
  100, 80, 227, 
  // 3013
  105, 80, 228, 
  // 3016
  110, 80, 229, 
  // 3019
  115, 80, 230, 
  // 3022
  120, 80, 231, 
  // 3025
  125, 80, 232, 
  // 3028
  130, 80, 233, 
  // 3031
  135, 80, 234, 
  // 3034
  225, 80, 235, 
  // 3037
  89, 129, 
  // 3039
  90, 80, 236, 
  // 3042
  95, 80, 237, 
  // 3045
  87, 100, 80, 238, 
  // 3049
  87, 105, 80, 239, 
  // 3053
  87, 110, 80, 240, 
  // 3057
  87, 115, 80, 241, 
  // 3061
  87, 120, 80, 242, 
  // 3065
  87, 125, 80, 243, 
  // 3069
  87, 130, 80, 244, 
  // 3073
  87, 135, 80, 245, 
  // 3077
  90, 130, 
  // 3079
  87, 225, 80, 246, 
  // 3083
  87, 90, 80, 247, 
  // 3087
  87, 95, 80, 248, 
  // 3091
  101, 80, 227, 
  // 3094
  106, 80, 228, 
  // 3097
  111, 80, 229, 
  // 3100
  116, 80, 230, 
  // 3103
  121, 80, 231, 
  // 3106
  126, 80, 232, 
  // 3109
  131, 80, 233, 
  // 3112
  91, 131, 
  // 3114
  136, 80, 234, 
  // 3117
  226, 80, 235, 
  // 3120
  91, 80, 236, 
  // 3123
  96, 80, 237, 
  // 3126
  87, 101, 80, 238, 
  // 3130
  87, 106, 80, 239, 
  // 3134
  87, 111, 80, 240, 
  // 3138
  87, 116, 80, 241, 
  // 3142
  87, 121, 80, 242, 
  // 3146
  87, 126, 80, 243, 
  // 3150
  92, 132, 
  // 3152
  87, 131, 80, 244, 
  // 3156
  87, 136, 80, 245, 
  // 3160
  87, 226, 80, 246, 
  // 3164
  87, 91, 80, 247, 
  // 3168
  87, 96, 80, 248, 
  // 3172
  102, 80, 227, 
  // 3175
  107, 80, 228, 
  // 3178
  112, 80, 229, 
  // 3181
  117, 80, 230, 
  // 3184
  122, 80, 231, 
  // 3187
  127, 80, 232, 
  // 3190
  132, 80, 233, 
  // 3193
  137, 80, 234, 
  // 3196
  260, 80, 235, 
  // 3199
  92, 80, 236, 
  // 3202
  97, 80, 237, 
  // 3205
  87, 102, 80, 238, 
  // 3209
  87, 107, 80, 239, 
  // 3213
  87, 112, 80, 240, 
  // 3217
  87, 117, 80, 241, 
  // 3221
  87, 122, 80, 242, 
  // 3225
  87, 127, 80, 243, 
  // 3229
  87, 132, 80, 244, 
  // 3233
  87, 137, 80, 245, 
  // 3237
  87, 260, 80, 246, 
  // 3241
  87, 92, 80, 247, 
  // 3245
  87, 97, 80, 248, 
  // 3249
  98, 80, 249, 
  // 3252
  103, 80, 250, 
  // 3255
  108, 80, 251, 
  // 3258
  113, 80, 252, 
  // 3261
  118, 80, 253, 
  // 3264
  123, 80, 254, 
  // 3267
  128, 80, 255, 
  // 3270
  133, 80, 256, 
  // 3273
  146, 80, 257, 
  // 3276
  88, 80, 258, 
  // 3279
  93, 80, 259, 
  // 3282
  99, 80, 249, 
  // 3285
  104, 80, 250, 
  // 3288
  109, 80, 251, 
  // 3291
  114, 80, 252, 
  // 3294
  119, 80, 253, 
  // 3297
  124, 80, 254, 
  // 3300
  129, 80, 255, 
  // 3303
  134, 80, 256, 
  // 3306
  147, 80, 257, 
  // 3309
  89, 80, 258, 
  // 3312
  94, 80, 259, 
  // 3315
  100, 80, 249, 
  // 3318
  105, 80, 250, 
  // 3321
  110, 80, 251, 
  // 3324
  115, 80, 252, 
  // 3327
  120, 80, 253, 
  // 3330
  125, 80, 254, 
  // 3333
  130, 80, 255, 
  // 3336
  135, 80, 256, 
  // 3339
  225, 80, 257, 
  // 3342
  90, 80, 258, 
  // 3345
  95, 80, 259, 
  // 3348
  101, 80, 249, 
  // 3351
  106, 80, 250, 
  // 3354
  111, 80, 251, 
  // 3357
  116, 80, 252, 
  // 3360
  121, 80, 253, 
  // 3363
  126, 80, 254, 
  // 3366
  131, 80, 255, 
  // 3369
  136, 80, 256, 
  // 3372
  226, 80, 257, 
  // 3375
  91, 80, 258, 
  // 3378
  96, 80, 259, 
  // 3381
  102, 80, 249, 
  // 3384
  107, 80, 250, 
  // 3387
  112, 80, 251, 
  // 3390
  117, 80, 252, 
  // 3393
  122, 80, 253, 
  // 3396
  127, 80, 254, 
  // 3399
  132, 80, 255, 
  // 3402
  137, 80, 256, 
  // 3405
  260, 80, 257, 
  // 3408
  92, 80, 258, 
  // 3411
  97, 80, 259, 
  // 3414
  27, 80, 169, 
  // 3417
  146, 80, 169, 
  // 3420
  87, 27, 80, 180, 
  // 3424
  87, 24, 80, 180, 
  // 3428
  87, 146, 80, 180, 
  // 3432
  87, 88, 80, 180, 
  // 3436
  147, 80, 169, 
  // 3439
  225, 80, 169, 
  // 3442
  226, 80, 169, 
  // 3445
  260, 80, 169, 
  // 3448
  87, 147, 80, 180, 
  // 3452
  87, 89, 80, 180, 
  // 3456
  87, 225, 80, 180, 
  // 3460
  87, 90, 80, 180, 
  // 3464
  87, 226, 80, 180, 
  // 3468
  87, 91, 80, 180, 
  // 3472
  87, 260, 80, 180, 
  // 3476
  87, 92, 80, 180, 
  // 3480
  260, 260, 
  // 3482
  27, 80, 191, 
  // 3485
  146, 80, 191, 
  // 3488
  147, 80, 191, 
  // 3491
  225, 80, 191, 
  // 3494
  226, 80, 191, 
  // 3497
  260, 80, 191, 
  // 3500
  87, 27, 80, 202, 
  // 3504
  87, 24, 80, 202, 
  // 3508
  87, 146, 80, 202, 
  // 3512
  87, 88, 80, 202, 
  // 3516
  87, 147, 80, 202, 
  // 3520
  87, 89, 80, 202, 
  // 3524
  87, 225, 80, 202, 
  // 3528
  87, 90, 80, 202, 
  // 3532
  87, 226, 80, 202, 
  // 3536
  87, 91, 80, 202, 
  // 3540
  87, 260, 80, 202, 
  // 3544
  87, 92, 80, 202, 
  // 3548
  24, 85, 
  // 3550
  88, 133, 
  // 3552
  89, 134, 
  // 3554
  90, 135, 
  // 3556
  91, 136, 
  // 3558
  92, 137, 
  // 3560
  27, 80, 213, 
  // 3563
  146, 80, 213, 
  // 3566
  147, 80, 213, 
  // 3569
  225, 80, 213, 
  // 3572
  226, 80, 213, 
  // 3575
  260, 80, 213, 
  // 3578
  87, 27, 80, 224, 
  // 3582
  87, 24, 80, 224, 
  // 3586
  87, 146, 80, 224, 
  // 3590
  87, 88, 80, 224, 
  // 3594
  87, 147, 80, 224, 
  // 3598
  87, 89, 80, 224, 
  // 3602
  87, 225, 80, 224, 
  // 3606
  87, 90, 80, 224, 
  // 3610
  87, 226, 80, 224, 
  // 3614
  87, 91, 80, 224, 
  // 3618
  87, 260, 80, 224, 
  // 3622
  87, 92, 80, 224, 
  // 3626
  27, 80, 237, 
  // 3629
  146, 80, 237, 
  // 3632
  147, 80, 237, 
  // 3635
  225, 80, 237, 
  // 3638
  226, 80, 237, 
  // 3641
  260, 80, 237, 
  // 3644
  87, 27, 80, 248, 
  // 3648
  87, 24, 80, 248, 
  // 3652
  87, 146, 80, 248, 
  // 3656
  87, 88, 80, 248, 
  // 3660
  87, 147, 80, 248, 
  // 3664
  87, 89, 80, 248, 
  // 3668
  87, 225, 80, 248, 
  // 3672
  87, 90, 80, 248, 
  // 3676
  87, 226, 80, 248, 
  // 3680
  87, 91, 80, 248, 
  // 3684
  87, 260, 80, 248, 
  // 3688
  87, 92, 80, 248, 
  // 3692
  53, 27, 
  // 3694
  93, 146, 
  // 3696
  94, 147, 
  // 3698
  95, 225, 
  // 3700
  27, 80, 259, 
  // 3703
  146, 80, 259, 
  // 3706
  147, 80, 259, 
  // 3709
  225, 80, 259, 
  // 3712
  226, 80, 259, 
  // 3715
  96, 226, 
  // 3717
  260, 80, 259, 
  // 3720
  87, 70, 
  // 3722
  87, 70, 72, 
  // 3725
  70, 261, 
  // 3727
  97, 260, 
  // 3729
  70, 263, 
  // 3731
  25, 264, 266, 80, 25, 
  // 3736
  25, 267, 268, 80, 25, 
  // 3741
  25, 264, 266, 80, 80, 25, 
  // 3747
  25, 267, 268, 80, 80, 25, 
  // 3753
  87, 66, 269, 
  // 3756
  87, 266, 80, 
  // 3759
  66, 271, 66, 
  // 3762
  66, 271, 
  // 3764
  66, 271, 66, 66, 
  // 3768
  83, 273, 83, 
  // 3771
  83, 273, 
  // 3773
  83, 273, 83, 83, 
  // 3777
  66, 274, 66, 
  // 3780
  66, 274, 
  // 3782
  66, 274, 66, 66, 
  // 3786
  83, 275, 83, 
  // 3789
  83, 275, 
  // 3791
  83, 275, 83, 83, 
  // 3795
  69, 277, 69, 
  // 3798
  69, 277, 
  // 3800
  69, 277, 69, 69, 
  // 3804
  85, 279, 85, 
  // 3807
  85, 279, 
  // 3809
  85, 279, 85, 85, 
  // 3813
  69, 280, 69, 
  // 3816
  69, 280, 
  // 3818
  69, 280, 69, 69, 
  // 3822
  85, 281, 85, 
  // 3825
  85, 281, 
  // 3827
  85, 281, 85, 85, 
  // 3831
  27, 283, 27, 
  // 3834
  27, 284, 27, 
  // 3837
  66, 285, 66, 
  // 3840
  66, 285, 
  // 3842
  66, 285, 66, 66, 
  // 3846
  83, 286, 83, 
  // 3849
  83, 286, 
  // 3851
  83, 286, 83, 83, 
  // 3855
  87, 70, 71, 72, 
  // 3859
  87, 288, 66, 
  // 3862
  87, 288, 66, 71, 
  // 3866
  87, 288, 66, 71, 72, 
  // 3871
  66, 288, 
  // 3873
  66, 288, 71, 
  // 3876
  66, 288, 71, 72, 
  // 3880
  66, 288, 66, 
  // 3883
  66, 288, 66, 71, 
  // 3887
  66, 288, 66, 71, 72, 
  // 3892
  19, 288, 242, 66, 
  // 3896
  19, 288, 242, 66, 71, 71, 
  // 3902
  19, 288, 242, 66, 71, 71, 72, 
  // 3909
  87, 290, 83, 
  // 3912
  87, 290, 83, 71, 
  // 3916
  87, 290, 83, 71, 72, 
  // 3921
  83, 290, 
  // 3923
  83, 290, 71, 
  // 3926
  83, 290, 71, 72, 
  // 3930
  83, 290, 83, 
  // 3933
  83, 290, 83, 71, 
  // 3937
  83, 290, 83, 71, 72, 
  // 3942
  19, 290, 243, 83, 
  // 3946
  19, 290, 243, 83, 71, 71, 
  // 3952
  19, 290, 243, 83, 71, 71, 72, 
  // 3959
  87, 292, 69, 
  // 3962
  87, 292, 69, 71, 
  // 3966
  87, 292, 69, 71, 72, 
  // 3971
  69, 292, 
  // 3973
  69, 292, 71, 
  // 3976
  69, 292, 71, 72, 
  // 3980
  69, 292, 69, 
  // 3983
  69, 292, 69, 71, 
  // 3987
  69, 292, 69, 71, 72, 
  // 3992
  19, 292, 244, 69, 
  // 3996
  19, 292, 244, 69, 71, 71, 
  // 4002
  19, 292, 244, 69, 71, 71, 72, 
  // 4009
  87, 294, 85, 
  // 4012
  87, 294, 85, 71, 
  // 4016
  87, 294, 85, 71, 72, 
  // 4021
  85, 294, 
  // 4023
  53, 24, 
  // 4025
  85, 294, 71, 
  // 4028
  85, 294, 71, 72, 
  // 4032
  85, 294, 85, 
  // 4035
  85, 294, 85, 71, 
  // 4039
  85, 294, 85, 71, 72, 
  // 4044
  19, 294, 245, 85, 
  // 4048
  19, 294, 245, 85, 71, 71, 
  // 4054
  19, 294, 245, 85, 71, 71, 72, 
  // 4061
  93, 88, 
  // 4063
  87, 296, 27, 
  // 4066
  87, 296, 27, 71, 
  // 4070
  87, 296, 27, 71, 72, 
  // 4075
  27, 296, 
  // 4077
  27, 296, 71, 
  // 4080
  27, 296, 71, 72, 
  // 4084
  94, 89, 
  // 4086
  27, 296, 27, 
  // 4089
  27, 296, 27, 71, 
  // 4093
  27, 296, 27, 71, 72, 
  // 4098
  19, 296, 246, 27, 
  // 4102
  19, 296, 246, 27, 71, 71, 
  // 4108
  19, 296, 246, 27, 71, 71, 72, 
  // 4115
  95, 90, 
  // 4117
  87, 298, 24, 
  // 4120
  87, 298, 24, 71, 
  // 4124
  87, 298, 24, 71, 72, 
  // 4129
  24, 298, 
  // 4131
  24, 298, 71, 
  // 4134
  24, 298, 71, 72, 
  // 4138
  24, 298, 24, 
  // 4141
  24, 298, 24, 71, 
  // 4145
  96, 91, 
  // 4147
  24, 298, 24, 71, 72, 
  // 4152
  19, 298, 247, 24, 
  // 4156
  19, 298, 247, 24, 71, 71, 
  // 4162
  19, 298, 247, 24, 71, 71, 72, 
  // 4169
  97, 92, 
  // 4171
  84, 300, 74, 
  // 4174
  84, 300, 74, 71, 
  // 4178
  84, 300, 74, 71, 72, 
  // 4183
  87, 302, 
  // 4185
  87, 302, 71, 
  // 4188
  87, 302, 71, 72, 
  // 4192
  19, 302, 
  // 4194
  19, 302, 71, 
  // 4197
  19, 302, 71, 72, 
  // 4201
  87, 304, 10, 
  // 4204
  87, 304, 10, 71, 
  // 4208
  87, 304, 10, 71, 72, 
  // 4213
  53, 304, 
  // 4215
  53, 304, 71, 
  // 4218
  53, 304, 71, 72, 
  // 4222
  53, 304, 53, 
  // 4225
  53, 304, 53, 71, 
  // 4229
  53, 304, 53, 71, 72, 
  // 4234
  87, 305, 10, 
  // 4237
  87, 305, 10, 71, 
  // 4241
  87, 305, 10, 71, 72, 
  // 4246
  53, 305, 
  // 4248
  53, 305, 71, 
  // 4251
  53, 305, 71, 72, 
  // 4255
  53, 305, 53, 
  // 4258
  53, 305, 53, 71, 
  // 4262
  53, 305, 53, 71, 72, 
  // 4267
  87, 306, 10, 
  // 4270
  87, 306, 10, 71, 
  // 4274
  87, 306, 10, 71, 72, 
  // 4279
  53, 306, 
  // 4281
  53, 306, 71, 
  // 4284
  53, 306, 71, 72, 
  // 4288
  53, 306, 53, 
  // 4291
  53, 306, 53, 71, 
  // 4295
  53, 306, 53, 71, 72, 
  // 4300
  53, 307, 53, 
  // 4303
  53, 307, 53, 71, 
  // 4307
  53, 307, 53, 71, 72, 
  // 4312
  27, 307, 27, 
  // 4315
  27, 307, 27, 71, 
  // 4319
  27, 307, 27, 71, 72, 
  // 4324
  24, 308, 24, 
  // 4327
  24, 308, 24, 71, 
  // 4331
  24, 308, 24, 71, 72, 
  // 4336
  53, 309, 53, 
  // 4339
  53, 309, 53, 71, 
  // 4343
  53, 309, 53, 71, 72, 
  // 4348
  27, 309, 27, 
  // 4351
  27, 309, 27, 71, 
  // 4355
  27, 309, 27, 71, 72, 
  // 4360
  24, 310, 24, 
  // 4363
  24, 310, 24, 71, 
  // 4367
  24, 310, 24, 71, 72, 
  // 4372
  53, 296, 53, 
  // 4375
  53, 296, 53, 71, 
  // 4379
  53, 296, 53, 71, 72, 
  // 4384
  98, 98, 103, 
  // 4387
  103, 103, 103, 
  // 4390
  108, 108, 113, 
  // 4393
  113, 113, 113, 
  // 4396
  118, 118, 123, 
  // 4399
  123, 123, 123, 
  // 4402
  128, 128, 133, 
  // 4405
  133, 133, 133, 
  // 4408
  146, 146, 123, 
  // 4411
  88, 88, 133, 
  // 4414
  53, 53, 
  // 4416
  93, 93, 113, 
  // 4419
  98, 100, 103, 
  // 4422
  103, 105, 103, 
  // 4425
  108, 110, 113, 
  // 4428
  113, 115, 113, 
  // 4431
  118, 120, 123, 
  // 4434
  123, 125, 123, 
  // 4437
  128, 130, 133, 
  // 4440
  133, 135, 133, 
  // 4443
  146, 225, 123, 
  // 4446
  93, 93, 
  // 4448
  88, 90, 133, 
  // 4451
  93, 95, 113, 
  // 4454
  98, 101, 103, 
  // 4457
  103, 106, 103, 
  // 4460
  108, 111, 113, 
  // 4463
  113, 116, 113, 
  // 4466
  118, 121, 123, 
  // 4469
  123, 126, 123, 
  // 4472
  128, 131, 133, 
  // 4475
  133, 136, 133, 
  // 4478
  94, 94, 
  // 4480
  146, 226, 123, 
  // 4483
  88, 91, 133, 
  // 4486
  93, 96, 113, 
  // 4489
  98, 102, 103, 
  // 4492
  103, 107, 103, 
  // 4495
  108, 112, 113, 
  // 4498
  113, 117, 113, 
  // 4501
  118, 122, 123, 
  // 4504
  123, 127, 123, 
  // 4507
  128, 132, 133, 
  // 4510
  95, 95, 
  // 4512
  133, 137, 133, 
  // 4515
  146, 260, 123, 
  // 4518
  88, 92, 133, 
  // 4521
  93, 97, 113, 
  // 4524
  100, 98, 105, 
  // 4527
  105, 103, 105, 
  // 4530
  110, 108, 115, 
  // 4533
  115, 113, 115, 
  // 4536
  120, 118, 125, 
  // 4539
  125, 123, 125, 
  // 4542
  96, 96, 
  // 4544
  130, 128, 135, 
  // 4547
  135, 133, 135, 
  // 4550
  225, 146, 125, 
  // 4553
  90, 88, 135, 
  // 4556
  95, 93, 115, 
  // 4559
  100, 100, 105, 
  // 4562
  105, 105, 105, 
  // 4565
  110, 110, 115, 
  // 4568
  115, 115, 115, 
  // 4571
  120, 120, 125, 
  // 4574
  97, 97, 
  // 4576
  125, 125, 125, 
  // 4579
  130, 130, 135, 
  // 4582
  135, 135, 135, 
  // 4585
  225, 225, 125, 
  // 4588
  90, 90, 135, 
  // 4591
  95, 95, 115, 
  // 4594
  100, 101, 105, 
  // 4597
  105, 106, 105, 
  // 4600
  110, 111, 115, 
  // 4603
  115, 116, 115, 
  // 4606
  120, 121, 125, 
  // 4609
  125, 126, 125, 
  // 4612
  130, 131, 135, 
  // 4615
  135, 136, 135, 
  // 4618
  225, 226, 125, 
  // 4621
  90, 91, 135, 
  // 4624
  95, 96, 115, 
  // 4627
  100, 102, 105, 
  // 4630
  105, 107, 105, 
  // 4633
  110, 112, 115, 
  // 4636
  115, 117, 115, 
  // 4639
  120, 122, 125, 
  // 4642
  125, 127, 125, 
  // 4645
  130, 132, 135, 
  // 4648
  135, 137, 135, 
  // 4651
  225, 260, 125, 
  // 4654
  90, 92, 135, 
  // 4657
  95, 97, 115, 
  // 4660
  101, 98, 106, 
  // 4663
  106, 103, 106, 
  // 4666
  111, 108, 116, 
  // 4669
  116, 113, 116, 
  // 4672
  121, 118, 126, 
  // 4675
  126, 123, 126, 
  // 4678
  131, 128, 136, 
  // 4681
  136, 133, 136, 
  // 4684
  226, 146, 126, 
  // 4687
  91, 88, 136, 
  // 4690
  96, 93, 116, 
  // 4693
  101, 100, 106, 
  // 4696
  106, 105, 106, 
  // 4699
  111, 110, 116, 
  // 4702
  116, 115, 116, 
  // 4705
  121, 120, 126, 
  // 4708
  126, 125, 126, 
  // 4711
  131, 130, 136, 
  // 4714
  136, 135, 136, 
  // 4717
  226, 225, 126, 
  // 4720
  91, 90, 136, 
  // 4723
  96, 95, 116, 
  // 4726
  101, 101, 106, 
  // 4729
  106, 106, 106, 
  // 4732
  111, 111, 116, 
  // 4735
  116, 116, 116, 
  // 4738
  121, 121, 126, 
  // 4741
  126, 126, 126, 
  // 4744
  131, 131, 136, 
  // 4747
  136, 136, 136, 
  // 4750
  226, 226, 126, 
  // 4753
  91, 91, 136, 
  // 4756
  96, 96, 116, 
  // 4759
  101, 102, 106, 
  // 4762
  106, 107, 106, 
  // 4765
  111, 112, 116, 
  // 4768
  116, 117, 116, 
  // 4771
  121, 122, 126, 
  // 4774
  126, 127, 126, 
  // 4777
  131, 132, 136, 
  // 4780
  136, 137, 136, 
  // 4783
  226, 260, 126, 
  // 4786
  91, 92, 136, 
  // 4789
  96, 97, 116, 
  // 4792
  102, 98, 107, 
  // 4795
  107, 103, 107, 
  // 4798
  112, 108, 117, 
  // 4801
  117, 113, 117, 
  // 4804
  122, 118, 127, 
  // 4807
  127, 123, 127, 
  // 4810
  132, 128, 137, 
  // 4813
  137, 133, 137, 
  // 4816
  260, 146, 127, 
  // 4819
  92, 88, 137, 
  // 4822
  97, 93, 117, 
  // 4825
  102, 100, 107, 
  // 4828
  107, 105, 107, 
  // 4831
  112, 110, 117, 
  // 4834
  117, 115, 117, 
  // 4837
  122, 120, 127, 
  // 4840
  127, 125, 127, 
  // 4843
  132, 130, 137, 
  // 4846
  137, 135, 137, 
  // 4849
  260, 225, 127, 
  // 4852
  92, 90, 137, 
  // 4855
  97, 95, 117, 
  // 4858
  102, 101, 107, 
  // 4861
  107, 106, 107, 
  // 4864
  112, 111, 117, 
  // 4867
  117, 116, 117, 
  // 4870
  122, 121, 127, 
  // 4873
  127, 126, 127, 
  // 4876
  132, 131, 137, 
  // 4879
  137, 136, 137, 
  // 4882
  260, 226, 127, 
  // 4885
  92, 91, 137, 
  // 4888
  97, 96, 117, 
  // 4891
  102, 102, 107, 
  // 4894
  107, 107, 107, 
  // 4897
  112, 112, 117, 
  // 4900
  117, 117, 117, 
  // 4903
  122, 122, 127, 
  // 4906
  127, 127, 127, 
  // 4909
  132, 132, 137, 
  // 4912
  137, 137, 137, 
  // 4915
  260, 260, 127, 
  // 4918
  92, 92, 137, 
  // 4921
  97, 97, 117, 
  // 4924
  98, 98, 98, 103, 
  // 4928
  103, 103, 103, 103, 
  // 4932
  108, 108, 108, 113, 
  // 4936
  113, 113, 113, 113, 
  // 4940
  118, 118, 118, 123, 
  // 4944
  123, 123, 123, 123, 
  // 4948
  128, 128, 128, 133, 
  // 4952
  133, 133, 133, 133, 
  // 4956
  146, 146, 146, 123, 
  // 4960
  88, 88, 88, 133, 
  // 4964
  93, 93, 93, 113, 
  // 4968
  98, 100, 100, 103, 
  // 4972
  103, 105, 105, 103, 
  // 4976
  108, 110, 110, 113, 
  // 4980
  113, 115, 115, 113, 
  // 4984
  118, 120, 120, 123, 
  // 4988
  123, 125, 125, 123, 
  // 4992
  128, 130, 130, 133, 
  // 4996
  133, 135, 135, 133, 
  // 5000
  146, 225, 225, 123, 
  // 5004
  88, 90, 90, 133, 
  // 5008
  93, 95, 95, 113, 
  // 5012
  98, 101, 101, 103, 
  // 5016
  103, 106, 106, 103, 
  // 5020
  108, 111, 111, 113, 
  // 5024
  113, 116, 116, 113, 
  // 5028
  118, 121, 121, 123, 
  // 5032
  123, 126, 126, 123, 
  // 5036
  128, 131, 131, 133, 
  // 5040
  133, 136, 136, 133, 
  // 5044
  146, 226, 226, 123, 
  // 5048
  88, 91, 91, 133, 
  // 5052
  93, 96, 96, 113, 
  // 5056
  98, 102, 102, 103, 
  // 5060
  103, 107, 107, 103, 
  // 5064
  108, 112, 112, 113, 
  // 5068
  113, 117, 117, 113, 
  // 5072
  118, 122, 122, 123, 
  // 5076
  123, 127, 127, 123, 
  // 5080
  128, 132, 132, 133, 
  // 5084
  133, 137, 137, 133, 
  // 5088
  146, 260, 260, 123, 
  // 5092
  88, 92, 92, 133, 
  // 5096
  93, 97, 97, 113, 
  // 5100
  100, 98, 98, 105, 
  // 5104
  105, 103, 103, 105, 
  // 5108
  110, 108, 108, 115, 
  // 5112
  115, 113, 113, 115, 
  // 5116
  120, 118, 118, 125, 
  // 5120
  125, 123, 123, 125, 
  // 5124
  130, 128, 128, 135, 
  // 5128
  135, 133, 133, 135, 
  // 5132
  225, 146, 146, 125, 
  // 5136
  90, 88, 88, 135, 
  // 5140
  95, 93, 93, 115, 
  // 5144
  100, 100, 100, 105, 
  // 5148
  105, 105, 105, 105, 
  // 5152
  110, 110, 110, 115, 
  // 5156
  115, 115, 115, 115, 
  // 5160
  120, 120, 120, 125, 
  // 5164
  125, 125, 125, 125, 
  // 5168
  130, 130, 130, 135, 
  // 5172
  135, 135, 135, 135, 
  // 5176
  225, 225, 225, 125, 
  // 5180
  90, 90, 90, 135, 
  // 5184
  95, 95, 95, 115, 
  // 5188
  100, 101, 101, 105, 
  // 5192
  105, 106, 106, 105, 
  // 5196
  110, 111, 111, 115, 
  // 5200
  115, 116, 116, 115, 
  // 5204
  120, 121, 121, 125, 
  // 5208
  125, 126, 126, 125, 
  // 5212
  130, 131, 131, 135, 
  // 5216
  135, 136, 136, 135, 
  // 5220
  225, 226, 226, 125, 
  // 5224
  90, 91, 91, 135, 
  // 5228
  95, 96, 96, 115, 
  // 5232
  100, 102, 102, 105, 
  // 5236
  105, 107, 107, 105, 
  // 5240
  110, 112, 112, 115, 
  // 5244
  115, 117, 117, 115, 
  // 5248
  120, 122, 122, 125, 
  // 5252
  125, 127, 127, 125, 
  // 5256
  130, 132, 132, 135, 
  // 5260
  135, 137, 137, 135, 
  // 5264
  225, 260, 260, 125, 
  // 5268
  90, 92, 92, 135, 
  // 5272
  95, 97, 97, 115, 
  // 5276
  101, 98, 98, 106, 
  // 5280
  106, 103, 103, 106, 
  // 5284
  111, 108, 108, 116, 
  // 5288
  116, 113, 113, 116, 
  // 5292
  121, 118, 118, 126, 
  // 5296
  126, 123, 123, 126, 
  // 5300
  131, 128, 128, 136, 
  // 5304
  136, 133, 133, 136, 
  // 5308
  226, 146, 146, 126, 
  // 5312
  91, 88, 88, 136, 
  // 5316
  96, 93, 93, 116, 
  // 5320
  101, 100, 100, 106, 
  // 5324
  106, 105, 105, 106, 
  // 5328
  111, 110, 110, 116, 
  // 5332
  116, 115, 115, 116, 
  // 5336
  121, 120, 120, 126, 
  // 5340
  126, 125, 125, 126, 
  // 5344
  131, 130, 130, 136, 
  // 5348
  136, 135, 135, 136, 
  // 5352
  226, 225, 225, 126, 
  // 5356
  91, 90, 90, 136, 
  // 5360
  96, 95, 95, 116, 
  // 5364
  101, 101, 101, 106, 
  // 5368
  106, 106, 106, 106, 
  // 5372
  111, 111, 111, 116, 
  // 5376
  116, 116, 116, 116, 
  // 5380
  121, 121, 121, 126, 
  // 5384
  126, 126, 126, 126, 
  // 5388
  131, 131, 131, 136, 
  // 5392
  136, 136, 136, 136, 
  // 5396
  226, 226, 226, 126, 
  // 5400
  91, 91, 91, 136, 
  // 5404
  96, 96, 96, 116, 
  // 5408
  101, 102, 102, 106, 
  // 5412
  106, 107, 107, 106, 
  // 5416
  111, 112, 112, 116, 
  // 5420
  116, 117, 117, 116, 
  // 5424
  121, 122, 122, 126, 
  // 5428
  126, 127, 127, 126, 
  // 5432
  131, 132, 132, 136, 
  // 5436
  136, 137, 137, 136, 
  // 5440
  226, 260, 260, 126, 
  // 5444
  91, 92, 92, 136, 
  // 5448
  96, 97, 97, 116, 
  // 5452
  102, 98, 98, 107, 
  // 5456
  107, 103, 103, 107, 
  // 5460
  53, 20, 
  // 5462
  112, 108, 108, 117, 
  // 5466
  117, 113, 113, 117, 
  // 5470
  122, 118, 118, 127, 
  // 5474
  127, 123, 123, 127, 
  // 5478
  132, 128, 128, 137, 
  // 5482
  137, 133, 133, 137, 
  // 5486
  260, 146, 146, 127, 
  // 5490
  92, 88, 88, 137, 
  // 5494
  97, 93, 93, 117, 
  // 5498
  102, 100, 100, 107, 
  // 5502
  93, 98, 
  // 5504
  107, 105, 105, 107, 
  // 5508
  112, 110, 110, 117, 
  // 5512
  117, 115, 115, 117, 
  // 5516
  122, 120, 120, 127, 
  // 5520
  127, 125, 125, 127, 
  // 5524
  132, 130, 130, 137, 
  // 5528
  137, 135, 135, 137, 
  // 5532
  260, 225, 225, 127, 
  // 5536
  92, 90, 90, 137, 
  // 5540
  97, 95, 95, 117, 
  // 5544
  94, 99, 
  // 5546
  102, 101, 101, 107, 
  // 5550
  107, 106, 106, 107, 
  // 5554
  112, 111, 111, 117, 
  // 5558
  117, 116, 116, 117, 
  // 5562
  122, 121, 121, 127, 
  // 5566
  127, 126, 126, 127, 
  // 5570
  132, 131, 131, 137, 
  // 5574
  137, 136, 136, 137, 
  // 5578
  260, 226, 226, 127, 
  // 5582
  92, 91, 91, 137, 
  // 5586
  95, 100, 
  // 5588
  97, 96, 96, 117, 
  // 5592
  102, 102, 102, 107, 
  // 5596
  107, 107, 107, 107, 
  // 5600
  112, 112, 112, 117, 
  // 5604
  117, 117, 117, 117, 
  // 5608
  122, 122, 122, 127, 
  // 5612
  127, 127, 127, 127, 
  // 5616
  132, 132, 132, 137, 
  // 5620
  137, 137, 137, 137, 
  // 5624
  260, 260, 260, 127, 
  // 5628
  96, 101, 
  // 5630
  92, 92, 92, 137, 
  // 5634
  97, 97, 97, 117, 
  // 5638
  225, 311, 78, 66, 
  // 5642
  120, 311, 78, 66, 
  // 5646
  125, 311, 78, 66, 
  // 5650
  225, 311, 78, 27, 
  // 5654
  120, 311, 78, 27, 
  // 5658
  125, 311, 78, 27, 
  // 5662
  97, 102, 
  // 5664
  225, 312, 78, 118, 
  // 5668
  120, 312, 78, 118, 
  // 5672
  125, 312, 78, 118, 
  // 5676
  225, 312, 78, 146, 
  // 5680
  120, 312, 78, 146, 
  // 5684
  125, 312, 78, 146, 
  // 5688
  225, 313, 78, 118, 
  // 5692
  120, 313, 78, 118, 
  // 5696
  125, 313, 78, 118, 
  // 5700
  225, 313, 78, 146, 
  // 5704
  120, 313, 78, 146, 
  // 5708
  125, 313, 78, 146, 
  // 5712
  225, 314, 78, 120, 
  // 5716
  120, 314, 78, 120, 
  // 5720
  125, 314, 78, 120, 
  // 5724
  225, 314, 78, 225, 
  // 5728
  120, 314, 78, 225, 
  // 5732
  125, 314, 78, 225, 
  // 5736
  225, 315, 78, 120, 
  // 5740
  120, 315, 78, 120, 
  // 5744
  125, 315, 78, 120, 
  // 5748
  225, 315, 78, 225, 
  // 5752
  120, 315, 78, 225, 
  // 5756
  125, 315, 78, 225, 
  // 5760
  27, 316, 78, 118, 
  // 5764
  27, 317, 78, 120, 
  // 5768
  27, 316, 78, 146, 
  // 5772
  27, 317, 78, 225, 
  // 5776
  225, 312, 118, 
  // 5779
  120, 312, 118, 
  // 5782
  125, 312, 118, 
  // 5785
  225, 314, 120, 
  // 5788
  120, 314, 120, 
  // 5791
  125, 314, 120, 
  // 5794
  225, 311, 66, 
  // 5797
  120, 311, 66, 
  // 5800
  125, 311, 66, 
  // 5803
  27, 316, 118, 
  // 5806
  27, 317, 120, 
  // 5809
  225, 313, 118, 
  // 5812
  120, 313, 118, 
  // 5815
  125, 313, 118, 
  // 5818
  225, 315, 120, 
  // 5821
  120, 315, 120, 
  // 5824
  125, 315, 120, 
  // 5827
  225, 318, 66, 
  // 5830
  120, 318, 66, 
  // 5833
  125, 318, 66, 
  // 5836
  225, 319, 118, 
  // 5839
  120, 319, 118, 
  // 5842
  125, 319, 118, 
  // 5845
  225, 320, 118, 
  // 5848
  120, 320, 118, 
  // 5851
  125, 320, 118, 
  // 5854
  225, 321, 120, 
  // 5857
  120, 321, 120, 
  // 5860
  125, 321, 120, 
  // 5863
  225, 322, 120, 
  // 5866
  120, 322, 120, 
  // 5869
  125, 322, 120, 
  // 5872
  225, 323, 66, 
  // 5875
  120, 323, 66, 
  // 5878
  125, 323, 66, 
  // 5881
  225, 324, 66, 
  // 5884
  120, 324, 66, 
  // 5887
  125, 324, 66, 
  // 5890
  27, 325, 118, 
  // 5893
  27, 326, 120, 
  // 5896
  87, 327, 118, 225, 
  // 5900
  87, 327, 118, 120, 
  // 5904
  87, 327, 118, 125, 
  // 5908
  87, 328, 120, 225, 
  // 5912
  87, 328, 120, 120, 
  // 5916
  87, 328, 120, 125, 
  // 5920
  87, 329, 66, 225, 
  // 5924
  87, 329, 66, 120, 
  // 5928
  87, 329, 66, 125, 
  // 5932
  87, 331, 118, 225, 
  // 5936
  87, 331, 118, 120, 
  // 5940
  87, 331, 118, 125, 
  // 5944
  87, 332, 120, 225, 
  // 5948
  87, 332, 120, 120, 
  // 5952
  87, 332, 120, 125, 
  // 5956
  87, 333, 118, 27, 
  // 5960
  87, 334, 120, 27, 
  // 5964
  87, 330, 66, 225, 
  // 5968
  87, 330, 66, 120, 
  // 5972
  87, 330, 66, 125, 
  // 5976
  87, 319, 118, 225, 
  // 5980
  87, 319, 118, 120, 
  // 5984
  87, 319, 118, 125, 
  // 5988
  87, 322, 120, 225, 
  // 5992
  87, 322, 120, 120, 
  // 5996
  87, 322, 120, 125, 
  // 6000
  87, 323, 66, 225, 
  // 6004
  87, 323, 66, 120, 
  // 6008
  87, 323, 66, 125, 
  // 6012
  87, 324, 66, 225, 
  // 6016
  87, 324, 66, 120, 
  // 6020
  87, 324, 66, 125, 
  // 6024
  87, 320, 118, 225, 
  // 6028
  87, 320, 118, 120, 
  // 6032
  87, 320, 118, 125, 
  // 6036
  87, 321, 120, 225, 
  // 6040
  87, 321, 120, 120, 
  // 6044
  87, 321, 120, 125, 
  // 6048
  87, 325, 118, 27, 
  // 6052
  87, 326, 120, 27, 
  // 6056
  66, 311, 
  // 6058
  66, 312, 
  // 6060
  66, 314, 
  // 6062
  118, 312, 
  // 6064
  120, 314, 
  // 6066
  80, 313, 
  // 6068
  66, 318, 
  // 6070
  66, 313, 
  // 6072
  66, 315, 
  // 6074
  66, 316, 
  // 6076
  66, 317, 
  // 6078
  118, 315, 
  // 6080
  118, 316, 
  // 6082
  118, 317, 
  // 6084
  80, 315, 
  // 6086
  80, 317, 
  // 6088
  66, 329, 
  // 6090
  66, 330, 
  // 6092
  66, 327, 
  // 6094
  66, 332, 
  // 6096
  66, 331, 
  // 6098
  66, 328, 
  // 6100
  66, 333, 
  // 6102
  66, 334, 
  // 6104
  118, 327, 
  // 6106
  118, 328, 
  // 6108
  118, 333, 
  // 6110
  118, 334, 
  // 6112
  120, 332, 
  // 6114
  80, 331, 
  // 6116
  80, 328, 
  // 6118
  80, 334, 
  // 6120
  66, 323, 
  // 6122
  66, 324, 
  // 6124
  66, 319, 
  // 6126
  66, 321, 
  // 6128
  66, 320, 
  // 6130
  66, 322, 
  // 6132
  66, 325, 
  // 6134
  53, 81, 
  // 6136
  66, 326, 
  // 6138
  93, 103, 
  // 6140
  118, 319, 
  // 6142
  118, 322, 
  // 6144
  118, 325, 
  // 6146
  118, 326, 
  // 6148
  120, 321, 
  // 6150
  80, 320, 
  // 6152
  80, 322, 
  // 6154
  80, 326, 
  // 6156
  95, 312, 78, 118, 
  // 6160
  95, 314, 78, 120, 
  // 6164
  94, 104, 
  // 6166
  95, 311, 78, 66, 
  // 6170
  95, 313, 78, 118, 
  // 6174
  95, 315, 78, 120, 
  // 6178
  95, 312, 78, 146, 
  // 6182
  95, 313, 78, 146, 
  // 6186
  95, 314, 78, 225, 
  // 6190
  95, 315, 78, 225, 
  // 6194
  95, 311, 78, 27, 
  // 6198
  95, 312, 118, 
  // 6201
  95, 314, 120, 
  // 6204
  95, 105, 
  // 6206
  95, 311, 66, 
  // 6209
  95, 313, 118, 
  // 6212
  95, 315, 120, 
  // 6215
  95, 318, 66, 
  // 6218
  95, 319, 118, 
  // 6221
  95, 320, 118, 
  // 6224
  95, 321, 120, 
  // 6227
  95, 322, 120, 
  // 6230
  95, 323, 66, 
  // 6233
  95, 324, 66, 
  // 6236
  96, 106, 
  // 6238
  87, 327, 118, 95, 
  // 6242
  87, 328, 120, 95, 
  // 6246
  87, 329, 66, 95, 
  // 6250
  87, 330, 66, 95, 
  // 6254
  87, 331, 118, 95, 
  // 6258
  87, 332, 120, 95, 
  // 6262
  87, 319, 118, 95, 
  // 6266
  87, 322, 120, 95, 
  // 6270
  87, 323, 66, 95, 
  // 6274
  87, 324, 66, 95, 
  // 6278
  97, 107, 
  // 6280
  87, 320, 118, 95, 
  // 6284
  87, 321, 120, 95, 
  // 6288
  67, 67, 80, 
  // 6291
  67, 67, 80, 80, 
  // 6295
  67, 67, 80, 80, 80, 
  // 6300
  67, 67, 
  // 6302
  19, 76, 
  // 6304
  66, 75, 83, 336, 337, 
  // 6309
  87, 22, 
  // 6311
  22, 
  // 6312
  19, 22, 
  // 6314
  87, 22, 66, 
  // 6317
  87, 22, 23, 338, 
  // 6321
  75, 
  // 6322
  73, 80, 
  // 6324
  73, 80, 80, 
  // 6327
  73, 80, 80, 80, 
  // 6331
  73, 340, 
  // 6333
  73, 340, 340, 
  // 6336
  73, 340, 340, 340, 
  // 6340
  225, 312, 78, 146, 27, 
  // 6345
  225, 312, 78, 146, 146, 146, 
  // 6351
  120, 312, 78, 146, 27, 
  // 6356
  120, 312, 78, 146, 146, 146, 
  // 6362
  125, 312, 78, 146, 27, 
  // 6367
  125, 312, 78, 146, 146, 146, 
  // 6373
  27, 316, 78, 146, 27, 
  // 6378
  27, 316, 78, 146, 146, 146, 
  // 6384
  225, 311, 78, 27, 27, 
  // 6389
  225, 311, 78, 27, 27, 27, 
  // 6395
  120, 311, 78, 27, 27, 
  // 6400
  120, 311, 78, 27, 27, 27, 
  // 6406
  125, 311, 78, 27, 27, 
  // 6411
  125, 311, 78, 27, 27, 27, 
  // 6417
  225, 314, 78, 225, 225, 225, 
  // 6423
  225, 314, 78, 225, 27, 
  // 6428
  120, 314, 78, 225, 225, 225, 
  // 6434
  120, 314, 78, 225, 27, 
  // 6439
  125, 314, 78, 225, 225, 225, 
  // 6445
  125, 314, 78, 225, 27, 
  // 6450
  225, 313, 78, 146, 27, 
  // 6455
  225, 313, 78, 146, 27, 27, 
  // 6461
  120, 313, 78, 146, 27, 
  // 6466
  120, 313, 78, 146, 27, 27, 
  // 6472
  125, 313, 78, 146, 27, 
  // 6477
  125, 313, 78, 146, 27, 27, 
  // 6483
  225, 315, 78, 225, 27, 
  // 6488
  225, 315, 78, 225, 146, 146, 
  // 6494
  120, 315, 78, 225, 27, 
  // 6499
  120, 315, 78, 225, 146, 146, 
  // 6505
  125, 315, 78, 225, 27, 
  // 6510
  125, 315, 78, 225, 146, 146, 
  // 6516
  27, 317, 78, 225, 27, 
  // 6521
  27, 317, 78, 225, 146, 146, 
  // 6527
  87, 327, 118, 66, 225, 
  // 6532
  87, 327, 118, 66, 120, 
  // 6537
  87, 327, 118, 66, 125, 
  // 6542
  87, 333, 118, 66, 27, 
  // 6547
  87, 329, 66, 66, 225, 
  // 6552
  87, 329, 66, 66, 120, 
  // 6557
  87, 329, 66, 66, 125, 
  // 6562
  87, 331, 118, 66, 225, 
  // 6567
  87, 331, 118, 66, 120, 
  // 6572
  87, 331, 118, 66, 125, 
  // 6577
  87, 328, 120, 66, 225, 
  // 6582
  87, 328, 120, 66, 120, 
  // 6587
  87, 328, 120, 66, 125, 
  // 6592
  87, 334, 120, 66, 27, 
  // 6597
  87, 332, 120, 66, 225, 
  // 6602
  87, 332, 120, 66, 120, 
  // 6607
  87, 332, 120, 66, 125, 
  // 6612
  225, 341, 118, 66, 
  // 6616
  120, 341, 118, 66, 
  // 6620
  125, 341, 118, 66, 
  // 6624
  225, 342, 120, 66, 
  // 6628
  120, 342, 120, 66, 
  // 6632
  125, 342, 120, 66, 
  // 6636
  27, 343, 118, 66, 
  // 6640
  27, 344, 120, 66, 
  // 6644
  225, 345, 118, 66, 
  // 6648
  120, 345, 118, 66, 
  // 6652
  125, 345, 118, 66, 
  // 6656
  225, 346, 120, 66, 
  // 6660
  120, 346, 120, 66, 
  // 6664
  125, 346, 120, 66, 
  // 6668
  27, 347, 118, 66, 
  // 6672
  27, 348, 120, 66, 
  // 6676
  66, 341, 
  // 6678
  118, 341, 
  // 6680
  80, 342, 
  // 6682
  66, 342, 
  // 6684
  118, 342, 
  // 6686
  66, 343, 
  // 6688
  118, 343, 
  // 6690
  66, 344, 
  // 6692
  118, 344, 
  // 6694
  80, 344, 
  // 6696
  66, 349, 
  // 6698
  118, 349, 
  // 6700
  66, 350, 
  // 6702
  118, 350, 
  // 6704
  66, 351, 
  // 6706
  118, 351, 
  // 6708
  66, 352, 
  // 6710
  118, 352, 
  // 6712
  80, 350, 
  // 6714
  80, 352, 
  // 6716
  66, 345, 
  // 6718
  118, 345, 
  // 6720
  66, 346, 
  // 6722
  118, 346, 
  // 6724
  66, 347, 
  // 6726
  118, 347, 
  // 6728
  66, 348, 
  // 6730
  118, 348, 
  // 6732
  80, 346, 
  // 6734
  80, 348, 
  // 6736
  67, 67, 83, 
  // 6739
  53, 79, 
  // 6741
  21, 21, 83, 
  // 6744
  2, 2, 83, 
  // 6747
  21, 21, 
  // 6749
  93, 108, 
  // 6751
  66, 
  // 6752
  66, 0, 
  // 6754
  1, 1, 83, 
  // 6757
  0, 0, 
  // 6759
  125, 66, 
  // 6761
  66, 125, 
  // 6763
  66, 125, 83, 
  // 6766
  94, 109, 
  // 6768
  83, 125, 
  // 6770
  125, 
  // 6771
  95, 110, 
  // 6773
  4, 4, 
  // 6775
  96, 111, 
  // 6777
  97, 112, 
  // 6779
  0, 0, 83, 
  // 6782
  4, 4, 83, 
  // 6785
  66, 66, 83, 
  // 6788
  5, 5, 5, 83, 83, 
  // 6793
  77, 77, 83, 83, 
  // 6797
  77, 82, 83, 83, 
  // 6801
  82, 77, 83, 83, 
  // 6805
  82, 82, 83, 83, 
  // 6809
  83, 105, 105, 
  // 6812
  66, 100, 100, 
  // 6815
  66, 105, 100, 
  // 6818
  66, 100, 105, 
  // 6821
  83, 105, 105, 83, 
  // 6825
  66, 100, 100, 66, 
  // 6829
  66, 105, 100, 66, 
  // 6833
  66, 100, 105, 66, 
  // 6837
  83, 83, 83, 
  // 6840
  66, 83, 83, 
  // 6843
  83, 83, 83, 83, 
  // 6847
  66, 83, 83, 66, 
  // 6851
  83, 113, 113, 83, 
  // 6855
  66, 108, 108, 66, 
  // 6859
  53, 86, 
  // 6861
  93, 113, 
  // 6863
  94, 114, 
  // 6865
  95, 115, 
  // 6867
  96, 116, 
  // 6869
  97, 117, 
};

static const OpenCLBuiltinStruct BuiltinTable[] = {
  // 1: convert_half16_rte, convert_half16_rtn, convert_half16_rtp, convert_half16_rtz, convert_half16, 
  { 0, 2, 0, 1, 0, 44, 31 },
  { 24, 2, 0, 1, 0, 44, 31 },
  { 40, 2, 0, 1, 0, 44, 31 },
  { 54, 2, 0, 1, 0, 44, 31 },
  { 3727, 2, 0, 1, 0, 44, 31 },
  { 4169, 2, 0, 1, 0, 44, 31 },
  { 4574, 2, 0, 1, 0, 44, 31 },
  { 5662, 2, 0, 1, 0, 44, 31 },
  { 6278, 2, 0, 1, 0, 44, 31 },
  { 6777, 2, 0, 1, 0, 44, 31 },
  { 6869, 2, 0, 1, 0, 44, 31 },
  // 12: convert_half_rtn, convert_half_rtp, convert_half_rtz, convert_half, convert_half_rte, 
  { 2, 2, 0, 1, 0, 44, 31 },
  { 14, 2, 0, 1, 0, 44, 31 },
  { 28, 2, 0, 1, 0, 44, 31 },
  { 44, 2, 0, 1, 0, 44, 31 },
  { 3692, 2, 0, 1, 0, 44, 31 },
  { 4023, 2, 0, 1, 0, 44, 31 },
  { 4414, 2, 0, 1, 0, 44, 31 },
  { 5460, 2, 0, 1, 0, 44, 31 },
  { 6134, 2, 0, 1, 0, 44, 31 },
  { 6739, 2, 0, 1, 0, 44, 31 },
  { 6859, 2, 0, 1, 0, 44, 31 },
  // 23: convert_half2_rtn, convert_half2_rtp, convert_half2_rtz, convert_half2, convert_half2_rte, 
  { 4, 2, 0, 1, 0, 44, 31 },
  { 16, 2, 0, 1, 0, 44, 31 },
  { 32, 2, 0, 1, 0, 44, 31 },
  { 46, 2, 0, 1, 0, 44, 31 },
  { 3694, 2, 0, 1, 0, 44, 31 },
  { 4061, 2, 0, 1, 0, 44, 31 },
  { 4446, 2, 0, 1, 0, 44, 31 },
  { 5502, 2, 0, 1, 0, 44, 31 },
  { 6138, 2, 0, 1, 0, 44, 31 },
  { 6749, 2, 0, 1, 0, 44, 31 },
  { 6861, 2, 0, 1, 0, 44, 31 },
  // 34: convert_half3_rtn, convert_half3_rtp, convert_half3_rtz, convert_half3, convert_half3_rte, 
  { 6, 2, 0, 1, 0, 44, 31 },
  { 18, 2, 0, 1, 0, 44, 31 },
  { 34, 2, 0, 1, 0, 44, 31 },
  { 48, 2, 0, 1, 0, 44, 31 },
  { 3696, 2, 0, 1, 0, 44, 31 },
  { 4084, 2, 0, 1, 0, 44, 31 },
  { 4478, 2, 0, 1, 0, 44, 31 },
  { 5544, 2, 0, 1, 0, 44, 31 },
  { 6164, 2, 0, 1, 0, 44, 31 },
  { 6766, 2, 0, 1, 0, 44, 31 },
  { 6863, 2, 0, 1, 0, 44, 31 },
  // 45: convert_half4_rtn, convert_half4_rtp, convert_half4_rtz, convert_half4, convert_half4_rte, 
  { 8, 2, 0, 1, 0, 44, 31 },
  { 20, 2, 0, 1, 0, 44, 31 },
  { 36, 2, 0, 1, 0, 44, 31 },
  { 50, 2, 0, 1, 0, 44, 31 },
  { 3698, 2, 0, 1, 0, 44, 31 },
  { 4115, 2, 0, 1, 0, 44, 31 },
  { 4510, 2, 0, 1, 0, 44, 31 },
  { 5586, 2, 0, 1, 0, 44, 31 },
  { 6204, 2, 0, 1, 0, 44, 31 },
  { 6771, 2, 0, 1, 0, 44, 31 },
  { 6865, 2, 0, 1, 0, 44, 31 },
  // 56: convert_half8_rtn, convert_half8_rtp, convert_half8_rtz, convert_half8, convert_half8_rte, 
  { 10, 2, 0, 1, 0, 44, 31 },
  { 22, 2, 0, 1, 0, 44, 31 },
  { 38, 2, 0, 1, 0, 44, 31 },
  { 52, 2, 0, 1, 0, 44, 31 },
  { 3715, 2, 0, 1, 0, 44, 31 },
  { 4145, 2, 0, 1, 0, 44, 31 },
  { 4542, 2, 0, 1, 0, 44, 31 },
  { 5628, 2, 0, 1, 0, 44, 31 },
  { 6236, 2, 0, 1, 0, 44, 31 },
  { 6775, 2, 0, 1, 0, 44, 31 },
  { 6867, 2, 0, 1, 0, 44, 31 },
  // 67: convert_float2, convert_float2_rte, convert_float2_rtn, convert_float2_rtp, convert_float2_rtz, 
  { 12, 2, 0, 1, 0, 44, 31 },
  { 122, 2, 0, 1, 0, 44, 31 },
  { 196, 2, 0, 1, 0, 44, 31 },
  { 278, 2, 0, 1, 0, 44, 31 },
  { 362, 2, 0, 1, 0, 44, 31 },
  { 446, 2, 0, 1, 0, 44, 31 },
  { 530, 2, 0, 1, 0, 44, 31 },
  { 614, 2, 0, 1, 0, 44, 31 },
  { 688, 2, 0, 1, 0, 44, 31 },
  { 770, 2, 0, 1, 0, 44, 31 },
  { 1389, 2, 0, 1, 0, 44, 31 },
  // 78: convert_float3, convert_float3_rte, convert_float3_rtn, convert_float3_rtp, convert_float3_rtz, 
  { 26, 2, 0, 1, 0, 44, 31 },
  { 124, 2, 0, 1, 0, 44, 31 },
  { 208, 2, 0, 1, 0, 44, 31 },
  { 292, 2, 0, 1, 0, 44, 31 },
  { 366, 2, 0, 1, 0, 44, 31 },
  { 448, 2, 0, 1, 0, 44, 31 },
  { 532, 2, 0, 1, 0, 44, 31 },
  { 616, 2, 0, 1, 0, 44, 31 },
  { 700, 2, 0, 1, 0, 44, 31 },
  { 784, 2, 0, 1, 0, 44, 31 },
  { 1756, 2, 0, 1, 0, 44, 31 },
  // 89: convert_float4, convert_float4_rte, convert_float4_rtn, convert_float4_rtp, convert_float4_rtz, 
  { 30, 2, 0, 1, 0, 44, 31 },
  { 126, 2, 0, 1, 0, 44, 31 },
  { 210, 2, 0, 1, 0, 44, 31 },
  { 294, 2, 0, 1, 0, 44, 31 },
  { 378, 2, 0, 1, 0, 44, 31 },
  { 462, 2, 0, 1, 0, 44, 31 },
  { 536, 2, 0, 1, 0, 44, 31 },
  { 618, 2, 0, 1, 0, 44, 31 },
  { 702, 2, 0, 1, 0, 44, 31 },
  { 786, 2, 0, 1, 0, 44, 31 },
  { 2378, 2, 0, 1, 0, 44, 31 },
  // 100: convert_float8, convert_float8_rte, convert_float8_rtn, convert_float8_rtp, convert_float8_rtz, 
  { 42, 2, 0, 1, 0, 44, 31 },
  { 140, 2, 0, 1, 0, 44, 31 },
  { 214, 2, 0, 1, 0, 44, 31 },
  { 296, 2, 0, 1, 0, 44, 31 },
  { 380, 2, 0, 1, 0, 44, 31 },
  { 464, 2, 0, 1, 0, 44, 31 },
  { 548, 2, 0, 1, 0, 44, 31 },
  { 632, 2, 0, 1, 0, 44, 31 },
  { 706, 2, 0, 1, 0, 44, 31 },
  { 788, 2, 0, 1, 0, 44, 31 },
  { 3002, 2, 0, 1, 0, 44, 31 },
  // 111: convert_float16, convert_float16_rte, convert_float16_rtn, convert_float16_rtp, convert_float16_rtz, 
  { 56, 2, 0, 1, 0, 44, 31 },
  { 142, 2, 0, 1, 0, 44, 31 },
  { 226, 2, 0, 1, 0, 44, 31 },
  { 310, 2, 0, 1, 0, 44, 31 },
  { 384, 2, 0, 1, 0, 44, 31 },
  { 466, 2, 0, 1, 0, 44, 31 },
  { 550, 2, 0, 1, 0, 44, 31 },
  { 634, 2, 0, 1, 0, 44, 31 },
  { 718, 2, 0, 1, 0, 44, 31 },
  { 802, 2, 0, 1, 0, 44, 31 },
  { 3480, 2, 0, 1, 0, 44, 31 },
  // 122: convert_float_rte, convert_float_rtn, convert_float_rtp, convert_float_rtz, convert_float, 
  { 58, 2, 0, 1, 0, 44, 31 },
  { 108, 2, 0, 1, 0, 44, 31 },
  { 192, 2, 0, 1, 0, 44, 31 },
  { 276, 2, 0, 1, 0, 44, 31 },
  { 360, 2, 0, 1, 0, 44, 31 },
  { 444, 2, 0, 1, 0, 44, 31 },
  { 518, 2, 0, 1, 0, 44, 31 },
  { 600, 2, 0, 1, 0, 44, 31 },
  { 684, 2, 0, 1, 0, 44, 31 },
  { 768, 2, 0, 1, 0, 44, 31 },
  { 1312, 2, 0, 1, 0, 44, 31 },
  // 133: convert_char, convert_char_rte, convert_char_rtn, convert_char_rtp, convert_char_rtz, convert_char_sat, convert_char_sat_rte, convert_char_sat_rtn, convert_char_sat_rtp, convert_char_sat_rtz, 
  { 60, 2, 0, 1, 0, 44, 31 },
  { 72, 2, 0, 1, 0, 44, 31 },
  { 84, 2, 0, 1, 0, 44, 31 },
  { 96, 2, 0, 1, 0, 44, 31 },
  { 110, 2, 0, 1, 0, 44, 31 },
  { 128, 2, 0, 1, 0, 44, 31 },
  { 144, 2, 0, 1, 0, 44, 31 },
  { 156, 2, 0, 1, 0, 44, 31 },
  { 168, 2, 0, 1, 0, 44, 31 },
  { 180, 2, 0, 1, 0, 44, 31 },
  { 194, 2, 0, 1, 0, 44, 31 },
  // 144: convert_char2, convert_char2_rte, convert_char2_rtn, convert_char2_rtp, convert_char2_rtz, convert_char2_sat, convert_char2_sat_rte, convert_char2_sat_rtn, convert_char2_sat_rtp, convert_char2_sat_rtz, 
  { 62, 2, 0, 1, 0, 44, 31 },
  { 74, 2, 0, 1, 0, 44, 31 },
  { 86, 2, 0, 1, 0, 44, 31 },
  { 98, 2, 0, 1, 0, 44, 31 },
  { 112, 2, 0, 1, 0, 44, 31 },
  { 130, 2, 0, 1, 0, 44, 31 },
  { 146, 2, 0, 1, 0, 44, 31 },
  { 158, 2, 0, 1, 0, 44, 31 },
  { 170, 2, 0, 1, 0, 44, 31 },
  { 182, 2, 0, 1, 0, 44, 31 },
  { 198, 2, 0, 1, 0, 44, 31 },
  // 155: convert_char3, convert_char3_rte, convert_char3_rtn, convert_char3_rtp, convert_char3_rtz, convert_char3_sat, convert_char3_sat_rte, convert_char3_sat_rtn, convert_char3_sat_rtp, convert_char3_sat_rtz, 
  { 64, 2, 0, 1, 0, 44, 31 },
  { 76, 2, 0, 1, 0, 44, 31 },
  { 88, 2, 0, 1, 0, 44, 31 },
  { 100, 2, 0, 1, 0, 44, 31 },
  { 114, 2, 0, 1, 0, 44, 31 },
  { 132, 2, 0, 1, 0, 44, 31 },
  { 148, 2, 0, 1, 0, 44, 31 },
  { 160, 2, 0, 1, 0, 44, 31 },
  { 172, 2, 0, 1, 0, 44, 31 },
  { 184, 2, 0, 1, 0, 44, 31 },
  { 200, 2, 0, 1, 0, 44, 31 },
  // 166: convert_char4, convert_char4_rte, convert_char4_rtn, convert_char4_rtp, convert_char4_rtz, convert_char4_sat, convert_char4_sat_rte, convert_char4_sat_rtn, convert_char4_sat_rtp, convert_char4_sat_rtz, 
  { 66, 2, 0, 1, 0, 44, 31 },
  { 78, 2, 0, 1, 0, 44, 31 },
  { 90, 2, 0, 1, 0, 44, 31 },
  { 102, 2, 0, 1, 0, 44, 31 },
  { 116, 2, 0, 1, 0, 44, 31 },
  { 134, 2, 0, 1, 0, 44, 31 },
  { 150, 2, 0, 1, 0, 44, 31 },
  { 162, 2, 0, 1, 0, 44, 31 },
  { 174, 2, 0, 1, 0, 44, 31 },
  { 186, 2, 0, 1, 0, 44, 31 },
  { 202, 2, 0, 1, 0, 44, 31 },
  // 177: convert_char8, convert_char8_rte, convert_char8_rtn, convert_char8_rtp, convert_char8_rtz, convert_char8_sat, convert_char8_sat_rte, convert_char8_sat_rtn, convert_char8_sat_rtp, convert_char8_sat_rtz, 
  { 68, 2, 0, 1, 0, 44, 31 },
  { 80, 2, 0, 1, 0, 44, 31 },
  { 92, 2, 0, 1, 0, 44, 31 },
  { 104, 2, 0, 1, 0, 44, 31 },
  { 118, 2, 0, 1, 0, 44, 31 },
  { 136, 2, 0, 1, 0, 44, 31 },
  { 152, 2, 0, 1, 0, 44, 31 },
  { 164, 2, 0, 1, 0, 44, 31 },
  { 176, 2, 0, 1, 0, 44, 31 },
  { 188, 2, 0, 1, 0, 44, 31 },
  { 204, 2, 0, 1, 0, 44, 31 },
  // 188: convert_char16, convert_char16_rte, convert_char16_rtn, convert_char16_rtp, convert_char16_rtz, convert_char16_sat, convert_char16_sat_rte, convert_char16_sat_rtn, convert_char16_sat_rtp, convert_char16_sat_rtz, 
  { 70, 2, 0, 1, 0, 44, 31 },
  { 82, 2, 0, 1, 0, 44, 31 },
  { 94, 2, 0, 1, 0, 44, 31 },
  { 106, 2, 0, 1, 0, 44, 31 },
  { 120, 2, 0, 1, 0, 44, 31 },
  { 138, 2, 0, 1, 0, 44, 31 },
  { 154, 2, 0, 1, 0, 44, 31 },
  { 166, 2, 0, 1, 0, 44, 31 },
  { 178, 2, 0, 1, 0, 44, 31 },
  { 190, 2, 0, 1, 0, 44, 31 },
  { 206, 2, 0, 1, 0, 44, 31 },
  // 199: convert_uchar, convert_uchar_rte, convert_uchar_rtn, convert_uchar_rtp, convert_uchar_rtz, convert_uchar_sat, convert_uchar_sat_rte, convert_uchar_sat_rtn, convert_uchar_sat_rtp, convert_uchar_sat_rtz, 
  { 212, 2, 0, 1, 0, 44, 31 },
  { 228, 2, 0, 1, 0, 44, 31 },
  { 240, 2, 0, 1, 0, 44, 31 },
  { 252, 2, 0, 1, 0, 44, 31 },
  { 264, 2, 0, 1, 0, 44, 31 },
  { 280, 2, 0, 1, 0, 44, 31 },
  { 298, 2, 0, 1, 0, 44, 31 },
  { 312, 2, 0, 1, 0, 44, 31 },
  { 324, 2, 0, 1, 0, 44, 31 },
  { 336, 2, 0, 1, 0, 44, 31 },
  { 348, 2, 0, 1, 0, 44, 31 },
  // 210: convert_uchar2, convert_uchar2_rte, convert_uchar2_rtn, convert_uchar2_rtp, convert_uchar2_rtz, convert_uchar2_sat, convert_uchar2_sat_rte, convert_uchar2_sat_rtn, convert_uchar2_sat_rtp, convert_uchar2_sat_rtz, 
  { 216, 2, 0, 1, 0, 44, 31 },
  { 230, 2, 0, 1, 0, 44, 31 },
  { 242, 2, 0, 1, 0, 44, 31 },
  { 254, 2, 0, 1, 0, 44, 31 },
  { 266, 2, 0, 1, 0, 44, 31 },
  { 282, 2, 0, 1, 0, 44, 31 },
  { 300, 2, 0, 1, 0, 44, 31 },
  { 314, 2, 0, 1, 0, 44, 31 },
  { 326, 2, 0, 1, 0, 44, 31 },
  { 338, 2, 0, 1, 0, 44, 31 },
  { 350, 2, 0, 1, 0, 44, 31 },
  // 221: convert_uchar3, convert_uchar3_rte, convert_uchar3_rtn, convert_uchar3_rtp, convert_uchar3_rtz, convert_uchar3_sat, convert_uchar3_sat_rte, convert_uchar3_sat_rtn, convert_uchar3_sat_rtp, convert_uchar3_sat_rtz, 
  { 218, 2, 0, 1, 0, 44, 31 },
  { 232, 2, 0, 1, 0, 44, 31 },
  { 244, 2, 0, 1, 0, 44, 31 },
  { 256, 2, 0, 1, 0, 44, 31 },
  { 268, 2, 0, 1, 0, 44, 31 },
  { 284, 2, 0, 1, 0, 44, 31 },
  { 302, 2, 0, 1, 0, 44, 31 },
  { 316, 2, 0, 1, 0, 44, 31 },
  { 328, 2, 0, 1, 0, 44, 31 },
  { 340, 2, 0, 1, 0, 44, 31 },
  { 352, 2, 0, 1, 0, 44, 31 },
  // 232: convert_uchar4, convert_uchar4_rte, convert_uchar4_rtn, convert_uchar4_rtp, convert_uchar4_rtz, convert_uchar4_sat, convert_uchar4_sat_rte, convert_uchar4_sat_rtn, convert_uchar4_sat_rtp, convert_uchar4_sat_rtz, 
  { 220, 2, 0, 1, 0, 44, 31 },
  { 234, 2, 0, 1, 0, 44, 31 },
  { 246, 2, 0, 1, 0, 44, 31 },
  { 258, 2, 0, 1, 0, 44, 31 },
  { 270, 2, 0, 1, 0, 44, 31 },
  { 286, 2, 0, 1, 0, 44, 31 },
  { 304, 2, 0, 1, 0, 44, 31 },
  { 318, 2, 0, 1, 0, 44, 31 },
  { 330, 2, 0, 1, 0, 44, 31 },
  { 342, 2, 0, 1, 0, 44, 31 },
  { 354, 2, 0, 1, 0, 44, 31 },
  // 243: convert_uchar8, convert_uchar8_rte, convert_uchar8_rtn, convert_uchar8_rtp, convert_uchar8_rtz, convert_uchar8_sat, convert_uchar8_sat_rte, convert_uchar8_sat_rtn, convert_uchar8_sat_rtp, convert_uchar8_sat_rtz, 
  { 222, 2, 0, 1, 0, 44, 31 },
  { 236, 2, 0, 1, 0, 44, 31 },
  { 248, 2, 0, 1, 0, 44, 31 },
  { 260, 2, 0, 1, 0, 44, 31 },
  { 272, 2, 0, 1, 0, 44, 31 },
  { 288, 2, 0, 1, 0, 44, 31 },
  { 306, 2, 0, 1, 0, 44, 31 },
  { 320, 2, 0, 1, 0, 44, 31 },
  { 332, 2, 0, 1, 0, 44, 31 },
  { 344, 2, 0, 1, 0, 44, 31 },
  { 356, 2, 0, 1, 0, 44, 31 },
  // 254: convert_uchar16, convert_uchar16_rte, convert_uchar16_rtn, convert_uchar16_rtp, convert_uchar16_rtz, convert_uchar16_sat, convert_uchar16_sat_rte, convert_uchar16_sat_rtn, convert_uchar16_sat_rtp, convert_uchar16_sat_rtz, 
  { 224, 2, 0, 1, 0, 44, 31 },
  { 238, 2, 0, 1, 0, 44, 31 },
  { 250, 2, 0, 1, 0, 44, 31 },
  { 262, 2, 0, 1, 0, 44, 31 },
  { 274, 2, 0, 1, 0, 44, 31 },
  { 290, 2, 0, 1, 0, 44, 31 },
  { 308, 2, 0, 1, 0, 44, 31 },
  { 322, 2, 0, 1, 0, 44, 31 },
  { 334, 2, 0, 1, 0, 44, 31 },
  { 346, 2, 0, 1, 0, 44, 31 },
  { 358, 2, 0, 1, 0, 44, 31 },
  // 265: convert_short, convert_short_rte, convert_short_rtn, convert_short_rtp, convert_short_rtz, convert_short_sat, convert_short_sat_rte, convert_short_sat_rtn, convert_short_sat_rtp, convert_short_sat_rtz, 
  { 364, 2, 0, 1, 0, 44, 31 },
  { 382, 2, 0, 1, 0, 44, 31 },
  { 396, 2, 0, 1, 0, 44, 31 },
  { 408, 2, 0, 1, 0, 44, 31 },
  { 420, 2, 0, 1, 0, 44, 31 },
  { 432, 2, 0, 1, 0, 44, 31 },
  { 450, 2, 0, 1, 0, 44, 31 },
  { 468, 2, 0, 1, 0, 44, 31 },
  { 480, 2, 0, 1, 0, 44, 31 },
  { 492, 2, 0, 1, 0, 44, 31 },
  { 504, 2, 0, 1, 0, 44, 31 },
  // 276: convert_short2, convert_short2_rte, convert_short2_rtn, convert_short2_rtp, convert_short2_rtz, convert_short2_sat, convert_short2_sat_rte, convert_short2_sat_rtn, convert_short2_sat_rtp, convert_short2_sat_rtz, 
  { 368, 2, 0, 1, 0, 44, 31 },
  { 386, 2, 0, 1, 0, 44, 31 },
  { 398, 2, 0, 1, 0, 44, 31 },
  { 410, 2, 0, 1, 0, 44, 31 },
  { 422, 2, 0, 1, 0, 44, 31 },
  { 434, 2, 0, 1, 0, 44, 31 },
  { 452, 2, 0, 1, 0, 44, 31 },
  { 470, 2, 0, 1, 0, 44, 31 },
  { 482, 2, 0, 1, 0, 44, 31 },
  { 494, 2, 0, 1, 0, 44, 31 },
  { 506, 2, 0, 1, 0, 44, 31 },
  // 287: convert_short3, convert_short3_rte, convert_short3_rtn, convert_short3_rtp, convert_short3_rtz, convert_short3_sat, convert_short3_sat_rte, convert_short3_sat_rtn, convert_short3_sat_rtp, convert_short3_sat_rtz, 
  { 370, 2, 0, 1, 0, 44, 31 },
  { 388, 2, 0, 1, 0, 44, 31 },
  { 400, 2, 0, 1, 0, 44, 31 },
  { 412, 2, 0, 1, 0, 44, 31 },
  { 424, 2, 0, 1, 0, 44, 31 },
  { 436, 2, 0, 1, 0, 44, 31 },
  { 454, 2, 0, 1, 0, 44, 31 },
  { 472, 2, 0, 1, 0, 44, 31 },
  { 484, 2, 0, 1, 0, 44, 31 },
  { 496, 2, 0, 1, 0, 44, 31 },
  { 508, 2, 0, 1, 0, 44, 31 },
  // 298: convert_short4, convert_short4_rte, convert_short4_rtn, convert_short4_rtp, convert_short4_rtz, convert_short4_sat, convert_short4_sat_rte, convert_short4_sat_rtn, convert_short4_sat_rtp, convert_short4_sat_rtz, 
  { 372, 2, 0, 1, 0, 44, 31 },
  { 390, 2, 0, 1, 0, 44, 31 },
  { 402, 2, 0, 1, 0, 44, 31 },
  { 414, 2, 0, 1, 0, 44, 31 },
  { 426, 2, 0, 1, 0, 44, 31 },
  { 438, 2, 0, 1, 0, 44, 31 },
  { 456, 2, 0, 1, 0, 44, 31 },
  { 474, 2, 0, 1, 0, 44, 31 },
  { 486, 2, 0, 1, 0, 44, 31 },
  { 498, 2, 0, 1, 0, 44, 31 },
  { 510, 2, 0, 1, 0, 44, 31 },
  // 309: convert_short8, convert_short8_rte, convert_short8_rtn, convert_short8_rtp, convert_short8_rtz, convert_short8_sat, convert_short8_sat_rte, convert_short8_sat_rtn, convert_short8_sat_rtp, convert_short8_sat_rtz, 
  { 374, 2, 0, 1, 0, 44, 31 },
  { 392, 2, 0, 1, 0, 44, 31 },
  { 404, 2, 0, 1, 0, 44, 31 },
  { 416, 2, 0, 1, 0, 44, 31 },
  { 428, 2, 0, 1, 0, 44, 31 },
  { 440, 2, 0, 1, 0, 44, 31 },
  { 458, 2, 0, 1, 0, 44, 31 },
  { 476, 2, 0, 1, 0, 44, 31 },
  { 488, 2, 0, 1, 0, 44, 31 },
  { 500, 2, 0, 1, 0, 44, 31 },
  { 512, 2, 0, 1, 0, 44, 31 },
  // 320: convert_short16, convert_short16_rte, convert_short16_rtn, convert_short16_rtp, convert_short16_rtz, convert_short16_sat, convert_short16_sat_rte, convert_short16_sat_rtn, convert_short16_sat_rtp, convert_short16_sat_rtz, 
  { 376, 2, 0, 1, 0, 44, 31 },
  { 394, 2, 0, 1, 0, 44, 31 },
  { 406, 2, 0, 1, 0, 44, 31 },
  { 418, 2, 0, 1, 0, 44, 31 },
  { 430, 2, 0, 1, 0, 44, 31 },
  { 442, 2, 0, 1, 0, 44, 31 },
  { 460, 2, 0, 1, 0, 44, 31 },
  { 478, 2, 0, 1, 0, 44, 31 },
  { 490, 2, 0, 1, 0, 44, 31 },
  { 502, 2, 0, 1, 0, 44, 31 },
  { 514, 2, 0, 1, 0, 44, 31 },
  // 331: convert_ushort, convert_ushort_rte, convert_ushort_rtn, convert_ushort_rtp, convert_ushort_rtz, convert_ushort_sat, convert_ushort_sat_rte, convert_ushort_sat_rtn, convert_ushort_sat_rtp, convert_ushort_sat_rtz, 
  { 516, 2, 0, 1, 0, 44, 31 },
  { 534, 2, 0, 1, 0, 44, 31 },
  { 552, 2, 0, 1, 0, 44, 31 },
  { 564, 2, 0, 1, 0, 44, 31 },
  { 576, 2, 0, 1, 0, 44, 31 },
  { 588, 2, 0, 1, 0, 44, 31 },
  { 602, 2, 0, 1, 0, 44, 31 },
  { 620, 2, 0, 1, 0, 44, 31 },
  { 636, 2, 0, 1, 0, 44, 31 },
  { 648, 2, 0, 1, 0, 44, 31 },
  { 660, 2, 0, 1, 0, 44, 31 },
  // 342: convert_ushort2, convert_ushort2_rte, convert_ushort2_rtn, convert_ushort2_rtp, convert_ushort2_rtz, convert_ushort2_sat, convert_ushort2_sat_rte, convert_ushort2_sat_rtn, convert_ushort2_sat_rtp, convert_ushort2_sat_rtz, 
  { 520, 2, 0, 1, 0, 44, 31 },
  { 538, 2, 0, 1, 0, 44, 31 },
  { 554, 2, 0, 1, 0, 44, 31 },
  { 566, 2, 0, 1, 0, 44, 31 },
  { 578, 2, 0, 1, 0, 44, 31 },
  { 590, 2, 0, 1, 0, 44, 31 },
  { 604, 2, 0, 1, 0, 44, 31 },
  { 622, 2, 0, 1, 0, 44, 31 },
  { 638, 2, 0, 1, 0, 44, 31 },
  { 650, 2, 0, 1, 0, 44, 31 },
  { 662, 2, 0, 1, 0, 44, 31 },
  // 353: convert_ushort3, convert_ushort3_rte, convert_ushort3_rtn, convert_ushort3_rtp, convert_ushort3_rtz, convert_ushort3_sat, convert_ushort3_sat_rte, convert_ushort3_sat_rtn, convert_ushort3_sat_rtp, convert_ushort3_sat_rtz, 
  { 522, 2, 0, 1, 0, 44, 31 },
  { 540, 2, 0, 1, 0, 44, 31 },
  { 556, 2, 0, 1, 0, 44, 31 },
  { 568, 2, 0, 1, 0, 44, 31 },
  { 580, 2, 0, 1, 0, 44, 31 },
  { 592, 2, 0, 1, 0, 44, 31 },
  { 606, 2, 0, 1, 0, 44, 31 },
  { 624, 2, 0, 1, 0, 44, 31 },
  { 640, 2, 0, 1, 0, 44, 31 },
  { 652, 2, 0, 1, 0, 44, 31 },
  { 664, 2, 0, 1, 0, 44, 31 },
  // 364: convert_ushort4, convert_ushort4_rte, convert_ushort4_rtn, convert_ushort4_rtp, convert_ushort4_rtz, convert_ushort4_sat, convert_ushort4_sat_rte, convert_ushort4_sat_rtn, convert_ushort4_sat_rtp, convert_ushort4_sat_rtz, 
  { 524, 2, 0, 1, 0, 44, 31 },
  { 542, 2, 0, 1, 0, 44, 31 },
  { 558, 2, 0, 1, 0, 44, 31 },
  { 570, 2, 0, 1, 0, 44, 31 },
  { 582, 2, 0, 1, 0, 44, 31 },
  { 594, 2, 0, 1, 0, 44, 31 },
  { 608, 2, 0, 1, 0, 44, 31 },
  { 626, 2, 0, 1, 0, 44, 31 },
  { 642, 2, 0, 1, 0, 44, 31 },
  { 654, 2, 0, 1, 0, 44, 31 },
  { 666, 2, 0, 1, 0, 44, 31 },
  // 375: convert_ushort8, convert_ushort8_rte, convert_ushort8_rtn, convert_ushort8_rtp, convert_ushort8_rtz, convert_ushort8_sat, convert_ushort8_sat_rte, convert_ushort8_sat_rtn, convert_ushort8_sat_rtp, convert_ushort8_sat_rtz, 
  { 526, 2, 0, 1, 0, 44, 31 },
  { 544, 2, 0, 1, 0, 44, 31 },
  { 560, 2, 0, 1, 0, 44, 31 },
  { 572, 2, 0, 1, 0, 44, 31 },
  { 584, 2, 0, 1, 0, 44, 31 },
  { 596, 2, 0, 1, 0, 44, 31 },
  { 610, 2, 0, 1, 0, 44, 31 },
  { 628, 2, 0, 1, 0, 44, 31 },
  { 644, 2, 0, 1, 0, 44, 31 },
  { 656, 2, 0, 1, 0, 44, 31 },
  { 668, 2, 0, 1, 0, 44, 31 },
  // 386: convert_ushort16, convert_ushort16_rte, convert_ushort16_rtn, convert_ushort16_rtp, convert_ushort16_rtz, convert_ushort16_sat, convert_ushort16_sat_rte, convert_ushort16_sat_rtn, convert_ushort16_sat_rtp, convert_ushort16_sat_rtz, 
  { 528, 2, 0, 1, 0, 44, 31 },
  { 546, 2, 0, 1, 0, 44, 31 },
  { 562, 2, 0, 1, 0, 44, 31 },
  { 574, 2, 0, 1, 0, 44, 31 },
  { 586, 2, 0, 1, 0, 44, 31 },
  { 598, 2, 0, 1, 0, 44, 31 },
  { 612, 2, 0, 1, 0, 44, 31 },
  { 630, 2, 0, 1, 0, 44, 31 },
  { 646, 2, 0, 1, 0, 44, 31 },
  { 658, 2, 0, 1, 0, 44, 31 },
  { 670, 2, 0, 1, 0, 44, 31 },
  // 397: convert_int, convert_int_rte, convert_int_rtn, convert_int_rtp, convert_int_rtz, convert_int_sat, convert_int_sat_rte, convert_int_sat_rtn, convert_int_sat_rtp, convert_int_sat_rtz, 
  { 672, 2, 0, 1, 0, 44, 31 },
  { 686, 2, 0, 1, 0, 44, 31 },
  { 704, 2, 0, 1, 0, 44, 31 },
  { 720, 2, 0, 1, 0, 44, 31 },
  { 732, 2, 0, 1, 0, 44, 31 },
  { 744, 2, 0, 1, 0, 44, 31 },
  { 756, 2, 0, 1, 0, 44, 31 },
  { 772, 2, 0, 1, 0, 44, 31 },
  { 790, 2, 0, 1, 0, 44, 31 },
  { 804, 2, 0, 1, 0, 44, 31 },
  { 816, 2, 0, 1, 0, 44, 31 },
  // 408: convert_int2, convert_int2_rte, convert_int2_rtn, convert_int2_rtp, convert_int2_rtz, convert_int2_sat, convert_int2_sat_rte, convert_int2_sat_rtn, convert_int2_sat_rtp, convert_int2_sat_rtz, 
  { 674, 2, 0, 1, 0, 44, 31 },
  { 690, 2, 0, 1, 0, 44, 31 },
  { 708, 2, 0, 1, 0, 44, 31 },
  { 722, 2, 0, 1, 0, 44, 31 },
  { 734, 2, 0, 1, 0, 44, 31 },
  { 746, 2, 0, 1, 0, 44, 31 },
  { 758, 2, 0, 1, 0, 44, 31 },
  { 774, 2, 0, 1, 0, 44, 31 },
  { 792, 2, 0, 1, 0, 44, 31 },
  { 806, 2, 0, 1, 0, 44, 31 },
  { 818, 2, 0, 1, 0, 44, 31 },
  // 419: convert_int3, convert_int3_rte, convert_int3_rtn, convert_int3_rtp, convert_int3_rtz, convert_int3_sat, convert_int3_sat_rte, convert_int3_sat_rtn, convert_int3_sat_rtp, convert_int3_sat_rtz, 
  { 676, 2, 0, 1, 0, 44, 31 },
  { 692, 2, 0, 1, 0, 44, 31 },
  { 710, 2, 0, 1, 0, 44, 31 },
  { 724, 2, 0, 1, 0, 44, 31 },
  { 736, 2, 0, 1, 0, 44, 31 },
  { 748, 2, 0, 1, 0, 44, 31 },
  { 760, 2, 0, 1, 0, 44, 31 },
  { 776, 2, 0, 1, 0, 44, 31 },
  { 794, 2, 0, 1, 0, 44, 31 },
  { 808, 2, 0, 1, 0, 44, 31 },
  { 820, 2, 0, 1, 0, 44, 31 },
  // 430: convert_int4, convert_int4_rte, convert_int4_rtn, convert_int4_rtp, convert_int4_rtz, convert_int4_sat, convert_int4_sat_rte, convert_int4_sat_rtn, convert_int4_sat_rtp, convert_int4_sat_rtz, 
  { 678, 2, 0, 1, 0, 44, 31 },
  { 694, 2, 0, 1, 0, 44, 31 },
  { 712, 2, 0, 1, 0, 44, 31 },
  { 726, 2, 0, 1, 0, 44, 31 },
  { 738, 2, 0, 1, 0, 44, 31 },
  { 750, 2, 0, 1, 0, 44, 31 },
  { 762, 2, 0, 1, 0, 44, 31 },
  { 778, 2, 0, 1, 0, 44, 31 },
  { 796, 2, 0, 1, 0, 44, 31 },
  { 810, 2, 0, 1, 0, 44, 31 },
  { 822, 2, 0, 1, 0, 44, 31 },
  // 441: convert_int8, convert_int8_rte, convert_int8_rtn, convert_int8_rtp, convert_int8_rtz, convert_int8_sat, convert_int8_sat_rte, convert_int8_sat_rtn, convert_int8_sat_rtp, convert_int8_sat_rtz, 
  { 680, 2, 0, 1, 0, 44, 31 },
  { 696, 2, 0, 1, 0, 44, 31 },
  { 714, 2, 0, 1, 0, 44, 31 },
  { 728, 2, 0, 1, 0, 44, 31 },
  { 740, 2, 0, 1, 0, 44, 31 },
  { 752, 2, 0, 1, 0, 44, 31 },
  { 764, 2, 0, 1, 0, 44, 31 },
  { 780, 2, 0, 1, 0, 44, 31 },
  { 798, 2, 0, 1, 0, 44, 31 },
  { 812, 2, 0, 1, 0, 44, 31 },
  { 824, 2, 0, 1, 0, 44, 31 },
  // 452: convert_int16, convert_int16_rte, convert_int16_rtn, convert_int16_rtp, convert_int16_rtz, convert_int16_sat, convert_int16_sat_rte, convert_int16_sat_rtn, convert_int16_sat_rtp, convert_int16_sat_rtz, 
  { 682, 2, 0, 1, 0, 44, 31 },
  { 698, 2, 0, 1, 0, 44, 31 },
  { 716, 2, 0, 1, 0, 44, 31 },
  { 730, 2, 0, 1, 0, 44, 31 },
  { 742, 2, 0, 1, 0, 44, 31 },
  { 754, 2, 0, 1, 0, 44, 31 },
  { 766, 2, 0, 1, 0, 44, 31 },
  { 782, 2, 0, 1, 0, 44, 31 },
  { 800, 2, 0, 1, 0, 44, 31 },
  { 814, 2, 0, 1, 0, 44, 31 },
  { 826, 2, 0, 1, 0, 44, 31 },
  // 463: convert_uint, convert_uint_rte, convert_uint_rtn, convert_uint_rtp, convert_uint_rtz, convert_uint_sat, convert_uint_sat_rte, convert_uint_sat_rtn, convert_uint_sat_rtp, convert_uint_sat_rtz, 
  { 828, 2, 0, 1, 0, 44, 31 },
  { 840, 2, 0, 1, 0, 44, 31 },
  { 860, 2, 0, 1, 0, 44, 31 },
  { 876, 2, 0, 1, 0, 44, 31 },
  { 888, 2, 0, 1, 0, 44, 31 },
  { 900, 2, 0, 1, 0, 44, 31 },
  { 912, 2, 0, 1, 0, 44, 31 },
  { 932, 2, 0, 1, 0, 44, 31 },
  { 948, 2, 0, 1, 0, 44, 31 },
  { 960, 2, 0, 1, 0, 44, 31 },
  { 972, 2, 0, 1, 0, 44, 31 },
  // 474: convert_uint2, convert_uint2_rte, convert_uint2_rtn, convert_uint2_rtp, convert_uint2_rtz, convert_uint2_sat, convert_uint2_sat_rte, convert_uint2_sat_rtn, convert_uint2_sat_rtp, convert_uint2_sat_rtz, 
  { 830, 2, 0, 1, 0, 44, 31 },
  { 842, 2, 0, 1, 0, 44, 31 },
  { 864, 2, 0, 1, 0, 44, 31 },
  { 878, 2, 0, 1, 0, 44, 31 },
  { 890, 2, 0, 1, 0, 44, 31 },
  { 902, 2, 0, 1, 0, 44, 31 },
  { 914, 2, 0, 1, 0, 44, 31 },
  { 936, 2, 0, 1, 0, 44, 31 },
  { 950, 2, 0, 1, 0, 44, 31 },
  { 962, 2, 0, 1, 0, 44, 31 },
  { 974, 2, 0, 1, 0, 44, 31 },
  // 485: convert_uint3, convert_uint3_rte, convert_uint3_rtn, convert_uint3_rtp, convert_uint3_rtz, convert_uint3_sat, convert_uint3_sat_rte, convert_uint3_sat_rtn, convert_uint3_sat_rtp, convert_uint3_sat_rtz, 
  { 832, 2, 0, 1, 0, 44, 31 },
  { 844, 2, 0, 1, 0, 44, 31 },
  { 866, 2, 0, 1, 0, 44, 31 },
  { 880, 2, 0, 1, 0, 44, 31 },
  { 892, 2, 0, 1, 0, 44, 31 },
  { 904, 2, 0, 1, 0, 44, 31 },
  { 916, 2, 0, 1, 0, 44, 31 },
  { 938, 2, 0, 1, 0, 44, 31 },
  { 952, 2, 0, 1, 0, 44, 31 },
  { 964, 2, 0, 1, 0, 44, 31 },
  { 976, 2, 0, 1, 0, 44, 31 },
  // 496: convert_uint4, convert_uint4_rte, convert_uint4_rtn, convert_uint4_rtp, convert_uint4_rtz, convert_uint4_sat, convert_uint4_sat_rte, convert_uint4_sat_rtn, convert_uint4_sat_rtp, convert_uint4_sat_rtz, 
  { 834, 2, 0, 1, 0, 44, 31 },
  { 846, 2, 0, 1, 0, 44, 31 },
  { 868, 2, 0, 1, 0, 44, 31 },
  { 882, 2, 0, 1, 0, 44, 31 },
  { 894, 2, 0, 1, 0, 44, 31 },
  { 906, 2, 0, 1, 0, 44, 31 },
  { 918, 2, 0, 1, 0, 44, 31 },
  { 940, 2, 0, 1, 0, 44, 31 },
  { 954, 2, 0, 1, 0, 44, 31 },
  { 966, 2, 0, 1, 0, 44, 31 },
  { 978, 2, 0, 1, 0, 44, 31 },
  // 507: convert_uint8, convert_uint8_rte, convert_uint8_rtn, convert_uint8_rtp, convert_uint8_rtz, convert_uint8_sat, convert_uint8_sat_rte, convert_uint8_sat_rtn, convert_uint8_sat_rtp, convert_uint8_sat_rtz, 
  { 836, 2, 0, 1, 0, 44, 31 },
  { 848, 2, 0, 1, 0, 44, 31 },
  { 870, 2, 0, 1, 0, 44, 31 },
  { 884, 2, 0, 1, 0, 44, 31 },
  { 896, 2, 0, 1, 0, 44, 31 },
  { 908, 2, 0, 1, 0, 44, 31 },
  { 920, 2, 0, 1, 0, 44, 31 },
  { 942, 2, 0, 1, 0, 44, 31 },
  { 956, 2, 0, 1, 0, 44, 31 },
  { 968, 2, 0, 1, 0, 44, 31 },
  { 980, 2, 0, 1, 0, 44, 31 },
  // 518: convert_uint16, convert_uint16_rte, convert_uint16_rtn, convert_uint16_rtp, convert_uint16_rtz, convert_uint16_sat, convert_uint16_sat_rte, convert_uint16_sat_rtn, convert_uint16_sat_rtp, convert_uint16_sat_rtz, 
  { 838, 2, 0, 1, 0, 44, 31 },
  { 850, 2, 0, 1, 0, 44, 31 },
  { 872, 2, 0, 1, 0, 44, 31 },
  { 886, 2, 0, 1, 0, 44, 31 },
  { 898, 2, 0, 1, 0, 44, 31 },
  { 910, 2, 0, 1, 0, 44, 31 },
  { 922, 2, 0, 1, 0, 44, 31 },
  { 944, 2, 0, 1, 0, 44, 31 },
  { 958, 2, 0, 1, 0, 44, 31 },
  { 970, 2, 0, 1, 0, 44, 31 },
  { 982, 2, 0, 1, 0, 44, 31 },
  // 529: convert_double, convert_double_rte, convert_double_rtn, convert_double_rtp, convert_double_rtz, 
  { 852, 2, 0, 1, 0, 44, 31 },
  { 924, 2, 0, 1, 0, 44, 31 },
  { 996, 2, 0, 1, 0, 44, 31 },
  { 1068, 2, 0, 1, 0, 44, 31 },
  { 1140, 2, 0, 1, 0, 44, 31 },
  { 1212, 2, 0, 1, 0, 44, 31 },
  { 1284, 2, 0, 1, 0, 44, 31 },
  { 1504, 2, 0, 1, 0, 44, 31 },
  { 1981, 2, 0, 1, 0, 44, 31 },
  { 2960, 2, 0, 1, 0, 44, 31 },
  { 3548, 2, 0, 1, 0, 44, 31 },
  // 540: convert_double2, convert_double2_rte, convert_double2_rtn, convert_double2_rtp, convert_double2_rtz, 
  { 854, 2, 0, 1, 0, 44, 31 },
  { 926, 2, 0, 1, 0, 44, 31 },
  { 998, 2, 0, 1, 0, 44, 31 },
  { 1070, 2, 0, 1, 0, 44, 31 },
  { 1142, 2, 0, 1, 0, 44, 31 },
  { 1214, 2, 0, 1, 0, 44, 31 },
  { 1286, 2, 0, 1, 0, 44, 31 },
  { 1520, 2, 0, 1, 0, 44, 31 },
  { 2015, 2, 0, 1, 0, 44, 31 },
  { 3004, 2, 0, 1, 0, 44, 31 },
  { 3550, 2, 0, 1, 0, 44, 31 },
  // 551: convert_double3, convert_double3_rte, convert_double3_rtn, convert_double3_rtp, convert_double3_rtz, 
  { 856, 2, 0, 1, 0, 44, 31 },
  { 928, 2, 0, 1, 0, 44, 31 },
  { 1000, 2, 0, 1, 0, 44, 31 },
  { 1072, 2, 0, 1, 0, 44, 31 },
  { 1144, 2, 0, 1, 0, 44, 31 },
  { 1216, 2, 0, 1, 0, 44, 31 },
  { 1288, 2, 0, 1, 0, 44, 31 },
  { 1531, 2, 0, 1, 0, 44, 31 },
  { 2054, 2, 0, 1, 0, 44, 31 },
  { 3037, 2, 0, 1, 0, 44, 31 },
  { 3552, 2, 0, 1, 0, 44, 31 },
  // 562: convert_double4, convert_double4_rte, convert_double4_rtn, convert_double4_rtp, convert_double4_rtz, 
  { 858, 2, 0, 1, 0, 44, 31 },
  { 930, 2, 0, 1, 0, 44, 31 },
  { 1002, 2, 0, 1, 0, 44, 31 },
  { 1074, 2, 0, 1, 0, 44, 31 },
  { 1146, 2, 0, 1, 0, 44, 31 },
  { 1218, 2, 0, 1, 0, 44, 31 },
  { 1290, 2, 0, 1, 0, 44, 31 },
  { 1561, 2, 0, 1, 0, 44, 31 },
  { 2090, 2, 0, 1, 0, 44, 31 },
  { 3077, 2, 0, 1, 0, 44, 31 },
  { 3554, 2, 0, 1, 0, 44, 31 },
  // 573: convert_double8, convert_double8_rte, convert_double8_rtn, convert_double8_rtp, convert_double8_rtz, 
  { 862, 2, 0, 1, 0, 44, 31 },
  { 934, 2, 0, 1, 0, 44, 31 },
  { 1006, 2, 0, 1, 0, 44, 31 },
  { 1078, 2, 0, 1, 0, 44, 31 },
  { 1150, 2, 0, 1, 0, 44, 31 },
  { 1222, 2, 0, 1, 0, 44, 31 },
  { 1294, 2, 0, 1, 0, 44, 31 },
  { 1583, 2, 0, 1, 0, 44, 31 },
  { 2127, 2, 0, 1, 0, 44, 31 },
  { 3112, 2, 0, 1, 0, 44, 31 },
  { 3556, 2, 0, 1, 0, 44, 31 },
  // 584: convert_double16, convert_double16_rte, convert_double16_rtn, convert_double16_rtp, convert_double16_rtz, 
  { 874, 2, 0, 1, 0, 44, 31 },
  { 946, 2, 0, 1, 0, 44, 31 },
  { 1018, 2, 0, 1, 0, 44, 31 },
  { 1090, 2, 0, 1, 0, 44, 31 },
  { 1162, 2, 0, 1, 0, 44, 31 },
  { 1234, 2, 0, 1, 0, 44, 31 },
  { 1306, 2, 0, 1, 0, 44, 31 },
  { 1612, 2, 0, 1, 0, 44, 31 },
  { 2165, 2, 0, 1, 0, 44, 31 },
  { 3150, 2, 0, 1, 0, 44, 31 },
  { 3558, 2, 0, 1, 0, 44, 31 },
  // 595: convert_long, convert_long_rte, convert_long_rtn, convert_long_rtp, convert_long_rtz, convert_long_sat, convert_long_sat_rte, convert_long_sat_rtn, convert_long_sat_rtp, convert_long_sat_rtz, 
  { 984, 2, 0, 1, 0, 44, 31 },
  { 1004, 2, 0, 1, 0, 44, 31 },
  { 1020, 2, 0, 1, 0, 44, 31 },
  { 1032, 2, 0, 1, 0, 44, 31 },
  { 1044, 2, 0, 1, 0, 44, 31 },
  { 1056, 2, 0, 1, 0, 44, 31 },
  { 1076, 2, 0, 1, 0, 44, 31 },
  { 1092, 2, 0, 1, 0, 44, 31 },
  { 1104, 2, 0, 1, 0, 44, 31 },
  { 1116, 2, 0, 1, 0, 44, 31 },
  { 1128, 2, 0, 1, 0, 44, 31 },
  // 606: convert_long2, convert_long2_rte, convert_long2_rtn, convert_long2_rtp, convert_long2_rtz, convert_long2_sat, convert_long2_sat_rte, convert_long2_sat_rtn, convert_long2_sat_rtp, convert_long2_sat_rtz, 
  { 986, 2, 0, 1, 0, 44, 31 },
  { 1008, 2, 0, 1, 0, 44, 31 },
  { 1022, 2, 0, 1, 0, 44, 31 },
  { 1034, 2, 0, 1, 0, 44, 31 },
  { 1046, 2, 0, 1, 0, 44, 31 },
  { 1058, 2, 0, 1, 0, 44, 31 },
  { 1080, 2, 0, 1, 0, 44, 31 },
  { 1094, 2, 0, 1, 0, 44, 31 },
  { 1106, 2, 0, 1, 0, 44, 31 },
  { 1118, 2, 0, 1, 0, 44, 31 },
  { 1130, 2, 0, 1, 0, 44, 31 },
  // 617: convert_long3, convert_long3_rte, convert_long3_rtn, convert_long3_rtp, convert_long3_rtz, convert_long3_sat, convert_long3_sat_rte, convert_long3_sat_rtn, convert_long3_sat_rtp, convert_long3_sat_rtz, 
  { 988, 2, 0, 1, 0, 44, 31 },
  { 1010, 2, 0, 1, 0, 44, 31 },
  { 1024, 2, 0, 1, 0, 44, 31 },
  { 1036, 2, 0, 1, 0, 44, 31 },
  { 1048, 2, 0, 1, 0, 44, 31 },
  { 1060, 2, 0, 1, 0, 44, 31 },
  { 1082, 2, 0, 1, 0, 44, 31 },
  { 1096, 2, 0, 1, 0, 44, 31 },
  { 1108, 2, 0, 1, 0, 44, 31 },
  { 1120, 2, 0, 1, 0, 44, 31 },
  { 1132, 2, 0, 1, 0, 44, 31 },
  // 628: convert_long4, convert_long4_rte, convert_long4_rtn, convert_long4_rtp, convert_long4_rtz, convert_long4_sat, convert_long4_sat_rte, convert_long4_sat_rtn, convert_long4_sat_rtp, convert_long4_sat_rtz, 
  { 990, 2, 0, 1, 0, 44, 31 },
  { 1012, 2, 0, 1, 0, 44, 31 },
  { 1026, 2, 0, 1, 0, 44, 31 },
  { 1038, 2, 0, 1, 0, 44, 31 },
  { 1050, 2, 0, 1, 0, 44, 31 },
  { 1062, 2, 0, 1, 0, 44, 31 },
  { 1084, 2, 0, 1, 0, 44, 31 },
  { 1098, 2, 0, 1, 0, 44, 31 },
  { 1110, 2, 0, 1, 0, 44, 31 },
  { 1122, 2, 0, 1, 0, 44, 31 },
  { 1134, 2, 0, 1, 0, 44, 31 },
  // 639: convert_long8, convert_long8_rte, convert_long8_rtn, convert_long8_rtp, convert_long8_rtz, convert_long8_sat, convert_long8_sat_rte, convert_long8_sat_rtn, convert_long8_sat_rtp, convert_long8_sat_rtz, 
  { 992, 2, 0, 1, 0, 44, 31 },
  { 1014, 2, 0, 1, 0, 44, 31 },
  { 1028, 2, 0, 1, 0, 44, 31 },
  { 1040, 2, 0, 1, 0, 44, 31 },
  { 1052, 2, 0, 1, 0, 44, 31 },
  { 1064, 2, 0, 1, 0, 44, 31 },
  { 1086, 2, 0, 1, 0, 44, 31 },
  { 1100, 2, 0, 1, 0, 44, 31 },
  { 1112, 2, 0, 1, 0, 44, 31 },
  { 1124, 2, 0, 1, 0, 44, 31 },
  { 1136, 2, 0, 1, 0, 44, 31 },
  // 650: convert_long16, convert_long16_rte, convert_long16_rtn, convert_long16_rtp, convert_long16_rtz, convert_long16_sat, convert_long16_sat_rte, convert_long16_sat_rtn, convert_long16_sat_rtp, convert_long16_sat_rtz, 
  { 994, 2, 0, 1, 0, 44, 31 },
  { 1016, 2, 0, 1, 0, 44, 31 },
  { 1030, 2, 0, 1, 0, 44, 31 },
  { 1042, 2, 0, 1, 0, 44, 31 },
  { 1054, 2, 0, 1, 0, 44, 31 },
  { 1066, 2, 0, 1, 0, 44, 31 },
  { 1088, 2, 0, 1, 0, 44, 31 },
  { 1102, 2, 0, 1, 0, 44, 31 },
  { 1114, 2, 0, 1, 0, 44, 31 },
  { 1126, 2, 0, 1, 0, 44, 31 },
  { 1138, 2, 0, 1, 0, 44, 31 },
  // 661: convert_ulong, convert_ulong_rte, convert_ulong_rtn, convert_ulong_rtp, convert_ulong_rtz, convert_ulong_sat, convert_ulong_sat_rte, convert_ulong_sat_rtn, convert_ulong_sat_rtp, convert_ulong_sat_rtz, 
  { 1148, 2, 0, 1, 0, 44, 31 },
  { 1164, 2, 0, 1, 0, 44, 31 },
  { 1176, 2, 0, 1, 0, 44, 31 },
  { 1188, 2, 0, 1, 0, 44, 31 },
  { 1200, 2, 0, 1, 0, 44, 31 },
  { 1220, 2, 0, 1, 0, 44, 31 },
  { 1236, 2, 0, 1, 0, 44, 31 },
  { 1248, 2, 0, 1, 0, 44, 31 },
  { 1260, 2, 0, 1, 0, 44, 31 },
  { 1272, 2, 0, 1, 0, 44, 31 },
  { 1292, 2, 0, 1, 0, 44, 31 },
  // 672: convert_ulong2, convert_ulong2_rte, convert_ulong2_rtn, convert_ulong2_rtp, convert_ulong2_rtz, convert_ulong2_sat, convert_ulong2_sat_rte, convert_ulong2_sat_rtn, convert_ulong2_sat_rtp, convert_ulong2_sat_rtz, 
  { 1152, 2, 0, 1, 0, 44, 31 },
  { 1166, 2, 0, 1, 0, 44, 31 },
  { 1178, 2, 0, 1, 0, 44, 31 },
  { 1190, 2, 0, 1, 0, 44, 31 },
  { 1202, 2, 0, 1, 0, 44, 31 },
  { 1224, 2, 0, 1, 0, 44, 31 },
  { 1238, 2, 0, 1, 0, 44, 31 },
  { 1250, 2, 0, 1, 0, 44, 31 },
  { 1262, 2, 0, 1, 0, 44, 31 },
  { 1274, 2, 0, 1, 0, 44, 31 },
  { 1296, 2, 0, 1, 0, 44, 31 },
  // 683: convert_ulong3, convert_ulong3_rte, convert_ulong3_rtn, convert_ulong3_rtp, convert_ulong3_rtz, convert_ulong3_sat, convert_ulong3_sat_rte, convert_ulong3_sat_rtn, convert_ulong3_sat_rtp, convert_ulong3_sat_rtz, 
  { 1154, 2, 0, 1, 0, 44, 31 },
  { 1168, 2, 0, 1, 0, 44, 31 },
  { 1180, 2, 0, 1, 0, 44, 31 },
  { 1192, 2, 0, 1, 0, 44, 31 },
  { 1204, 2, 0, 1, 0, 44, 31 },
  { 1226, 2, 0, 1, 0, 44, 31 },
  { 1240, 2, 0, 1, 0, 44, 31 },
  { 1252, 2, 0, 1, 0, 44, 31 },
  { 1264, 2, 0, 1, 0, 44, 31 },
  { 1276, 2, 0, 1, 0, 44, 31 },
  { 1298, 2, 0, 1, 0, 44, 31 },
  // 694: convert_ulong4, convert_ulong4_rte, convert_ulong4_rtn, convert_ulong4_rtp, convert_ulong4_rtz, convert_ulong4_sat, convert_ulong4_sat_rte, convert_ulong4_sat_rtn, convert_ulong4_sat_rtp, convert_ulong4_sat_rtz, 
  { 1156, 2, 0, 1, 0, 44, 31 },
  { 1170, 2, 0, 1, 0, 44, 31 },
  { 1182, 2, 0, 1, 0, 44, 31 },
  { 1194, 2, 0, 1, 0, 44, 31 },
  { 1206, 2, 0, 1, 0, 44, 31 },
  { 1228, 2, 0, 1, 0, 44, 31 },
  { 1242, 2, 0, 1, 0, 44, 31 },
  { 1254, 2, 0, 1, 0, 44, 31 },
  { 1266, 2, 0, 1, 0, 44, 31 },
  { 1278, 2, 0, 1, 0, 44, 31 },
  { 1300, 2, 0, 1, 0, 44, 31 },
  // 705: convert_ulong8, convert_ulong8_rte, convert_ulong8_rtn, convert_ulong8_rtp, convert_ulong8_rtz, convert_ulong8_sat, convert_ulong8_sat_rte, convert_ulong8_sat_rtn, convert_ulong8_sat_rtp, convert_ulong8_sat_rtz, 
  { 1158, 2, 0, 1, 0, 44, 31 },
  { 1172, 2, 0, 1, 0, 44, 31 },
  { 1184, 2, 0, 1, 0, 44, 31 },
  { 1196, 2, 0, 1, 0, 44, 31 },
  { 1208, 2, 0, 1, 0, 44, 31 },
  { 1230, 2, 0, 1, 0, 44, 31 },
  { 1244, 2, 0, 1, 0, 44, 31 },
  { 1256, 2, 0, 1, 0, 44, 31 },
  { 1268, 2, 0, 1, 0, 44, 31 },
  { 1280, 2, 0, 1, 0, 44, 31 },
  { 1302, 2, 0, 1, 0, 44, 31 },
  // 716: convert_ulong16, convert_ulong16_rte, convert_ulong16_rtn, convert_ulong16_rtp, convert_ulong16_rtz, convert_ulong16_sat, convert_ulong16_sat_rte, convert_ulong16_sat_rtn, convert_ulong16_sat_rtp, convert_ulong16_sat_rtz, 
  { 1160, 2, 0, 1, 0, 44, 31 },
  { 1174, 2, 0, 1, 0, 44, 31 },
  { 1186, 2, 0, 1, 0, 44, 31 },
  { 1198, 2, 0, 1, 0, 44, 31 },
  { 1210, 2, 0, 1, 0, 44, 31 },
  { 1232, 2, 0, 1, 0, 44, 31 },
  { 1246, 2, 0, 1, 0, 44, 31 },
  { 1258, 2, 0, 1, 0, 44, 31 },
  { 1270, 2, 0, 1, 0, 44, 31 },
  { 1282, 2, 0, 1, 0, 44, 31 },
  { 1304, 2, 0, 1, 0, 44, 31 },
  // 727: get_work_dim, 
  { 1308, 1, 0, 1, 0, 44, 31 },
  // 728: get_global_size, get_global_id, get_local_size, get_local_id, get_num_groups, get_group_id, get_global_offset, 
  { 1309, 2, 0, 1, 0, 44, 31 },
  // 729: get_enqueued_local_size, 
  { 1309, 2, 0, 0, 0, 44, 24 },
  // 730: get_global_linear_id, get_local_linear_id, 
  { 1311, 1, 0, 0, 0, 44, 24 },
  // 731: acos, acosh, acospi, asin, asinh, asinpi, atan, atanh, atanpi, cbrt, ceil, cos, cosh, cospi, erfc, erf, exp, exp2, exp10, expm1, fabs, floor, log, log2, log10, log1p, logb, rint, round, rsqrt, sin, sinh, sinpi, sqrt, tan, tanh, tanpi, tgamma, trunc, lgamma, degrees, radians, sign, 
  { 1314, 2, 0, 1, 0, 44, 31 },
  // 732: nan, 
  { 1316, 2, 0, 1, 0, 44, 31 },
  { 1318, 2, 0, 1, 0, 44, 31 },
  { 1320, 2, 0, 1, 0, 44, 31 },
  // 735: atan2, atan2pi, copysign, fdim, fmod, hypot, maxmag, minmag, nextafter, pow, powr, remainder, 
  { 1322, 3, 0, 1, 0, 44, 31 },
  // 736: fmax, fmin, 
  { 1322, 3, 0, 1, 0, 44, 31 },
  { 1325, 3, 0, 1, 0, 44, 31 },
  { 1328, 3, 0, 1, 0, 44, 31 },
  { 1331, 3, 0, 1, 0, 44, 31 },
  // 740: ilogb, 
  { 1334, 2, 0, 1, 0, 44, 31 },
  { 1336, 2, 0, 1, 0, 44, 31 },
  { 1338, 2, 0, 1, 0, 44, 31 },
  // 743: ldexp, 
  { 1340, 3, 0, 1, 0, 44, 31 },
  { 1343, 3, 0, 1, 0, 44, 31 },
  { 1346, 3, 0, 1, 0, 44, 31 },
  { 1349, 3, 0, 1, 0, 44, 31 },
  { 1352, 3, 0, 1, 0, 44, 31 },
  { 1355, 3, 0, 1, 0, 44, 31 },
  // 749: pown, rootn, 
  { 1340, 3, 0, 1, 0, 44, 31 },
  { 1346, 3, 0, 1, 0, 44, 31 },
  { 1352, 3, 0, 1, 0, 44, 31 },
  // 752: fma, mad, 
  { 1358, 4, 0, 1, 0, 44, 31 },
  // 753: fract, modf, sincos, 
  { 1362, 3, 0, 0, 0, 44, 7 },
  { 1386, 3, 0, 0, 0, 44, 7 },
  { 1412, 3, 0, 0, 0, 44, 7 },
  { 1436, 3, 0, 0, 0, 44, 24 },
  // 757: frexp, lgamma_r, 
  { 1365, 3, 0, 0, 0, 44, 7 },
  { 1372, 3, 0, 0, 0, 44, 7 },
  { 1375, 3, 0, 0, 0, 44, 7 },
  { 1391, 3, 0, 0, 0, 44, 7 },
  { 1394, 3, 0, 0, 0, 44, 7 },
  { 1397, 3, 0, 0, 0, 44, 7 },
  { 1415, 3, 0, 0, 0, 44, 7 },
  { 1418, 3, 0, 0, 0, 44, 7 },
  { 1421, 3, 0, 0, 0, 44, 7 },
  { 1439, 3, 0, 0, 0, 44, 24 },
  { 1442, 3, 0, 0, 0, 44, 24 },
  { 1445, 3, 0, 0, 0, 44, 24 },
  // 769: remquo, 
  { 1368, 4, 0, 0, 0, 44, 7 },
  { 1378, 4, 0, 0, 0, 44, 7 },
  { 1382, 4, 0, 0, 0, 44, 7 },
  { 1400, 4, 0, 0, 0, 44, 7 },
  { 1404, 4, 0, 0, 0, 44, 7 },
  { 1408, 4, 0, 0, 0, 44, 7 },
  { 1424, 4, 0, 0, 0, 44, 7 },
  { 1428, 4, 0, 0, 0, 44, 7 },
  { 1432, 4, 0, 0, 0, 44, 7 },
  { 1448, 4, 0, 0, 0, 44, 24 },
  { 1452, 4, 0, 0, 0, 44, 24 },
  { 1456, 4, 0, 0, 0, 44, 24 },
  // 781: half_cos, half_exp, half_exp2, half_exp10, half_log, half_log2, half_log10, half_recip, half_rsqrt, half_sin, half_sqrt, half_tan, native_cos, native_exp, native_exp2, native_exp10, native_log, native_log2, native_log10, native_recip, native_rsqrt, native_sin, native_sqrt, native_tan, 
  { 1460, 2, 0, 1, 0, 44, 31 },
  // 782: half_divide, half_powr, native_divide, native_powr, 
  { 1462, 3, 0, 1, 0, 44, 31 },
  // 783: abs, 
  { 1465, 2, 0, 1, 0, 44, 31 },
  // 784: clz, 
  { 1467, 2, 0, 1, 0, 44, 31 },
  // 785: popcount, 
  { 1467, 2, 0, 1, 0, 44, 28 },
  // 786: ctz, 
  { 1467, 2, 0, 1, 0, 44, 24 },
  // 787: abs_diff, 
  { 1469, 3, 0, 1, 0, 44, 31 },
  // 788: add_sat, hadd, rhadd, mul_hi, rotate, sub_sat, 
  { 1472, 3, 0, 1, 0, 44, 31 },
  // 789: max, min, 
  { 1472, 3, 0, 1, 0, 44, 31 },
  { 1475, 3, 0, 1, 0, 44, 31 },
  { 1322, 3, 0, 1, 0, 44, 31 },
  { 1325, 3, 0, 1, 0, 44, 31 },
  { 1328, 3, 0, 1, 0, 44, 31 },
  { 1331, 3, 0, 1, 0, 44, 31 },
  // 795: upsample, 
  { 1478, 3, 0, 1, 0, 44, 31 },
  { 1481, 3, 0, 1, 0, 44, 31 },
  { 1484, 3, 0, 1, 0, 44, 31 },
  { 1487, 3, 0, 1, 0, 44, 31 },
  { 1490, 3, 0, 1, 0, 44, 31 },
  { 1493, 3, 0, 1, 0, 44, 31 },
  // 801: clamp, 
  { 1496, 4, 0, 1, 0, 44, 31 },
  { 1500, 4, 0, 1, 0, 44, 31 },
  { 1358, 4, 0, 1, 0, 44, 31 },
  { 1533, 4, 0, 1, 0, 44, 31 },
  { 1537, 4, 0, 1, 0, 44, 31 },
  { 1541, 4, 0, 1, 0, 44, 31 },
  // 807: mad_hi, mad_sat, 
  { 1496, 4, 0, 1, 0, 44, 31 },
  // 808: mad24, 
  { 1506, 4, 0, 1, 0, 44, 31 },
  { 1510, 4, 0, 1, 0, 44, 31 },
  // 810: mul24, 
  { 1514, 3, 0, 1, 0, 44, 31 },
  { 1517, 3, 0, 1, 0, 44, 31 },
  // 812: step, 
  { 1322, 3, 0, 1, 0, 44, 31 },
  { 1522, 3, 0, 1, 0, 44, 31 },
  { 1525, 3, 0, 1, 0, 44, 31 },
  { 1528, 3, 0, 1, 0, 44, 31 },
  // 816: mix, 
  { 1358, 4, 0, 1, 0, 44, 31 },
  { 1545, 4, 0, 1, 0, 44, 31 },
  { 1549, 4, 0, 1, 0, 44, 31 },
  { 1553, 4, 0, 1, 0, 44, 31 },
  // 820: smoothstep, 
  { 1358, 4, 0, 1, 0, 44, 31 },
  { 1557, 4, 0, 1, 0, 44, 31 },
  { 1563, 4, 0, 1, 0, 44, 31 },
  { 1567, 4, 0, 1, 0, 44, 31 },
  // 824: length, 
  { 1571, 2, 0, 1, 0, 44, 31 },
  { 1573, 2, 0, 1, 0, 44, 31 },
  { 1575, 2, 0, 1, 0, 44, 31 },
  // 827: normalize, 
  { 1577, 2, 0, 1, 0, 44, 31 },
  { 1579, 2, 0, 1, 0, 44, 31 },
  { 1581, 2, 0, 1, 0, 44, 31 },
  // 830: fast_length, 
  { 1571, 2, 0, 1, 0, 44, 31 },
  // 831: fast_normalize, 
  { 1577, 2, 0, 1, 0, 44, 31 },
  // 832: cross, 
  { 1585, 3, 0, 1, 0, 44, 31 },
  { 1588, 3, 0, 1, 0, 44, 31 },
  { 1591, 3, 0, 1, 0, 44, 31 },
  { 1594, 3, 0, 1, 0, 44, 31 },
  { 1597, 3, 0, 1, 0, 44, 31 },
  { 1600, 3, 0, 1, 0, 44, 31 },
  // 838: dot, 
  { 1603, 3, 0, 1, 0, 44, 31 },
  { 1606, 3, 0, 1, 0, 44, 31 },
  { 1609, 3, 0, 1, 0, 44, 31 },
  { 6809, 3, 0, 1, 0, 48, 31 },
  { 6812, 3, 0, 1, 0, 48, 31 },
  { 6815, 3, 0, 1, 0, 48, 31 },
  { 6818, 3, 0, 1, 0, 48, 31 },
  // 845: distance, 
  { 1603, 3, 0, 1, 0, 44, 31 },
  { 1606, 3, 0, 1, 0, 44, 31 },
  { 1609, 3, 0, 1, 0, 44, 31 },
  // 848: fast_distance, 
  { 1603, 3, 0, 1, 0, 44, 31 },
  // 849: isfinite, isinf, isnan, isnormal, signbit, 
  { 1334, 2, 0, 1, 0, 44, 31 },
  { 686, 2, 0, 1, 0, 44, 31 },
  { 1614, 2, 0, 1, 0, 44, 31 },
  { 704, 2, 0, 1, 0, 44, 31 },
  { 1616, 2, 0, 1, 0, 44, 31 },
  // 854: any, all, 
  { 1618, 2, 0, 1, 0, 44, 31 },
  // 855: isequal, isnotequal, isgreater, isgreaterequal, isless, islessequal, islessgreater, isordered, isunordered, 
  { 1620, 3, 0, 1, 0, 44, 31 },
  { 1623, 3, 0, 1, 0, 44, 31 },
  { 1626, 3, 0, 1, 0, 44, 31 },
  { 1629, 3, 0, 1, 0, 44, 31 },
  { 1632, 3, 0, 1, 0, 44, 31 },
  // 860: bitselect, 
  { 1635, 4, 0, 1, 0, 44, 31 },
  // 861: select, 
  { 1639, 4, 0, 1, 0, 44, 31 },
  { 1643, 4, 0, 1, 0, 44, 31 },
  { 1647, 4, 0, 1, 0, 44, 31 },
  { 1651, 4, 0, 1, 0, 44, 31 },
  { 1655, 4, 0, 1, 0, 44, 31 },
  { 1659, 4, 0, 1, 0, 44, 31 },
  { 1663, 4, 0, 1, 0, 44, 31 },
  { 1667, 4, 0, 1, 0, 44, 31 },
  { 1671, 4, 0, 1, 0, 44, 31 },
  { 1675, 4, 0, 1, 0, 44, 31 },
  // 871: vload2, 
  { 1679, 3, 1, 0, 0, 44, 7 },
  { 1682, 3, 1, 0, 0, 44, 7 },
  { 1685, 3, 1, 0, 0, 44, 7 },
  { 1688, 3, 1, 0, 0, 44, 7 },
  { 1691, 3, 1, 0, 0, 44, 7 },
  { 1694, 3, 1, 0, 0, 44, 7 },
  { 1697, 3, 1, 0, 0, 44, 7 },
  { 1700, 3, 1, 0, 0, 44, 7 },
  { 1703, 3, 1, 0, 0, 44, 7 },
  { 1706, 3, 1, 0, 0, 44, 7 },
  { 1709, 3, 1, 0, 0, 44, 7 },
  { 2072, 3, 1, 0, 0, 44, 7 },
  { 2075, 3, 1, 0, 0, 44, 7 },
  { 2078, 3, 1, 0, 0, 44, 7 },
  { 2081, 3, 1, 0, 0, 44, 7 },
  { 2084, 3, 1, 0, 0, 44, 7 },
  { 2087, 3, 1, 0, 0, 44, 7 },
  { 2092, 3, 1, 0, 0, 44, 7 },
  { 2095, 3, 1, 0, 0, 44, 7 },
  { 2098, 3, 1, 0, 0, 44, 7 },
  { 2101, 3, 1, 0, 0, 44, 7 },
  { 2104, 3, 1, 0, 0, 44, 7 },
  { 2465, 3, 1, 0, 0, 44, 7 },
  { 2468, 3, 1, 0, 0, 44, 7 },
  { 2471, 3, 1, 0, 0, 44, 7 },
  { 2474, 3, 1, 0, 0, 44, 7 },
  { 2477, 3, 1, 0, 0, 44, 7 },
  { 2480, 3, 1, 0, 0, 44, 7 },
  { 2483, 3, 1, 0, 0, 44, 7 },
  { 2486, 3, 1, 0, 0, 44, 7 },
  { 2489, 3, 1, 0, 0, 44, 7 },
  { 2492, 3, 1, 0, 0, 44, 7 },
  { 2495, 3, 1, 0, 0, 44, 7 },
  { 2850, 3, 1, 0, 0, 44, 24 },
  { 2853, 3, 1, 0, 0, 44, 24 },
  { 2856, 3, 1, 0, 0, 44, 24 },
  { 2859, 3, 1, 0, 0, 44, 24 },
  { 2862, 3, 1, 0, 0, 44, 24 },
  { 2865, 3, 1, 0, 0, 44, 24 },
  { 2868, 3, 1, 0, 0, 44, 24 },
  { 2871, 3, 1, 0, 0, 44, 24 },
  { 2874, 3, 1, 0, 0, 44, 24 },
  { 2877, 3, 1, 0, 0, 44, 24 },
  { 2880, 3, 1, 0, 0, 44, 24 },
  { 3249, 3, 1, 0, 0, 44, 31 },
  { 3252, 3, 1, 0, 0, 44, 31 },
  { 3255, 3, 1, 0, 0, 44, 31 },
  { 3258, 3, 1, 0, 0, 44, 31 },
  { 3261, 3, 1, 0, 0, 44, 31 },
  { 3264, 3, 1, 0, 0, 44, 31 },
  { 3267, 3, 1, 0, 0, 44, 31 },
  { 3270, 3, 1, 0, 0, 44, 31 },
  { 3273, 3, 1, 0, 0, 44, 31 },
  { 3276, 3, 1, 0, 0, 44, 31 },
  { 3279, 3, 1, 0, 0, 44, 31 },
  // 926: vstore2, 
  { 1712, 4, 0, 0, 0, 44, 7 },
  { 1716, 4, 0, 0, 0, 44, 7 },
  { 1720, 4, 0, 0, 0, 44, 7 },
  { 1724, 4, 0, 0, 0, 44, 7 },
  { 1728, 4, 0, 0, 0, 44, 7 },
  { 1732, 4, 0, 0, 0, 44, 7 },
  { 1736, 4, 0, 0, 0, 44, 7 },
  { 1740, 4, 0, 0, 0, 44, 7 },
  { 1744, 4, 0, 0, 0, 44, 7 },
  { 1748, 4, 0, 0, 0, 44, 7 },
  { 1752, 4, 0, 0, 0, 44, 7 },
  { 2107, 4, 0, 0, 0, 44, 7 },
  { 2111, 4, 0, 0, 0, 44, 7 },
  { 2115, 4, 0, 0, 0, 44, 7 },
  { 2119, 4, 0, 0, 0, 44, 7 },
  { 2123, 4, 0, 0, 0, 44, 7 },
  { 2129, 4, 0, 0, 0, 44, 7 },
  { 2133, 4, 0, 0, 0, 44, 7 },
  { 2137, 4, 0, 0, 0, 44, 7 },
  { 2141, 4, 0, 0, 0, 44, 7 },
  { 2145, 4, 0, 0, 0, 44, 7 },
  { 2149, 4, 0, 0, 0, 44, 7 },
  { 2498, 4, 0, 0, 0, 44, 7 },
  { 2502, 4, 0, 0, 0, 44, 7 },
  { 2506, 4, 0, 0, 0, 44, 7 },
  { 2510, 4, 0, 0, 0, 44, 7 },
  { 2514, 4, 0, 0, 0, 44, 7 },
  { 2518, 4, 0, 0, 0, 44, 7 },
  { 2522, 4, 0, 0, 0, 44, 7 },
  { 2526, 4, 0, 0, 0, 44, 7 },
  { 2530, 4, 0, 0, 0, 44, 7 },
  { 2534, 4, 0, 0, 0, 44, 7 },
  { 2538, 4, 0, 0, 0, 44, 7 },
  { 2883, 4, 0, 0, 0, 44, 24 },
  { 2887, 4, 0, 0, 0, 44, 24 },
  { 2891, 4, 0, 0, 0, 44, 24 },
  { 2895, 4, 0, 0, 0, 44, 24 },
  { 2899, 4, 0, 0, 0, 44, 24 },
  { 2903, 4, 0, 0, 0, 44, 24 },
  { 2907, 4, 0, 0, 0, 44, 24 },
  { 2911, 4, 0, 0, 0, 44, 24 },
  { 2915, 4, 0, 0, 0, 44, 24 },
  { 2919, 4, 0, 0, 0, 44, 24 },
  { 2923, 4, 0, 0, 0, 44, 24 },
  // 970: vload3, 
  { 1758, 3, 1, 0, 0, 44, 7 },
  { 1761, 3, 1, 0, 0, 44, 7 },
  { 1764, 3, 1, 0, 0, 44, 7 },
  { 1767, 3, 1, 0, 0, 44, 7 },
  { 1770, 3, 1, 0, 0, 44, 7 },
  { 1773, 3, 1, 0, 0, 44, 7 },
  { 1776, 3, 1, 0, 0, 44, 7 },
  { 1779, 3, 1, 0, 0, 44, 7 },
  { 1782, 3, 1, 0, 0, 44, 7 },
  { 1785, 3, 1, 0, 0, 44, 7 },
  { 1788, 3, 1, 0, 0, 44, 7 },
  { 2153, 3, 1, 0, 0, 44, 7 },
  { 2156, 3, 1, 0, 0, 44, 7 },
  { 2159, 3, 1, 0, 0, 44, 7 },
  { 2162, 3, 1, 0, 0, 44, 7 },
  { 2167, 3, 1, 0, 0, 44, 7 },
  { 2170, 3, 1, 0, 0, 44, 7 },
  { 2173, 3, 1, 0, 0, 44, 7 },
  { 2176, 3, 1, 0, 0, 44, 7 },
  { 2179, 3, 1, 0, 0, 44, 7 },
  { 2182, 3, 1, 0, 0, 44, 7 },
  { 2185, 3, 1, 0, 0, 44, 7 },
  { 2542, 3, 1, 0, 0, 44, 7 },
  { 2545, 3, 1, 0, 0, 44, 7 },
  { 2548, 3, 1, 0, 0, 44, 7 },
  { 2551, 3, 1, 0, 0, 44, 7 },
  { 2554, 3, 1, 0, 0, 44, 7 },
  { 2557, 3, 1, 0, 0, 44, 7 },
  { 2560, 3, 1, 0, 0, 44, 7 },
  { 2563, 3, 1, 0, 0, 44, 7 },
  { 2566, 3, 1, 0, 0, 44, 7 },
  { 2569, 3, 1, 0, 0, 44, 7 },
  { 2572, 3, 1, 0, 0, 44, 7 },
  { 2927, 3, 1, 0, 0, 44, 24 },
  { 2930, 3, 1, 0, 0, 44, 24 },
  { 2933, 3, 1, 0, 0, 44, 24 },
  { 2936, 3, 1, 0, 0, 44, 24 },
  { 2939, 3, 1, 0, 0, 44, 24 },
  { 2942, 3, 1, 0, 0, 44, 24 },
  { 2945, 3, 1, 0, 0, 44, 24 },
  { 2948, 3, 1, 0, 0, 44, 24 },
  { 2951, 3, 1, 0, 0, 44, 24 },
  { 2954, 3, 1, 0, 0, 44, 24 },
  { 2957, 3, 1, 0, 0, 44, 24 },
  { 3282, 3, 1, 0, 0, 44, 31 },
  { 3285, 3, 1, 0, 0, 44, 31 },
  { 3288, 3, 1, 0, 0, 44, 31 },
  { 3291, 3, 1, 0, 0, 44, 31 },
  { 3294, 3, 1, 0, 0, 44, 31 },
  { 3297, 3, 1, 0, 0, 44, 31 },
  { 3300, 3, 1, 0, 0, 44, 31 },
  { 3303, 3, 1, 0, 0, 44, 31 },
  { 3306, 3, 1, 0, 0, 44, 31 },
  { 3309, 3, 1, 0, 0, 44, 31 },
  { 3312, 3, 1, 0, 0, 44, 31 },
  // 1025: vstore3, 
  { 1791, 4, 0, 0, 0, 44, 7 },
  { 1795, 4, 0, 0, 0, 44, 7 },
  { 1799, 4, 0, 0, 0, 44, 7 },
  { 1803, 4, 0, 0, 0, 44, 7 },
  { 1807, 4, 0, 0, 0, 44, 7 },
  { 1811, 4, 0, 0, 0, 44, 7 },
  { 1815, 4, 0, 0, 0, 44, 7 },
  { 1819, 4, 0, 0, 0, 44, 7 },
  { 1823, 4, 0, 0, 0, 44, 7 },
  { 1827, 4, 0, 0, 0, 44, 7 },
  { 1831, 4, 0, 0, 0, 44, 7 },
  { 2188, 4, 0, 0, 0, 44, 7 },
  { 2192, 4, 0, 0, 0, 44, 7 },
  { 2196, 4, 0, 0, 0, 44, 7 },
  { 2200, 4, 0, 0, 0, 44, 7 },
  { 2204, 4, 0, 0, 0, 44, 7 },
  { 2208, 4, 0, 0, 0, 44, 7 },
  { 2212, 4, 0, 0, 0, 44, 7 },
  { 2216, 4, 0, 0, 0, 44, 7 },
  { 2220, 4, 0, 0, 0, 44, 7 },
  { 2224, 4, 0, 0, 0, 44, 7 },
  { 2228, 4, 0, 0, 0, 44, 7 },
  { 2575, 4, 0, 0, 0, 44, 7 },
  { 2579, 4, 0, 0, 0, 44, 7 },
  { 2583, 4, 0, 0, 0, 44, 7 },
  { 2587, 4, 0, 0, 0, 44, 7 },
  { 2591, 4, 0, 0, 0, 44, 7 },
  { 2595, 4, 0, 0, 0, 44, 7 },
  { 2599, 4, 0, 0, 0, 44, 7 },
  { 2603, 4, 0, 0, 0, 44, 7 },
  { 2607, 4, 0, 0, 0, 44, 7 },
  { 2611, 4, 0, 0, 0, 44, 7 },
  { 2615, 4, 0, 0, 0, 44, 7 },
  { 2962, 4, 0, 0, 0, 44, 24 },
  { 2966, 4, 0, 0, 0, 44, 24 },
  { 2970, 4, 0, 0, 0, 44, 24 },
  { 2974, 4, 0, 0, 0, 44, 24 },
  { 2978, 4, 0, 0, 0, 44, 24 },
  { 2982, 4, 0, 0, 0, 44, 24 },
  { 2986, 4, 0, 0, 0, 44, 24 },
  { 2990, 4, 0, 0, 0, 44, 24 },
  { 2994, 4, 0, 0, 0, 44, 24 },
  { 2998, 4, 0, 0, 0, 44, 24 },
  { 3006, 4, 0, 0, 0, 44, 24 },
  // 1069: vload4, 
  { 1835, 3, 1, 0, 0, 44, 7 },
  { 1838, 3, 1, 0, 0, 44, 7 },
  { 1841, 3, 1, 0, 0, 44, 7 },
  { 1844, 3, 1, 0, 0, 44, 7 },
  { 1847, 3, 1, 0, 0, 44, 7 },
  { 1850, 3, 1, 0, 0, 44, 7 },
  { 1853, 3, 1, 0, 0, 44, 7 },
  { 1856, 3, 1, 0, 0, 44, 7 },
  { 1859, 3, 1, 0, 0, 44, 7 },
  { 1862, 3, 1, 0, 0, 44, 7 },
  { 1865, 3, 1, 0, 0, 44, 7 },
  { 2232, 3, 1, 0, 0, 44, 7 },
  { 2235, 3, 1, 0, 0, 44, 7 },
  { 2238, 3, 1, 0, 0, 44, 7 },
  { 2241, 3, 1, 0, 0, 44, 7 },
  { 2244, 3, 1, 0, 0, 44, 7 },
  { 2247, 3, 1, 0, 0, 44, 7 },
  { 2250, 3, 1, 0, 0, 44, 7 },
  { 2253, 3, 1, 0, 0, 44, 7 },
  { 2256, 3, 1, 0, 0, 44, 7 },
  { 2259, 3, 1, 0, 0, 44, 7 },
  { 2262, 3, 1, 0, 0, 44, 7 },
  { 2619, 3, 1, 0, 0, 44, 7 },
  { 2622, 3, 1, 0, 0, 44, 7 },
  { 2625, 3, 1, 0, 0, 44, 7 },
  { 2628, 3, 1, 0, 0, 44, 7 },
  { 2631, 3, 1, 0, 0, 44, 7 },
  { 2634, 3, 1, 0, 0, 44, 7 },
  { 2637, 3, 1, 0, 0, 44, 7 },
  { 2640, 3, 1, 0, 0, 44, 7 },
  { 2643, 3, 1, 0, 0, 44, 7 },
  { 2646, 3, 1, 0, 0, 44, 7 },
  { 2649, 3, 1, 0, 0, 44, 7 },
  { 3010, 3, 1, 0, 0, 44, 24 },
  { 3013, 3, 1, 0, 0, 44, 24 },
  { 3016, 3, 1, 0, 0, 44, 24 },
  { 3019, 3, 1, 0, 0, 44, 24 },
  { 3022, 3, 1, 0, 0, 44, 24 },
  { 3025, 3, 1, 0, 0, 44, 24 },
  { 3028, 3, 1, 0, 0, 44, 24 },
  { 3031, 3, 1, 0, 0, 44, 24 },
  { 3034, 3, 1, 0, 0, 44, 24 },
  { 3039, 3, 1, 0, 0, 44, 24 },
  { 3042, 3, 1, 0, 0, 44, 24 },
  { 3315, 3, 1, 0, 0, 44, 31 },
  { 3318, 3, 1, 0, 0, 44, 31 },
  { 3321, 3, 1, 0, 0, 44, 31 },
  { 3324, 3, 1, 0, 0, 44, 31 },
  { 3327, 3, 1, 0, 0, 44, 31 },
  { 3330, 3, 1, 0, 0, 44, 31 },
  { 3333, 3, 1, 0, 0, 44, 31 },
  { 3336, 3, 1, 0, 0, 44, 31 },
  { 3339, 3, 1, 0, 0, 44, 31 },
  { 3342, 3, 1, 0, 0, 44, 31 },
  { 3345, 3, 1, 0, 0, 44, 31 },
  // 1124: vstore4, 
  { 1868, 4, 0, 0, 0, 44, 7 },
  { 1872, 4, 0, 0, 0, 44, 7 },
  { 1876, 4, 0, 0, 0, 44, 7 },
  { 1880, 4, 0, 0, 0, 44, 7 },
  { 1884, 4, 0, 0, 0, 44, 7 },
  { 1888, 4, 0, 0, 0, 44, 7 },
  { 1892, 4, 0, 0, 0, 44, 7 },
  { 1896, 4, 0, 0, 0, 44, 7 },
  { 1900, 4, 0, 0, 0, 44, 7 },
  { 1904, 4, 0, 0, 0, 44, 7 },
  { 1908, 4, 0, 0, 0, 44, 7 },
  { 2265, 4, 0, 0, 0, 44, 7 },
  { 2269, 4, 0, 0, 0, 44, 7 },
  { 2273, 4, 0, 0, 0, 44, 7 },
  { 2277, 4, 0, 0, 0, 44, 7 },
  { 2281, 4, 0, 0, 0, 44, 7 },
  { 2285, 4, 0, 0, 0, 44, 7 },
  { 2289, 4, 0, 0, 0, 44, 7 },
  { 2293, 4, 0, 0, 0, 44, 7 },
  { 2297, 4, 0, 0, 0, 44, 7 },
  { 2301, 4, 0, 0, 0, 44, 7 },
  { 2305, 4, 0, 0, 0, 44, 7 },
  { 2652, 4, 0, 0, 0, 44, 7 },
  { 2656, 4, 0, 0, 0, 44, 7 },
  { 2660, 4, 0, 0, 0, 44, 7 },
  { 2664, 4, 0, 0, 0, 44, 7 },
  { 2668, 4, 0, 0, 0, 44, 7 },
  { 2672, 4, 0, 0, 0, 44, 7 },
  { 2676, 4, 0, 0, 0, 44, 7 },
  { 2680, 4, 0, 0, 0, 44, 7 },
  { 2684, 4, 0, 0, 0, 44, 7 },
  { 2688, 4, 0, 0, 0, 44, 7 },
  { 2692, 4, 0, 0, 0, 44, 7 },
  { 3045, 4, 0, 0, 0, 44, 24 },
  { 3049, 4, 0, 0, 0, 44, 24 },
  { 3053, 4, 0, 0, 0, 44, 24 },
  { 3057, 4, 0, 0, 0, 44, 24 },
  { 3061, 4, 0, 0, 0, 44, 24 },
  { 3065, 4, 0, 0, 0, 44, 24 },
  { 3069, 4, 0, 0, 0, 44, 24 },
  { 3073, 4, 0, 0, 0, 44, 24 },
  { 3079, 4, 0, 0, 0, 44, 24 },
  { 3083, 4, 0, 0, 0, 44, 24 },
  { 3087, 4, 0, 0, 0, 44, 24 },
  // 1168: vload8, 
  { 1912, 3, 1, 0, 0, 44, 7 },
  { 1915, 3, 1, 0, 0, 44, 7 },
  { 1918, 3, 1, 0, 0, 44, 7 },
  { 1921, 3, 1, 0, 0, 44, 7 },
  { 1924, 3, 1, 0, 0, 44, 7 },
  { 1927, 3, 1, 0, 0, 44, 7 },
  { 1930, 3, 1, 0, 0, 44, 7 },
  { 1933, 3, 1, 0, 0, 44, 7 },
  { 1936, 3, 1, 0, 0, 44, 7 },
  { 1939, 3, 1, 0, 0, 44, 7 },
  { 1942, 3, 1, 0, 0, 44, 7 },
  { 2309, 3, 1, 0, 0, 44, 7 },
  { 2312, 3, 1, 0, 0, 44, 7 },
  { 2315, 3, 1, 0, 0, 44, 7 },
  { 2318, 3, 1, 0, 0, 44, 7 },
  { 2321, 3, 1, 0, 0, 44, 7 },
  { 2324, 3, 1, 0, 0, 44, 7 },
  { 2327, 3, 1, 0, 0, 44, 7 },
  { 2330, 3, 1, 0, 0, 44, 7 },
  { 2333, 3, 1, 0, 0, 44, 7 },
  { 2336, 3, 1, 0, 0, 44, 7 },
  { 2339, 3, 1, 0, 0, 44, 7 },
  { 2696, 3, 1, 0, 0, 44, 7 },
  { 2699, 3, 1, 0, 0, 44, 7 },
  { 2702, 3, 1, 0, 0, 44, 7 },
  { 2705, 3, 1, 0, 0, 44, 7 },
  { 2708, 3, 1, 0, 0, 44, 7 },
  { 2711, 3, 1, 0, 0, 44, 7 },
  { 2714, 3, 1, 0, 0, 44, 7 },
  { 2717, 3, 1, 0, 0, 44, 7 },
  { 2720, 3, 1, 0, 0, 44, 7 },
  { 2723, 3, 1, 0, 0, 44, 7 },
  { 2726, 3, 1, 0, 0, 44, 7 },
  { 3091, 3, 1, 0, 0, 44, 24 },
  { 3094, 3, 1, 0, 0, 44, 24 },
  { 3097, 3, 1, 0, 0, 44, 24 },
  { 3100, 3, 1, 0, 0, 44, 24 },
  { 3103, 3, 1, 0, 0, 44, 24 },
  { 3106, 3, 1, 0, 0, 44, 24 },
  { 3109, 3, 1, 0, 0, 44, 24 },
  { 3114, 3, 1, 0, 0, 44, 24 },
  { 3117, 3, 1, 0, 0, 44, 24 },
  { 3120, 3, 1, 0, 0, 44, 24 },
  { 3123, 3, 1, 0, 0, 44, 24 },
  { 3348, 3, 1, 0, 0, 44, 31 },
  { 3351, 3, 1, 0, 0, 44, 31 },
  { 3354, 3, 1, 0, 0, 44, 31 },
  { 3357, 3, 1, 0, 0, 44, 31 },
  { 3360, 3, 1, 0, 0, 44, 31 },
  { 3363, 3, 1, 0, 0, 44, 31 },
  { 3366, 3, 1, 0, 0, 44, 31 },
  { 3369, 3, 1, 0, 0, 44, 31 },
  { 3372, 3, 1, 0, 0, 44, 31 },
  { 3375, 3, 1, 0, 0, 44, 31 },
  { 3378, 3, 1, 0, 0, 44, 31 },
  // 1223: vstore8, 
  { 1945, 4, 0, 0, 0, 44, 7 },
  { 1949, 4, 0, 0, 0, 44, 7 },
  { 1953, 4, 0, 0, 0, 44, 7 },
  { 1957, 4, 0, 0, 0, 44, 7 },
  { 1961, 4, 0, 0, 0, 44, 7 },
  { 1965, 4, 0, 0, 0, 44, 7 },
  { 1969, 4, 0, 0, 0, 44, 7 },
  { 1973, 4, 0, 0, 0, 44, 7 },
  { 1977, 4, 0, 0, 0, 44, 7 },
  { 1983, 4, 0, 0, 0, 44, 7 },
  { 1987, 4, 0, 0, 0, 44, 7 },
  { 2342, 4, 0, 0, 0, 44, 7 },
  { 2346, 4, 0, 0, 0, 44, 7 },
  { 2350, 4, 0, 0, 0, 44, 7 },
  { 2354, 4, 0, 0, 0, 44, 7 },
  { 2358, 4, 0, 0, 0, 44, 7 },
  { 2362, 4, 0, 0, 0, 44, 7 },
  { 2366, 4, 0, 0, 0, 44, 7 },
  { 2370, 4, 0, 0, 0, 44, 7 },
  { 2374, 4, 0, 0, 0, 44, 7 },
  { 2380, 4, 0, 0, 0, 44, 7 },
  { 2384, 4, 0, 0, 0, 44, 7 },
  { 2729, 4, 0, 0, 0, 44, 7 },
  { 2733, 4, 0, 0, 0, 44, 7 },
  { 2737, 4, 0, 0, 0, 44, 7 },
  { 2741, 4, 0, 0, 0, 44, 7 },
  { 2745, 4, 0, 0, 0, 44, 7 },
  { 2749, 4, 0, 0, 0, 44, 7 },
  { 2753, 4, 0, 0, 0, 44, 7 },
  { 2757, 4, 0, 0, 0, 44, 7 },
  { 2761, 4, 0, 0, 0, 44, 7 },
  { 2765, 4, 0, 0, 0, 44, 7 },
  { 2769, 4, 0, 0, 0, 44, 7 },
  { 3126, 4, 0, 0, 0, 44, 24 },
  { 3130, 4, 0, 0, 0, 44, 24 },
  { 3134, 4, 0, 0, 0, 44, 24 },
  { 3138, 4, 0, 0, 0, 44, 24 },
  { 3142, 4, 0, 0, 0, 44, 24 },
  { 3146, 4, 0, 0, 0, 44, 24 },
  { 3152, 4, 0, 0, 0, 44, 24 },
  { 3156, 4, 0, 0, 0, 44, 24 },
  { 3160, 4, 0, 0, 0, 44, 24 },
  { 3164, 4, 0, 0, 0, 44, 24 },
  { 3168, 4, 0, 0, 0, 44, 24 },
  // 1267: vload16, 
  { 1991, 3, 1, 0, 0, 44, 7 },
  { 1994, 3, 1, 0, 0, 44, 7 },
  { 1997, 3, 1, 0, 0, 44, 7 },
  { 2000, 3, 1, 0, 0, 44, 7 },
  { 2003, 3, 1, 0, 0, 44, 7 },
  { 2006, 3, 1, 0, 0, 44, 7 },
  { 2009, 3, 1, 0, 0, 44, 7 },
  { 2012, 3, 1, 0, 0, 44, 7 },
  { 2017, 3, 1, 0, 0, 44, 7 },
  { 2020, 3, 1, 0, 0, 44, 7 },
  { 2023, 3, 1, 0, 0, 44, 7 },
  { 2388, 3, 1, 0, 0, 44, 7 },
  { 2391, 3, 1, 0, 0, 44, 7 },
  { 2394, 3, 1, 0, 0, 44, 7 },
  { 2397, 3, 1, 0, 0, 44, 7 },
  { 2400, 3, 1, 0, 0, 44, 7 },
  { 2403, 3, 1, 0, 0, 44, 7 },
  { 2406, 3, 1, 0, 0, 44, 7 },
  { 2409, 3, 1, 0, 0, 44, 7 },
  { 2412, 3, 1, 0, 0, 44, 7 },
  { 2415, 3, 1, 0, 0, 44, 7 },
  { 2418, 3, 1, 0, 0, 44, 7 },
  { 2773, 3, 1, 0, 0, 44, 7 },
  { 2776, 3, 1, 0, 0, 44, 7 },
  { 2779, 3, 1, 0, 0, 44, 7 },
  { 2782, 3, 1, 0, 0, 44, 7 },
  { 2785, 3, 1, 0, 0, 44, 7 },
  { 2788, 3, 1, 0, 0, 44, 7 },
  { 2791, 3, 1, 0, 0, 44, 7 },
  { 2794, 3, 1, 0, 0, 44, 7 },
  { 2797, 3, 1, 0, 0, 44, 7 },
  { 2800, 3, 1, 0, 0, 44, 7 },
  { 2803, 3, 1, 0, 0, 44, 7 },
  { 3172, 3, 1, 0, 0, 44, 24 },
  { 3175, 3, 1, 0, 0, 44, 24 },
  { 3178, 3, 1, 0, 0, 44, 24 },
  { 3181, 3, 1, 0, 0, 44, 24 },
  { 3184, 3, 1, 0, 0, 44, 24 },
  { 3187, 3, 1, 0, 0, 44, 24 },
  { 3190, 3, 1, 0, 0, 44, 24 },
  { 3193, 3, 1, 0, 0, 44, 24 },
  { 3196, 3, 1, 0, 0, 44, 24 },
  { 3199, 3, 1, 0, 0, 44, 24 },
  { 3202, 3, 1, 0, 0, 44, 24 },
  { 3381, 3, 1, 0, 0, 44, 31 },
  { 3384, 3, 1, 0, 0, 44, 31 },
  { 3387, 3, 1, 0, 0, 44, 31 },
  { 3390, 3, 1, 0, 0, 44, 31 },
  { 3393, 3, 1, 0, 0, 44, 31 },
  { 3396, 3, 1, 0, 0, 44, 31 },
  { 3399, 3, 1, 0, 0, 44, 31 },
  { 3402, 3, 1, 0, 0, 44, 31 },
  { 3405, 3, 1, 0, 0, 44, 31 },
  { 3408, 3, 1, 0, 0, 44, 31 },
  { 3411, 3, 1, 0, 0, 44, 31 },
  // 1322: vstore16, 
  { 2026, 4, 0, 0, 0, 44, 7 },
  { 2030, 4, 0, 0, 0, 44, 7 },
  { 2034, 4, 0, 0, 0, 44, 7 },
  { 2038, 4, 0, 0, 0, 44, 7 },
  { 2042, 4, 0, 0, 0, 44, 7 },
  { 2046, 4, 0, 0, 0, 44, 7 },
  { 2050, 4, 0, 0, 0, 44, 7 },
  { 2056, 4, 0, 0, 0, 44, 7 },
  { 2060, 4, 0, 0, 0, 44, 7 },
  { 2064, 4, 0, 0, 0, 44, 7 },
  { 2068, 4, 0, 0, 0, 44, 7 },
  { 2421, 4, 0, 0, 0, 44, 7 },
  { 2425, 4, 0, 0, 0, 44, 7 },
  { 2429, 4, 0, 0, 0, 44, 7 },
  { 2433, 4, 0, 0, 0, 44, 7 },
  { 2437, 4, 0, 0, 0, 44, 7 },
  { 2441, 4, 0, 0, 0, 44, 7 },
  { 2445, 4, 0, 0, 0, 44, 7 },
  { 2449, 4, 0, 0, 0, 44, 7 },
  { 2453, 4, 0, 0, 0, 44, 7 },
  { 2457, 4, 0, 0, 0, 44, 7 },
  { 2461, 4, 0, 0, 0, 44, 7 },
  { 2806, 4, 0, 0, 0, 44, 7 },
  { 2810, 4, 0, 0, 0, 44, 7 },
  { 2814, 4, 0, 0, 0, 44, 7 },
  { 2818, 4, 0, 0, 0, 44, 7 },
  { 2822, 4, 0, 0, 0, 44, 7 },
  { 2826, 4, 0, 0, 0, 44, 7 },
  { 2830, 4, 0, 0, 0, 44, 7 },
  { 2834, 4, 0, 0, 0, 44, 7 },
  { 2838, 4, 0, 0, 0, 44, 7 },
  { 2842, 4, 0, 0, 0, 44, 7 },
  { 2846, 4, 0, 0, 0, 44, 7 },
  { 3205, 4, 0, 0, 0, 44, 24 },
  { 3209, 4, 0, 0, 0, 44, 24 },
  { 3213, 4, 0, 0, 0, 44, 24 },
  { 3217, 4, 0, 0, 0, 44, 24 },
  { 3221, 4, 0, 0, 0, 44, 24 },
  { 3225, 4, 0, 0, 0, 44, 24 },
  { 3229, 4, 0, 0, 0, 44, 24 },
  { 3233, 4, 0, 0, 0, 44, 24 },
  { 3237, 4, 0, 0, 0, 44, 24 },
  { 3241, 4, 0, 0, 0, 44, 24 },
  { 3245, 4, 0, 0, 0, 44, 24 },
  // 1366: vload_half, 
  { 3414, 3, 1, 0, 0, 44, 7 },
  { 3482, 3, 1, 0, 0, 44, 7 },
  { 3560, 3, 1, 0, 0, 44, 7 },
  { 3626, 3, 1, 0, 0, 44, 24 },
  { 3700, 3, 1, 0, 0, 44, 31 },
  // 1371: vload_half2, vloada_half2, 
  { 3417, 3, 1, 0, 0, 44, 7 },
  { 3485, 3, 1, 0, 0, 44, 7 },
  { 3563, 3, 1, 0, 0, 44, 7 },
  { 3629, 3, 1, 0, 0, 44, 24 },
  { 3703, 3, 1, 0, 0, 44, 31 },
  // 1376: vstore_half, vstore_half_rte, vstore_half_rtz, vstore_half_rtp, vstore_half_rtn, 
  { 3420, 4, 0, 0, 0, 44, 7 },
  { 3424, 4, 0, 0, 0, 44, 7 },
  { 3500, 4, 0, 0, 0, 44, 7 },
  { 3504, 4, 0, 0, 0, 44, 7 },
  { 3578, 4, 0, 0, 0, 44, 7 },
  { 3582, 4, 0, 0, 0, 44, 7 },
  { 3644, 4, 0, 0, 0, 44, 24 },
  { 3648, 4, 0, 0, 0, 44, 24 },
  // 1384: vstore_half2, vstorea_half2, vstore_half2_rte, vstorea_half2_rte, vstore_half2_rtz, vstorea_half2_rtz, vstore_half2_rtp, vstorea_half2_rtp, vstore_half2_rtn, vstorea_half2_rtn, 
  { 3428, 4, 0, 0, 0, 44, 7 },
  { 3432, 4, 0, 0, 0, 44, 7 },
  { 3508, 4, 0, 0, 0, 44, 7 },
  { 3512, 4, 0, 0, 0, 44, 7 },
  { 3586, 4, 0, 0, 0, 44, 7 },
  { 3590, 4, 0, 0, 0, 44, 7 },
  { 3652, 4, 0, 0, 0, 44, 24 },
  { 3656, 4, 0, 0, 0, 44, 24 },
  // 1392: vload_half3, vloada_half3, 
  { 3436, 3, 1, 0, 0, 44, 7 },
  { 3488, 3, 1, 0, 0, 44, 7 },
  { 3566, 3, 1, 0, 0, 44, 7 },
  { 3632, 3, 1, 0, 0, 44, 24 },
  { 3706, 3, 1, 0, 0, 44, 31 },
  // 1397: vload_half4, vloada_half4, 
  { 3439, 3, 1, 0, 0, 44, 7 },
  { 3491, 3, 1, 0, 0, 44, 7 },
  { 3569, 3, 1, 0, 0, 44, 7 },
  { 3635, 3, 1, 0, 0, 44, 24 },
  { 3709, 3, 1, 0, 0, 44, 31 },
  // 1402: vload_half8, vloada_half8, 
  { 3442, 3, 1, 0, 0, 44, 7 },
  { 3494, 3, 1, 0, 0, 44, 7 },
  { 3572, 3, 1, 0, 0, 44, 7 },
  { 3638, 3, 1, 0, 0, 44, 24 },
  { 3712, 3, 1, 0, 0, 44, 31 },
  // 1407: vload_half16, vloada_half16, 
  { 3445, 3, 1, 0, 0, 44, 7 },
  { 3497, 3, 1, 0, 0, 44, 7 },
  { 3575, 3, 1, 0, 0, 44, 7 },
  { 3641, 3, 1, 0, 0, 44, 24 },
  { 3717, 3, 1, 0, 0, 44, 31 },
  // 1412: vstore_half3, vstorea_half3, vstore_half3_rte, vstorea_half3_rte, vstore_half3_rtz, vstorea_half3_rtz, vstore_half3_rtp, vstorea_half3_rtp, vstore_half3_rtn, vstorea_half3_rtn, 
  { 3448, 4, 0, 0, 0, 44, 7 },
  { 3452, 4, 0, 0, 0, 44, 7 },
  { 3516, 4, 0, 0, 0, 44, 7 },
  { 3520, 4, 0, 0, 0, 44, 7 },
  { 3594, 4, 0, 0, 0, 44, 7 },
  { 3598, 4, 0, 0, 0, 44, 7 },
  { 3660, 4, 0, 0, 0, 44, 24 },
  { 3664, 4, 0, 0, 0, 44, 24 },
  // 1420: vstore_half4, vstorea_half4, vstore_half4_rte, vstorea_half4_rte, vstore_half4_rtz, vstorea_half4_rtz, vstore_half4_rtp, vstorea_half4_rtp, vstore_half4_rtn, vstorea_half4_rtn, 
  { 3456, 4, 0, 0, 0, 44, 7 },
  { 3460, 4, 0, 0, 0, 44, 7 },
  { 3524, 4, 0, 0, 0, 44, 7 },
  { 3528, 4, 0, 0, 0, 44, 7 },
  { 3602, 4, 0, 0, 0, 44, 7 },
  { 3606, 4, 0, 0, 0, 44, 7 },
  { 3668, 4, 0, 0, 0, 44, 24 },
  { 3672, 4, 0, 0, 0, 44, 24 },
  // 1428: vstore_half8, vstorea_half8, vstore_half8_rte, vstorea_half8_rte, vstore_half8_rtz, vstorea_half8_rtz, vstore_half8_rtp, vstorea_half8_rtp, vstore_half8_rtn, vstorea_half8_rtn, 
  { 3464, 4, 0, 0, 0, 44, 7 },
  { 3468, 4, 0, 0, 0, 44, 7 },
  { 3532, 4, 0, 0, 0, 44, 7 },
  { 3536, 4, 0, 0, 0, 44, 7 },
  { 3610, 4, 0, 0, 0, 44, 7 },
  { 3614, 4, 0, 0, 0, 44, 7 },
  { 3676, 4, 0, 0, 0, 44, 24 },
  { 3680, 4, 0, 0, 0, 44, 24 },
  // 1436: vstore_half16, vstorea_half16, vstore_half16_rte, vstorea_half16_rte, vstore_half16_rtz, vstorea_half16_rtz, vstore_half16_rtp, vstorea_half16_rtp, vstore_half16_rtn, vstorea_half16_rtn, 
  { 3472, 4, 0, 0, 0, 44, 7 },
  { 3476, 4, 0, 0, 0, 44, 7 },
  { 3540, 4, 0, 0, 0, 44, 7 },
  { 3544, 4, 0, 0, 0, 44, 7 },
  { 3618, 4, 0, 0, 0, 44, 7 },
  { 3622, 4, 0, 0, 0, 44, 7 },
  { 3684, 4, 0, 0, 0, 44, 24 },
  { 3688, 4, 0, 0, 0, 44, 24 },
  // 1444: barrier, 
  { 3720, 2, 0, 0, 1, 44, 31 },
  // 1445: work_group_barrier, 
  { 3720, 2, 0, 0, 1, 44, 24 },
  { 3722, 3, 0, 0, 1, 44, 24 },
  // 1447: mem_fence, read_mem_fence, write_mem_fence, 
  { 3720, 2, 0, 0, 0, 44, 31 },
  // 1448: get_fence, 
  { 3725, 2, 0, 0, 0, 44, 24 },
  { 3729, 2, 0, 0, 0, 44, 24 },
  // 1450: async_work_group_copy, 
  { 3731, 5, 0, 0, 0, 44, 31 },
  { 3736, 5, 0, 0, 0, 44, 31 },
  // 1452: async_work_group_strided_copy, 
  { 3741, 6, 0, 0, 0, 44, 31 },
  { 3747, 6, 0, 0, 0, 44, 31 },
  // 1454: wait_group_events, 
  { 3753, 3, 0, 0, 0, 44, 31 },
  // 1455: prefetch, 
  { 3756, 3, 0, 0, 0, 44, 31 },
  // 1456: atom_add, atom_sub, atom_xchg, 
  { 3759, 3, 0, 0, 0, 27, 31 },
  { 3768, 3, 0, 0, 0, 27, 31 },
  { 3777, 3, 0, 0, 0, 31, 31 },
  { 3786, 3, 0, 0, 0, 31, 31 },
  { 3795, 3, 0, 0, 0, 29, 31 },
  { 3804, 3, 0, 0, 0, 29, 31 },
  { 3813, 3, 0, 0, 0, 29, 31 },
  { 3822, 3, 0, 0, 0, 29, 31 },
  // 1464: atom_inc, atom_dec, 
  { 3762, 2, 0, 0, 0, 27, 31 },
  { 3771, 2, 0, 0, 0, 27, 31 },
  { 3780, 2, 0, 0, 0, 31, 31 },
  { 3789, 2, 0, 0, 0, 31, 31 },
  { 3798, 2, 0, 0, 0, 29, 31 },
  { 3807, 2, 0, 0, 0, 29, 31 },
  { 3816, 2, 0, 0, 0, 29, 31 },
  { 3825, 2, 0, 0, 0, 29, 31 },
  // 1472: atom_cmpxchg, 
  { 3764, 4, 0, 0, 0, 27, 31 },
  { 3773, 4, 0, 0, 0, 27, 31 },
  { 3782, 4, 0, 0, 0, 31, 31 },
  { 3791, 4, 0, 0, 0, 31, 31 },
  { 3800, 4, 0, 0, 0, 29, 31 },
  { 3809, 4, 0, 0, 0, 29, 31 },
  { 3818, 4, 0, 0, 0, 29, 31 },
  { 3827, 4, 0, 0, 0, 29, 31 },
  // 1480: atom_min, atom_max, atom_and, atom_or, atom_xor, 
  { 3759, 3, 0, 0, 0, 28, 31 },
  { 3768, 3, 0, 0, 0, 28, 31 },
  { 3777, 3, 0, 0, 0, 32, 31 },
  { 3786, 3, 0, 0, 0, 32, 31 },
  { 3795, 3, 0, 0, 0, 30, 31 },
  { 3804, 3, 0, 0, 0, 30, 31 },
  { 3813, 3, 0, 0, 0, 30, 31 },
  { 3822, 3, 0, 0, 0, 30, 31 },
  // 1488: atomic_xchg, 
  { 3831, 3, 0, 0, 0, 44, 31 },
  { 3759, 3, 0, 0, 0, 44, 31 },
  { 3768, 3, 0, 0, 0, 44, 31 },
  { 3834, 3, 0, 0, 0, 44, 31 },
  { 3777, 3, 0, 0, 0, 44, 31 },
  { 3786, 3, 0, 0, 0, 44, 31 },
  { 3837, 3, 0, 0, 0, 47, 31 },
  { 3846, 3, 0, 0, 0, 47, 31 },
  // 1496: atomic_add, atomic_sub, atomic_min, atomic_max, atomic_and, atomic_or, atomic_xor, 
  { 3759, 3, 0, 0, 0, 44, 31 },
  { 3768, 3, 0, 0, 0, 44, 31 },
  { 3777, 3, 0, 0, 0, 44, 31 },
  { 3786, 3, 0, 0, 0, 44, 31 },
  { 3837, 3, 0, 0, 0, 47, 31 },
  { 3846, 3, 0, 0, 0, 47, 31 },
  // 1502: atomic_inc, atomic_dec, 
  { 3762, 2, 0, 0, 0, 44, 31 },
  { 3771, 2, 0, 0, 0, 44, 31 },
  { 3780, 2, 0, 0, 0, 44, 31 },
  { 3789, 2, 0, 0, 0, 44, 31 },
  { 3840, 2, 0, 0, 0, 47, 31 },
  { 3849, 2, 0, 0, 0, 47, 31 },
  // 1508: atomic_cmpxchg, 
  { 3764, 4, 0, 0, 0, 44, 31 },
  { 3773, 4, 0, 0, 0, 44, 31 },
  { 3782, 4, 0, 0, 0, 44, 31 },
  { 3791, 4, 0, 0, 0, 44, 31 },
  { 3842, 4, 0, 0, 0, 47, 31 },
  { 3851, 4, 0, 0, 0, 47, 31 },
  // 1514: atomic_work_item_fence, 
  { 3855, 4, 0, 0, 0, 44, 24 },
  // 1515: atomic_init, 
  { 3859, 3, 0, 0, 0, 44, 24 },
  { 3909, 3, 0, 0, 0, 44, 24 },
  { 3959, 3, 0, 0, 0, 44, 24 },
  { 4009, 3, 0, 0, 0, 44, 24 },
  { 4063, 3, 0, 0, 0, 44, 24 },
  { 4117, 3, 0, 0, 0, 44, 24 },
  // 1521: atomic_store, 
  { 3859, 3, 0, 0, 0, 44, 24 },
  { 3909, 3, 0, 0, 0, 44, 24 },
  { 3959, 3, 0, 0, 0, 44, 24 },
  { 4009, 3, 0, 0, 0, 44, 24 },
  { 4063, 3, 0, 0, 0, 44, 24 },
  { 4117, 3, 0, 0, 0, 44, 24 },
  { 4201, 3, 0, 0, 0, 8, 24 },
  { 4234, 3, 0, 0, 0, 11, 24 },
  { 4267, 3, 0, 0, 0, 5, 24 },
  // 1530: atomic_store_explicit, 
  { 3862, 4, 0, 0, 0, 44, 24 },
  { 3866, 5, 0, 0, 0, 44, 24 },
  { 3912, 4, 0, 0, 0, 44, 24 },
  { 3916, 5, 0, 0, 0, 44, 24 },
  { 3962, 4, 0, 0, 0, 44, 24 },
  { 3966, 5, 0, 0, 0, 44, 24 },
  { 4012, 4, 0, 0, 0, 44, 24 },
  { 4016, 5, 0, 0, 0, 44, 24 },
  { 4066, 4, 0, 0, 0, 44, 24 },
  { 4070, 5, 0, 0, 0, 44, 24 },
  { 4120, 4, 0, 0, 0, 44, 24 },
  { 4124, 5, 0, 0, 0, 44, 24 },
  { 4204, 4, 0, 0, 0, 8, 24 },
  { 4208, 5, 0, 0, 0, 8, 24 },
  { 4237, 4, 0, 0, 0, 11, 24 },
  { 4241, 5, 0, 0, 0, 11, 24 },
  { 4270, 4, 0, 0, 0, 5, 24 },
  { 4274, 5, 0, 0, 0, 5, 24 },
  // 1548: atomic_load, 
  { 3871, 2, 0, 0, 0, 44, 24 },
  { 3921, 2, 0, 0, 0, 44, 24 },
  { 3971, 2, 0, 0, 0, 44, 24 },
  { 4021, 2, 0, 0, 0, 44, 24 },
  { 4075, 2, 0, 0, 0, 44, 24 },
  { 4129, 2, 0, 0, 0, 44, 24 },
  { 4213, 2, 0, 0, 0, 8, 24 },
  { 4246, 2, 0, 0, 0, 11, 24 },
  { 4279, 2, 0, 0, 0, 5, 24 },
  // 1557: atomic_load_explicit, 
  { 3873, 3, 0, 0, 0, 44, 24 },
  { 3876, 4, 0, 0, 0, 44, 24 },
  { 3923, 3, 0, 0, 0, 44, 24 },
  { 3926, 4, 0, 0, 0, 44, 24 },
  { 3973, 3, 0, 0, 0, 44, 24 },
  { 3976, 4, 0, 0, 0, 44, 24 },
  { 4025, 3, 0, 0, 0, 44, 24 },
  { 4028, 4, 0, 0, 0, 44, 24 },
  { 4077, 3, 0, 0, 0, 44, 24 },
  { 4080, 4, 0, 0, 0, 44, 24 },
  { 4131, 3, 0, 0, 0, 44, 24 },
  { 4134, 4, 0, 0, 0, 44, 24 },
  { 4215, 3, 0, 0, 0, 8, 24 },
  { 4218, 4, 0, 0, 0, 8, 24 },
  { 4248, 3, 0, 0, 0, 11, 24 },
  { 4251, 4, 0, 0, 0, 11, 24 },
  { 4281, 3, 0, 0, 0, 5, 24 },
  { 4284, 4, 0, 0, 0, 5, 24 },
  // 1575: atomic_exchange, 
  { 3880, 3, 0, 0, 0, 44, 24 },
  { 3930, 3, 0, 0, 0, 44, 24 },
  { 3980, 3, 0, 0, 0, 44, 24 },
  { 4032, 3, 0, 0, 0, 44, 24 },
  { 4086, 3, 0, 0, 0, 44, 24 },
  { 4138, 3, 0, 0, 0, 44, 24 },
  { 4222, 3, 0, 0, 0, 8, 24 },
  { 4255, 3, 0, 0, 0, 11, 24 },
  { 4288, 3, 0, 0, 0, 5, 24 },
  // 1584: atomic_exchange_explicit, 
  { 3883, 4, 0, 0, 0, 44, 24 },
  { 3887, 5, 0, 0, 0, 44, 24 },
  { 3933, 4, 0, 0, 0, 44, 24 },
  { 3937, 5, 0, 0, 0, 44, 24 },
  { 3983, 4, 0, 0, 0, 44, 24 },
  { 3987, 5, 0, 0, 0, 44, 24 },
  { 4035, 4, 0, 0, 0, 44, 24 },
  { 4039, 5, 0, 0, 0, 44, 24 },
  { 4089, 4, 0, 0, 0, 44, 24 },
  { 4093, 5, 0, 0, 0, 44, 24 },
  { 4141, 4, 0, 0, 0, 44, 24 },
  { 4147, 5, 0, 0, 0, 44, 24 },
  { 4225, 4, 0, 0, 0, 8, 24 },
  { 4229, 5, 0, 0, 0, 8, 24 },
  { 4258, 4, 0, 0, 0, 11, 24 },
  { 4262, 5, 0, 0, 0, 11, 24 },
  { 4291, 4, 0, 0, 0, 5, 24 },
  { 4295, 5, 0, 0, 0, 5, 24 },
  // 1602: atomic_compare_exchange_weak, atomic_compare_exchange_strong, 
  { 3892, 4, 0, 0, 0, 44, 24 },
  { 3942, 4, 0, 0, 0, 44, 24 },
  { 3992, 4, 0, 0, 0, 44, 24 },
  { 4044, 4, 0, 0, 0, 44, 24 },
  { 4098, 4, 0, 0, 0, 44, 24 },
  { 4152, 4, 0, 0, 0, 44, 24 },
  // 1608: atomic_compare_exchange_weak_explicit, atomic_compare_exchange_strong_explicit, 
  { 3896, 6, 0, 0, 0, 44, 24 },
  { 3902, 7, 0, 0, 0, 44, 24 },
  { 3946, 6, 0, 0, 0, 44, 24 },
  { 3952, 7, 0, 0, 0, 44, 24 },
  { 3996, 6, 0, 0, 0, 44, 24 },
  { 4002, 7, 0, 0, 0, 44, 24 },
  { 4048, 6, 0, 0, 0, 44, 24 },
  { 4054, 7, 0, 0, 0, 44, 24 },
  { 4102, 6, 0, 0, 0, 44, 24 },
  { 4108, 7, 0, 0, 0, 44, 24 },
  { 4156, 6, 0, 0, 0, 44, 24 },
  { 4162, 7, 0, 0, 0, 44, 24 },
  // 1620: atomic_fetch_add, atomic_fetch_sub, 
  { 3880, 3, 0, 0, 0, 44, 24 },
  { 3930, 3, 0, 0, 0, 44, 24 },
  { 3980, 3, 0, 0, 0, 44, 24 },
  { 4032, 3, 0, 0, 0, 44, 24 },
  { 4171, 3, 0, 0, 0, 44, 24 },
  { 4300, 3, 0, 0, 0, 7, 24 },
  { 4312, 3, 0, 0, 0, 15, 24 },
  { 4324, 3, 0, 0, 0, 21, 24 },
  { 4336, 3, 0, 0, 0, 10, 24 },
  { 4348, 3, 0, 0, 0, 17, 24 },
  { 4360, 3, 0, 0, 0, 23, 24 },
  { 4372, 3, 0, 0, 0, 4, 24 },
  { 4086, 3, 0, 0, 0, 13, 24 },
  { 4138, 3, 0, 0, 0, 19, 24 },
  // 1634: atomic_fetch_add_explicit, atomic_fetch_sub_explicit, 
  { 3883, 4, 0, 0, 0, 44, 24 },
  { 3887, 5, 0, 0, 0, 44, 24 },
  { 3933, 4, 0, 0, 0, 44, 24 },
  { 3937, 5, 0, 0, 0, 44, 24 },
  { 3983, 4, 0, 0, 0, 44, 24 },
  { 3987, 5, 0, 0, 0, 44, 24 },
  { 4035, 4, 0, 0, 0, 44, 24 },
  { 4039, 5, 0, 0, 0, 44, 24 },
  { 4174, 4, 0, 0, 0, 44, 24 },
  { 4178, 5, 0, 0, 0, 44, 24 },
  { 4303, 4, 0, 0, 0, 7, 24 },
  { 4307, 5, 0, 0, 0, 7, 24 },
  { 4315, 4, 0, 0, 0, 15, 24 },
  { 4319, 5, 0, 0, 0, 15, 24 },
  { 4327, 4, 0, 0, 0, 21, 24 },
  { 4331, 5, 0, 0, 0, 21, 24 },
  { 4339, 4, 0, 0, 0, 10, 24 },
  { 4343, 5, 0, 0, 0, 10, 24 },
  { 4351, 4, 0, 0, 0, 17, 24 },
  { 4355, 5, 0, 0, 0, 17, 24 },
  { 4363, 4, 0, 0, 0, 23, 24 },
  { 4367, 5, 0, 0, 0, 23, 24 },
  { 4375, 4, 0, 0, 0, 4, 24 },
  { 4379, 5, 0, 0, 0, 4, 24 },
  { 4089, 4, 0, 0, 0, 13, 24 },
  { 4093, 5, 0, 0, 0, 13, 24 },
  { 4141, 4, 0, 0, 0, 19, 24 },
  { 4147, 5, 0, 0, 0, 19, 24 },
  // 1662: atomic_fetch_or, atomic_fetch_xor, atomic_fetch_and, 
  { 3880, 3, 0, 0, 0, 44, 24 },
  { 3930, 3, 0, 0, 0, 44, 24 },
  { 3980, 3, 0, 0, 0, 44, 24 },
  { 4032, 3, 0, 0, 0, 44, 24 },
  // 1666: atomic_fetch_or_explicit, atomic_fetch_xor_explicit, atomic_fetch_and_explicit, 
  { 3883, 4, 0, 0, 0, 44, 24 },
  { 3887, 5, 0, 0, 0, 44, 24 },
  { 3933, 4, 0, 0, 0, 44, 24 },
  { 3937, 5, 0, 0, 0, 44, 24 },
  { 3983, 4, 0, 0, 0, 44, 24 },
  { 3987, 5, 0, 0, 0, 44, 24 },
  { 4035, 4, 0, 0, 0, 44, 24 },
  { 4039, 5, 0, 0, 0, 44, 24 },
  // 1674: atomic_fetch_min, atomic_fetch_max, 
  { 3880, 3, 0, 0, 0, 44, 24 },
  { 3930, 3, 0, 0, 0, 44, 24 },
  { 3980, 3, 0, 0, 0, 44, 24 },
  { 4032, 3, 0, 0, 0, 44, 24 },
  { 4222, 3, 0, 0, 0, 9, 24 },
  { 4312, 3, 0, 0, 0, 16, 24 },
  { 4324, 3, 0, 0, 0, 22, 24 },
  { 4255, 3, 0, 0, 0, 12, 24 },
  { 4348, 3, 0, 0, 0, 18, 24 },
  { 4360, 3, 0, 0, 0, 24, 24 },
  { 4288, 3, 0, 0, 0, 6, 24 },
  { 4086, 3, 0, 0, 0, 14, 24 },
  { 4138, 3, 0, 0, 0, 20, 24 },
  // 1687: atomic_fetch_min_explicit, atomic_fetch_max_explicit, 
  { 3883, 4, 0, 0, 0, 44, 24 },
  { 3887, 5, 0, 0, 0, 44, 24 },
  { 3933, 4, 0, 0, 0, 44, 24 },
  { 3937, 5, 0, 0, 0, 44, 24 },
  { 3983, 4, 0, 0, 0, 44, 24 },
  { 3987, 5, 0, 0, 0, 44, 24 },
  { 4035, 4, 0, 0, 0, 44, 24 },
  { 4039, 5, 0, 0, 0, 44, 24 },
  { 4225, 4, 0, 0, 0, 9, 24 },
  { 4229, 5, 0, 0, 0, 9, 24 },
  { 4315, 4, 0, 0, 0, 16, 24 },
  { 4319, 5, 0, 0, 0, 16, 24 },
  { 4327, 4, 0, 0, 0, 22, 24 },
  { 4331, 5, 0, 0, 0, 22, 24 },
  { 4258, 4, 0, 0, 0, 12, 24 },
  { 4262, 5, 0, 0, 0, 12, 24 },
  { 4351, 4, 0, 0, 0, 18, 24 },
  { 4355, 5, 0, 0, 0, 18, 24 },
  { 4363, 4, 0, 0, 0, 24, 24 },
  { 4367, 5, 0, 0, 0, 24, 24 },
  { 4291, 4, 0, 0, 0, 6, 24 },
  { 4295, 5, 0, 0, 0, 6, 24 },
  { 4089, 4, 0, 0, 0, 14, 24 },
  { 4093, 5, 0, 0, 0, 14, 24 },
  { 4141, 4, 0, 0, 0, 20, 24 },
  { 4147, 5, 0, 0, 0, 20, 24 },
  // 1713: atomic_flag_clear, 
  { 4183, 2, 0, 0, 0, 44, 24 },
  // 1714: atomic_flag_clear_explicit, 
  { 4185, 3, 0, 0, 0, 44, 24 },
  { 4188, 4, 0, 0, 0, 44, 24 },
  // 1716: atomic_flag_test_and_set, 
  { 4192, 2, 0, 0, 0, 44, 24 },
  // 1717: atomic_flag_test_and_set_explicit, 
  { 4194, 3, 0, 0, 0, 44, 24 },
  { 4197, 4, 0, 0, 0, 44, 24 },
  // 1719: shuffle, 
  { 4384, 3, 0, 1, 0, 44, 31 },
  { 4387, 3, 0, 1, 0, 44, 31 },
  { 4390, 3, 0, 1, 0, 44, 31 },
  { 4393, 3, 0, 1, 0, 44, 31 },
  { 4396, 3, 0, 1, 0, 44, 31 },
  { 4399, 3, 0, 1, 0, 44, 31 },
  { 4402, 3, 0, 1, 0, 44, 31 },
  { 4405, 3, 0, 1, 0, 44, 31 },
  { 4408, 3, 0, 1, 0, 44, 31 },
  { 4411, 3, 0, 1, 0, 44, 31 },
  { 4416, 3, 0, 1, 0, 44, 31 },
  { 4419, 3, 0, 1, 0, 44, 31 },
  { 4422, 3, 0, 1, 0, 44, 31 },
  { 4425, 3, 0, 1, 0, 44, 31 },
  { 4428, 3, 0, 1, 0, 44, 31 },
  { 4431, 3, 0, 1, 0, 44, 31 },
  { 4434, 3, 0, 1, 0, 44, 31 },
  { 4437, 3, 0, 1, 0, 44, 31 },
  { 4440, 3, 0, 1, 0, 44, 31 },
  { 4443, 3, 0, 1, 0, 44, 31 },
  { 4448, 3, 0, 1, 0, 44, 31 },
  { 4451, 3, 0, 1, 0, 44, 31 },
  { 4454, 3, 0, 1, 0, 44, 31 },
  { 4457, 3, 0, 1, 0, 44, 31 },
  { 4460, 3, 0, 1, 0, 44, 31 },
  { 4463, 3, 0, 1, 0, 44, 31 },
  { 4466, 3, 0, 1, 0, 44, 31 },
  { 4469, 3, 0, 1, 0, 44, 31 },
  { 4472, 3, 0, 1, 0, 44, 31 },
  { 4475, 3, 0, 1, 0, 44, 31 },
  { 4480, 3, 0, 1, 0, 44, 31 },
  { 4483, 3, 0, 1, 0, 44, 31 },
  { 4486, 3, 0, 1, 0, 44, 31 },
  { 4489, 3, 0, 1, 0, 44, 31 },
  { 4492, 3, 0, 1, 0, 44, 31 },
  { 4495, 3, 0, 1, 0, 44, 31 },
  { 4498, 3, 0, 1, 0, 44, 31 },
  { 4501, 3, 0, 1, 0, 44, 31 },
  { 4504, 3, 0, 1, 0, 44, 31 },
  { 4507, 3, 0, 1, 0, 44, 31 },
  { 4512, 3, 0, 1, 0, 44, 31 },
  { 4515, 3, 0, 1, 0, 44, 31 },
  { 4518, 3, 0, 1, 0, 44, 31 },
  { 4521, 3, 0, 1, 0, 44, 31 },
  { 4524, 3, 0, 1, 0, 44, 31 },
  { 4527, 3, 0, 1, 0, 44, 31 },
  { 4530, 3, 0, 1, 0, 44, 31 },
  { 4533, 3, 0, 1, 0, 44, 31 },
  { 4536, 3, 0, 1, 0, 44, 31 },
  { 4539, 3, 0, 1, 0, 44, 31 },
  { 4544, 3, 0, 1, 0, 44, 31 },
  { 4547, 3, 0, 1, 0, 44, 31 },
  { 4550, 3, 0, 1, 0, 44, 31 },
  { 4553, 3, 0, 1, 0, 44, 31 },
  { 4556, 3, 0, 1, 0, 44, 31 },
  { 4559, 3, 0, 1, 0, 44, 31 },
  { 4562, 3, 0, 1, 0, 44, 31 },
  { 4565, 3, 0, 1, 0, 44, 31 },
  { 4568, 3, 0, 1, 0, 44, 31 },
  { 4571, 3, 0, 1, 0, 44, 31 },
  { 4576, 3, 0, 1, 0, 44, 31 },
  { 4579, 3, 0, 1, 0, 44, 31 },
  { 4582, 3, 0, 1, 0, 44, 31 },
  { 4585, 3, 0, 1, 0, 44, 31 },
  { 4588, 3, 0, 1, 0, 44, 31 },
  { 4591, 3, 0, 1, 0, 44, 31 },
  { 4594, 3, 0, 1, 0, 44, 31 },
  { 4597, 3, 0, 1, 0, 44, 31 },
  { 4600, 3, 0, 1, 0, 44, 31 },
  { 4603, 3, 0, 1, 0, 44, 31 },
  { 4606, 3, 0, 1, 0, 44, 31 },
  { 4609, 3, 0, 1, 0, 44, 31 },
  { 4612, 3, 0, 1, 0, 44, 31 },
  { 4615, 3, 0, 1, 0, 44, 31 },
  { 4618, 3, 0, 1, 0, 44, 31 },
  { 4621, 3, 0, 1, 0, 44, 31 },
  { 4624, 3, 0, 1, 0, 44, 31 },
  { 4627, 3, 0, 1, 0, 44, 31 },
  { 4630, 3, 0, 1, 0, 44, 31 },
  { 4633, 3, 0, 1, 0, 44, 31 },
  { 4636, 3, 0, 1, 0, 44, 31 },
  { 4639, 3, 0, 1, 0, 44, 31 },
  { 4642, 3, 0, 1, 0, 44, 31 },
  { 4645, 3, 0, 1, 0, 44, 31 },
  { 4648, 3, 0, 1, 0, 44, 31 },
  { 4651, 3, 0, 1, 0, 44, 31 },
  { 4654, 3, 0, 1, 0, 44, 31 },
  { 4657, 3, 0, 1, 0, 44, 31 },
  { 4660, 3, 0, 1, 0, 44, 31 },
  { 4663, 3, 0, 1, 0, 44, 31 },
  { 4666, 3, 0, 1, 0, 44, 31 },
  { 4669, 3, 0, 1, 0, 44, 31 },
  { 4672, 3, 0, 1, 0, 44, 31 },
  { 4675, 3, 0, 1, 0, 44, 31 },
  { 4678, 3, 0, 1, 0, 44, 31 },
  { 4681, 3, 0, 1, 0, 44, 31 },
  { 4684, 3, 0, 1, 0, 44, 31 },
  { 4687, 3, 0, 1, 0, 44, 31 },
  { 4690, 3, 0, 1, 0, 44, 31 },
  { 4693, 3, 0, 1, 0, 44, 31 },
  { 4696, 3, 0, 1, 0, 44, 31 },
  { 4699, 3, 0, 1, 0, 44, 31 },
  { 4702, 3, 0, 1, 0, 44, 31 },
  { 4705, 3, 0, 1, 0, 44, 31 },
  { 4708, 3, 0, 1, 0, 44, 31 },
  { 4711, 3, 0, 1, 0, 44, 31 },
  { 4714, 3, 0, 1, 0, 44, 31 },
  { 4717, 3, 0, 1, 0, 44, 31 },
  { 4720, 3, 0, 1, 0, 44, 31 },
  { 4723, 3, 0, 1, 0, 44, 31 },
  { 4726, 3, 0, 1, 0, 44, 31 },
  { 4729, 3, 0, 1, 0, 44, 31 },
  { 4732, 3, 0, 1, 0, 44, 31 },
  { 4735, 3, 0, 1, 0, 44, 31 },
  { 4738, 3, 0, 1, 0, 44, 31 },
  { 4741, 3, 0, 1, 0, 44, 31 },
  { 4744, 3, 0, 1, 0, 44, 31 },
  { 4747, 3, 0, 1, 0, 44, 31 },
  { 4750, 3, 0, 1, 0, 44, 31 },
  { 4753, 3, 0, 1, 0, 44, 31 },
  { 4756, 3, 0, 1, 0, 44, 31 },
  { 4759, 3, 0, 1, 0, 44, 31 },
  { 4762, 3, 0, 1, 0, 44, 31 },
  { 4765, 3, 0, 1, 0, 44, 31 },
  { 4768, 3, 0, 1, 0, 44, 31 },
  { 4771, 3, 0, 1, 0, 44, 31 },
  { 4774, 3, 0, 1, 0, 44, 31 },
  { 4777, 3, 0, 1, 0, 44, 31 },
  { 4780, 3, 0, 1, 0, 44, 31 },
  { 4783, 3, 0, 1, 0, 44, 31 },
  { 4786, 3, 0, 1, 0, 44, 31 },
  { 4789, 3, 0, 1, 0, 44, 31 },
  { 4792, 3, 0, 1, 0, 44, 31 },
  { 4795, 3, 0, 1, 0, 44, 31 },
  { 4798, 3, 0, 1, 0, 44, 31 },
  { 4801, 3, 0, 1, 0, 44, 31 },
  { 4804, 3, 0, 1, 0, 44, 31 },
  { 4807, 3, 0, 1, 0, 44, 31 },
  { 4810, 3, 0, 1, 0, 44, 31 },
  { 4813, 3, 0, 1, 0, 44, 31 },
  { 4816, 3, 0, 1, 0, 44, 31 },
  { 4819, 3, 0, 1, 0, 44, 31 },
  { 4822, 3, 0, 1, 0, 44, 31 },
  { 4825, 3, 0, 1, 0, 44, 31 },
  { 4828, 3, 0, 1, 0, 44, 31 },
  { 4831, 3, 0, 1, 0, 44, 31 },
  { 4834, 3, 0, 1, 0, 44, 31 },
  { 4837, 3, 0, 1, 0, 44, 31 },
  { 4840, 3, 0, 1, 0, 44, 31 },
  { 4843, 3, 0, 1, 0, 44, 31 },
  { 4846, 3, 0, 1, 0, 44, 31 },
  { 4849, 3, 0, 1, 0, 44, 31 },
  { 4852, 3, 0, 1, 0, 44, 31 },
  { 4855, 3, 0, 1, 0, 44, 31 },
  { 4858, 3, 0, 1, 0, 44, 31 },
  { 4861, 3, 0, 1, 0, 44, 31 },
  { 4864, 3, 0, 1, 0, 44, 31 },
  { 4867, 3, 0, 1, 0, 44, 31 },
  { 4870, 3, 0, 1, 0, 44, 31 },
  { 4873, 3, 0, 1, 0, 44, 31 },
  { 4876, 3, 0, 1, 0, 44, 31 },
  { 4879, 3, 0, 1, 0, 44, 31 },
  { 4882, 3, 0, 1, 0, 44, 31 },
  { 4885, 3, 0, 1, 0, 44, 31 },
  { 4888, 3, 0, 1, 0, 44, 31 },
  { 4891, 3, 0, 1, 0, 44, 31 },
  { 4894, 3, 0, 1, 0, 44, 31 },
  { 4897, 3, 0, 1, 0, 44, 31 },
  { 4900, 3, 0, 1, 0, 44, 31 },
  { 4903, 3, 0, 1, 0, 44, 31 },
  { 4906, 3, 0, 1, 0, 44, 31 },
  { 4909, 3, 0, 1, 0, 44, 31 },
  { 4912, 3, 0, 1, 0, 44, 31 },
  { 4915, 3, 0, 1, 0, 44, 31 },
  { 4918, 3, 0, 1, 0, 44, 31 },
  { 4921, 3, 0, 1, 0, 44, 31 },
  // 1895: shuffle2, 
  { 4924, 4, 0, 1, 0, 44, 31 },
  { 4928, 4, 0, 1, 0, 44, 31 },
  { 4932, 4, 0, 1, 0, 44, 31 },
  { 4936, 4, 0, 1, 0, 44, 31 },
  { 4940, 4, 0, 1, 0, 44, 31 },
  { 4944, 4, 0, 1, 0, 44, 31 },
  { 4948, 4, 0, 1, 0, 44, 31 },
  { 4952, 4, 0, 1, 0, 44, 31 },
  { 4956, 4, 0, 1, 0, 44, 31 },
  { 4960, 4, 0, 1, 0, 44, 31 },
  { 4964, 4, 0, 1, 0, 44, 31 },
  { 4968, 4, 0, 1, 0, 44, 31 },
  { 4972, 4, 0, 1, 0, 44, 31 },
  { 4976, 4, 0, 1, 0, 44, 31 },
  { 4980, 4, 0, 1, 0, 44, 31 },
  { 4984, 4, 0, 1, 0, 44, 31 },
  { 4988, 4, 0, 1, 0, 44, 31 },
  { 4992, 4, 0, 1, 0, 44, 31 },
  { 4996, 4, 0, 1, 0, 44, 31 },
  { 5000, 4, 0, 1, 0, 44, 31 },
  { 5004, 4, 0, 1, 0, 44, 31 },
  { 5008, 4, 0, 1, 0, 44, 31 },
  { 5012, 4, 0, 1, 0, 44, 31 },
  { 5016, 4, 0, 1, 0, 44, 31 },
  { 5020, 4, 0, 1, 0, 44, 31 },
  { 5024, 4, 0, 1, 0, 44, 31 },
  { 5028, 4, 0, 1, 0, 44, 31 },
  { 5032, 4, 0, 1, 0, 44, 31 },
  { 5036, 4, 0, 1, 0, 44, 31 },
  { 5040, 4, 0, 1, 0, 44, 31 },
  { 5044, 4, 0, 1, 0, 44, 31 },
  { 5048, 4, 0, 1, 0, 44, 31 },
  { 5052, 4, 0, 1, 0, 44, 31 },
  { 5056, 4, 0, 1, 0, 44, 31 },
  { 5060, 4, 0, 1, 0, 44, 31 },
  { 5064, 4, 0, 1, 0, 44, 31 },
  { 5068, 4, 0, 1, 0, 44, 31 },
  { 5072, 4, 0, 1, 0, 44, 31 },
  { 5076, 4, 0, 1, 0, 44, 31 },
  { 5080, 4, 0, 1, 0, 44, 31 },
  { 5084, 4, 0, 1, 0, 44, 31 },
  { 5088, 4, 0, 1, 0, 44, 31 },
  { 5092, 4, 0, 1, 0, 44, 31 },
  { 5096, 4, 0, 1, 0, 44, 31 },
  { 5100, 4, 0, 1, 0, 44, 31 },
  { 5104, 4, 0, 1, 0, 44, 31 },
  { 5108, 4, 0, 1, 0, 44, 31 },
  { 5112, 4, 0, 1, 0, 44, 31 },
  { 5116, 4, 0, 1, 0, 44, 31 },
  { 5120, 4, 0, 1, 0, 44, 31 },
  { 5124, 4, 0, 1, 0, 44, 31 },
  { 5128, 4, 0, 1, 0, 44, 31 },
  { 5132, 4, 0, 1, 0, 44, 31 },
  { 5136, 4, 0, 1, 0, 44, 31 },
  { 5140, 4, 0, 1, 0, 44, 31 },
  { 5144, 4, 0, 1, 0, 44, 31 },
  { 5148, 4, 0, 1, 0, 44, 31 },
  { 5152, 4, 0, 1, 0, 44, 31 },
  { 5156, 4, 0, 1, 0, 44, 31 },
  { 5160, 4, 0, 1, 0, 44, 31 },
  { 5164, 4, 0, 1, 0, 44, 31 },
  { 5168, 4, 0, 1, 0, 44, 31 },
  { 5172, 4, 0, 1, 0, 44, 31 },
  { 5176, 4, 0, 1, 0, 44, 31 },
  { 5180, 4, 0, 1, 0, 44, 31 },
  { 5184, 4, 0, 1, 0, 44, 31 },
  { 5188, 4, 0, 1, 0, 44, 31 },
  { 5192, 4, 0, 1, 0, 44, 31 },
  { 5196, 4, 0, 1, 0, 44, 31 },
  { 5200, 4, 0, 1, 0, 44, 31 },
  { 5204, 4, 0, 1, 0, 44, 31 },
  { 5208, 4, 0, 1, 0, 44, 31 },
  { 5212, 4, 0, 1, 0, 44, 31 },
  { 5216, 4, 0, 1, 0, 44, 31 },
  { 5220, 4, 0, 1, 0, 44, 31 },
  { 5224, 4, 0, 1, 0, 44, 31 },
  { 5228, 4, 0, 1, 0, 44, 31 },
  { 5232, 4, 0, 1, 0, 44, 31 },
  { 5236, 4, 0, 1, 0, 44, 31 },
  { 5240, 4, 0, 1, 0, 44, 31 },
  { 5244, 4, 0, 1, 0, 44, 31 },
  { 5248, 4, 0, 1, 0, 44, 31 },
  { 5252, 4, 0, 1, 0, 44, 31 },
  { 5256, 4, 0, 1, 0, 44, 31 },
  { 5260, 4, 0, 1, 0, 44, 31 },
  { 5264, 4, 0, 1, 0, 44, 31 },
  { 5268, 4, 0, 1, 0, 44, 31 },
  { 5272, 4, 0, 1, 0, 44, 31 },
  { 5276, 4, 0, 1, 0, 44, 31 },
  { 5280, 4, 0, 1, 0, 44, 31 },
  { 5284, 4, 0, 1, 0, 44, 31 },
  { 5288, 4, 0, 1, 0, 44, 31 },
  { 5292, 4, 0, 1, 0, 44, 31 },
  { 5296, 4, 0, 1, 0, 44, 31 },
  { 5300, 4, 0, 1, 0, 44, 31 },
  { 5304, 4, 0, 1, 0, 44, 31 },
  { 5308, 4, 0, 1, 0, 44, 31 },
  { 5312, 4, 0, 1, 0, 44, 31 },
  { 5316, 4, 0, 1, 0, 44, 31 },
  { 5320, 4, 0, 1, 0, 44, 31 },
  { 5324, 4, 0, 1, 0, 44, 31 },
  { 5328, 4, 0, 1, 0, 44, 31 },
  { 5332, 4, 0, 1, 0, 44, 31 },
  { 5336, 4, 0, 1, 0, 44, 31 },
  { 5340, 4, 0, 1, 0, 44, 31 },
  { 5344, 4, 0, 1, 0, 44, 31 },
  { 5348, 4, 0, 1, 0, 44, 31 },
  { 5352, 4, 0, 1, 0, 44, 31 },
  { 5356, 4, 0, 1, 0, 44, 31 },
  { 5360, 4, 0, 1, 0, 44, 31 },
  { 5364, 4, 0, 1, 0, 44, 31 },
  { 5368, 4, 0, 1, 0, 44, 31 },
  { 5372, 4, 0, 1, 0, 44, 31 },
  { 5376, 4, 0, 1, 0, 44, 31 },
  { 5380, 4, 0, 1, 0, 44, 31 },
  { 5384, 4, 0, 1, 0, 44, 31 },
  { 5388, 4, 0, 1, 0, 44, 31 },
  { 5392, 4, 0, 1, 0, 44, 31 },
  { 5396, 4, 0, 1, 0, 44, 31 },
  { 5400, 4, 0, 1, 0, 44, 31 },
  { 5404, 4, 0, 1, 0, 44, 31 },
  { 5408, 4, 0, 1, 0, 44, 31 },
  { 5412, 4, 0, 1, 0, 44, 31 },
  { 5416, 4, 0, 1, 0, 44, 31 },
  { 5420, 4, 0, 1, 0, 44, 31 },
  { 5424, 4, 0, 1, 0, 44, 31 },
  { 5428, 4, 0, 1, 0, 44, 31 },
  { 5432, 4, 0, 1, 0, 44, 31 },
  { 5436, 4, 0, 1, 0, 44, 31 },
  { 5440, 4, 0, 1, 0, 44, 31 },
  { 5444, 4, 0, 1, 0, 44, 31 },
  { 5448, 4, 0, 1, 0, 44, 31 },
  { 5452, 4, 0, 1, 0, 44, 31 },
  { 5456, 4, 0, 1, 0, 44, 31 },
  { 5462, 4, 0, 1, 0, 44, 31 },
  { 5466, 4, 0, 1, 0, 44, 31 },
  { 5470, 4, 0, 1, 0, 44, 31 },
  { 5474, 4, 0, 1, 0, 44, 31 },
  { 5478, 4, 0, 1, 0, 44, 31 },
  { 5482, 4, 0, 1, 0, 44, 31 },
  { 5486, 4, 0, 1, 0, 44, 31 },
  { 5490, 4, 0, 1, 0, 44, 31 },
  { 5494, 4, 0, 1, 0, 44, 31 },
  { 5498, 4, 0, 1, 0, 44, 31 },
  { 5504, 4, 0, 1, 0, 44, 31 },
  { 5508, 4, 0, 1, 0, 44, 31 },
  { 5512, 4, 0, 1, 0, 44, 31 },
  { 5516, 4, 0, 1, 0, 44, 31 },
  { 5520, 4, 0, 1, 0, 44, 31 },
  { 5524, 4, 0, 1, 0, 44, 31 },
  { 5528, 4, 0, 1, 0, 44, 31 },
  { 5532, 4, 0, 1, 0, 44, 31 },
  { 5536, 4, 0, 1, 0, 44, 31 },
  { 5540, 4, 0, 1, 0, 44, 31 },
  { 5546, 4, 0, 1, 0, 44, 31 },
  { 5550, 4, 0, 1, 0, 44, 31 },
  { 5554, 4, 0, 1, 0, 44, 31 },
  { 5558, 4, 0, 1, 0, 44, 31 },
  { 5562, 4, 0, 1, 0, 44, 31 },
  { 5566, 4, 0, 1, 0, 44, 31 },
  { 5570, 4, 0, 1, 0, 44, 31 },
  { 5574, 4, 0, 1, 0, 44, 31 },
  { 5578, 4, 0, 1, 0, 44, 31 },
  { 5582, 4, 0, 1, 0, 44, 31 },
  { 5588, 4, 0, 1, 0, 44, 31 },
  { 5592, 4, 0, 1, 0, 44, 31 },
  { 5596, 4, 0, 1, 0, 44, 31 },
  { 5600, 4, 0, 1, 0, 44, 31 },
  { 5604, 4, 0, 1, 0, 44, 31 },
  { 5608, 4, 0, 1, 0, 44, 31 },
  { 5612, 4, 0, 1, 0, 44, 31 },
  { 5616, 4, 0, 1, 0, 44, 31 },
  { 5620, 4, 0, 1, 0, 44, 31 },
  { 5624, 4, 0, 1, 0, 44, 31 },
  { 5630, 4, 0, 1, 0, 44, 31 },
  { 5634, 4, 0, 1, 0, 44, 31 },
  // 2071: read_imagef, 
  { 5638, 4, 1, 0, 0, 44, 31 },
  { 5650, 4, 1, 0, 0, 44, 31 },
  { 5664, 4, 1, 0, 0, 44, 31 },
  { 5676, 4, 1, 0, 0, 44, 31 },
  { 5688, 4, 1, 0, 0, 44, 31 },
  { 5700, 4, 1, 0, 0, 44, 31 },
  { 5712, 4, 1, 0, 0, 44, 31 },
  { 5724, 4, 1, 0, 0, 44, 31 },
  { 5736, 4, 1, 0, 0, 44, 31 },
  { 5748, 4, 1, 0, 0, 44, 31 },
  { 5760, 4, 1, 0, 0, 44, 31 },
  { 5764, 4, 1, 0, 0, 44, 31 },
  { 5768, 4, 1, 0, 0, 44, 31 },
  { 5772, 4, 1, 0, 0, 44, 31 },
  { 5776, 3, 1, 0, 0, 44, 28 },
  { 5785, 3, 1, 0, 0, 44, 28 },
  { 5794, 3, 1, 0, 0, 44, 28 },
  { 5803, 3, 1, 0, 0, 44, 28 },
  { 5806, 3, 1, 0, 0, 44, 28 },
  { 5809, 3, 1, 0, 0, 44, 28 },
  { 5818, 3, 1, 0, 0, 44, 28 },
  { 5827, 3, 1, 0, 0, 44, 28 },
  { 5836, 3, 1, 0, 0, 44, 28 },
  { 5845, 3, 1, 0, 0, 44, 28 },
  { 5854, 3, 1, 0, 0, 44, 28 },
  { 5863, 3, 1, 0, 0, 44, 28 },
  { 5872, 3, 1, 0, 0, 44, 28 },
  { 5881, 3, 1, 0, 0, 44, 28 },
  { 5890, 3, 1, 0, 0, 44, 28 },
  { 5893, 3, 1, 0, 0, 44, 28 },
  { 6340, 5, 1, 0, 0, 33, 31 },
  { 6345, 6, 1, 0, 0, 33, 31 },
  { 6373, 5, 1, 0, 0, 33, 31 },
  { 6378, 6, 1, 0, 0, 33, 31 },
  { 6384, 5, 1, 0, 0, 33, 31 },
  { 6389, 6, 1, 0, 0, 33, 31 },
  { 6417, 6, 1, 0, 0, 33, 31 },
  { 6423, 5, 1, 0, 0, 33, 31 },
  { 6450, 5, 1, 0, 0, 33, 31 },
  { 6455, 6, 1, 0, 0, 33, 31 },
  { 6483, 5, 1, 0, 0, 33, 31 },
  { 6488, 6, 1, 0, 0, 33, 31 },
  { 6516, 5, 1, 0, 0, 33, 31 },
  { 6521, 6, 1, 0, 0, 33, 31 },
  { 6612, 4, 1, 0, 0, 26, 31 },
  { 6624, 4, 1, 0, 0, 26, 31 },
  { 6636, 4, 1, 0, 0, 26, 31 },
  { 6640, 4, 1, 0, 0, 26, 31 },
  { 6644, 4, 1, 0, 0, 26, 31 },
  { 6656, 4, 1, 0, 0, 26, 31 },
  { 6668, 4, 1, 0, 0, 26, 31 },
  { 6672, 4, 1, 0, 0, 26, 31 },
  // 2123: read_imagei, 
  { 5642, 4, 1, 0, 0, 44, 31 },
  { 5654, 4, 1, 0, 0, 44, 31 },
  { 5668, 4, 1, 0, 0, 44, 31 },
  { 5680, 4, 1, 0, 0, 44, 31 },
  { 5692, 4, 1, 0, 0, 44, 31 },
  { 5704, 4, 1, 0, 0, 44, 31 },
  { 5716, 4, 1, 0, 0, 44, 31 },
  { 5728, 4, 1, 0, 0, 44, 31 },
  { 5740, 4, 1, 0, 0, 44, 31 },
  { 5752, 4, 1, 0, 0, 44, 31 },
  { 5779, 3, 1, 0, 0, 44, 28 },
  { 5788, 3, 1, 0, 0, 44, 28 },
  { 5797, 3, 1, 0, 0, 44, 28 },
  { 5812, 3, 1, 0, 0, 44, 28 },
  { 5821, 3, 1, 0, 0, 44, 28 },
  { 5830, 3, 1, 0, 0, 44, 28 },
  { 5839, 3, 1, 0, 0, 44, 28 },
  { 5848, 3, 1, 0, 0, 44, 28 },
  { 5857, 3, 1, 0, 0, 44, 28 },
  { 5866, 3, 1, 0, 0, 44, 28 },
  { 5875, 3, 1, 0, 0, 44, 28 },
  { 5884, 3, 1, 0, 0, 44, 28 },
  { 6351, 5, 1, 0, 0, 33, 31 },
  { 6356, 6, 1, 0, 0, 33, 31 },
  { 6395, 5, 1, 0, 0, 33, 31 },
  { 6400, 6, 1, 0, 0, 33, 31 },
  { 6428, 6, 1, 0, 0, 33, 31 },
  { 6434, 5, 1, 0, 0, 33, 31 },
  { 6461, 5, 1, 0, 0, 33, 31 },
  { 6466, 6, 1, 0, 0, 33, 31 },
  { 6494, 5, 1, 0, 0, 33, 31 },
  { 6499, 6, 1, 0, 0, 33, 31 },
  { 6616, 4, 1, 0, 0, 26, 31 },
  { 6628, 4, 1, 0, 0, 26, 31 },
  { 6648, 4, 1, 0, 0, 26, 31 },
  { 6660, 4, 1, 0, 0, 26, 31 },
  // 2159: read_imageui, 
  { 5646, 4, 1, 0, 0, 44, 31 },
  { 5658, 4, 1, 0, 0, 44, 31 },
  { 5672, 4, 1, 0, 0, 44, 31 },
  { 5684, 4, 1, 0, 0, 44, 31 },
  { 5696, 4, 1, 0, 0, 44, 31 },
  { 5708, 4, 1, 0, 0, 44, 31 },
  { 5720, 4, 1, 0, 0, 44, 31 },
  { 5732, 4, 1, 0, 0, 44, 31 },
  { 5744, 4, 1, 0, 0, 44, 31 },
  { 5756, 4, 1, 0, 0, 44, 31 },
  { 5782, 3, 1, 0, 0, 44, 28 },
  { 5791, 3, 1, 0, 0, 44, 28 },
  { 5800, 3, 1, 0, 0, 44, 28 },
  { 5815, 3, 1, 0, 0, 44, 28 },
  { 5824, 3, 1, 0, 0, 44, 28 },
  { 5833, 3, 1, 0, 0, 44, 28 },
  { 5842, 3, 1, 0, 0, 44, 28 },
  { 5851, 3, 1, 0, 0, 44, 28 },
  { 5860, 3, 1, 0, 0, 44, 28 },
  { 5869, 3, 1, 0, 0, 44, 28 },
  { 5878, 3, 1, 0, 0, 44, 28 },
  { 5887, 3, 1, 0, 0, 44, 28 },
  { 6362, 5, 1, 0, 0, 33, 31 },
  { 6367, 6, 1, 0, 0, 33, 31 },
  { 6406, 5, 1, 0, 0, 33, 31 },
  { 6411, 6, 1, 0, 0, 33, 31 },
  { 6439, 6, 1, 0, 0, 33, 31 },
  { 6445, 5, 1, 0, 0, 33, 31 },
  { 6472, 5, 1, 0, 0, 33, 31 },
  { 6477, 6, 1, 0, 0, 33, 31 },
  { 6505, 5, 1, 0, 0, 33, 31 },
  { 6510, 6, 1, 0, 0, 33, 31 },
  { 6620, 4, 1, 0, 0, 26, 31 },
  { 6632, 4, 1, 0, 0, 26, 31 },
  { 6652, 4, 1, 0, 0, 26, 31 },
  { 6664, 4, 1, 0, 0, 26, 31 },
  // 2195: write_imagef, 
  { 5896, 4, 0, 0, 0, 44, 31 },
  { 5908, 4, 0, 0, 0, 44, 31 },
  { 5920, 4, 0, 0, 0, 44, 31 },
  { 5932, 4, 0, 0, 0, 44, 31 },
  { 5944, 4, 0, 0, 0, 44, 31 },
  { 5956, 4, 0, 0, 0, 44, 31 },
  { 5960, 4, 0, 0, 0, 44, 31 },
  { 5964, 4, 0, 0, 0, 44, 31 },
  { 5976, 4, 0, 0, 0, 44, 31 },
  { 5988, 4, 0, 0, 0, 44, 31 },
  { 6000, 4, 0, 0, 0, 44, 31 },
  { 6012, 4, 0, 0, 0, 44, 31 },
  { 6024, 4, 0, 0, 0, 44, 31 },
  { 6036, 4, 0, 0, 0, 44, 31 },
  { 6048, 4, 0, 0, 0, 44, 31 },
  { 6052, 4, 0, 0, 0, 44, 31 },
  { 6527, 5, 0, 0, 0, 34, 31 },
  { 6542, 5, 0, 0, 0, 34, 31 },
  { 6547, 5, 0, 0, 0, 34, 31 },
  { 6562, 5, 0, 0, 0, 34, 31 },
  { 6577, 5, 0, 0, 0, 34, 31 },
  { 6592, 5, 0, 0, 0, 34, 31 },
  { 6597, 5, 0, 0, 0, 35, 31 },
  // 2218: write_imagei, 
  { 5900, 4, 0, 0, 0, 44, 31 },
  { 5912, 4, 0, 0, 0, 44, 31 },
  { 5924, 4, 0, 0, 0, 44, 31 },
  { 5936, 4, 0, 0, 0, 44, 31 },
  { 5948, 4, 0, 0, 0, 44, 31 },
  { 5968, 4, 0, 0, 0, 44, 31 },
  { 5980, 4, 0, 0, 0, 44, 31 },
  { 5992, 4, 0, 0, 0, 44, 31 },
  { 6004, 4, 0, 0, 0, 44, 31 },
  { 6016, 4, 0, 0, 0, 44, 31 },
  { 6028, 4, 0, 0, 0, 44, 31 },
  { 6040, 4, 0, 0, 0, 44, 31 },
  { 6532, 5, 0, 0, 0, 34, 31 },
  { 6552, 5, 0, 0, 0, 34, 31 },
  { 6567, 5, 0, 0, 0, 34, 31 },
  { 6582, 5, 0, 0, 0, 34, 31 },
  { 6602, 5, 0, 0, 0, 35, 31 },
  // 2235: write_imageui, 
  { 5904, 4, 0, 0, 0, 44, 31 },
  { 5916, 4, 0, 0, 0, 44, 31 },
  { 5928, 4, 0, 0, 0, 44, 31 },
  { 5940, 4, 0, 0, 0, 44, 31 },
  { 5952, 4, 0, 0, 0, 44, 31 },
  { 5972, 4, 0, 0, 0, 44, 31 },
  { 5984, 4, 0, 0, 0, 44, 31 },
  { 5996, 4, 0, 0, 0, 44, 31 },
  { 6008, 4, 0, 0, 0, 44, 31 },
  { 6020, 4, 0, 0, 0, 44, 31 },
  { 6032, 4, 0, 0, 0, 44, 31 },
  { 6044, 4, 0, 0, 0, 44, 31 },
  { 6537, 5, 0, 0, 0, 34, 31 },
  { 6557, 5, 0, 0, 0, 34, 31 },
  { 6572, 5, 0, 0, 0, 34, 31 },
  { 6587, 5, 0, 0, 0, 34, 31 },
  { 6607, 5, 0, 0, 0, 35, 31 },
  // 2252: get_image_width, get_image_channel_data_type, get_image_channel_order, 
  { 6056, 2, 0, 1, 0, 44, 31 },
  { 6068, 2, 0, 1, 0, 44, 31 },
  { 6058, 2, 0, 1, 0, 44, 31 },
  { 6060, 2, 0, 1, 0, 44, 31 },
  { 6070, 2, 0, 1, 0, 44, 31 },
  { 6072, 2, 0, 1, 0, 44, 31 },
  { 6074, 2, 0, 1, 0, 44, 31 },
  { 6076, 2, 0, 1, 0, 44, 31 },
  { 6088, 2, 0, 1, 0, 44, 31 },
  { 6090, 2, 0, 1, 0, 44, 31 },
  { 6092, 2, 0, 1, 0, 44, 31 },
  { 6094, 2, 0, 1, 0, 44, 31 },
  { 6096, 2, 0, 1, 0, 44, 31 },
  { 6098, 2, 0, 1, 0, 44, 31 },
  { 6100, 2, 0, 1, 0, 44, 31 },
  { 6102, 2, 0, 1, 0, 44, 31 },
  { 6120, 2, 0, 1, 0, 44, 31 },
  { 6122, 2, 0, 1, 0, 44, 31 },
  { 6124, 2, 0, 1, 0, 44, 31 },
  { 6126, 2, 0, 1, 0, 44, 31 },
  { 6128, 2, 0, 1, 0, 44, 31 },
  { 6130, 2, 0, 1, 0, 44, 31 },
  { 6132, 2, 0, 1, 0, 44, 31 },
  { 6136, 2, 0, 1, 0, 44, 31 },
  { 6676, 2, 0, 1, 0, 26, 31 },
  { 6682, 2, 0, 1, 0, 26, 31 },
  { 6686, 2, 0, 1, 0, 26, 31 },
  { 6690, 2, 0, 1, 0, 26, 31 },
  { 6696, 2, 0, 1, 0, 26, 31 },
  { 6700, 2, 0, 1, 0, 26, 31 },
  { 6704, 2, 0, 1, 0, 26, 31 },
  { 6708, 2, 0, 1, 0, 26, 31 },
  { 6716, 2, 0, 1, 0, 26, 31 },
  { 6720, 2, 0, 1, 0, 26, 31 },
  { 6724, 2, 0, 1, 0, 26, 31 },
  { 6728, 2, 0, 1, 0, 26, 31 },
  // 2288: get_image_height, 
  { 6058, 2, 0, 1, 0, 44, 31 },
  { 6060, 2, 0, 1, 0, 44, 31 },
  { 6072, 2, 0, 1, 0, 44, 31 },
  { 6074, 2, 0, 1, 0, 44, 31 },
  { 6076, 2, 0, 1, 0, 44, 31 },
  { 6092, 2, 0, 1, 0, 44, 31 },
  { 6094, 2, 0, 1, 0, 44, 31 },
  { 6098, 2, 0, 1, 0, 44, 31 },
  { 6100, 2, 0, 1, 0, 44, 31 },
  { 6102, 2, 0, 1, 0, 44, 31 },
  { 6124, 2, 0, 1, 0, 44, 31 },
  { 6126, 2, 0, 1, 0, 44, 31 },
  { 6130, 2, 0, 1, 0, 44, 31 },
  { 6132, 2, 0, 1, 0, 44, 31 },
  { 6136, 2, 0, 1, 0, 44, 31 },
  { 6676, 2, 0, 1, 0, 26, 31 },
  { 6682, 2, 0, 1, 0, 26, 31 },
  { 6686, 2, 0, 1, 0, 26, 31 },
  { 6690, 2, 0, 1, 0, 26, 31 },
  { 6696, 2, 0, 1, 0, 26, 31 },
  { 6700, 2, 0, 1, 0, 26, 31 },
  { 6704, 2, 0, 1, 0, 26, 31 },
  { 6708, 2, 0, 1, 0, 26, 31 },
  { 6716, 2, 0, 1, 0, 26, 31 },
  { 6720, 2, 0, 1, 0, 26, 31 },
  { 6724, 2, 0, 1, 0, 26, 31 },
  { 6728, 2, 0, 1, 0, 26, 31 },
  // 2315: get_image_depth, 
  { 6060, 2, 0, 1, 0, 44, 31 },
  { 6094, 2, 0, 1, 0, 44, 31 },
  { 6126, 2, 0, 1, 0, 44, 31 },
  // 2318: get_image_dim, 
  { 6062, 2, 0, 1, 0, 44, 31 },
  { 6064, 2, 0, 1, 0, 44, 31 },
  { 6078, 2, 0, 1, 0, 44, 31 },
  { 6080, 2, 0, 1, 0, 44, 31 },
  { 6082, 2, 0, 1, 0, 44, 31 },
  { 6104, 2, 0, 1, 0, 44, 31 },
  { 6106, 2, 0, 1, 0, 44, 31 },
  { 6108, 2, 0, 1, 0, 44, 31 },
  { 6110, 2, 0, 1, 0, 44, 31 },
  { 6112, 2, 0, 1, 0, 44, 31 },
  { 6140, 2, 0, 1, 0, 44, 31 },
  { 6142, 2, 0, 1, 0, 44, 31 },
  { 6144, 2, 0, 1, 0, 44, 31 },
  { 6146, 2, 0, 1, 0, 44, 31 },
  { 6148, 2, 0, 1, 0, 44, 31 },
  { 6678, 2, 0, 1, 0, 26, 31 },
  { 6684, 2, 0, 1, 0, 26, 31 },
  { 6688, 2, 0, 1, 0, 26, 31 },
  { 6692, 2, 0, 1, 0, 26, 31 },
  { 6698, 2, 0, 1, 0, 26, 31 },
  { 6702, 2, 0, 1, 0, 26, 31 },
  { 6706, 2, 0, 1, 0, 26, 31 },
  { 6710, 2, 0, 1, 0, 26, 31 },
  { 6718, 2, 0, 1, 0, 26, 31 },
  { 6722, 2, 0, 1, 0, 26, 31 },
  { 6726, 2, 0, 1, 0, 26, 31 },
  { 6730, 2, 0, 1, 0, 26, 31 },
  // 2345: get_image_array_size, 
  { 6066, 2, 0, 1, 0, 44, 31 },
  { 6084, 2, 0, 1, 0, 44, 31 },
  { 6086, 2, 0, 1, 0, 44, 31 },
  { 6114, 2, 0, 1, 0, 44, 31 },
  { 6116, 2, 0, 1, 0, 44, 31 },
  { 6118, 2, 0, 1, 0, 44, 31 },
  { 6150, 2, 0, 1, 0, 44, 31 },
  { 6152, 2, 0, 1, 0, 44, 31 },
  { 6154, 2, 0, 1, 0, 44, 31 },
  { 6680, 2, 0, 1, 0, 26, 31 },
  { 6694, 2, 0, 1, 0, 26, 31 },
  { 6712, 2, 0, 1, 0, 26, 31 },
  { 6714, 2, 0, 1, 0, 26, 31 },
  { 6732, 2, 0, 1, 0, 26, 31 },
  { 6734, 2, 0, 1, 0, 26, 31 },
  // 2360: read_imageh, 
  { 6156, 4, 1, 0, 0, 44, 31 },
  { 6160, 4, 1, 0, 0, 44, 31 },
  { 6166, 4, 1, 0, 0, 44, 31 },
  { 6170, 4, 1, 0, 0, 44, 31 },
  { 6174, 4, 1, 0, 0, 44, 31 },
  { 6178, 4, 1, 0, 0, 44, 31 },
  { 6182, 4, 1, 0, 0, 44, 31 },
  { 6186, 4, 1, 0, 0, 44, 31 },
  { 6190, 4, 1, 0, 0, 44, 31 },
  { 6194, 4, 1, 0, 0, 44, 31 },
  { 6198, 3, 1, 0, 0, 44, 28 },
  { 6201, 3, 1, 0, 0, 44, 28 },
  { 6206, 3, 1, 0, 0, 44, 28 },
  { 6209, 3, 1, 0, 0, 44, 28 },
  { 6212, 3, 1, 0, 0, 44, 28 },
  { 6215, 3, 1, 0, 0, 44, 28 },
  { 6218, 3, 1, 0, 0, 44, 28 },
  { 6221, 3, 1, 0, 0, 44, 28 },
  { 6224, 3, 1, 0, 0, 44, 28 },
  { 6227, 3, 1, 0, 0, 44, 28 },
  { 6230, 3, 1, 0, 0, 44, 28 },
  { 6233, 3, 1, 0, 0, 44, 28 },
  // 2382: write_imageh, 
  { 6238, 4, 0, 0, 0, 44, 31 },
  { 6242, 4, 0, 0, 0, 44, 31 },
  { 6246, 4, 0, 0, 0, 44, 31 },
  { 6250, 4, 0, 0, 0, 44, 31 },
  { 6254, 4, 0, 0, 0, 44, 31 },
  { 6258, 4, 0, 0, 0, 44, 31 },
  { 6262, 4, 0, 0, 0, 44, 31 },
  { 6266, 4, 0, 0, 0, 44, 31 },
  { 6270, 4, 0, 0, 0, 44, 31 },
  { 6274, 4, 0, 0, 0, 44, 31 },
  { 6280, 4, 0, 0, 0, 44, 31 },
  { 6284, 4, 0, 0, 0, 44, 31 },
  // 2394: work_group_all, work_group_any, 
  { 772, 2, 0, 0, 1, 46, 31 },
  // 2395: work_group_broadcast, 
  { 6288, 3, 0, 0, 1, 46, 31 },
  { 6291, 4, 0, 0, 1, 46, 31 },
  { 6295, 5, 0, 0, 1, 46, 31 },
  // 2398: work_group_reduce_add, work_group_scan_exclusive_add, work_group_scan_inclusive_add, work_group_reduce_min, work_group_scan_exclusive_min, work_group_scan_inclusive_min, work_group_reduce_max, work_group_scan_exclusive_max, work_group_scan_inclusive_max, 
  { 6300, 2, 0, 0, 1, 46, 31 },
  // 2399: is_valid_reserve_id, 
  { 6302, 2, 0, 0, 0, 45, 31 },
  // 2400: enqueue_marker, 
  { 6304, 5, 0, 0, 0, 44, 24 },
  // 2401: retain_event, release_event, 
  { 6309, 2, 0, 0, 0, 44, 24 },
  // 2402: create_user_event, 
  { 6311, 1, 0, 0, 0, 44, 24 },
  // 2403: is_valid_event, 
  { 6312, 2, 0, 0, 0, 44, 24 },
  // 2404: set_user_event_status, 
  { 6314, 3, 0, 0, 0, 44, 24 },
  // 2405: capture_event_profiling_info, 
  { 6317, 4, 0, 0, 0, 44, 24 },
  // 2406: get_default_queue, 
  { 6321, 1, 0, 0, 0, 44, 24 },
  // 2407: ndrange_1D, 
  { 6322, 2, 0, 0, 0, 44, 24 },
  { 6324, 3, 0, 0, 0, 44, 24 },
  { 6327, 4, 0, 0, 0, 44, 24 },
  // 2410: ndrange_2D, ndrange_3D, 
  { 6331, 2, 0, 0, 0, 44, 24 },
  { 6333, 3, 0, 0, 0, 44, 24 },
  { 6336, 4, 0, 0, 0, 44, 24 },
  // 2413: get_image_num_mip_levels, 
  { 6056, 2, 0, 0, 0, 33, 31 },
  { 6058, 2, 0, 0, 0, 33, 31 },
  { 6060, 2, 0, 0, 0, 33, 31 },
  { 6070, 2, 0, 0, 0, 33, 31 },
  { 6072, 2, 0, 0, 0, 33, 31 },
  { 6074, 2, 0, 0, 0, 33, 31 },
  { 6076, 2, 0, 0, 0, 33, 31 },
  { 6088, 2, 0, 0, 0, 33, 31 },
  { 6092, 2, 0, 0, 0, 33, 31 },
  { 6094, 2, 0, 0, 0, 33, 31 },
  { 6096, 2, 0, 0, 0, 33, 31 },
  { 6098, 2, 0, 0, 0, 33, 31 },
  { 6100, 2, 0, 0, 0, 33, 31 },
  { 6102, 2, 0, 0, 0, 33, 31 },
  { 6120, 2, 0, 0, 0, 33, 31 },
  { 6124, 2, 0, 0, 0, 33, 31 },
  { 6126, 2, 0, 0, 0, 33, 31 },
  { 6128, 2, 0, 0, 0, 33, 31 },
  { 6130, 2, 0, 0, 0, 33, 31 },
  { 6132, 2, 0, 0, 0, 33, 31 },
  { 6136, 2, 0, 0, 0, 33, 31 },
  // 2434: get_image_num_samples, 
  { 6676, 2, 0, 1, 0, 26, 31 },
  { 6682, 2, 0, 1, 0, 26, 31 },
  { 6686, 2, 0, 1, 0, 26, 31 },
  { 6690, 2, 0, 1, 0, 26, 31 },
  { 6696, 2, 0, 1, 0, 26, 31 },
  { 6700, 2, 0, 1, 0, 26, 31 },
  { 6704, 2, 0, 1, 0, 26, 31 },
  { 6708, 2, 0, 1, 0, 26, 31 },
  { 6716, 2, 0, 1, 0, 26, 31 },
  { 6720, 2, 0, 1, 0, 26, 31 },
  { 6724, 2, 0, 1, 0, 26, 31 },
  { 6728, 2, 0, 1, 0, 26, 31 },
  // 2446: get_sub_group_size, get_max_sub_group_size, get_num_sub_groups, get_sub_group_id, get_sub_group_local_id, 
  { 1308, 1, 0, 0, 0, 43, 31 },
  // 2447: get_enqueued_num_sub_groups, 
  { 1308, 1, 0, 0, 0, 43, 24 },
  // 2448: sub_group_barrier, 
  { 3720, 2, 0, 0, 1, 43, 31 },
  { 3722, 3, 0, 0, 1, 43, 31 },
  // 2450: sub_group_all, sub_group_any, 
  { 772, 2, 0, 0, 1, 43, 31 },
  // 2451: sub_group_broadcast, 
  { 6736, 3, 0, 0, 1, 43, 31 },
  { 6741, 3, 0, 0, 1, 38, 31 },
  { 6744, 3, 0, 0, 1, 38, 31 },
  // 2454: sub_group_reduce_add, sub_group_reduce_min, sub_group_reduce_max, sub_group_scan_exclusive_add, sub_group_scan_exclusive_min, sub_group_scan_exclusive_max, sub_group_scan_inclusive_add, sub_group_scan_inclusive_min, sub_group_scan_inclusive_max, 
  { 6300, 2, 0, 0, 1, 43, 31 },
  { 6747, 2, 0, 0, 1, 38, 31 },
  // 2456: sub_group_elect, 
  { 6751, 1, 0, 0, 0, 40, 31 },
  // 2457: sub_group_non_uniform_all, sub_group_non_uniform_any, 
  { 772, 2, 0, 0, 0, 40, 31 },
  // 2458: sub_group_non_uniform_all_equal, 
  { 6752, 2, 0, 0, 0, 40, 31 },
  // 2459: sub_group_non_uniform_broadcast, 
  { 6754, 3, 0, 0, 0, 36, 31 },
  // 2460: sub_group_broadcast_first, 
  { 6757, 2, 0, 0, 0, 36, 31 },
  // 2461: sub_group_ballot, 
  { 6759, 2, 0, 0, 0, 36, 31 },
  // 2462: sub_group_inverse_ballot, 
  { 6761, 2, 0, 1, 0, 36, 31 },
  // 2463: sub_group_ballot_bit_extract, 
  { 6763, 3, 0, 1, 0, 36, 31 },
  // 2464: sub_group_ballot_bit_count, 
  { 6768, 2, 0, 1, 0, 36, 31 },
  // 2465: sub_group_ballot_inclusive_scan, sub_group_ballot_exclusive_scan, sub_group_ballot_find_lsb, sub_group_ballot_find_msb, 
  { 6768, 2, 0, 0, 0, 36, 31 },
  // 2466: get_sub_group_eq_mask, get_sub_group_ge_mask, get_sub_group_gt_mask, get_sub_group_le_mask, get_sub_group_lt_mask, 
  { 6770, 1, 0, 1, 0, 36, 31 },
  // 2467: sub_group_non_uniform_reduce_add, sub_group_non_uniform_reduce_min, sub_group_non_uniform_reduce_max, sub_group_non_uniform_reduce_mul, sub_group_non_uniform_scan_exclusive_add, sub_group_non_uniform_scan_exclusive_min, sub_group_non_uniform_scan_exclusive_max, sub_group_non_uniform_scan_exclusive_mul, sub_group_non_uniform_scan_inclusive_add, sub_group_non_uniform_scan_inclusive_min, sub_group_non_uniform_scan_inclusive_max, sub_group_non_uniform_scan_inclusive_mul, 
  { 6757, 2, 0, 0, 0, 39, 31 },
  // 2468: sub_group_non_uniform_reduce_and, sub_group_non_uniform_reduce_or, sub_group_non_uniform_reduce_xor, sub_group_non_uniform_scan_exclusive_and, sub_group_non_uniform_scan_exclusive_or, sub_group_non_uniform_scan_exclusive_xor, sub_group_non_uniform_scan_inclusive_and, sub_group_non_uniform_scan_inclusive_or, sub_group_non_uniform_scan_inclusive_xor, 
  { 6773, 2, 0, 0, 0, 39, 31 },
  // 2469: sub_group_non_uniform_reduce_logical_and, sub_group_non_uniform_reduce_logical_or, sub_group_non_uniform_reduce_logical_xor, sub_group_non_uniform_scan_exclusive_logical_and, sub_group_non_uniform_scan_exclusive_logical_or, sub_group_non_uniform_scan_exclusive_logical_xor, sub_group_non_uniform_scan_inclusive_logical_and, sub_group_non_uniform_scan_inclusive_logical_or, sub_group_non_uniform_scan_inclusive_logical_xor, 
  { 772, 2, 0, 0, 0, 39, 31 },
  // 2470: sub_group_shuffle, sub_group_shuffle_xor, 
  { 6779, 3, 0, 0, 0, 41, 31 },
  // 2471: sub_group_shuffle_up, sub_group_shuffle_down, 
  { 6779, 3, 0, 0, 0, 42, 31 },
  // 2472: sub_group_clustered_reduce_add, sub_group_clustered_reduce_min, sub_group_clustered_reduce_max, sub_group_clustered_reduce_mul, 
  { 6779, 3, 0, 0, 0, 37, 31 },
  // 2473: sub_group_clustered_reduce_and, sub_group_clustered_reduce_or, sub_group_clustered_reduce_xor, 
  { 6782, 3, 0, 0, 0, 37, 31 },
  // 2474: sub_group_clustered_reduce_logical_and, sub_group_clustered_reduce_logical_or, sub_group_clustered_reduce_logical_xor, 
  { 6785, 3, 0, 0, 0, 37, 31 },
  // 2475: bitfield_insert, 
  { 6788, 5, 0, 1, 0, 25, 31 },
  // 2476: bitfield_extract_signed, 
  { 6793, 4, 0, 1, 0, 25, 31 },
  { 6797, 4, 0, 1, 0, 25, 31 },
  // 2478: bitfield_extract_unsigned, 
  { 6801, 4, 0, 1, 0, 25, 31 },
  { 6805, 4, 0, 1, 0, 25, 31 },
  // 2480: bit_reverse, 
  { 1467, 2, 0, 1, 0, 25, 31 },
  // 2481: dot_acc_sat, 
  { 6821, 4, 0, 1, 0, 48, 31 },
  { 6825, 4, 0, 1, 0, 48, 31 },
  { 6829, 4, 0, 1, 0, 48, 31 },
  { 6833, 4, 0, 1, 0, 48, 31 },
  // 2485: dot_4x8packed_uu_uint, 
  { 6837, 3, 0, 1, 0, 49, 31 },
  // 2486: dot_4x8packed_ss_int, dot_4x8packed_us_int, dot_4x8packed_su_int, 
  { 6840, 3, 0, 1, 0, 49, 31 },
  // 2487: dot_acc_sat_4x8packed_uu_uint, 
  { 6843, 4, 0, 1, 0, 49, 31 },
  // 2488: dot_acc_sat_4x8packed_ss_int, dot_acc_sat_4x8packed_us_int, dot_acc_sat_4x8packed_su_int, 
  { 6847, 4, 0, 1, 0, 49, 31 },
  // 2489: arm_dot, 
  { 6809, 3, 0, 0, 0, 3, 31 },
  { 6812, 3, 0, 0, 0, 3, 31 },
  // 2491: arm_dot_acc, 
  { 6821, 4, 0, 0, 0, 1, 31 },
  { 6825, 4, 0, 0, 0, 1, 31 },
  { 6851, 4, 0, 0, 0, 0, 31 },
  { 6855, 4, 0, 0, 0, 0, 31 },
  // 2495: arm_dot_acc_sat, 
  { 6821, 4, 0, 0, 0, 2, 31 },
  { 6825, 4, 0, 0, 0, 2, 31 },
};


// Find out whether a string matches an existing OpenCL builtin function name.
// Returns: A pair <0, 0> if no name matches.
//          A pair <Index, Len> indexing the BuiltinTable if the name is
//          matching an OpenCL builtin function.
static std::pair<unsigned, unsigned> isOpenCLBuiltin(llvm::StringRef Name) {

  switch (Name.size()) {
  default: break;
  case 3:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(783, 1);	 // "abs"
      case 'l':	 // 1 string to match.
        if (Name[2] != 'l')
          break;
        return std::make_pair(854, 1);	 // "all"
      case 'n':	 // 1 string to match.
        if (Name[2] != 'y')
          break;
        return std::make_pair(854, 1);	 // "any"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(784, 1);	 // "clz"
      case 'o':	 // 1 string to match.
        if (Name[2] != 's')
          break;
        return std::make_pair(731, 1);	 // "cos"
      case 't':	 // 1 string to match.
        if (Name[2] != 'z')
          break;
        return std::make_pair(786, 1);	 // "ctz"
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot", 2) != 0)
        break;
      return std::make_pair(838, 7);	 // "dot"
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (Name[2] != 'f')
          break;
        return std::make_pair(731, 1);	 // "erf"
      case 'x':	 // 1 string to match.
        if (Name[2] != 'p')
          break;
        return std::make_pair(731, 1);	 // "exp"
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ma", 2) != 0)
        break;
      return std::make_pair(752, 1);	 // "fma"
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "log"
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          return std::make_pair(752, 1);	 // "mad"
        case 'x':	 // 1 string to match.
          return std::make_pair(789, 6);	 // "max"
        }
        break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'n':	 // 1 string to match.
          return std::make_pair(789, 6);	 // "min"
        case 'x':	 // 1 string to match.
          return std::make_pair(816, 4);	 // "mix"
        }
        break;
      }
      break;
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(732, 3);	 // "nan"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      return std::make_pair(735, 1);	 // "pow"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "in", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "sin"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "an", 2) != 0)
        break;
      return std::make_pair(731, 1);	 // "tan"
    }
    break;
  case 4:	 // 25 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "os", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "acos"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "in", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "asin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "atan"
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cbrt"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "il", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "ceil"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "sh", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "cosh"
      }
      break;
    case 'e':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "fc", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "erfc"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+2, "p2", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "exp2"
      }
      break;
    case 'f':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "bs", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "fabs"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "im", 2) != 0)
          break;
        return std::make_pair(735, 1);	 // "fdim"
      case 'm':	 // 3 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[3] != 'x')
            break;
          return std::make_pair(736, 4);	 // "fmax"
        case 'i':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(736, 4);	 // "fmin"
        case 'o':	 // 1 string to match.
          if (Name[3] != 'd')
            break;
          return std::make_pair(735, 1);	 // "fmod"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "add", 3) != 0)
        break;
      return std::make_pair(788, 1);	 // "hadd"
    case 'l':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "og", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "log2"
      case 'b':	 // 1 string to match.
        return std::make_pair(731, 1);	 // "logb"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "odf", 3) != 0)
        break;
      return std::make_pair(753, 4);	 // "modf"
    case 'p':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ow", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case 'n':	 // 1 string to match.
        return std::make_pair(749, 3);	 // "pown"
      case 'r':	 // 1 string to match.
        return std::make_pair(735, 1);	 // "powr"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "int", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "rint"
    case 's':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'i':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'g':	 // 1 string to match.
          if (Name[3] != 'n')
            break;
          return std::make_pair(731, 1);	 // "sign"
        case 'n':	 // 1 string to match.
          if (Name[3] != 'h')
            break;
          return std::make_pair(731, 1);	 // "sinh"
        }
        break;
      case 'q':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rt", 2) != 0)
          break;
        return std::make_pair(731, 1);	 // "sqrt"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ep", 2) != 0)
          break;
        return std::make_pair(812, 4);	 // "step"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "anh", 3) != 0)
        break;
      return std::make_pair(731, 1);	 // "tanh"
    }
    break;
  case 5:	 // 28 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "osh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "acosh"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inh", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinh"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "an", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(735, 1);	 // "atan2"
        case 'h':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "atanh"
        }
        break;
      }
      break;
    case 'c':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amp", 3) != 0)
          break;
        return std::make_pair(801, 6);	 // "clamp"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "spi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "cospi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oss", 3) != 0)
          break;
        return std::make_pair(832, 6);	 // "cross"
      }
      break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "xp", 2) != 0)
        break;
      switch (Name[3]) {
      default: break;
      case '1':	 // 1 string to match.
        if (Name[4] != '0')
          break;
        return std::make_pair(731, 1);	 // "exp10"
      case 'm':	 // 1 string to match.
        if (Name[4] != '1')
          break;
        return std::make_pair(731, 1);	 // "expm1"
      }
      break;
    case 'f':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oor", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "floor"
      case 'r':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "ct", 2) != 0)
            break;
          return std::make_pair(753, 4);	 // "fract"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+3, "xp", 2) != 0)
            break;
          return std::make_pair(757, 12);	 // "frexp"
        }
        break;
      }
      break;
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ypot", 4) != 0)
        break;
      return std::make_pair(735, 1);	 // "hypot"
    case 'i':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ogb", 3) != 0)
          break;
        return std::make_pair(740, 3);	 // "ilogb"
      case 's':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nf", 2) != 0)
            break;
          return std::make_pair(849, 5);	 // "isinf"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+3, "an", 2) != 0)
            break;
          return std::make_pair(849, 5);	 // "isnan"
        }
        break;
      }
      break;
    case 'l':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "exp", 3) != 0)
          break;
        return std::make_pair(743, 6);	 // "ldexp"
      case 'o':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "g1", 2) != 0)
          break;
        switch (Name[4]) {
        default: break;
        case '0':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log10"
        case 'p':	 // 1 string to match.
          return std::make_pair(731, 1);	 // "log1p"
        }
        break;
      }
      break;
    case 'm':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d24", 3) != 0)
          break;
        return std::make_pair(808, 2);	 // "mad24"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l24", 3) != 0)
          break;
        return std::make_pair(810, 2);	 // "mul24"
      }
      break;
    case 'r':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "add", 3) != 0)
          break;
        return std::make_pair(788, 1);	 // "rhadd"
      case 'o':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "tn", 2) != 0)
            break;
          return std::make_pair(749, 3);	 // "rootn"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+3, "nd", 2) != 0)
            break;
          return std::make_pair(731, 1);	 // "round"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "qrt", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "rsqrt"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "inpi", 4) != 0)
        break;
      return std::make_pair(731, 1);	 // "sinpi"
    case 't':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+2, "npi", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "tanpi"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "unc", 3) != 0)
          break;
        return std::make_pair(731, 1);	 // "trunc"
      }
      break;
    }
    break;
  case 6:	 // 19 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ospi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "acospi"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "inpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "asinpi"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "anpi", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "atanpi"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sless", 5) != 0)
        break;
      return std::make_pair(855, 5);	 // "isless"
    case 'l':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ngth", 4) != 0)
          break;
        return std::make_pair(824, 3);	 // "length"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+2, "amma", 4) != 0)
          break;
        return std::make_pair(731, 1);	 // "lgamma"
      }
      break;
    case 'm':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+3, "_hi", 3) != 0)
            break;
          return std::make_pair(807, 1);	 // "mad_hi"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+3, "mag", 3) != 0)
            break;
          return std::make_pair(735, 1);	 // "maxmag"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "nmag", 4) != 0)
          break;
        return std::make_pair(735, 1);	 // "minmag"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "l_hi", 4) != 0)
          break;
        return std::make_pair(788, 1);	 // "mul_hi"
      }
      break;
    case 'r':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "mquo", 4) != 0)
          break;
        return std::make_pair(769, 12);	 // "remquo"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tate", 4) != 0)
          break;
        return std::make_pair(788, 1);	 // "rotate"
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "lect", 4) != 0)
          break;
        return std::make_pair(861, 10);	 // "select"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ncos", 4) != 0)
          break;
        return std::make_pair(753, 4);	 // "sincos"
      }
      break;
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma", 5) != 0)
        break;
      return std::make_pair(731, 1);	 // "tgamma"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "load", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case '2':	 // 1 string to match.
        return std::make_pair(871, 55);	 // "vload2"
      case '3':	 // 1 string to match.
        return std::make_pair(970, 55);	 // "vload3"
      case '4':	 // 1 string to match.
        return std::make_pair(1069, 55);	 // "vload4"
      case '8':	 // 1 string to match.
        return std::make_pair(1168, 55);	 // "vload8"
      }
      break;
    }
    break;
  case 7:	 // 17 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+2, "d_sat", 5) != 0)
          break;
        return std::make_pair(788, 1);	 // "add_sat"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot", 5) != 0)
          break;
        return std::make_pair(2489, 2);	 // "arm_dot"
      case 't':	 // 2 strings to match.
        switch (Name[2]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+3, "n2pi", 4) != 0)
            break;
          return std::make_pair(735, 1);	 // "atan2pi"
        case 'o':	 // 1 string to match.
          if (memcmp(Name.data()+3, "m_or", 4) != 0)
            break;
          return std::make_pair(1480, 8);	 // "atom_or"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "arrier", 6) != 0)
        break;
      return std::make_pair(1444, 1);	 // "barrier"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "egrees", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "degrees"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sequal", 6) != 0)
        break;
      return std::make_pair(855, 5);	 // "isequal"
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ad_sat", 6) != 0)
        break;
      return std::make_pair(807, 1);	 // "mad_sat"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "adians", 6) != 0)
        break;
      return std::make_pair(731, 1);	 // "radians"
    case 's':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+2, "uffle", 5) != 0)
          break;
        return std::make_pair(1719, 176);	 // "shuffle"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+2, "gnbit", 5) != 0)
          break;
        return std::make_pair(849, 5);	 // "signbit"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_sat", 5) != 0)
          break;
        return std::make_pair(788, 1);	 // "sub_sat"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oad16", 5) != 0)
          break;
        return std::make_pair(1267, 55);	 // "vload16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(926, 44);	 // "vstore2"
        case '3':	 // 1 string to match.
          return std::make_pair(1025, 44);	 // "vstore3"
        case '4':	 // 1 string to match.
          return std::make_pair(1124, 44);	 // "vstore4"
        case '8':	 // 1 string to match.
          return std::make_pair(1223, 44);	 // "vstore8"
        }
        break;
      }
      break;
    }
    break;
  case 8:	 // 24 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+2, "s_diff", 6) != 0)
          break;
        return std::make_pair(787, 1);	 // "abs_diff"
      case 't':	 // 8 strings to match.
        if (memcmp(Name.data()+2, "om_", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1456, 8);	 // "atom_add"
          case 'n':	 // 1 string to match.
            if (Name[7] != 'd')
              break;
            return std::make_pair(1480, 8);	 // "atom_and"
          }
          break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ec", 2) != 0)
            break;
          return std::make_pair(1464, 8);	 // "atom_dec"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+6, "nc", 2) != 0)
            break;
          return std::make_pair(1464, 8);	 // "atom_inc"
        case 'm':	 // 2 strings to match.
          switch (Name[6]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[7] != 'x')
              break;
            return std::make_pair(1480, 8);	 // "atom_max"
          case 'i':	 // 1 string to match.
            if (Name[7] != 'n')
              break;
            return std::make_pair(1480, 8);	 // "atom_min"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+6, "ub", 2) != 0)
            break;
          return std::make_pair(1456, 8);	 // "atom_sub"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+6, "or", 2) != 0)
            break;
          return std::make_pair(1480, 8);	 // "atom_xor"
        }
        break;
      }
      break;
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "opysign", 7) != 0)
        break;
      return std::make_pair(735, 1);	 // "copysign"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "istance", 7) != 0)
        break;
      return std::make_pair(845, 3);	 // "distance"
    case 'h':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+6, "os", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_cos"
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "in", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sin"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+6, "an", 2) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_tan"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+3, "inite", 5) != 0)
          break;
        return std::make_pair(849, 5);	 // "isfinite"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ormal", 5) != 0)
          break;
        return std::make_pair(849, 5);	 // "isnormal"
      }
      break;
    case 'l':	 // 1 string to match.
      if (memcmp(Name.data()+1, "gamma_r", 7) != 0)
        break;
      return std::make_pair(757, 12);	 // "lgamma_r"
    case 'p':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "pcount", 6) != 0)
          break;
        return std::make_pair(785, 1);	 // "popcount"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "efetch", 6) != 0)
          break;
        return std::make_pair(1455, 1);	 // "prefetch"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "huffle2", 7) != 0)
        break;
      return std::make_pair(1895, 176);	 // "shuffle2"
    case 'u':	 // 1 string to match.
      if (memcmp(Name.data()+1, "psample", 7) != 0)
        break;
      return std::make_pair(795, 6);	 // "upsample"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "store16", 7) != 0)
        break;
      return std::make_pair(1322, 44);	 // "vstore16"
    }
    break;
  case 9:	 // 14 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "xchg", 4) != 0)
          break;
        return std::make_pair(1456, 8);	 // "atom_xchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_or", 4) != 0)
          break;
        return std::make_pair(1496, 6);	 // "atomic_or"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itselect", 8) != 0)
        break;
      return std::make_pair(860, 1);	 // "bitselect"
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_fence", 8) != 0)
        break;
      return std::make_pair(1448, 2);	 // "get_fence"
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+6, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "half_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+6, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_sqrt"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reater", 6) != 0)
          break;
        return std::make_pair(855, 5);	 // "isgreater"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+3, "rdered", 6) != 0)
          break;
        return std::make_pair(855, 5);	 // "isordered"
      }
      break;
    case 'm':	 // 1 string to match.
      if (memcmp(Name.data()+1, "em_fence", 8) != 0)
        break;
      return std::make_pair(1447, 1);	 // "mem_fence"
    case 'n':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "xtafter", 7) != 0)
          break;
        return std::make_pair(735, 1);	 // "nextafter"
      case 'o':	 // 1 string to match.
        if (memcmp(Name.data()+2, "rmalize", 7) != 0)
          break;
        return std::make_pair(827, 3);	 // "normalize"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "emainder", 8) != 0)
        break;
      return std::make_pair(735, 1);	 // "remainder"
    }
    break;
  case 10:	 // 23 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1496, 6);	 // "atomic_add"
        case 'n':	 // 1 string to match.
          if (Name[9] != 'd')
            break;
          return std::make_pair(1496, 6);	 // "atomic_and"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ec", 2) != 0)
          break;
        return std::make_pair(1502, 6);	 // "atomic_dec"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+8, "nc", 2) != 0)
          break;
        return std::make_pair(1502, 6);	 // "atomic_inc"
      case 'm':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[9] != 'x')
            break;
          return std::make_pair(1496, 6);	 // "atomic_max"
        case 'i':	 // 1 string to match.
          if (Name[9] != 'n')
            break;
          return std::make_pair(1496, 6);	 // "atomic_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "ub", 2) != 0)
          break;
        return std::make_pair(1496, 6);	 // "atomic_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+8, "or", 2) != 0)
          break;
        return std::make_pair(1496, 6);	 // "atomic_xor"
      }
      break;
    case 'h':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "alf_", 4) != 0)
        break;
      switch (Name[5]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+6, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+6, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "half_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[6]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+7, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+7, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "half_rsqrt"
        }
        break;
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "snotequal", 9) != 0)
        break;
      return std::make_pair(855, 5);	 // "isnotequal"
    case 'n':	 // 8 strings to match.
      switch (Name[1]) {
      default: break;
      case 'a':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tive_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+8, "os", 2) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_cos"
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xp", 2) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_exp"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "og", 2) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_log"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+8, "in", 2) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_sin"
        case 't':	 // 1 string to match.
          if (memcmp(Name.data()+8, "an", 2) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_tan"
        }
        break;
      case 'd':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "range_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case '1':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2407, 3);	 // "ndrange_1D"
        case '2':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2410, 3);	 // "ndrange_2D"
        case '3':	 // 1 string to match.
          if (Name[9] != 'D')
            break;
          return std::make_pair(2410, 3);	 // "ndrange_3D"
        }
        break;
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "moothstep", 9) != 0)
        break;
      return std::make_pair(820, 4);	 // "smoothstep"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "load_half", 9) != 0)
        break;
      return std::make_pair(1366, 5);	 // "vload_half"
    }
    break;
  case 11:	 // 23 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 4 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc", 9) != 0)
          break;
        return std::make_pair(2491, 4);	 // "arm_dot_acc"
      case 't':	 // 3 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+8, "nit", 3) != 0)
            break;
          return std::make_pair(1515, 6);	 // "atomic_init"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+8, "oad", 3) != 0)
            break;
          return std::make_pair(1548, 9);	 // "atomic_load"
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+8, "chg", 3) != 0)
            break;
          return std::make_pair(1488, 8);	 // "atomic_xchg"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "it_reverse", 10) != 0)
        break;
      return std::make_pair(2480, 1);	 // "bit_reverse"
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "onvert_int", 10) != 0)
        break;
      return std::make_pair(397, 11);	 // "convert_int"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_acc_sat", 10) != 0)
        break;
      return std::make_pair(2481, 4);	 // "dot_acc_sat"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_length", 10) != 0)
        break;
      return std::make_pair(830, 1);	 // "fast_length"
    case 'h':	 // 1 string to match.
      if (memcmp(Name.data()+1, "alf_divide", 10) != 0)
        break;
      return std::make_pair(782, 1);	 // "half_divide"
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+3, "essequal", 8) != 0)
          break;
        return std::make_pair(855, 5);	 // "islessequal"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+3, "nordered", 8) != 0)
          break;
        return std::make_pair(855, 5);	 // "isunordered"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp2"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og2", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log2"
      case 'p':	 // 1 string to match.
        if (memcmp(Name.data()+8, "owr", 3) != 0)
          break;
        return std::make_pair(782, 1);	 // "native_powr"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+8, "qrt", 3) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_sqrt"
      }
      break;
    case 'r':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ead_image", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2071, 52);	 // "read_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2360, 22);	 // "read_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2123, 36);	 // "read_imagei"
      }
      break;
    case 'v':	 // 5 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "oad_half", 8) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1371, 5);	 // "vload_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(1392, 5);	 // "vload_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(1397, 5);	 // "vload_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(1402, 5);	 // "vload_half8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        return std::make_pair(1376, 8);	 // "vstore_half"
      }
      break;
    }
    break;
  case 12:	 // 31 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "tom", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+5, "cmpxchg", 7) != 0)
          break;
        return std::make_pair(1472, 8);	 // "atom_cmpxchg"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "c_store", 7) != 0)
          break;
        return std::make_pair(1521, 9);	 // "atomic_store"
      }
      break;
    case 'c':	 // 8 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        return std::make_pair(133, 11);	 // "convert_char"
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        return std::make_pair(12, 11);	 // "convert_half"
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(408, 11);	 // "convert_int2"
        case '3':	 // 1 string to match.
          return std::make_pair(419, 11);	 // "convert_int3"
        case '4':	 // 1 string to match.
          return std::make_pair(430, 11);	 // "convert_int4"
        case '8':	 // 1 string to match.
          return std::make_pair(441, 11);	 // "convert_int8"
        }
        break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        return std::make_pair(595, 11);	 // "convert_long"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+9, "int", 3) != 0)
          break;
        return std::make_pair(463, 11);	 // "convert_uint"
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "roup_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_group_id"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_id", 7) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_id"
      case 'w':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ork_dim", 7) != 0)
          break;
        return std::make_pair(727, 1);	 // "get_work_dim"
      }
      break;
    case 'n':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ative_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xp10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_exp10"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+8, "og10", 4) != 0)
          break;
        return std::make_pair(781, 1);	 // "native_log10"
      case 'r':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "cip", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_recip"
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+9, "qrt", 3) != 0)
            break;
          return std::make_pair(781, 1);	 // "native_rsqrt"
        }
        break;
      }
      break;
    case 'r':	 // 2 strings to match.
      if (Name[1] != 'e')
        break;
      switch (Name[2]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+3, "d_imageui", 9) != 0)
          break;
        return std::make_pair(2159, 36);	 // "read_imageui"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+3, "ain_event", 9) != 0)
          break;
        return std::make_pair(2401, 1);	 // "retain_event"
      }
      break;
    case 'v':	 // 9 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "oad", 3) != 0)
          break;
        switch (Name[5]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+6, "half16", 6) != 0)
            break;
          return std::make_pair(1407, 5);	 // "vload_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+6, "_half", 5) != 0)
            break;
          switch (Name[11]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(1371, 5);	 // "vloada_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1392, 5);	 // "vloada_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1397, 5);	 // "vloada_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1402, 5);	 // "vloada_half8"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+2, "tore_half", 9) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(1384, 8);	 // "vstore_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(1412, 8);	 // "vstore_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(1420, 8);	 // "vstore_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstore_half8"
        }
        break;
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "rite_image", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'f':	 // 1 string to match.
        return std::make_pair(2195, 23);	 // "write_imagef"
      case 'h':	 // 1 string to match.
        return std::make_pair(2382, 12);	 // "write_imageh"
      case 'i':	 // 1 string to match.
        return std::make_pair(2218, 17);	 // "write_imagei"
      }
      break;
    }
    break;
  case 13:	 // 36 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 21 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(144, 11);	 // "convert_char2"
        case '3':	 // 1 string to match.
          return std::make_pair(155, 11);	 // "convert_char3"
        case '4':	 // 1 string to match.
          return std::make_pair(166, 11);	 // "convert_char4"
        case '8':	 // 1 string to match.
          return std::make_pair(177, 11);	 // "convert_char8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        return std::make_pair(122, 11);	 // "convert_float"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(23, 11);	 // "convert_half2"
        case '3':	 // 1 string to match.
          return std::make_pair(34, 11);	 // "convert_half3"
        case '4':	 // 1 string to match.
          return std::make_pair(45, 11);	 // "convert_half4"
        case '8':	 // 1 string to match.
          return std::make_pair(56, 11);	 // "convert_half8"
        }
        break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+9, "nt16", 4) != 0)
          break;
        return std::make_pair(452, 11);	 // "convert_int16"
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(606, 11);	 // "convert_long2"
        case '3':	 // 1 string to match.
          return std::make_pair(617, 11);	 // "convert_long3"
        case '4':	 // 1 string to match.
          return std::make_pair(628, 11);	 // "convert_long4"
        case '8':	 // 1 string to match.
          return std::make_pair(639, 11);	 // "convert_long8"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        return std::make_pair(265, 11);	 // "convert_short"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          return std::make_pair(199, 11);	 // "convert_uchar"
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(474, 11);	 // "convert_uint2"
          case '3':	 // 1 string to match.
            return std::make_pair(485, 11);	 // "convert_uint3"
          case '4':	 // 1 string to match.
            return std::make_pair(496, 11);	 // "convert_uint4"
          case '8':	 // 1 string to match.
            return std::make_pair(507, 11);	 // "convert_uint8"
          }
          break;
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          return std::make_pair(661, 11);	 // "convert_ulong"
        }
        break;
      }
      break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_distance", 12) != 0)
        break;
      return std::make_pair(848, 1);	 // "fast_distance"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_id", 8) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_dim", 8) != 0)
          break;
        return std::make_pair(2318, 27);	 // "get_image_dim"
      }
      break;
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "slessgreater", 12) != 0)
        break;
      return std::make_pair(855, 5);	 // "islessgreater"
    case 'n':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ative_divide", 12) != 0)
        break;
      return std::make_pair(782, 1);	 // "native_divide"
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "elease_event", 12) != 0)
        break;
      return std::make_pair(2401, 1);	 // "release_event"
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_a", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[12] != 'l')
          break;
        return std::make_pair(2450, 1);	 // "sub_group_all"
      case 'n':	 // 1 string to match.
        if (Name[12] != 'y')
          break;
        return std::make_pair(2450, 1);	 // "sub_group_any"
      }
      break;
    case 'v':	 // 6 strings to match.
      switch (Name[1]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+2, "oada_half16", 11) != 0)
          break;
        return std::make_pair(1407, 5);	 // "vloada_half16"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+2, "tore", 4) != 0)
          break;
        switch (Name[6]) {
        default: break;
        case '_':	 // 1 string to match.
          if (memcmp(Name.data()+7, "half16", 6) != 0)
            break;
          return std::make_pair(1436, 8);	 // "vstore_half16"
        case 'a':	 // 4 strings to match.
          if (memcmp(Name.data()+7, "_half", 5) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(1384, 8);	 // "vstorea_half2"
          case '3':	 // 1 string to match.
            return std::make_pair(1412, 8);	 // "vstorea_half3"
          case '4':	 // 1 string to match.
            return std::make_pair(1420, 8);	 // "vstorea_half4"
          case '8':	 // 1 string to match.
            return std::make_pair(1428, 8);	 // "vstorea_half8"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_imageui", 12) != 0)
        break;
      return std::make_pair(2235, 17);	 // "write_imageui"
    }
    break;
  case 14:	 // 33 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_cmpxchg", 13) != 0)
        break;
      return std::make_pair(1508, 6);	 // "atomic_cmpxchg"
    case 'c':	 // 22 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 1 string to match.
        if (memcmp(Name.data()+9, "har16", 5) != 0)
          break;
        return std::make_pair(188, 11);	 // "convert_char16"
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        return std::make_pair(529, 11);	 // "convert_double"
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(67, 11);	 // "convert_float2"
        case '3':	 // 1 string to match.
          return std::make_pair(78, 11);	 // "convert_float3"
        case '4':	 // 1 string to match.
          return std::make_pair(89, 11);	 // "convert_float4"
        case '8':	 // 1 string to match.
          return std::make_pair(100, 11);	 // "convert_float8"
        }
        break;
      case 'h':	 // 1 string to match.
        if (memcmp(Name.data()+9, "alf16", 5) != 0)
          break;
        return std::make_pair(1, 11);	 // "convert_half16"
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ong16", 5) != 0)
          break;
        return std::make_pair(650, 11);	 // "convert_long16"
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(276, 11);	 // "convert_short2"
        case '3':	 // 1 string to match.
          return std::make_pair(287, 11);	 // "convert_short3"
        case '4':	 // 1 string to match.
          return std::make_pair(298, 11);	 // "convert_short4"
        case '8':	 // 1 string to match.
          return std::make_pair(309, 11);	 // "convert_short8"
        }
        break;
      case 'u':	 // 10 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(210, 11);	 // "convert_uchar2"
          case '3':	 // 1 string to match.
            return std::make_pair(221, 11);	 // "convert_uchar3"
          case '4':	 // 1 string to match.
            return std::make_pair(232, 11);	 // "convert_uchar4"
          case '8':	 // 1 string to match.
            return std::make_pair(243, 11);	 // "convert_uchar8"
          }
          break;
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+10, "nt16", 4) != 0)
            break;
          return std::make_pair(518, 11);	 // "convert_uint16"
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(672, 11);	 // "convert_ulong2"
          case '3':	 // 1 string to match.
            return std::make_pair(683, 11);	 // "convert_ulong3"
          case '4':	 // 1 string to match.
            return std::make_pair(694, 11);	 // "convert_ulong4"
          case '8':	 // 1 string to match.
            return std::make_pair(705, 11);	 // "convert_ulong8"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          return std::make_pair(331, 11);	 // "convert_ushort"
        }
        break;
      }
      break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+1, "nqueue_marker", 13) != 0)
        break;
      return std::make_pair(2400, 1);	 // "enqueue_marker"
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ast_normalize", 13) != 0)
        break;
      return std::make_pair(831, 1);	 // "fast_normalize"
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ocal_size", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_local_size"
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_groups", 9) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_num_groups"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (Name[1] != 's')
        break;
      switch (Name[2]) {
      default: break;
      case '_':	 // 1 string to match.
        if (memcmp(Name.data()+3, "valid_event", 11) != 0)
          break;
        return std::make_pair(2403, 1);	 // "is_valid_event"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+3, "reaterequal", 11) != 0)
          break;
        return std::make_pair(855, 5);	 // "isgreaterequal"
      }
      break;
    case 'r':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ead_mem_fence", 13) != 0)
        break;
      return std::make_pair(1447, 1);	 // "read_mem_fence"
    case 'v':	 // 1 string to match.
      if (memcmp(Name.data()+1, "storea_half16", 13) != 0)
        break;
      return std::make_pair(1436, 8);	 // "vstorea_half16"
    case 'w':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ork_group_a", 11) != 0)
        break;
      switch (Name[12]) {
      default: break;
      case 'l':	 // 1 string to match.
        if (Name[13] != 'l')
          break;
        return std::make_pair(2394, 1);	 // "work_group_all"
      case 'n':	 // 1 string to match.
        if (Name[13] != 'y')
          break;
        return std::make_pair(2394, 1);	 // "work_group_any"
      }
      break;
    }
    break;
  case 15:	 // 30 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      switch (Name[1]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "m_dot_acc_sat", 13) != 0)
          break;
        return std::make_pair(2495, 2);	 // "arm_dot_acc_sat"
      case 't':	 // 2 strings to match.
        if (memcmp(Name.data()+2, "omic_", 5) != 0)
          break;
        switch (Name[7]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+8, "xchange", 7) != 0)
            break;
          return std::make_pair(1575, 9);	 // "atomic_exchange"
        case 'f':	 // 1 string to match.
          if (memcmp(Name.data()+8, "etch_or", 7) != 0)
            break;
          return std::make_pair(1662, 4);	 // "atomic_fetch_or"
        }
        break;
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_insert", 14) != 0)
        break;
      return std::make_pair(2475, 1);	 // "bitfield_insert"
    case 'c':	 // 17 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 1 string to match.
          return std::make_pair(540, 11);	 // "convert_double2"
        case '3':	 // 1 string to match.
          return std::make_pair(551, 11);	 // "convert_double3"
        case '4':	 // 1 string to match.
          return std::make_pair(562, 11);	 // "convert_double4"
        case '8':	 // 1 string to match.
          return std::make_pair(573, 11);	 // "convert_double8"
        }
        break;
      case 'f':	 // 1 string to match.
        if (memcmp(Name.data()+9, "loat16", 6) != 0)
          break;
        return std::make_pair(111, 11);	 // "convert_float16"
      case 'i':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "nt_", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[13] != 't')
            break;
          switch (Name[14]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(397, 11);	 // "convert_int_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+13, "at", 2) != 0)
            break;
          return std::make_pair(397, 11);	 // "convert_int_sat"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+9, "hort16", 6) != 0)
          break;
        return std::make_pair(320, 11);	 // "convert_short16"
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 1 string to match.
          if (memcmp(Name.data()+10, "har16", 5) != 0)
            break;
          return std::make_pair(254, 11);	 // "convert_uchar16"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+10, "ong16", 5) != 0)
            break;
          return std::make_pair(716, 11);	 // "convert_ulong16"
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 1 string to match.
            return std::make_pair(342, 11);	 // "convert_ushort2"
          case '3':	 // 1 string to match.
            return std::make_pair(353, 11);	 // "convert_ushort3"
          case '4':	 // 1 string to match.
            return std::make_pair(364, 11);	 // "convert_ushort4"
          case '8':	 // 1 string to match.
            return std::make_pair(375, 11);	 // "convert_ushort8"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_size", 10) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_size"
      case 'i':	 // 2 strings to match.
        if (memcmp(Name.data()+5, "mage_", 5) != 0)
          break;
        switch (Name[10]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+11, "epth", 4) != 0)
            break;
          return std::make_pair(2315, 3);	 // "get_image_depth"
        case 'w':	 // 1 string to match.
          if (memcmp(Name.data()+11, "idth", 4) != 0)
            break;
          return std::make_pair(2252, 36);	 // "get_image_width"
        }
        break;
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_elect", 14) != 0)
        break;
      return std::make_pair(2456, 1);	 // "sub_group_elect"
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "store_half_rt", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1376, 8);	 // "vstore_half_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1376, 8);	 // "vstore_half_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1376, 8);	 // "vstore_half_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1376, 8);	 // "vstore_half_rtz"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "rite_mem_fence", 14) != 0)
        break;
      return std::make_pair(1447, 1);	 // "write_mem_fence"
    }
    break;
  case 16:	 // 66 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1620, 14);	 // "atomic_fetch_add"
        case 'n':	 // 1 string to match.
          if (Name[15] != 'd')
            break;
          return std::make_pair(1662, 4);	 // "atomic_fetch_and"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[15] != 'x')
            break;
          return std::make_pair(1674, 13);	 // "atomic_fetch_max"
        case 'i':	 // 1 string to match.
          if (Name[15] != 'n')
            break;
          return std::make_pair(1674, 13);	 // "atomic_fetch_min"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub", 2) != 0)
          break;
        return std::make_pair(1620, 14);	 // "atomic_fetch_sub"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or", 2) != 0)
          break;
        return std::make_pair(1662, 4);	 // "atomic_fetch_xor"
      }
      break;
    case 'c':	 // 41 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(133, 11);	 // "convert_char_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(133, 11);	 // "convert_char_sat"
        }
        break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+9, "ouble16", 7) != 0)
          break;
        return std::make_pair(584, 11);	 // "convert_double16"
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf_rt", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(12, 11);	 // "convert_half_rtz"
        }
        break;
      case 'i':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(408, 11);	 // "convert_int2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(408, 11);	 // "convert_int2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(419, 11);	 // "convert_int3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(419, 11);	 // "convert_int3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(430, 11);	 // "convert_int4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(430, 11);	 // "convert_int4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[12] != '_')
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(441, 11);	 // "convert_int8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(441, 11);	 // "convert_int8_sat"
          }
          break;
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong_", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[14] != 't')
            break;
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(595, 11);	 // "convert_long_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+14, "at", 2) != 0)
            break;
          return std::make_pair(595, 11);	 // "convert_long_sat"
        }
        break;
      case 'u':	 // 6 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt_", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[14] != 't')
              break;
            switch (Name[15]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(463, 11);	 // "convert_uint_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+14, "at", 2) != 0)
              break;
            return std::make_pair(463, 11);	 // "convert_uint_sat"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+10, "hort16", 6) != 0)
            break;
          return std::make_pair(386, 11);	 // "convert_ushort16"
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_height", 11) != 0)
          break;
        return std::make_pair(2288, 27);	 // "get_image_height"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_id", 11) != 0)
          break;
        return std::make_pair(2446, 1);	 // "get_sub_group_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_ballot", 15) != 0)
        break;
      return std::make_pair(2461, 1);	 // "sub_group_ballot"
    case 'v':	 // 16 strings to match.
      if (memcmp(Name.data()+1, "store_half", 10) != 0)
        break;
      switch (Name[11]) {
      default: break;
      case '2':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1384, 8);	 // "vstore_half2_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1384, 8);	 // "vstore_half2_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1384, 8);	 // "vstore_half2_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1384, 8);	 // "vstore_half2_rtz"
        }
        break;
      case '3':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1412, 8);	 // "vstore_half3_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1412, 8);	 // "vstore_half3_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1412, 8);	 // "vstore_half3_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1412, 8);	 // "vstore_half3_rtz"
        }
        break;
      case '4':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1420, 8);	 // "vstore_half4_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1420, 8);	 // "vstore_half4_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1420, 8);	 // "vstore_half4_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1420, 8);	 // "vstore_half4_rtz"
        }
        break;
      case '8':	 // 4 strings to match.
        if (memcmp(Name.data()+12, "_rt", 3) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstore_half8_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstore_half8_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstore_half8_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1428, 8);	 // "vstore_half8_rtz"
        }
        break;
      }
      break;
    }
    break;
  case 17:	 // 127 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_flag_clear", 16) != 0)
        break;
      return std::make_pair(1713, 1);	 // "atomic_flag_clear"
    case 'c':	 // 101 strings to match.
      switch (Name[1]) {
      default: break;
      case 'o':	 // 100 strings to match.
        if (memcmp(Name.data()+2, "nvert_", 6) != 0)
          break;
        switch (Name[8]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "har", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(144, 11);	 // "convert_char2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(144, 11);	 // "convert_char2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(155, 11);	 // "convert_char3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(155, 11);	 // "convert_char3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(166, 11);	 // "convert_char4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(166, 11);	 // "convert_char4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(177, 11);	 // "convert_char8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(177, 11);	 // "convert_char8_sat"
            }
            break;
          }
          break;
        case 'f':	 // 4 strings to match.
          if (memcmp(Name.data()+9, "loat_rt", 7) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(122, 11);	 // "convert_float_rtz"
          }
          break;
        case 'h':	 // 16 strings to match.
          if (memcmp(Name.data()+9, "alf", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(23, 11);	 // "convert_half2_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(34, 11);	 // "convert_half3_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(45, 11);	 // "convert_half4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(45, 11);	 // "convert_half4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(45, 11);	 // "convert_half4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(45, 11);	 // "convert_half4_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_rt", 3) != 0)
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(56, 11);	 // "convert_half8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(56, 11);	 // "convert_half8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(56, 11);	 // "convert_half8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(56, 11);	 // "convert_half8_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "nt16_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(452, 11);	 // "convert_int16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(452, 11);	 // "convert_int16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+9, "ong", 3) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(606, 11);	 // "convert_long2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(606, 11);	 // "convert_long2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(617, 11);	 // "convert_long3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(617, 11);	 // "convert_long3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(628, 11);	 // "convert_long4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(628, 11);	 // "convert_long4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[13] != '_')
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(639, 11);	 // "convert_long8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(639, 11);	 // "convert_long8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+9, "hort_", 5) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[15] != 't')
              break;
            switch (Name[16]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(265, 11);	 // "convert_short_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+15, "at", 2) != 0)
              break;
            return std::make_pair(265, 11);	 // "convert_short_sat"
          }
          break;
        case 'u':	 // 30 strings to match.
          switch (Name[9]) {
          default: break;
          case 'c':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "har_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(199, 11);	 // "convert_uchar_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(199, 11);	 // "convert_uchar_sat"
            }
            break;
          case 'i':	 // 20 strings to match.
            if (memcmp(Name.data()+10, "nt", 2) != 0)
              break;
            switch (Name[12]) {
            default: break;
            case '2':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(474, 11);	 // "convert_uint2_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(474, 11);	 // "convert_uint2_sat"
              }
              break;
            case '3':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(485, 11);	 // "convert_uint3_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(485, 11);	 // "convert_uint3_sat"
              }
              break;
            case '4':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(496, 11);	 // "convert_uint4_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(496, 11);	 // "convert_uint4_sat"
              }
              break;
            case '8':	 // 5 strings to match.
              if (Name[13] != '_')
                break;
              switch (Name[14]) {
              default: break;
              case 'r':	 // 4 strings to match.
                if (Name[15] != 't')
                  break;
                switch (Name[16]) {
                default: break;
                case 'e':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rte"
                case 'n':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtn"
                case 'p':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtp"
                case 'z':	 // 1 string to match.
                  return std::make_pair(507, 11);	 // "convert_uint8_rtz"
                }
                break;
              case 's':	 // 1 string to match.
                if (memcmp(Name.data()+15, "at", 2) != 0)
                  break;
                return std::make_pair(507, 11);	 // "convert_uint8_sat"
              }
              break;
            }
            break;
          case 'l':	 // 5 strings to match.
            if (memcmp(Name.data()+10, "ong_", 4) != 0)
              break;
            switch (Name[14]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[15] != 't')
                break;
              switch (Name[16]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(661, 11);	 // "convert_ulong_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+15, "at", 2) != 0)
                break;
              return std::make_pair(661, 11);	 // "convert_ulong_sat"
            }
            break;
          }
          break;
        }
        break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+2, "eate_user_event", 15) != 0)
          break;
        return std::make_pair(2402, 1);	 // "create_user_event"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (memcmp(Name.data()+5, "efault_queue", 12) != 0)
          break;
        return std::make_pair(2406, 1);	 // "get_default_queue"
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_offset", 12) != 0)
          break;
        return std::make_pair(728, 1);	 // "get_global_offset"
      }
      break;
    case 's':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+11, "arrier", 6) != 0)
          break;
        return std::make_pair(2448, 2);	 // "sub_group_barrier"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+11, "huffle", 6) != 0)
          break;
        return std::make_pair(2470, 1);	 // "sub_group_shuffle"
      }
      break;
    case 'v':	 // 20 strings to match.
      if (memcmp(Name.data()+1, "store", 5) != 0)
        break;
      switch (Name[6]) {
      default: break;
      case '_':	 // 4 strings to match.
        if (memcmp(Name.data()+7, "half16_rt", 9) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1436, 8);	 // "vstore_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1436, 8);	 // "vstore_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1436, 8);	 // "vstore_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1436, 8);	 // "vstore_half16_rtz"
        }
        break;
      case 'a':	 // 16 strings to match.
        if (memcmp(Name.data()+7, "_half", 5) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1384, 8);	 // "vstorea_half2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1384, 8);	 // "vstorea_half2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1384, 8);	 // "vstorea_half2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1384, 8);	 // "vstorea_half2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1412, 8);	 // "vstorea_half3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1412, 8);	 // "vstorea_half3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1412, 8);	 // "vstorea_half3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1412, 8);	 // "vstorea_half3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1420, 8);	 // "vstorea_half4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1420, 8);	 // "vstorea_half4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1420, 8);	 // "vstorea_half4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1420, 8);	 // "vstorea_half4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_rt", 3) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(1428, 8);	 // "vstorea_half8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(1428, 8);	 // "vstorea_half8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(1428, 8);	 // "vstorea_half8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(1428, 8);	 // "vstorea_half8_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ait_group_events", 16) != 0)
        break;
      return std::make_pair(1454, 1);	 // "wait_group_events"
    }
    break;
  case 18:	 // 111 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 104 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "har16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(188, 11);	 // "convert_char16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(188, 11);	 // "convert_char16_sat"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(529, 11);	 // "convert_double_rtz"
        }
        break;
      case 'f':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "loat", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(67, 11);	 // "convert_float2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(67, 11);	 // "convert_float2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(67, 11);	 // "convert_float2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(67, 11);	 // "convert_float2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(78, 11);	 // "convert_float3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(89, 11);	 // "convert_float4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_rt", 3) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(100, 11);	 // "convert_float8_rtz"
          }
          break;
        }
        break;
      case 'h':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "alf16_rt", 8) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(1, 11);	 // "convert_half16_rtz"
        }
        break;
      case 'l':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "ong16_", 6) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[16] != 't')
            break;
          switch (Name[17]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(650, 11);	 // "convert_long16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "at", 2) != 0)
            break;
          return std::make_pair(650, 11);	 // "convert_long16_sat"
        }
        break;
      case 's':	 // 20 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(276, 11);	 // "convert_short2_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(276, 11);	 // "convert_short2_sat"
          }
          break;
        case '3':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(287, 11);	 // "convert_short3_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(287, 11);	 // "convert_short3_sat"
          }
          break;
        case '4':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(298, 11);	 // "convert_short4_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(298, 11);	 // "convert_short4_sat"
          }
          break;
        case '8':	 // 5 strings to match.
          if (Name[14] != '_')
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(309, 11);	 // "convert_short8_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(309, 11);	 // "convert_short8_sat"
          }
          break;
        }
        break;
      case 'u':	 // 50 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(210, 11);	 // "convert_uchar2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(210, 11);	 // "convert_uchar2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(221, 11);	 // "convert_uchar3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(221, 11);	 // "convert_uchar3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(232, 11);	 // "convert_uchar4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(232, 11);	 // "convert_uchar4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(243, 11);	 // "convert_uchar8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(243, 11);	 // "convert_uchar8_sat"
            }
            break;
          }
          break;
        case 'i':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "nt16_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(518, 11);	 // "convert_uint16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(518, 11);	 // "convert_uint16_sat"
          }
          break;
        case 'l':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(672, 11);	 // "convert_ulong2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(672, 11);	 // "convert_ulong2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(683, 11);	 // "convert_ulong3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(683, 11);	 // "convert_ulong3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(694, 11);	 // "convert_ulong4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(694, 11);	 // "convert_ulong4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[14] != '_')
              break;
            switch (Name[15]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[16] != 't')
                break;
              switch (Name[17]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(705, 11);	 // "convert_ulong8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+16, "at", 2) != 0)
                break;
              return std::make_pair(705, 11);	 // "convert_ulong8_sat"
            }
            break;
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort_", 5) != 0)
            break;
          switch (Name[15]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[16] != 't')
              break;
            switch (Name[17]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(331, 11);	 // "convert_ushort_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+16, "at", 2) != 0)
              break;
            return std::make_pair(331, 11);	 // "convert_ushort_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'n':	 // 1 string to match.
        if (memcmp(Name.data()+5, "um_sub_groups", 13) != 0)
          break;
        return std::make_pair(2446, 1);	 // "get_num_sub_groups"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_size", 13) != 0)
          break;
        return std::make_pair(2446, 1);	 // "get_sub_group_size"
      }
      break;
    case 'v':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "storea_half16_rt", 16) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(1436, 8);	 // "vstorea_half16_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(1436, 8);	 // "vstorea_half16_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(1436, 8);	 // "vstorea_half16_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(1436, 8);	 // "vstorea_half16_rtz"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_barrier", 17) != 0)
        break;
      return std::make_pair(1445, 2);	 // "work_group_barrier"
    }
    break;
  case 19:	 // 62 strings to match.
    switch (Name[0]) {
    default: break;
    case 'c':	 // 59 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'd':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ouble", 5) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(540, 11);	 // "convert_double2_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(551, 11);	 // "convert_double3_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(562, 11);	 // "convert_double4_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+15, "_rt", 3) != 0)
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(573, 11);	 // "convert_double8_rtz"
          }
          break;
        }
        break;
      case 'f':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "loat16_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(111, 11);	 // "convert_float16_rtz"
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt_sat_rt", 9) != 0)
          break;
        switch (Name[18]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(397, 11);	 // "convert_int_sat_rtz"
        }
        break;
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+9, "hort16_", 7) != 0)
          break;
        switch (Name[16]) {
        default: break;
        case 'r':	 // 4 strings to match.
          if (Name[17] != 't')
            break;
          switch (Name[18]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(320, 11);	 // "convert_short16_rtz"
          }
          break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+17, "at", 2) != 0)
            break;
          return std::make_pair(320, 11);	 // "convert_short16_sat"
        }
        break;
      case 'u':	 // 30 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "har16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(254, 11);	 // "convert_uchar16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(254, 11);	 // "convert_uchar16_sat"
          }
          break;
        case 'l':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "ong16_", 6) != 0)
            break;
          switch (Name[16]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[17] != 't')
              break;
            switch (Name[18]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(716, 11);	 // "convert_ulong16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+17, "at", 2) != 0)
              break;
            return std::make_pair(716, 11);	 // "convert_ulong16_sat"
          }
          break;
        case 's':	 // 20 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(342, 11);	 // "convert_ushort2_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(342, 11);	 // "convert_ushort2_sat"
            }
            break;
          case '3':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(353, 11);	 // "convert_ushort3_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(353, 11);	 // "convert_ushort3_sat"
            }
            break;
          case '4':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(364, 11);	 // "convert_ushort4_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(364, 11);	 // "convert_ushort4_sat"
            }
            break;
          case '8':	 // 5 strings to match.
            if (Name[15] != '_')
              break;
            switch (Name[16]) {
            default: break;
            case 'r':	 // 4 strings to match.
              if (Name[17] != 't')
                break;
              switch (Name[18]) {
              default: break;
              case 'e':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rte"
              case 'n':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtn"
              case 'p':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtp"
              case 'z':	 // 1 string to match.
                return std::make_pair(375, 11);	 // "convert_ushort8_rtz"
              }
              break;
            case 's':	 // 1 string to match.
              if (memcmp(Name.data()+17, "at", 2) != 0)
                break;
              return std::make_pair(375, 11);	 // "convert_ushort8_sat"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_local_linear_id", 18) != 0)
        break;
      return std::make_pair(730, 1);	 // "get_local_linear_id"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+1, "s_valid_reserve_id", 18) != 0)
        break;
      return std::make_pair(2399, 1);	 // "is_valid_reserve_id"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_broadcast", 18) != 0)
        break;
      return std::make_pair(2451, 3);	 // "sub_group_broadcast"
    }
    break;
  case 20:	 // 48 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_load_explicit", 19) != 0)
        break;
      return std::make_pair(1557, 18);	 // "atomic_load_explicit"
    case 'c':	 // 37 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(133, 11);	 // "convert_char_sat_rtz"
        }
        break;
      case 'd':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ouble16_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(584, 11);	 // "convert_double16_rtz"
        }
        break;
      case 'i':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "nt", 2) != 0)
          break;
        switch (Name[11]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(408, 11);	 // "convert_int2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(419, 11);	 // "convert_int3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(430, 11);	 // "convert_int4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+12, "_sat_rt", 7) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(441, 11);	 // "convert_int8_sat_rtz"
          }
          break;
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong_sat_rt", 10) != 0)
          break;
        switch (Name[19]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(595, 11);	 // "convert_long_sat_rtz"
        }
        break;
      case 'u':	 // 9 strings to match.
        switch (Name[9]) {
        default: break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt_sat_rt", 9) != 0)
            break;
          switch (Name[19]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(463, 11);	 // "convert_uint_sat_rtz"
          }
          break;
        case 's':	 // 5 strings to match.
          if (memcmp(Name.data()+10, "hort16_", 7) != 0)
            break;
          switch (Name[17]) {
          default: break;
          case 'r':	 // 4 strings to match.
            if (Name[18] != 't')
              break;
            switch (Name[19]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(386, 11);	 // "convert_ushort16_rtz"
            }
            break;
          case 's':	 // 1 string to match.
            if (memcmp(Name.data()+18, "at", 2) != 0)
              break;
            return std::make_pair(386, 11);	 // "convert_ushort16_sat"
          }
          break;
        }
        break;
      }
      break;
    case 'd':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ot_4x8packed_", 13) != 0)
        break;
      switch (Name[14]) {
      default: break;
      case 's':	 // 2 strings to match.
        switch (Name[15]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+16, "_int", 4) != 0)
            break;
          return std::make_pair(2486, 1);	 // "dot_4x8packed_ss_int"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+16, "_int", 4) != 0)
            break;
          return std::make_pair(2486, 1);	 // "dot_4x8packed_su_int"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+15, "s_int", 5) != 0)
          break;
        return std::make_pair(2486, 1);	 // "dot_4x8packed_us_int"
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'g':	 // 1 string to match.
        if (memcmp(Name.data()+5, "lobal_linear_id", 15) != 0)
          break;
        return std::make_pair(730, 1);	 // "get_global_linear_id"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_array_size", 15) != 0)
          break;
        return std::make_pair(2345, 15);	 // "get_image_array_size"
      }
      break;
    case 's':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'r':	 // 3 strings to match.
        if (memcmp(Name.data()+11, "educe_", 6) != 0)
          break;
        switch (Name[17]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+18, "dd", 2) != 0)
            break;
          return std::make_pair(2454, 2);	 // "sub_group_reduce_add"
        case 'm':	 // 2 strings to match.
          switch (Name[18]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[19] != 'x')
              break;
            return std::make_pair(2454, 2);	 // "sub_group_reduce_max"
          case 'i':	 // 1 string to match.
            if (Name[19] != 'n')
              break;
            return std::make_pair(2454, 2);	 // "sub_group_reduce_min"
          }
          break;
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+11, "huffle_up", 9) != 0)
          break;
        return std::make_pair(2471, 1);	 // "sub_group_shuffle_up"
      }
      break;
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ork_group_broadcast", 19) != 0)
        break;
      return std::make_pair(2395, 3);	 // "work_group_broadcast"
    }
    break;
  case 21:	 // 78 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+2, "ync_work_group_copy", 19) != 0)
          break;
        return std::make_pair(1450, 2);	 // "async_work_group_copy"
      case 't':	 // 1 string to match.
        if (memcmp(Name.data()+2, "omic_store_explicit", 19) != 0)
          break;
        return std::make_pair(1530, 18);	 // "atomic_store_explicit"
      }
      break;
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "har", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(144, 11);	 // "convert_char2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(155, 11);	 // "convert_char3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(166, 11);	 // "convert_char4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(177, 11);	 // "convert_char8_sat_rtz"
          }
          break;
        }
        break;
      case 'i':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "nt16_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(452, 11);	 // "convert_int16_sat_rtz"
        }
        break;
      case 'l':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "ong", 3) != 0)
          break;
        switch (Name[12]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(606, 11);	 // "convert_long2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(617, 11);	 // "convert_long3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(628, 11);	 // "convert_long4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(639, 11);	 // "convert_long8_sat_rtz"
          }
          break;
        }
        break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort_sat_rt", 11) != 0)
          break;
        switch (Name[20]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(265, 11);	 // "convert_short_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(199, 11);	 // "convert_uchar_sat_rtz"
          }
          break;
        case 'i':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "nt", 2) != 0)
            break;
          switch (Name[12]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(474, 11);	 // "convert_uint2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(485, 11);	 // "convert_uint3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(496, 11);	 // "convert_uint4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+13, "_sat_rt", 7) != 0)
              break;
            switch (Name[20]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(507, 11);	 // "convert_uint8_sat_rtz"
            }
            break;
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong_sat_rt", 10) != 0)
            break;
          switch (Name[20]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(661, 11);	 // "convert_ulong_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_4x8packed_uu_uint", 20) != 0)
        break;
      return std::make_pair(2485, 1);	 // "dot_4x8packed_uu_uint"
    case 'g':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_num_samples", 16) != 0)
          break;
        return std::make_pair(2434, 12);	 // "get_image_num_samples"
      case 's':	 // 5 strings to match.
        if (memcmp(Name.data()+5, "ub_group_", 9) != 0)
          break;
        switch (Name[14]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+15, "q_mask", 6) != 0)
            break;
          return std::make_pair(2466, 1);	 // "get_sub_group_eq_mask"
        case 'g':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2466, 1);	 // "get_sub_group_ge_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2466, 1);	 // "get_sub_group_gt_mask"
          }
          break;
        case 'l':	 // 2 strings to match.
          switch (Name[15]) {
          default: break;
          case 'e':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2466, 1);	 // "get_sub_group_le_mask"
          case 't':	 // 1 string to match.
            if (memcmp(Name.data()+16, "_mask", 5) != 0)
              break;
            return std::make_pair(2466, 1);	 // "get_sub_group_lt_mask"
          }
          break;
        }
        break;
      }
      break;
    case 's':	 // 2 strings to match.
      switch (Name[1]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+2, "t_user_event_status", 19) != 0)
          break;
        return std::make_pair(2404, 1);	 // "set_user_event_status"
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+2, "b_group_shuffle_xor", 19) != 0)
          break;
        return std::make_pair(2470, 1);	 // "sub_group_shuffle_xor"
      }
      break;
    case 'w':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ork_group_reduce_", 17) != 0)
        break;
      switch (Name[18]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+19, "dd", 2) != 0)
          break;
        return std::make_pair(2398, 1);	 // "work_group_reduce_add"
      case 'm':	 // 2 strings to match.
        switch (Name[19]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[20] != 'x')
            break;
          return std::make_pair(2398, 1);	 // "work_group_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[20] != 'n')
            break;
          return std::make_pair(2398, 1);	 // "work_group_reduce_min"
        }
        break;
      }
      break;
    }
    break;
  case 22:	 // 68 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_work_item_fence", 21) != 0)
        break;
      return std::make_pair(1514, 1);	 // "atomic_work_item_fence"
    case 'c':	 // 64 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 'c':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "har16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(188, 11);	 // "convert_char16_sat_rtz"
        }
        break;
      case 'l':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "ong16_sat_rt", 12) != 0)
          break;
        switch (Name[21]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(650, 11);	 // "convert_long16_sat_rtz"
        }
        break;
      case 's':	 // 16 strings to match.
        if (memcmp(Name.data()+9, "hort", 4) != 0)
          break;
        switch (Name[13]) {
        default: break;
        case '2':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(276, 11);	 // "convert_short2_sat_rtz"
          }
          break;
        case '3':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(287, 11);	 // "convert_short3_sat_rtz"
          }
          break;
        case '4':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(298, 11);	 // "convert_short4_sat_rtz"
          }
          break;
        case '8':	 // 4 strings to match.
          if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(309, 11);	 // "convert_short8_sat_rtz"
          }
          break;
        }
        break;
      case 'u':	 // 40 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "har", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(210, 11);	 // "convert_uchar2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(221, 11);	 // "convert_uchar3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(232, 11);	 // "convert_uchar4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(243, 11);	 // "convert_uchar8_sat_rtz"
            }
            break;
          }
          break;
        case 'i':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "nt16_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(518, 11);	 // "convert_uint16_sat_rtz"
          }
          break;
        case 'l':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "ong", 3) != 0)
            break;
          switch (Name[13]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(672, 11);	 // "convert_ulong2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(683, 11);	 // "convert_ulong3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(694, 11);	 // "convert_ulong4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+14, "_sat_rt", 7) != 0)
              break;
            switch (Name[21]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(705, 11);	 // "convert_ulong8_sat_rtz"
            }
            break;
          }
          break;
        case 's':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "hort_sat_rt", 11) != 0)
            break;
          switch (Name[21]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(331, 11);	 // "convert_ushort_sat_rtz"
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'm':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ax_sub_group_size", 17) != 0)
          break;
        return std::make_pair(2446, 1);	 // "get_max_sub_group_size"
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+5, "ub_group_local_id", 17) != 0)
          break;
        return std::make_pair(2446, 1);	 // "get_sub_group_local_id"
      }
      break;
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_shuffle_down", 21) != 0)
        break;
      return std::make_pair(2471, 1);	 // "sub_group_shuffle_down"
    }
    break;
  case 23:	 // 31 strings to match.
    switch (Name[0]) {
    default: break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_extract_signed", 22) != 0)
        break;
      return std::make_pair(2476, 2);	 // "bitfield_extract_signed"
    case 'c':	 // 28 strings to match.
      if (memcmp(Name.data()+1, "onvert_", 7) != 0)
        break;
      switch (Name[8]) {
      default: break;
      case 's':	 // 4 strings to match.
        if (memcmp(Name.data()+9, "hort16_sat_rt", 13) != 0)
          break;
        switch (Name[22]) {
        default: break;
        case 'e':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rte"
        case 'n':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtn"
        case 'p':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtp"
        case 'z':	 // 1 string to match.
          return std::make_pair(320, 11);	 // "convert_short16_sat_rtz"
        }
        break;
      case 'u':	 // 24 strings to match.
        switch (Name[9]) {
        default: break;
        case 'c':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "har16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(254, 11);	 // "convert_uchar16_sat_rtz"
          }
          break;
        case 'l':	 // 4 strings to match.
          if (memcmp(Name.data()+10, "ong16_sat_rt", 12) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'e':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rte"
          case 'n':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtn"
          case 'p':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtp"
          case 'z':	 // 1 string to match.
            return std::make_pair(716, 11);	 // "convert_ulong16_sat_rtz"
          }
          break;
        case 's':	 // 16 strings to match.
          if (memcmp(Name.data()+10, "hort", 4) != 0)
            break;
          switch (Name[14]) {
          default: break;
          case '2':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(342, 11);	 // "convert_ushort2_sat_rtz"
            }
            break;
          case '3':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(353, 11);	 // "convert_ushort3_sat_rtz"
            }
            break;
          case '4':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(364, 11);	 // "convert_ushort4_sat_rtz"
            }
            break;
          case '8':	 // 4 strings to match.
            if (memcmp(Name.data()+15, "_sat_rt", 7) != 0)
              break;
            switch (Name[22]) {
            default: break;
            case 'e':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rte"
            case 'n':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtn"
            case 'p':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtp"
            case 'z':	 // 1 string to match.
              return std::make_pair(375, 11);	 // "convert_ushort8_sat_rtz"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    case 'g':	 // 2 strings to match.
      if (memcmp(Name.data()+1, "et_", 3) != 0)
        break;
      switch (Name[4]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+5, "nqueued_local_size", 18) != 0)
          break;
        return std::make_pair(729, 1);	 // "get_enqueued_local_size"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+5, "mage_channel_order", 18) != 0)
          break;
        return std::make_pair(2252, 36);	 // "get_image_channel_order"
      }
      break;
    }
    break;
  case 24:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "tomic_", 6) != 0)
        break;
      switch (Name[7]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+8, "xchange_explicit", 16) != 0)
          break;
        return std::make_pair(1584, 18);	 // "atomic_exchange_explicit"
      case 'f':	 // 2 strings to match.
        switch (Name[8]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+9, "tch_or_explicit", 15) != 0)
            break;
          return std::make_pair(1666, 8);	 // "atomic_fetch_or_explicit"
        case 'l':	 // 1 string to match.
          if (memcmp(Name.data()+9, "ag_test_and_set", 15) != 0)
            break;
          return std::make_pair(1716, 1);	 // "atomic_flag_test_and_set"
        }
        break;
      }
      break;
    case 'c':	 // 4 strings to match.
      if (memcmp(Name.data()+1, "onvert_ushort16_sat_rt", 22) != 0)
        break;
      switch (Name[23]) {
      default: break;
      case 'e':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rte"
      case 'n':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtn"
      case 'p':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtp"
      case 'z':	 // 1 string to match.
        return std::make_pair(386, 11);	 // "convert_ushort16_sat_rtz"
      }
      break;
    case 'g':	 // 1 string to match.
      if (memcmp(Name.data()+1, "et_image_num_mip_levels", 23) != 0)
        break;
      return std::make_pair(2413, 21);	 // "get_image_num_mip_levels"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_inverse_ballot", 23) != 0)
        break;
      return std::make_pair(2462, 1);	 // "sub_group_inverse_ballot"
    }
    break;
  case 25:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "tomic_fetch_", 12) != 0)
        break;
      switch (Name[13]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (memcmp(Name.data()+15, "d_explicit", 10) != 0)
            break;
          return std::make_pair(1634, 28);	 // "atomic_fetch_add_explicit"
        case 'n':	 // 1 string to match.
          if (memcmp(Name.data()+15, "d_explicit", 10) != 0)
            break;
          return std::make_pair(1666, 8);	 // "atomic_fetch_and_explicit"
        }
        break;
      case 'm':	 // 2 strings to match.
        switch (Name[14]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+15, "x_explicit", 10) != 0)
            break;
          return std::make_pair(1687, 26);	 // "atomic_fetch_max_explicit"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+15, "n_explicit", 10) != 0)
            break;
          return std::make_pair(1687, 26);	 // "atomic_fetch_min_explicit"
        }
        break;
      case 's':	 // 1 string to match.
        if (memcmp(Name.data()+14, "ub_explicit", 11) != 0)
          break;
        return std::make_pair(1634, 28);	 // "atomic_fetch_sub_explicit"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+14, "or_explicit", 11) != 0)
          break;
        return std::make_pair(1666, 8);	 // "atomic_fetch_xor_explicit"
      }
      break;
    case 'b':	 // 1 string to match.
      if (memcmp(Name.data()+1, "itfield_extract_unsigned", 24) != 0)
        break;
      return std::make_pair(2478, 2);	 // "bitfield_extract_unsigned"
    case 's':	 // 5 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 3 strings to match.
        switch (Name[11]) {
        default: break;
        case 'a':	 // 2 strings to match.
          if (memcmp(Name.data()+12, "llot_find_", 10) != 0)
            break;
          switch (Name[22]) {
          default: break;
          case 'l':	 // 1 string to match.
            if (memcmp(Name.data()+23, "sb", 2) != 0)
              break;
            return std::make_pair(2465, 1);	 // "sub_group_ballot_find_lsb"
          case 'm':	 // 1 string to match.
            if (memcmp(Name.data()+23, "sb", 2) != 0)
              break;
            return std::make_pair(2465, 1);	 // "sub_group_ballot_find_msb"
          }
          break;
        case 'r':	 // 1 string to match.
          if (memcmp(Name.data()+12, "oadcast_first", 13) != 0)
            break;
          return std::make_pair(2460, 1);	 // "sub_group_broadcast_first"
        }
        break;
      case 'n':	 // 2 strings to match.
        if (memcmp(Name.data()+11, "on_uniform_a", 12) != 0)
          break;
        switch (Name[23]) {
        default: break;
        case 'l':	 // 1 string to match.
          if (Name[24] != 'l')
            break;
          return std::make_pair(2457, 1);	 // "sub_group_non_uniform_all"
        case 'n':	 // 1 string to match.
          if (Name[24] != 'y')
            break;
          return std::make_pair(2457, 1);	 // "sub_group_non_uniform_any"
        }
        break;
      }
      break;
    }
    break;
  case 26:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_flag_clear_explicit", 25) != 0)
        break;
      return std::make_pair(1714, 2);	 // "atomic_flag_clear_explicit"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_ballot_bit_count", 25) != 0)
        break;
      return std::make_pair(2464, 1);	 // "sub_group_ballot_bit_count"
    }
    break;
  case 27:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "get_", 4) != 0)
      break;
    switch (Name[4]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+5, "nqueued_num_sub_groups", 22) != 0)
        break;
      return std::make_pair(2447, 1);	 // "get_enqueued_num_sub_groups"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+5, "mage_channel_data_type", 22) != 0)
        break;
      return std::make_pair(2252, 36);	 // "get_image_channel_data_type"
    }
    break;
  case 28:	 // 12 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak", 27) != 0)
        break;
      return std::make_pair(1602, 6);	 // "atomic_compare_exchange_weak"
    case 'c':	 // 1 string to match.
      if (memcmp(Name.data()+1, "apture_event_profiling_info", 27) != 0)
        break;
      return std::make_pair(2405, 1);	 // "capture_event_profiling_info"
    case 'd':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ot_acc_sat_4x8packed_", 21) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 's':	 // 2 strings to match.
        switch (Name[23]) {
        default: break;
        case 's':	 // 1 string to match.
          if (memcmp(Name.data()+24, "_int", 4) != 0)
            break;
          return std::make_pair(2488, 1);	 // "dot_acc_sat_4x8packed_ss_int"
        case 'u':	 // 1 string to match.
          if (memcmp(Name.data()+24, "_int", 4) != 0)
            break;
          return std::make_pair(2488, 1);	 // "dot_acc_sat_4x8packed_su_int"
        }
        break;
      case 'u':	 // 1 string to match.
        if (memcmp(Name.data()+23, "s_int", 5) != 0)
          break;
        return std::make_pair(2488, 1);	 // "dot_acc_sat_4x8packed_us_int"
      }
      break;
    case 's':	 // 7 strings to match.
      if (memcmp(Name.data()+1, "ub_group_", 9) != 0)
        break;
      switch (Name[10]) {
      default: break;
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+11, "allot_bit_extract", 17) != 0)
          break;
        return std::make_pair(2463, 1);	 // "sub_group_ballot_bit_extract"
      case 's':	 // 6 strings to match.
        if (memcmp(Name.data()+11, "can_", 4) != 0)
          break;
        switch (Name[15]) {
        default: break;
        case 'e':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "xclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(2454, 2);	 // "sub_group_scan_exclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(2454, 2);	 // "sub_group_scan_exclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(2454, 2);	 // "sub_group_scan_exclusive_min"
            }
            break;
          }
          break;
        case 'i':	 // 3 strings to match.
          if (memcmp(Name.data()+16, "nclusive_", 9) != 0)
            break;
          switch (Name[25]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (memcmp(Name.data()+26, "dd", 2) != 0)
              break;
            return std::make_pair(2454, 2);	 // "sub_group_scan_inclusive_add"
          case 'm':	 // 2 strings to match.
            switch (Name[26]) {
            default: break;
            case 'a':	 // 1 string to match.
              if (Name[27] != 'x')
                break;
              return std::make_pair(2454, 2);	 // "sub_group_scan_inclusive_max"
            case 'i':	 // 1 string to match.
              if (Name[27] != 'n')
                break;
              return std::make_pair(2454, 2);	 // "sub_group_scan_inclusive_min"
            }
            break;
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 29:	 // 9 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "sync_work_group_strided_copy", 28) != 0)
        break;
      return std::make_pair(1452, 2);	 // "async_work_group_strided_copy"
    case 'd':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ot_acc_sat_4x8packed_uu_uint", 28) != 0)
        break;
      return std::make_pair(2487, 1);	 // "dot_acc_sat_4x8packed_uu_uint"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_or", 28) != 0)
        break;
      return std::make_pair(2473, 1);	 // "sub_group_clustered_reduce_or"
    case 'w':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ork_group_scan_", 15) != 0)
        break;
      switch (Name[16]) {
      default: break;
      case 'e':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "xclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2398, 1);	 // "work_group_scan_exclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2398, 1);	 // "work_group_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2398, 1);	 // "work_group_scan_exclusive_min"
          }
          break;
        }
        break;
      case 'i':	 // 3 strings to match.
        if (memcmp(Name.data()+17, "nclusive_", 9) != 0)
          break;
        switch (Name[26]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Name.data()+27, "dd", 2) != 0)
            break;
          return std::make_pair(2398, 1);	 // "work_group_scan_inclusive_add"
        case 'm':	 // 2 strings to match.
          switch (Name[27]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[28] != 'x')
              break;
            return std::make_pair(2398, 1);	 // "work_group_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[28] != 'n')
              break;
            return std::make_pair(2398, 1);	 // "work_group_scan_inclusive_min"
          }
          break;
        }
        break;
      }
      break;
    }
    break;
  case 30:	 // 7 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_strong", 29) != 0)
        break;
      return std::make_pair(1602, 6);	 // "atomic_compare_exchange_strong"
    case 's':	 // 6 strings to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_", 26) != 0)
        break;
      switch (Name[27]) {
      default: break;
      case 'a':	 // 2 strings to match.
        switch (Name[28]) {
        default: break;
        case 'd':	 // 1 string to match.
          if (Name[29] != 'd')
            break;
          return std::make_pair(2472, 1);	 // "sub_group_clustered_reduce_add"
        case 'n':	 // 1 string to match.
          if (Name[29] != 'd')
            break;
          return std::make_pair(2473, 1);	 // "sub_group_clustered_reduce_and"
        }
        break;
      case 'm':	 // 3 strings to match.
        switch (Name[28]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (Name[29] != 'x')
            break;
          return std::make_pair(2472, 1);	 // "sub_group_clustered_reduce_max"
        case 'i':	 // 1 string to match.
          if (Name[29] != 'n')
            break;
          return std::make_pair(2472, 1);	 // "sub_group_clustered_reduce_min"
        case 'u':	 // 1 string to match.
          if (Name[29] != 'l')
            break;
          return std::make_pair(2472, 1);	 // "sub_group_clustered_reduce_mul"
        }
        break;
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+28, "or", 2) != 0)
          break;
        return std::make_pair(2473, 1);	 // "sub_group_clustered_reduce_xor"
      }
      break;
    }
    break;
  case 31:	 // 5 strings to match.
    if (memcmp(Name.data()+0, "sub_group_", 10) != 0)
      break;
    switch (Name[10]) {
    default: break;
    case 'b':	 // 2 strings to match.
      if (memcmp(Name.data()+11, "allot_", 6) != 0)
        break;
      switch (Name[17]) {
      default: break;
      case 'e':	 // 1 string to match.
        if (memcmp(Name.data()+18, "xclusive_scan", 13) != 0)
          break;
        return std::make_pair(2465, 1);	 // "sub_group_ballot_exclusive_scan"
      case 'i':	 // 1 string to match.
        if (memcmp(Name.data()+18, "nclusive_scan", 13) != 0)
          break;
        return std::make_pair(2465, 1);	 // "sub_group_ballot_inclusive_scan"
      }
      break;
    case 'n':	 // 3 strings to match.
      if (memcmp(Name.data()+11, "on_uniform_", 11) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+23, "ll_equal", 8) != 0)
          break;
        return std::make_pair(2458, 1);	 // "sub_group_non_uniform_all_equal"
      case 'b':	 // 1 string to match.
        if (memcmp(Name.data()+23, "roadcast", 8) != 0)
          break;
        return std::make_pair(2459, 1);	 // "sub_group_non_uniform_broadcast"
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+23, "educe_or", 8) != 0)
          break;
        return std::make_pair(2468, 1);	 // "sub_group_non_uniform_reduce_or"
      }
      break;
    }
    break;
  case 32:	 // 6 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_reduce_", 29) != 0)
      break;
    switch (Name[29]) {
    default: break;
    case 'a':	 // 2 strings to match.
      switch (Name[30]) {
      default: break;
      case 'd':	 // 1 string to match.
        if (Name[31] != 'd')
          break;
        return std::make_pair(2467, 1);	 // "sub_group_non_uniform_reduce_add"
      case 'n':	 // 1 string to match.
        if (Name[31] != 'd')
          break;
        return std::make_pair(2468, 1);	 // "sub_group_non_uniform_reduce_and"
      }
      break;
    case 'm':	 // 3 strings to match.
      switch (Name[30]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (Name[31] != 'x')
          break;
        return std::make_pair(2467, 1);	 // "sub_group_non_uniform_reduce_max"
      case 'i':	 // 1 string to match.
        if (Name[31] != 'n')
          break;
        return std::make_pair(2467, 1);	 // "sub_group_non_uniform_reduce_min"
      case 'u':	 // 1 string to match.
        if (Name[31] != 'l')
          break;
        return std::make_pair(2467, 1);	 // "sub_group_non_uniform_reduce_mul"
      }
      break;
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+30, "or", 2) != 0)
        break;
      return std::make_pair(2468, 1);	 // "sub_group_non_uniform_reduce_xor"
    }
    break;
  case 33:	 // 1 string to match.
    if (memcmp(Name.data()+0, "atomic_flag_test_and_set_explicit", 33) != 0)
      break;
    return std::make_pair(1717, 2);	 // "atomic_flag_test_and_set_explicit"
  case 37:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_weak_explicit", 36) != 0)
        break;
      return std::make_pair(1608, 12);	 // "atomic_compare_exchange_weak_explicit"
    case 's':	 // 1 string to match.
      if (memcmp(Name.data()+1, "ub_group_clustered_reduce_logical_or", 36) != 0)
        break;
      return std::make_pair(2474, 1);	 // "sub_group_clustered_reduce_logical_or"
    }
    break;
  case 38:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "sub_group_clustered_reduce_logical_", 35) != 0)
      break;
    switch (Name[35]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+36, "nd", 2) != 0)
        break;
      return std::make_pair(2474, 1);	 // "sub_group_clustered_reduce_logical_and"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+36, "or", 2) != 0)
        break;
      return std::make_pair(2474, 1);	 // "sub_group_clustered_reduce_logical_xor"
    }
    break;
  case 39:	 // 4 strings to match.
    switch (Name[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Name.data()+1, "tomic_compare_exchange_strong_explicit", 38) != 0)
        break;
      return std::make_pair(1608, 12);	 // "atomic_compare_exchange_strong_explicit"
    case 's':	 // 3 strings to match.
      if (memcmp(Name.data()+1, "ub_group_non_uniform_", 21) != 0)
        break;
      switch (Name[22]) {
      default: break;
      case 'r':	 // 1 string to match.
        if (memcmp(Name.data()+23, "educe_logical_or", 16) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_reduce_logical_or"
      case 's':	 // 2 strings to match.
        if (memcmp(Name.data()+23, "can_", 4) != 0)
          break;
        switch (Name[27]) {
        default: break;
        case 'e':	 // 1 string to match.
          if (memcmp(Name.data()+28, "xclusive_or", 11) != 0)
            break;
          return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_exclusive_or"
        case 'i':	 // 1 string to match.
          if (memcmp(Name.data()+28, "nclusive_or", 11) != 0)
            break;
          return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_inclusive_or"
        }
        break;
      }
      break;
    }
    break;
  case 40:	 // 14 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_", 22) != 0)
      break;
    switch (Name[22]) {
    default: break;
    case 'r':	 // 2 strings to match.
      if (memcmp(Name.data()+23, "educe_logical_", 14) != 0)
        break;
      switch (Name[37]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+38, "nd", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_reduce_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+38, "or", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_reduce_logical_xor"
      }
      break;
    case 's':	 // 12 strings to match.
      if (memcmp(Name.data()+23, "can_", 4) != 0)
        break;
      switch (Name[27]) {
      default: break;
      case 'e':	 // 6 strings to match.
        if (memcmp(Name.data()+28, "xclusive_", 9) != 0)
          break;
        switch (Name[37]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[38]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_exclusive_add"
          case 'n':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_exclusive_and"
          }
          break;
        case 'm':	 // 3 strings to match.
          switch (Name[38]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[39] != 'x')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_exclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[39] != 'n')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_exclusive_min"
          case 'u':	 // 1 string to match.
            if (Name[39] != 'l')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_exclusive_mul"
          }
          break;
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+38, "or", 2) != 0)
            break;
          return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_exclusive_xor"
        }
        break;
      case 'i':	 // 6 strings to match.
        if (memcmp(Name.data()+28, "nclusive_", 9) != 0)
          break;
        switch (Name[37]) {
        default: break;
        case 'a':	 // 2 strings to match.
          switch (Name[38]) {
          default: break;
          case 'd':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_inclusive_add"
          case 'n':	 // 1 string to match.
            if (Name[39] != 'd')
              break;
            return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_inclusive_and"
          }
          break;
        case 'm':	 // 3 strings to match.
          switch (Name[38]) {
          default: break;
          case 'a':	 // 1 string to match.
            if (Name[39] != 'x')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_inclusive_max"
          case 'i':	 // 1 string to match.
            if (Name[39] != 'n')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_inclusive_min"
          case 'u':	 // 1 string to match.
            if (Name[39] != 'l')
              break;
            return std::make_pair(2467, 1);	 // "sub_group_non_uniform_scan_inclusive_mul"
          }
          break;
        case 'x':	 // 1 string to match.
          if (memcmp(Name.data()+38, "or", 2) != 0)
            break;
          return std::make_pair(2468, 1);	 // "sub_group_non_uniform_scan_inclusive_xor"
        }
        break;
      }
      break;
    }
    break;
  case 47:	 // 2 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_scan_", 27) != 0)
      break;
    switch (Name[27]) {
    default: break;
    case 'e':	 // 1 string to match.
      if (memcmp(Name.data()+28, "xclusive_logical_or", 19) != 0)
        break;
      return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_or"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+28, "nclusive_logical_or", 19) != 0)
        break;
      return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_or"
    }
    break;
  case 48:	 // 4 strings to match.
    if (memcmp(Name.data()+0, "sub_group_non_uniform_scan_", 27) != 0)
      break;
    switch (Name[27]) {
    default: break;
    case 'e':	 // 2 strings to match.
      if (memcmp(Name.data()+28, "xclusive_logical_", 17) != 0)
        break;
      switch (Name[45]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+46, "nd", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+46, "or", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_exclusive_logical_xor"
      }
      break;
    case 'i':	 // 2 strings to match.
      if (memcmp(Name.data()+28, "nclusive_logical_", 17) != 0)
        break;
      switch (Name[45]) {
      default: break;
      case 'a':	 // 1 string to match.
        if (memcmp(Name.data()+46, "nd", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_and"
      case 'x':	 // 1 string to match.
        if (memcmp(Name.data()+46, "or", 2) != 0)
          break;
        return std::make_pair(2469, 1);	 // "sub_group_non_uniform_scan_inclusive_logical_xor"
      }
      break;
    }
    break;
  }
  return std::make_pair(0, 0);
} // isOpenCLBuiltin


static QualType getOpenCLEnumType(Sema &S, llvm::StringRef Name);
static QualType getOpenCLTypedefType(Sema &S, llvm::StringRef Name);

// Convert an OpenCLTypeStruct type to a list of QualTypes.
// Generic types represent multiple types and vector sizes, thus a vector
// is returned. The conversion is done in two steps:
// Step 1: A switch statement fills a vector with scalar base types for the
//         Cartesian product of (vector sizes) x (types) for generic types,
//         or a single scalar type for non generic types.
// Step 2: Qualifiers and other type properties such as vector size are
//         applied.
static void OCL2Qual(Sema &S, const OpenCLTypeStruct &Ty,
                     llvm::SmallVectorImpl<QualType> &QT) {
  ASTContext &Context = S.Context;
  // Number of scalar types in the GenType.
  unsigned GenTypeNumTypes;
  // Pointer to the list of vector sizes for the GenType.
  llvm::ArrayRef<unsigned> GenVectorSizes;
  constexpr unsigned ListVec1[] = {1, };
  constexpr unsigned ListVec1234[] = {1, 2, 3, 4, };
  constexpr unsigned ListVecAndScalar[] = {1, 2, 3, 4, 8, 16, };
  constexpr unsigned ListVecNoScalar[] = {2, 3, 4, 8, 16, };

  switch (Ty.ID) {
    case OCLT_image2d_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAAWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_msaa_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dMSAAROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dMSAARWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dMSAAWOTy);
          break;
      }
      break;
    case OCLT_image1d_buffer_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dBufferROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dBufferRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dBufferWOTy);
          break;
      }
      break;
    case OCLT_image1d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dArrayWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayWOTy);
          break;
      }
      break;
    case OCLT_image1d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage1dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage1dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage1dWOTy);
          break;
      }
      break;
    case OCLT_image2d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dWOTy);
          break;
      }
      break;
    case OCLT_image3d_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage3dROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage3dRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage3dWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayDepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayDepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayDepthWOTy);
          break;
      }
      break;
    case OCLT_image2d_array_msaa_depth_t:
      switch (Ty.AccessQualifier) {
        case OCLAQ_None:
          llvm_unreachable("Image without access qualifier");
        case OCLAQ_ReadOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthROTy);
          break;
        case OCLAQ_ReadWrite:
          QT.push_back(Context.OCLImage2dArrayMSAADepthRWTy);
          break;
        case OCLAQ_WriteOnly:
          QT.push_back(Context.OCLImage2dArrayMSAADepthWOTy);
          break;
      }
      break;
    case OCLT_AGenType1: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(11);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_AGenTypeN: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(66);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AGenTypeNNoScalar: {
      SmallVector<QualType, 11> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(55);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_AI2UGenTypeN: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(48);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AIGenType1: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(8);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_AIGenTypeN: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(48);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_AIGenTypeNNoScalar: {
      SmallVector<QualType, 8> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(40);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_CharShortGenType1: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_FGenTypeN: {
      SmallVector<QualType, 3> TypeList;
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(18);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeCharVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.CharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeCharVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.CharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeDoubleVec1234: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeDoubleVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeDoubleVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeFloatVec1234: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeFloatVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeFloatVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.FloatTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeHalfVec1234: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(4);
      for (unsigned I = 0; I < 4; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1234;
      break;
    }
    case OCLT_GenTypeHalfVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeHalfVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeIntVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.IntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeIntVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.IntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeLongVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeLongVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeShortVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.ShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeShortVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.ShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUCharVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUCharVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUIntVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedIntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUIntVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedIntTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeULongVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeULongVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_GenTypeUShortVecAndScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(6);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_GenTypeUShortVecNoScalar: {
      SmallVector<QualType, 1> TypeList;
      TypeList.push_back(Context.UnsignedShortTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(5);
      for (unsigned I = 0; I < 5; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecNoScalar;
      break;
    }
    case OCLT_IntLongFloatGenType1: {
      SmallVector<QualType, 7> TypeList;
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.LongTy);
      TypeList.push_back(Context.UnsignedLongTy);
      TypeList.push_back(Context.FloatTy);
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        TypeList.push_back(Context.DoubleTy);
      }
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        TypeList.push_back(Context.HalfTy);
      }
      GenTypeNumTypes = TypeList.size();
      QT.reserve(7);
      for (unsigned I = 0; I < 1; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVec1;
      break;
    }
    case OCLT_SGenTypeN: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.CharTy);
      TypeList.push_back(Context.ShortTy);
      TypeList.push_back(Context.IntTy);
      TypeList.push_back(Context.LongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(24);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_UGenTypeN: {
      SmallVector<QualType, 4> TypeList;
      TypeList.push_back(Context.UnsignedCharTy);
      TypeList.push_back(Context.UnsignedShortTy);
      TypeList.push_back(Context.UnsignedIntTy);
      TypeList.push_back(Context.UnsignedLongTy);
      GenTypeNumTypes = TypeList.size();
      QT.reserve(24);
      for (unsigned I = 0; I < 6; I++) {
        QT.append(TypeList);
      }
      GenVectorSizes = ListVecAndScalar;
      break;
    }
    case OCLT_atomic_double:
      QT.push_back(Context.getAtomicType(Context.DoubleTy));
      break;
    case OCLT_atomic_flag:
      QT.push_back(getOpenCLTypedefType(S, "atomic_flag"));
      break;
    case OCLT_atomic_float:
      QT.push_back(Context.getAtomicType(Context.FloatTy));
      break;
    case OCLT_atomic_half:
      QT.push_back(Context.getAtomicType(Context.HalfTy));
      break;
    case OCLT_atomic_int:
      QT.push_back(Context.getAtomicType(Context.IntTy));
      break;
    case OCLT_atomic_intptr_t:
      QT.push_back(Context.getAtomicType(Context.getIntPtrType()));
      break;
    case OCLT_atomic_long:
      QT.push_back(Context.getAtomicType(Context.LongTy));
      break;
    case OCLT_atomic_ptrdiff_t:
      QT.push_back(Context.getAtomicType(Context.getPointerDiffType()));
      break;
    case OCLT_atomic_size_t:
      QT.push_back(Context.getAtomicType(Context.getSizeType()));
      break;
    case OCLT_atomic_uint:
      QT.push_back(Context.getAtomicType(Context.UnsignedIntTy));
      break;
    case OCLT_atomic_uintptr_t:
      QT.push_back(Context.getAtomicType(Context.getUIntPtrType()));
      break;
    case OCLT_atomic_ulong:
      QT.push_back(Context.getAtomicType(Context.UnsignedLongTy));
      break;
    case OCLT_bool:
      QT.push_back(Context.BoolTy);
      break;
    case OCLT_char:
      QT.push_back(Context.CharTy);
      break;
    case OCLT_clk_event_t:
      QT.push_back(Context.OCLClkEventTy);
      break;
    case OCLT_clk_profiling_info:
      QT.push_back(getOpenCLTypedefType(S, "clk_profiling_info"));
      break;
    case OCLT_double:
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp64")) {
        QT.push_back(Context.DoubleTy);
      }
      break;
    case OCLT_event_t:
      QT.push_back(Context.OCLEventTy);
      break;
    case OCLT_float:
      QT.push_back(Context.FloatTy);
      break;
    case OCLT_half:
      if (S.getPreprocessor().isMacroDefined("cl_khr_fp16")) {
        QT.push_back(Context.HalfTy);
      }
      break;
    case OCLT_int:
      QT.push_back(Context.IntTy);
      break;
    case OCLT_intptr_t:
      QT.push_back(Context.getIntPtrType());
      break;
    case OCLT_long:
      QT.push_back(Context.LongTy);
      break;
    case OCLT_cl_mem_fence_flags:
      QT.push_back(getOpenCLTypedefType(S, "cl_mem_fence_flags"));
      break;
    case OCLT_memory_order:
      QT.push_back(getOpenCLEnumType(S, "memory_order"));
      break;
    case OCLT_memory_scope:
      QT.push_back(getOpenCLEnumType(S, "memory_scope"));
      break;
    case OCLT_ndrange_t:
      QT.push_back(getOpenCLTypedefType(S, "ndrange_t"));
      break;
    case OCLT_ptrdiff_t:
      QT.push_back(Context.getPointerDiffType());
      break;
    case OCLT_queue_t:
      QT.push_back(Context.OCLQueueTy);
      break;
    case OCLT_reserve_id_t:
      QT.push_back(Context.OCLReserveIDTy);
      break;
    case OCLT_sampler_t:
      QT.push_back(Context.OCLSamplerTy);
      break;
    case OCLT_short:
      QT.push_back(Context.ShortTy);
      break;
    case OCLT_size_t:
      QT.push_back(Context.getSizeType());
      break;
    case OCLT_uchar:
      QT.push_back(Context.UnsignedCharTy);
      break;
    case OCLT_uint:
      QT.push_back(Context.UnsignedIntTy);
      break;
    case OCLT_uintptr_t:
      QT.push_back(Context.getUIntPtrType());
      break;
    case OCLT_ulong:
      QT.push_back(Context.UnsignedLongTy);
      break;
    case OCLT_ushort:
      QT.push_back(Context.UnsignedShortTy);
      break;
    case OCLT_void:
      QT.push_back(Context.VoidTy);
      break;
  } // end of switch (Ty.ID)

  // Construct the different vector types for each generic type.
  if (Ty.ID >= 51) {
    for (unsigned I = 0; I < QT.size(); I++) {
      // For scalars, size is 1.
      if (GenVectorSizes[I / GenTypeNumTypes] != 1) {
        QT[I] = Context.getExtVectorType(QT[I],
                          GenVectorSizes[I / GenTypeNumTypes]);
      }
    }
  }

  // Set vector size for non-generic vector types.
  if (Ty.VectorWidth > 1) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getExtVectorType(QT[Index], Ty.VectorWidth);
    }
  }

  if (Ty.IsVolatile != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getVolatileType(QT[Index]);
    }
  }

  if (Ty.IsConst != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getConstType(QT[Index]);
    }
  }

  // Transform the type to a pointer as the last step, if necessary.
  // Builtin functions only have pointers on [const|volatile], no
  // [const|volatile] pointers, so this is ok to do it as a last step.
  if (Ty.IsPointer != 0) {
    for (unsigned Index = 0; Index < QT.size(); Index++) {
      QT[Index] = Context.getAddrSpaceQualType(QT[Index], Ty.AS);
      QT[Index] = Context.getPointerType(QT[Index]);
    }
  }

} // OCL2Qual
