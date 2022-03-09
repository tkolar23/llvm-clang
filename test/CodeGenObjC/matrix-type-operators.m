// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// RUN: %clang_cc1 -triple x86_64-apple-darwin10 -fenable-matrix -emit-llvm -disable-llvm-optzns -o - %s | FileCheck %s

__attribute__((objc_root_class))
@interface IntValue
@property int value;
@end

typedef double double4x4 __attribute__((matrix_type(4, 4)));

// Check that we correctly deal with placeholder expressions.

// CHECK-LABEL: @test_index_placeholders(
// CHECK-NEXT:  entry:
// CHECK:         [[IV:%.*]] = load %0*, %0** [[IV_ADDR:%.*]], align 8
// CHECK-NEXT:    [[SEL:%.*]] = load i8*, i8** @OBJC_SELECTOR_REFERENCES_, align 8, !invariant.load !7
// CHECK-NEXT:    [[IV_PTR:%.*]] = bitcast %0* [[IV]] to i8*
// CHECK-NEXT:    [[CALL:%.*]] = call i32 bitcast (i8* (i8*, i8*, ...)* @objc_msgSend to i32 (i8*, i8*)*)(i8* noundef [[IV_PTR]], i8* noundef [[SEL]])
// CHECK-NEXT:    [[CONV:%.*]] = sext i32 [[CALL]] to i64
// CHECK-NEXT:    [[IV2:%.*]] = load %0*, %0** [[IV_ADDR]], align 8
// CHECK-NEXT:    [[SEL2:%.*]] = load i8*, i8** @OBJC_SELECTOR_REFERENCES_, align 8, !invariant.load !7
// CHECK-NEXT:    [[IV2_PTR:%.*]] = bitcast %0* [[IV2]] to i8*
// CHECK-NEXT:    [[CALL1:%.*]] = call i32 bitcast (i8* (i8*, i8*, ...)* @objc_msgSend to i32 (i8*, i8*)*)(i8* noundef [[IV2_PTR]], i8* noundef [[SEL2]])
// CHECK-NEXT:    [[CONV2:%.*]] = sext i32 [[CALL1]] to i64
// CHECK-NEXT:    [[IDX1:%.*]] = mul i64 [[CONV2]], 4
// CHECK-NEXT:    [[IDX2:%.*]] = add i64 [[IDX1]], [[CONV]]
// CHECK-NEXT:    [[MAT:%.*]] = load <16 x double>, <16 x double>* {{.*}} align 8
// CHECK-NEXT:    [[MATEXT:%.*]] = extractelement <16 x double> [[MAT]], i64 [[IDX2]]
// CHECK-NEXT:    ret double [[MATEXT]]
//
double test_index_placeholders(double4x4 m, IntValue *iv) {

  return m[iv.value][iv.value];
}

__attribute__((objc_root_class))
@interface MatrixValue
@property double4x4 value;
@end

// CHECK-LABEL: @test_base_and_index_placeholders(
// CHECK:         [[IV:%.*]] = load %0*, %0** [[IV_ADDR:%.*]], align 8
// CHECK-NEXT:    [[SEL:%.*]] = load i8*, i8** @OBJC_SELECTOR_REFERENCES_, align 8, !invariant.load !7
// CHECK-NEXT:    [[IV_PTR:%.*]] = bitcast %0* [[IV]] to i8*
// CHECK-NEXT:    [[CALL:%.*]] = call i32 bitcast (i8* (i8*, i8*, ...)* @objc_msgSend to i32 (i8*, i8*)*)(i8* noundef [[IV_PTR]], i8* noundef [[SEL]])
// CHECK-NEXT:    [[CONV:%.*]] = sext i32 [[CALL]] to i64
// CHECK-NEXT:    [[IV2:%.*]] = load %0*, %0** [[IV_ADDR]], align 8
// CHECK-NEXT:    [[SEL2:%.*]] = load i8*, i8** @OBJC_SELECTOR_REFERENCES_, align 8, !invariant.load !7
// CHECK-NEXT:    [[IV2_PTR:%.*]] = bitcast %0* [[IV2]] to i8*
// CHECK-NEXT:    [[CALL1:%.*]] = call i32 bitcast (i8* (i8*, i8*, ...)* @objc_msgSend to i32 (i8*, i8*)*)(i8* noundef [[IV2_PTR]], i8* noundef [[SEL2]])
// CHECK-NEXT:    [[CONV2:%.*]] = sext i32 [[CALL1]] to i64
// CHECK-NEXT:    [[IDX1:%.*]] = mul i64 [[CONV2]], 4
// CHECK-NEXT:    [[IDX2:%.*]] = add i64 [[IDX1]], [[CONV]]
// CHECK-NEXT:    [[M:%.*]] = load %1*, %1** %m.addr, align 8
// CHECK-NEXT:    [[SEL3:%.*]] = load i8*, i8** @OBJC_SELECTOR_REFERENCES_, align 8, !invariant.load !7
// CHECK-NEXT:    [[M_PTR:%.*]] = bitcast %1* [[M]] to i8*
// CHECK-NEXT:    [[MAT:%.*]] = call <16 x double> bitcast (i8* (i8*, i8*, ...)* @objc_msgSend to <16 x double> (i8*, i8*)*)(i8* noundef [[M_PTR]], i8* noundef [[SEL3]])
// CHECK-NEXT:    [[MATEXT:%.*]] = extractelement <16 x double> [[MAT]], i64 [[IDX2]]
// CHECK-NEXT:    ret double [[MATEXT]]
//
double test_base_and_index_placeholders(MatrixValue *m, IntValue *iv) {

  return m.value[iv.value][iv.value];
}
