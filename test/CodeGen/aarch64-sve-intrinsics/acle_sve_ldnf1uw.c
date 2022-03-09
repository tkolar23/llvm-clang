// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - %s | FileCheck %s
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -Wall -emit-llvm -o - -x c++ %s | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -triple aarch64-none-linux-gnu -target-feature +sve -fallow-half-arguments-and-returns -S -O1 -Werror -o /dev/null %s
#include <arm_sve.h>

// CHECK-LABEL: @test_svldnf1uw_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[BASE:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = zext <vscale x 2 x i32> [[TMP1]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP2]]
//
// CPP-CHECK-LABEL: @_Z18test_svldnf1uw_s64u10__SVBool_tPKj(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[BASE:%.*]])
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = zext <vscale x 2 x i32> [[TMP1]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP2]]
//
svint64_t test_svldnf1uw_s64(svbool_t pg, const uint32_t *base)
{
  return svldnf1uw_s64(pg, base);
}

// CHECK-LABEL: @test_svldnf1uw_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[BASE:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = zext <vscale x 2 x i32> [[TMP1]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP2]]
//
// CPP-CHECK-LABEL: @_Z18test_svldnf1uw_u64u10__SVBool_tPKj(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[BASE:%.*]])
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = zext <vscale x 2 x i32> [[TMP1]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP2]]
//
svuint64_t test_svldnf1uw_u64(svbool_t pg, const uint32_t *base)
{
  return svldnf1uw_u64(pg, base);
}

// CHECK-LABEL: @test_svldnf1uw_vnum_s64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast i32* [[BASE:%.*]] to <vscale x 2 x i32>*
// CHECK-NEXT:    [[TMP2:%.*]] = getelementptr <vscale x 2 x i32>, <vscale x 2 x i32>* [[TMP1]], i64 [[VNUM:%.*]], i64 0
// CHECK-NEXT:    [[TMP3:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[TMP2]])
// CHECK-NEXT:    [[TMP4:%.*]] = zext <vscale x 2 x i32> [[TMP3]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP4]]
//
// CPP-CHECK-LABEL: @_Z23test_svldnf1uw_vnum_s64u10__SVBool_tPKjl(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = bitcast i32* [[BASE:%.*]] to <vscale x 2 x i32>*
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = getelementptr <vscale x 2 x i32>, <vscale x 2 x i32>* [[TMP1]], i64 [[VNUM:%.*]], i64 0
// CPP-CHECK-NEXT:    [[TMP3:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[TMP2]])
// CPP-CHECK-NEXT:    [[TMP4:%.*]] = zext <vscale x 2 x i32> [[TMP3]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP4]]
//
svint64_t test_svldnf1uw_vnum_s64(svbool_t pg, const uint32_t *base, int64_t vnum)
{
  return svldnf1uw_vnum_s64(pg, base, vnum);
}

// CHECK-LABEL: @test_svldnf1uw_vnum_u64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = bitcast i32* [[BASE:%.*]] to <vscale x 2 x i32>*
// CHECK-NEXT:    [[TMP2:%.*]] = getelementptr <vscale x 2 x i32>, <vscale x 2 x i32>* [[TMP1]], i64 [[VNUM:%.*]], i64 0
// CHECK-NEXT:    [[TMP3:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[TMP2]])
// CHECK-NEXT:    [[TMP4:%.*]] = zext <vscale x 2 x i32> [[TMP3]] to <vscale x 2 x i64>
// CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP4]]
//
// CPP-CHECK-LABEL: @_Z23test_svldnf1uw_vnum_u64u10__SVBool_tPKjl(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = bitcast i32* [[BASE:%.*]] to <vscale x 2 x i32>*
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = getelementptr <vscale x 2 x i32>, <vscale x 2 x i32>* [[TMP1]], i64 [[VNUM:%.*]], i64 0
// CPP-CHECK-NEXT:    [[TMP3:%.*]] = call <vscale x 2 x i32> @llvm.aarch64.sve.ldnf1.nxv2i32(<vscale x 2 x i1> [[TMP0]], i32* [[TMP2]])
// CPP-CHECK-NEXT:    [[TMP4:%.*]] = zext <vscale x 2 x i32> [[TMP3]] to <vscale x 2 x i64>
// CPP-CHECK-NEXT:    ret <vscale x 2 x i64> [[TMP4]]
//
svuint64_t test_svldnf1uw_vnum_u64(svbool_t pg, const uint32_t *base, int64_t vnum)
{
  return svldnf1uw_vnum_u64(pg, base, vnum);
}
