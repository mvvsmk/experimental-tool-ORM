module attributes {torch.debug_module_name = "MobileNetV2"} {
  func.func private @start_energy_time()
  func.func private @stop_energy_time()
  func.func private @print_energy_time()
  func.func private @set_frequency_caps(i64, i64)
  func.func private @S0(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x3x226x226xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x3x226x226xf32>
    return
  }
  func.func private @S1(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S2(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x3x3x3xf32>, %arg9: memref<64x3x226x226xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) * 2 + symbol(%arg6), symbol(%arg3) * 2 + symbol(%arg7)] : memref<64x3x226x226xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x3x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S3(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S4(%arg0: memref<f64>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f64
    affine.store %cst, %arg0[] : memref<f64>
    return
  }
  func.func private @S5(%arg0: memref<f32>, %arg1: memref<f64>) attributes {scop.stmt} {
    %0 = affine.load %arg1[] : memref<f64>
    %1 = arith.truncf %0 : f64 to f32
    affine.store %1, %arg0[] : memref<f32>
    return
  }
  func.func private @S6(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<f32>, %arg6: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S7(%arg0: memref<f64>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f64
    affine.store %cst, %arg0[] : memref<f64>
    return
  }
  func.func private @S8(%arg0: memref<f32>, %arg1: memref<f64>) attributes {scop.stmt} {
    %0 = affine.load %arg1[] : memref<f64>
    %1 = arith.truncf %0 : f64 to f32
    affine.store %1, %arg0[] : memref<f32>
    return
  }
  func.func private @S9(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<64x32x112x112xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S10(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x114x114xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x114x114xf32>
    return
  }
  func.func private @S11(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: index, %arg6: index, %arg7: memref<32x3x3xf32>, %arg8: memref<64x32x114x114xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x32x114x114xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<32x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S12(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S13(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<f32>, %arg6: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S14(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x112x112xf32>, %arg5: memref<64x32x112x112xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x112x112xf32>
    return
  }
  func.func private @S15(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S16(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<16x32x1x1xf32>, %arg9: memref<64x32x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x112x112xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<16x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S17(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S18(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    return
  }
  func.func private @S19(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<96x16x1x1xf32>, %arg9: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x16x112x112xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<96x16x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    return
  }
  func.func private @S20(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x112x112xf32>, %arg5: memref<64x96x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    return
  }
  func.func private @S21(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x112x112xf32>, %arg5: memref<f32>, %arg6: memref<64x96x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    return
  }
  func.func private @S22(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x112x112xf32>, %arg5: memref<64x96x112x112xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x112x112xf32>
    return
  }
  func.func private @S23(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x114x114xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x114x114xf32>
    return
  }
  func.func private @S24(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    return
  }
  func.func private @S25(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x56x56xf32>, %arg5: index, %arg6: index, %arg7: memref<96x3x3xf32>, %arg8: memref<64x96x114x114xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x96x114x114xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<96x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    return
  }
  func.func private @S26(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x56x56xf32>, %arg5: memref<64x96x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    return
  }
  func.func private @S27(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x56x56xf32>, %arg5: memref<f32>, %arg6: memref<64x96x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    return
  }
  func.func private @S28(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x56x56xf32>, %arg5: memref<64x96x56x56xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x56x56xf32>
    return
  }
  func.func private @S29(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S30(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<24x96x1x1xf32>, %arg9: memref<64x96x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x96x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<24x96x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S31(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S32(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S33(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<144x24x1x1xf32>, %arg9: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x24x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<144x24x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S34(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S35(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<f32>, %arg6: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S36(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S37(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x58x58xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x58x58xf32>
    return
  }
  func.func private @S38(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: index, %arg6: index, %arg7: memref<144x3x3xf32>, %arg8: memref<64x144x58x58xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x144x58x58xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<144x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S39(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S40(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<f32>, %arg6: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S41(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S42(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<24x144x1x1xf32>, %arg9: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x144x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<24x144x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S43(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S44(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>, %arg6: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S45(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<144x24x1x1xf32>, %arg9: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x24x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<144x24x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S46(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S47(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<f32>, %arg6: memref<64x144x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S48(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x56x56xf32>, %arg5: memref<64x144x56x56xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x56x56xf32>
    return
  }
  func.func private @S49(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x58x58xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x58x58xf32>
    return
  }
  func.func private @S50(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    return
  }
  func.func private @S51(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<144x3x3xf32>, %arg8: memref<64x144x58x58xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x144x58x58xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<144x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    return
  }
  func.func private @S52(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x28x28xf32>, %arg5: memref<64x144x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    return
  }
  func.func private @S53(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x144x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    return
  }
  func.func private @S54(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x144x28x28xf32>, %arg5: memref<64x144x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x144x28x28xf32>
    return
  }
  func.func private @S55(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S56(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x144x1x1xf32>, %arg9: memref<64x144x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x144x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x144x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S57(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S58(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S59(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<192x32x1x1xf32>, %arg9: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<192x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S60(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S61(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S62(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S63(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x30x30xf32>
    return
  }
  func.func private @S64(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<192x3x3xf32>, %arg8: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x192x30x30xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<192x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S65(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S66(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S67(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S68(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x192x1x1xf32>, %arg9: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x192x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x192x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S69(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S70(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: memref<64x32x28x28xf32>, %arg6: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S71(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<192x32x1x1xf32>, %arg9: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<192x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S72(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S73(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S74(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S75(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x30x30xf32>
    return
  }
  func.func private @S76(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<192x3x3xf32>, %arg8: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x192x30x30xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<192x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S77(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S78(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S79(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S80(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x192x1x1xf32>, %arg9: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x192x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x192x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S81(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S82(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x28x28xf32>, %arg5: memref<64x32x28x28xf32>, %arg6: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x28x28xf32>
    return
  }
  func.func private @S83(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<192x32x1x1xf32>, %arg9: memref<64x32x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<192x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S84(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S85(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x192x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S86(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x28x28xf32>, %arg5: memref<64x192x28x28xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x28x28xf32>
    return
  }
  func.func private @S87(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x30x30xf32>
    return
  }
  func.func private @S88(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    return
  }
  func.func private @S89(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<192x3x3xf32>, %arg8: memref<64x192x30x30xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x192x30x30xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<192x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    return
  }
  func.func private @S90(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x14x14xf32>, %arg5: memref<64x192x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    return
  }
  func.func private @S91(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x192x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    return
  }
  func.func private @S92(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x14x14xf32>, %arg5: memref<64x192x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x14x14xf32>
    return
  }
  func.func private @S93(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S94(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x192x1x1xf32>, %arg9: memref<64x192x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x192x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x192x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S95(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S96(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S97(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<384x64x1x1xf32>, %arg9: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<384x64x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S98(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S99(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S100(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S101(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x16x16xf32>
    return
  }
  func.func private @S102(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<384x3x3xf32>, %arg8: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x384x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<384x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S103(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S104(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S105(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S106(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x384x1x1xf32>, %arg9: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x384x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x384x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S107(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S108(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>, %arg6: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S109(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<384x64x1x1xf32>, %arg9: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<384x64x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S110(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S111(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S112(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S113(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x16x16xf32>
    return
  }
  func.func private @S114(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<384x3x3xf32>, %arg8: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x384x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<384x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S115(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S116(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S117(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S118(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x384x1x1xf32>, %arg9: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x384x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x384x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S119(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S120(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>, %arg6: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S121(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<384x64x1x1xf32>, %arg9: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<384x64x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S122(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S123(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S124(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S125(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x16x16xf32>
    return
  }
  func.func private @S126(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<384x3x3xf32>, %arg8: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x384x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<384x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S127(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S128(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S129(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S130(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x384x1x1xf32>, %arg9: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x384x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x384x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S131(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S132(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x14x14xf32>, %arg5: memref<64x64x14x14xf32>, %arg6: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x14x14xf32>
    return
  }
  func.func private @S133(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<384x64x1x1xf32>, %arg9: memref<64x64x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<384x64x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S134(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S135(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S136(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S137(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x16x16xf32>
    return
  }
  func.func private @S138(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<384x3x3xf32>, %arg8: memref<64x384x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x384x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<384x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S139(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S140(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S141(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x14x14xf32>, %arg5: memref<64x384x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x14x14xf32>
    return
  }
  func.func private @S142(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S143(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<96x384x1x1xf32>, %arg9: memref<64x384x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x384x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<96x384x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S144(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S145(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S146(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<576x96x1x1xf32>, %arg9: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x96x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<576x96x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S147(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S148(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S149(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S150(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x16x16xf32>
    return
  }
  func.func private @S151(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<576x3x3xf32>, %arg8: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x576x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<576x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S152(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S153(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S154(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S155(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<96x576x1x1xf32>, %arg9: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x576x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<96x576x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S156(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S157(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: memref<64x96x14x14xf32>, %arg6: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S158(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<576x96x1x1xf32>, %arg9: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x96x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<576x96x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S159(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S160(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S161(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S162(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x16x16xf32>
    return
  }
  func.func private @S163(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<576x3x3xf32>, %arg8: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x576x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<576x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S164(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S165(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S166(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S167(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<96x576x1x1xf32>, %arg9: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x576x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<96x576x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S168(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S169(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x96x14x14xf32>, %arg5: memref<64x96x14x14xf32>, %arg6: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x96x14x14xf32>
    return
  }
  func.func private @S170(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<576x96x1x1xf32>, %arg9: memref<64x96x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x96x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<576x96x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S171(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S172(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x576x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S173(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x14x14xf32>, %arg5: memref<64x576x14x14xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x14x14xf32>
    return
  }
  func.func private @S174(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x16x16xf32>
    return
  }
  func.func private @S175(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    return
  }
  func.func private @S176(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<576x3x3xf32>, %arg8: memref<64x576x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x576x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<576x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    return
  }
  func.func private @S177(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x7x7xf32>, %arg5: memref<64x576x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    return
  }
  func.func private @S178(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x576x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    return
  }
  func.func private @S179(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x576x7x7xf32>, %arg5: memref<64x576x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x576x7x7xf32>
    return
  }
  func.func private @S180(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S181(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x576x1x1xf32>, %arg9: memref<64x576x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x576x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x576x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S182(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S183(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S184(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S185(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S186(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S187(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S188(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x9x9xf32>
    return
  }
  func.func private @S189(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<960x3x3xf32>, %arg8: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x9x9xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<960x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S190(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S191(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S192(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S193(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x960x1x1xf32>, %arg9: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S194(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S195(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>, %arg6: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S196(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S197(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S198(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S199(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S200(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x9x9xf32>
    return
  }
  func.func private @S201(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<960x3x3xf32>, %arg8: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x9x9xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<960x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S202(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S203(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S204(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S205(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x960x1x1xf32>, %arg9: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S206(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S207(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>, %arg6: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S208(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S209(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S210(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S211(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S212(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x9x9xf32>
    return
  }
  func.func private @S213(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<960x3x3xf32>, %arg8: memref<64x960x9x9xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x9x9xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<960x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S214(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S215(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S216(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S217(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x320x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x320x7x7xf32>
    return
  }
  func.func private @S218(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x320x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<320x960x1x1xf32>, %arg9: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x320x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<320x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x320x7x7xf32>
    return
  }
  func.func private @S219(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x320x7x7xf32>, %arg5: memref<64x320x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x320x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x320x7x7xf32>
    return
  }
  func.func private @S220(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    return
  }
  func.func private @S221(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<1280x320x1x1xf32>, %arg9: memref<64x320x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x320x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<1280x320x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    return
  }
  func.func private @S222(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x7x7xf32>, %arg5: memref<64x1280x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-05 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    return
  }
  func.func private @S223(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x1280x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    return
  }
  func.func private @S224(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x7x7xf32>, %arg5: memref<64x1280x7x7xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x7x7xf32>
    return
  }
  func.func private @S225(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x1x1xf32>
    return
  }
  func.func private @S226(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x1280x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x1280x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x1x1xf32>
    return
  }
  func.func private @S227(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x1280x1x1xf32>, %arg5: memref<64x1280x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 4.900000e+01 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x1280x1x1xf32>
    return
  }
  func.func private @S228(%arg0: index, %arg1: index, %arg2: memref<1280x1000xf32>, %arg3: memref<1000x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<1000x1280xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<1280x1000xf32>
    return
  }
  func.func private @S229(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S230(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: index, %arg4: memref<1280x1000xf32>, %arg5: memref<64x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x1280xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<1280x1000xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S231(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: memref<64x1000xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func @forward(%arg0: memref<64x3x224x224xf32>) -> memref<64x1000xf32> attributes {L1 = 12052411008 : i64, L2 = 353968041 : i64, L3 = 137464955 : i64, bytes = 5.11784885E+12 : f32, compulsory = 0x4CE2CBB8 : f32, flops = 39298510848 : i64} {
    %c800000_i64 = arith.constant 800000 : i64
    %c899999_i64 = arith.constant 899999 : i64
    %c799999_i64 = arith.constant 799999 : i64
    %c4600000_i64 = arith.constant 4600000 : i64
    %c5000000_i64 = arith.constant 5000000 : i64
    %alloc = memref.alloc() {alignment = 64 : i64} : memref<32x3x3xf32>
    %alloc_0 = memref.alloc() {alignment = 64 : i64} : memref<96x3x3xf32>
    %alloc_1 = memref.alloc() {alignment = 64 : i64} : memref<144x3x3xf32>
    %alloc_2 = memref.alloc() {alignment = 64 : i64} : memref<144x3x3xf32>
    %alloc_3 = memref.alloc() {alignment = 64 : i64} : memref<192x3x3xf32>
    %alloc_4 = memref.alloc() {alignment = 64 : i64} : memref<192x3x3xf32>
    %alloc_5 = memref.alloc() {alignment = 64 : i64} : memref<192x3x3xf32>
    %alloc_6 = memref.alloc() {alignment = 64 : i64} : memref<384x3x3xf32>
    %alloc_7 = memref.alloc() {alignment = 64 : i64} : memref<384x3x3xf32>
    %alloc_8 = memref.alloc() {alignment = 64 : i64} : memref<384x3x3xf32>
    %alloc_9 = memref.alloc() {alignment = 64 : i64} : memref<384x3x3xf32>
    %alloc_10 = memref.alloc() {alignment = 64 : i64} : memref<576x3x3xf32>
    %alloc_11 = memref.alloc() {alignment = 64 : i64} : memref<576x3x3xf32>
    %alloc_12 = memref.alloc() {alignment = 64 : i64} : memref<576x3x3xf32>
    %alloc_13 = memref.alloc() {alignment = 64 : i64} : memref<960x3x3xf32>
    %alloc_14 = memref.alloc() {alignment = 64 : i64} : memref<960x3x3xf32>
    %alloc_15 = memref.alloc() {alignment = 64 : i64} : memref<960x3x3xf32>
    %alloc_16 = memref.alloc() {alignment = 64 : i64} : memref<1000x1280xf32>
    %alloc_17 = memref.alloc() {alignment = 64 : i64} : memref<1280x320x1x1xf32>
    %alloc_18 = memref.alloc() {alignment = 64 : i64} : memref<320x960x1x1xf32>
    %alloc_19 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_20 = memref.alloc() {alignment = 64 : i64} : memref<160x960x1x1xf32>
    %alloc_21 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_22 = memref.alloc() {alignment = 64 : i64} : memref<160x960x1x1xf32>
    %alloc_23 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_24 = memref.alloc() {alignment = 64 : i64} : memref<160x576x1x1xf32>
    %alloc_25 = memref.alloc() {alignment = 64 : i64} : memref<576x96x1x1xf32>
    %alloc_26 = memref.alloc() {alignment = 64 : i64} : memref<96x576x1x1xf32>
    %alloc_27 = memref.alloc() {alignment = 64 : i64} : memref<576x96x1x1xf32>
    %alloc_28 = memref.alloc() {alignment = 64 : i64} : memref<96x576x1x1xf32>
    %alloc_29 = memref.alloc() {alignment = 64 : i64} : memref<576x96x1x1xf32>
    %alloc_30 = memref.alloc() {alignment = 64 : i64} : memref<96x384x1x1xf32>
    %alloc_31 = memref.alloc() {alignment = 64 : i64} : memref<384x64x1x1xf32>
    %alloc_32 = memref.alloc() {alignment = 64 : i64} : memref<64x384x1x1xf32>
    %alloc_33 = memref.alloc() {alignment = 64 : i64} : memref<384x64x1x1xf32>
    %alloc_34 = memref.alloc() {alignment = 64 : i64} : memref<64x384x1x1xf32>
    %alloc_35 = memref.alloc() {alignment = 64 : i64} : memref<384x64x1x1xf32>
    %alloc_36 = memref.alloc() {alignment = 64 : i64} : memref<64x384x1x1xf32>
    %alloc_37 = memref.alloc() {alignment = 64 : i64} : memref<384x64x1x1xf32>
    %alloc_38 = memref.alloc() {alignment = 64 : i64} : memref<64x192x1x1xf32>
    %alloc_39 = memref.alloc() {alignment = 64 : i64} : memref<192x32x1x1xf32>
    %alloc_40 = memref.alloc() {alignment = 64 : i64} : memref<32x192x1x1xf32>
    %alloc_41 = memref.alloc() {alignment = 64 : i64} : memref<192x32x1x1xf32>
    %alloc_42 = memref.alloc() {alignment = 64 : i64} : memref<32x192x1x1xf32>
    %alloc_43 = memref.alloc() {alignment = 64 : i64} : memref<192x32x1x1xf32>
    %alloc_44 = memref.alloc() {alignment = 64 : i64} : memref<32x144x1x1xf32>
    %alloc_45 = memref.alloc() {alignment = 64 : i64} : memref<144x24x1x1xf32>
    %alloc_46 = memref.alloc() {alignment = 64 : i64} : memref<24x144x1x1xf32>
    %alloc_47 = memref.alloc() {alignment = 64 : i64} : memref<144x24x1x1xf32>
    %alloc_48 = memref.alloc() {alignment = 64 : i64} : memref<24x96x1x1xf32>
    %alloc_49 = memref.alloc() {alignment = 64 : i64} : memref<96x16x1x1xf32>
    %alloc_50 = memref.alloc() {alignment = 64 : i64} : memref<16x32x1x1xf32>
    %alloc_51 = memref.alloc() {alignment = 64 : i64} : memref<32x3x3x3xf32>
    %alloc_52 = memref.alloc() {alignment = 64 : i64} : memref<64x3x226x226xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 3 {
        affine.for %arg3 = 0 to 226 {
          affine.for %arg4 = 0 to 226 {
            func.call @S0(%arg1, %arg2, %arg3, %arg4, %alloc_52) : (index, index, index, index, memref<64x3x226x226xf32>) -> ()
          }
        }
      }
    }
    %subview = memref.subview %alloc_52[0, 0, 1, 1] [64, 3, 224, 224] [1, 1, 1, 1] : memref<64x3x226x226xf32> to memref<64x3x224x224xf32, strided<[153228, 51076, 226, 1], offset: 227>>
    memref.copy %arg0, %subview : memref<64x3x224x224xf32> to memref<64x3x224x224xf32, strided<[153228, 51076, 226, 1], offset: 227>>
    %alloc_53 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    %alloc_54 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S1(%arg1, %arg2, %arg3, %arg4, %alloc_54) : (index, index, index, index, memref<64x32x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_55 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    memref.copy %alloc_54, %alloc_55 : memref<64x32x112x112xf32> to memref<64x32x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                affine.for %arg7 = 0 to 3 {
                  func.call @S2(%arg1, %arg2, %arg3, %arg4, %alloc_55, %arg5, %arg6, %arg7, %alloc_51, %alloc_52) : (index, index, index, index, memref<64x32x112x112xf32>, index, index, index, memref<32x3x3x3xf32>, memref<64x3x226x226xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_56 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S3(%arg1, %arg2, %arg3, %arg4, %alloc_56, %alloc_55) : (index, index, index, index, memref<64x32x112x112xf32>, memref<64x32x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_57 = memref.alloc() {alignment = 64 : i64} : memref<f64>
    call @S4(%alloc_57) : (memref<f64>) -> ()
    %alloc_58 = memref.alloc() {alignment = 64 : i64} : memref<f32>
    %alloc_59 = memref.alloc() {alignment = 64 : i64} : memref<f32>
    call @S5(%alloc_59, %alloc_57) : (memref<f32>, memref<f64>) -> ()
    %alloc_60 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S6(%arg1, %arg2, %arg3, %arg4, %alloc_60, %alloc_59, %alloc_56) : (index, index, index, index, memref<64x32x112x112xf32>, memref<f32>, memref<64x32x112x112xf32>) -> ()
          }
        }
      }
    }
    call @S7(%alloc_57) : (memref<f64>) -> ()
    call @S8(%alloc_58, %alloc_57) : (memref<f32>, memref<f64>) -> ()
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S9(%arg1, %arg2, %arg3, %arg4, %alloc_53, %alloc_60, %alloc_58) : (index, index, index, index, memref<64x32x112x112xf32>, memref<64x32x112x112xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_61 = memref.alloc() {alignment = 64 : i64} : memref<64x32x114x114xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 114 {
          affine.for %arg4 = 0 to 114 {
            func.call @S10(%arg1, %arg2, %arg3, %arg4, %alloc_61) : (index, index, index, index, memref<64x32x114x114xf32>) -> ()
          }
        }
      }
    }
    %subview_62 = memref.subview %alloc_61[0, 0, 1, 1] [64, 32, 112, 112] [1, 1, 1, 1] : memref<64x32x114x114xf32> to memref<64x32x112x112xf32, strided<[415872, 12996, 114, 1], offset: 115>>
    memref.copy %alloc_53, %subview_62 : memref<64x32x112x112xf32> to memref<64x32x112x112xf32, strided<[415872, 12996, 114, 1], offset: 115>>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 32 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S11(%arg1, %arg4, %arg2, %arg3, %alloc_54, %arg5, %arg6, %alloc, %alloc_61) : (index, index, index, index, memref<64x32x112x112xf32>, index, index, memref<32x3x3xf32>, memref<64x32x114x114xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_63 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S12(%arg1, %arg2, %arg3, %arg4, %alloc_63, %alloc_54) : (index, index, index, index, memref<64x32x112x112xf32>, memref<64x32x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_64 = memref.alloc() {alignment = 64 : i64} : memref<64x32x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S13(%arg1, %arg2, %arg3, %arg4, %alloc_64, %alloc_59, %alloc_63) : (index, index, index, index, memref<64x32x112x112xf32>, memref<f32>, memref<64x32x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S14(%arg1, %arg2, %arg3, %arg4, %alloc_53, %alloc_64, %alloc_58) : (index, index, index, index, memref<64x32x112x112xf32>, memref<64x32x112x112xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_65 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S15(%arg1, %arg2, %arg3, %arg4, %alloc_65) : (index, index, index, index, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S16(%arg1, %arg2, %arg3, %arg4, %alloc_65, %arg5, %arg6, %arg7, %alloc_50, %alloc_53) : (index, index, index, index, memref<64x16x112x112xf32>, index, index, index, memref<16x32x1x1xf32>, memref<64x32x112x112xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_66 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S17(%arg1, %arg2, %arg3, %arg4, %alloc_66, %alloc_65) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_67 = memref.alloc() {alignment = 64 : i64} : memref<64x96x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S18(%arg1, %arg2, %arg3, %arg4, %alloc_67) : (index, index, index, index, memref<64x96x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 16 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S19(%arg1, %arg2, %arg3, %arg4, %alloc_67, %arg5, %arg6, %arg7, %alloc_49, %alloc_66) : (index, index, index, index, memref<64x96x112x112xf32>, index, index, index, memref<96x16x1x1xf32>, memref<64x16x112x112xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_68 = memref.alloc() {alignment = 64 : i64} : memref<64x96x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S20(%arg1, %arg2, %arg3, %arg4, %alloc_68, %alloc_67) : (index, index, index, index, memref<64x96x112x112xf32>, memref<64x96x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_69 = memref.alloc() {alignment = 64 : i64} : memref<64x96x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S21(%arg1, %arg2, %arg3, %arg4, %alloc_69, %alloc_59, %alloc_68) : (index, index, index, index, memref<64x96x112x112xf32>, memref<f32>, memref<64x96x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S22(%arg1, %arg2, %arg3, %arg4, %alloc_67, %alloc_69, %alloc_58) : (index, index, index, index, memref<64x96x112x112xf32>, memref<64x96x112x112xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_70 = memref.alloc() {alignment = 64 : i64} : memref<64x96x114x114xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 114 {
          affine.for %arg4 = 0 to 114 {
            func.call @S23(%arg1, %arg2, %arg3, %arg4, %alloc_70) : (index, index, index, index, memref<64x96x114x114xf32>) -> ()
          }
        }
      }
    }
    %subview_71 = memref.subview %alloc_70[0, 0, 1, 1] [64, 96, 112, 112] [1, 1, 1, 1] : memref<64x96x114x114xf32> to memref<64x96x112x112xf32, strided<[1247616, 12996, 114, 1], offset: 115>>
    memref.copy %alloc_67, %subview_71 : memref<64x96x112x112xf32> to memref<64x96x112x112xf32, strided<[1247616, 12996, 114, 1], offset: 115>>
    %alloc_72 = memref.alloc() {alignment = 64 : i64} : memref<64x96x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S24(%arg1, %arg2, %arg3, %arg4, %alloc_72) : (index, index, index, index, memref<64x96x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 56 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 96 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S25(%arg1, %arg4, %arg2, %arg3, %alloc_72, %arg5, %arg6, %alloc_0, %alloc_70) : (index, index, index, index, memref<64x96x56x56xf32>, index, index, memref<96x3x3xf32>, memref<64x96x114x114xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_73 = memref.alloc() {alignment = 64 : i64} : memref<64x96x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S26(%arg1, %arg2, %arg3, %arg4, %alloc_73, %alloc_72) : (index, index, index, index, memref<64x96x56x56xf32>, memref<64x96x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_74 = memref.alloc() {alignment = 64 : i64} : memref<64x96x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S27(%arg1, %arg2, %arg3, %arg4, %alloc_74, %alloc_59, %alloc_73) : (index, index, index, index, memref<64x96x56x56xf32>, memref<f32>, memref<64x96x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S28(%arg1, %arg2, %arg3, %arg4, %alloc_72, %alloc_74, %alloc_58) : (index, index, index, index, memref<64x96x56x56xf32>, memref<64x96x56x56xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_75 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S29(%arg1, %arg2, %arg3, %arg4, %alloc_75) : (index, index, index, index, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_76 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    memref.copy %alloc_75, %alloc_76 : memref<64x24x56x56xf32> to memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 96 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S30(%arg1, %arg2, %arg3, %arg4, %alloc_76, %arg5, %arg6, %arg7, %alloc_48, %alloc_72) : (index, index, index, index, memref<64x24x56x56xf32>, index, index, index, memref<24x96x1x1xf32>, memref<64x96x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_77 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S31(%arg1, %arg2, %arg3, %arg4, %alloc_77, %alloc_76) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_78 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    %alloc_79 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S32(%arg1, %arg2, %arg3, %arg4, %alloc_79) : (index, index, index, index, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_80 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    memref.copy %alloc_79, %alloc_80 : memref<64x144x56x56xf32> to memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 24 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S33(%arg1, %arg2, %arg3, %arg4, %alloc_80, %arg5, %arg6, %arg7, %alloc_47, %alloc_77) : (index, index, index, index, memref<64x144x56x56xf32>, index, index, index, memref<144x24x1x1xf32>, memref<64x24x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_81 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S34(%arg1, %arg2, %arg3, %arg4, %alloc_81, %alloc_80) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_82 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S35(%arg1, %arg2, %arg3, %arg4, %alloc_82, %alloc_59, %alloc_81) : (index, index, index, index, memref<64x144x56x56xf32>, memref<f32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S36(%arg1, %arg2, %arg3, %arg4, %alloc_78, %alloc_82, %alloc_58) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_83 = memref.alloc() {alignment = 64 : i64} : memref<64x144x58x58xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 58 {
          affine.for %arg4 = 0 to 58 {
            func.call @S37(%arg1, %arg2, %arg3, %arg4, %alloc_83) : (index, index, index, index, memref<64x144x58x58xf32>) -> ()
          }
        }
      }
    }
    %subview_84 = memref.subview %alloc_83[0, 0, 1, 1] [64, 144, 56, 56] [1, 1, 1, 1] : memref<64x144x58x58xf32> to memref<64x144x56x56xf32, strided<[484416, 3364, 58, 1], offset: 59>>
    memref.copy %alloc_78, %subview_84 : memref<64x144x56x56xf32> to memref<64x144x56x56xf32, strided<[484416, 3364, 58, 1], offset: 59>>
    %alloc_85 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    memref.copy %alloc_79, %alloc_85 : memref<64x144x56x56xf32> to memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 56 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 144 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S38(%arg1, %arg4, %arg2, %arg3, %alloc_85, %arg5, %arg6, %alloc_1, %alloc_83) : (index, index, index, index, memref<64x144x56x56xf32>, index, index, memref<144x3x3xf32>, memref<64x144x58x58xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_86 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S39(%arg1, %arg2, %arg3, %arg4, %alloc_86, %alloc_85) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_87 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S40(%arg1, %arg2, %arg3, %arg4, %alloc_87, %alloc_59, %alloc_86) : (index, index, index, index, memref<64x144x56x56xf32>, memref<f32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S41(%arg1, %arg2, %arg3, %arg4, %alloc_78, %alloc_87, %alloc_58) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 144 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S42(%arg1, %arg2, %arg3, %arg4, %alloc_75, %arg5, %arg6, %arg7, %alloc_46, %alloc_78) : (index, index, index, index, memref<64x24x56x56xf32>, index, index, index, memref<24x144x1x1xf32>, memref<64x144x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_88 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S43(%arg1, %arg2, %arg3, %arg4, %alloc_88, %alloc_75) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S44(%arg1, %arg2, %arg3, %arg4, %alloc_75, %alloc_88, %alloc_77) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 24 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S45(%arg1, %arg2, %arg3, %arg4, %alloc_79, %arg5, %arg6, %arg7, %alloc_45, %alloc_75) : (index, index, index, index, memref<64x144x56x56xf32>, index, index, index, memref<144x24x1x1xf32>, memref<64x24x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_89 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S46(%arg1, %arg2, %arg3, %arg4, %alloc_89, %alloc_79) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_90 = memref.alloc() {alignment = 64 : i64} : memref<64x144x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S47(%arg1, %arg2, %arg3, %arg4, %alloc_90, %alloc_59, %alloc_89) : (index, index, index, index, memref<64x144x56x56xf32>, memref<f32>, memref<64x144x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S48(%arg1, %arg2, %arg3, %arg4, %alloc_78, %alloc_90, %alloc_58) : (index, index, index, index, memref<64x144x56x56xf32>, memref<64x144x56x56xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_91 = memref.alloc() {alignment = 64 : i64} : memref<64x144x58x58xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 58 {
          affine.for %arg4 = 0 to 58 {
            func.call @S49(%arg1, %arg2, %arg3, %arg4, %alloc_91) : (index, index, index, index, memref<64x144x58x58xf32>) -> ()
          }
        }
      }
    }
    %subview_92 = memref.subview %alloc_91[0, 0, 1, 1] [64, 144, 56, 56] [1, 1, 1, 1] : memref<64x144x58x58xf32> to memref<64x144x56x56xf32, strided<[484416, 3364, 58, 1], offset: 59>>
    memref.copy %alloc_78, %subview_92 : memref<64x144x56x56xf32> to memref<64x144x56x56xf32, strided<[484416, 3364, 58, 1], offset: 59>>
    %alloc_93 = memref.alloc() {alignment = 64 : i64} : memref<64x144x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S50(%arg1, %arg2, %arg3, %arg4, %alloc_93) : (index, index, index, index, memref<64x144x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 144 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S51(%arg1, %arg4, %arg2, %arg3, %alloc_93, %arg5, %arg6, %alloc_2, %alloc_91) : (index, index, index, index, memref<64x144x28x28xf32>, index, index, memref<144x3x3xf32>, memref<64x144x58x58xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_94 = memref.alloc() {alignment = 64 : i64} : memref<64x144x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S52(%arg1, %arg2, %arg3, %arg4, %alloc_94, %alloc_93) : (index, index, index, index, memref<64x144x28x28xf32>, memref<64x144x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_95 = memref.alloc() {alignment = 64 : i64} : memref<64x144x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S53(%arg1, %arg2, %arg3, %arg4, %alloc_95, %alloc_59, %alloc_94) : (index, index, index, index, memref<64x144x28x28xf32>, memref<f32>, memref<64x144x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 144 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S54(%arg1, %arg2, %arg3, %arg4, %alloc_93, %alloc_95, %alloc_58) : (index, index, index, index, memref<64x144x28x28xf32>, memref<64x144x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_96 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S55(%arg1, %arg2, %arg3, %arg4, %alloc_96) : (index, index, index, index, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_97 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    memref.copy %alloc_96, %alloc_97 : memref<64x32x28x28xf32> to memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 144 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S56(%arg1, %arg2, %arg3, %arg4, %alloc_97, %arg5, %arg6, %arg7, %alloc_44, %alloc_93) : (index, index, index, index, memref<64x32x28x28xf32>, index, index, index, memref<32x144x1x1xf32>, memref<64x144x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_98 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S57(%arg1, %arg2, %arg3, %arg4, %alloc_98, %alloc_97) : (index, index, index, index, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_99 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    %alloc_100 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S58(%arg1, %arg2, %arg3, %arg4, %alloc_100) : (index, index, index, index, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_101 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    memref.copy %alloc_100, %alloc_101 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S59(%arg1, %arg2, %arg3, %arg4, %alloc_101, %arg5, %arg6, %arg7, %alloc_43, %alloc_98) : (index, index, index, index, memref<64x192x28x28xf32>, index, index, index, memref<192x32x1x1xf32>, memref<64x32x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_102 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S60(%arg1, %arg2, %arg3, %arg4, %alloc_102, %alloc_101) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_103 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S61(%arg1, %arg2, %arg3, %arg4, %alloc_103, %alloc_59, %alloc_102) : (index, index, index, index, memref<64x192x28x28xf32>, memref<f32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S62(%arg1, %arg2, %arg3, %arg4, %alloc_99, %alloc_103, %alloc_58) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_104 = memref.alloc() {alignment = 64 : i64} : memref<64x192x30x30xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 30 {
          affine.for %arg4 = 0 to 30 {
            func.call @S63(%arg1, %arg2, %arg3, %arg4, %alloc_104) : (index, index, index, index, memref<64x192x30x30xf32>) -> ()
          }
        }
      }
    }
    %subview_105 = memref.subview %alloc_104[0, 0, 1, 1] [64, 192, 28, 28] [1, 1, 1, 1] : memref<64x192x30x30xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    memref.copy %alloc_99, %subview_105 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    %alloc_106 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    memref.copy %alloc_100, %alloc_106 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 192 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S64(%arg1, %arg4, %arg2, %arg3, %alloc_106, %arg5, %arg6, %alloc_3, %alloc_104) : (index, index, index, index, memref<64x192x28x28xf32>, index, index, memref<192x3x3xf32>, memref<64x192x30x30xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_107 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S65(%arg1, %arg2, %arg3, %arg4, %alloc_107, %alloc_106) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_108 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S66(%arg1, %arg2, %arg3, %arg4, %alloc_108, %alloc_59, %alloc_107) : (index, index, index, index, memref<64x192x28x28xf32>, memref<f32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S67(%arg1, %arg2, %arg3, %arg4, %alloc_99, %alloc_108, %alloc_58) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_109 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    memref.copy %alloc_96, %alloc_109 : memref<64x32x28x28xf32> to memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 192 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S68(%arg1, %arg2, %arg3, %arg4, %alloc_109, %arg5, %arg6, %arg7, %alloc_42, %alloc_99) : (index, index, index, index, memref<64x32x28x28xf32>, index, index, index, memref<32x192x1x1xf32>, memref<64x192x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_110 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S69(%arg1, %arg2, %arg3, %arg4, %alloc_110, %alloc_109) : (index, index, index, index, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_111 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S70(%arg1, %arg2, %arg3, %arg4, %alloc_111, %alloc_110, %alloc_98) : (index, index, index, index, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_112 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    memref.copy %alloc_100, %alloc_112 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S71(%arg1, %arg2, %arg3, %arg4, %alloc_112, %arg5, %arg6, %arg7, %alloc_41, %alloc_111) : (index, index, index, index, memref<64x192x28x28xf32>, index, index, index, memref<192x32x1x1xf32>, memref<64x32x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_113 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S72(%arg1, %arg2, %arg3, %arg4, %alloc_113, %alloc_112) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_114 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S73(%arg1, %arg2, %arg3, %arg4, %alloc_114, %alloc_59, %alloc_113) : (index, index, index, index, memref<64x192x28x28xf32>, memref<f32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S74(%arg1, %arg2, %arg3, %arg4, %alloc_99, %alloc_114, %alloc_58) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_115 = memref.alloc() {alignment = 64 : i64} : memref<64x192x30x30xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 30 {
          affine.for %arg4 = 0 to 30 {
            func.call @S75(%arg1, %arg2, %arg3, %arg4, %alloc_115) : (index, index, index, index, memref<64x192x30x30xf32>) -> ()
          }
        }
      }
    }
    %subview_116 = memref.subview %alloc_115[0, 0, 1, 1] [64, 192, 28, 28] [1, 1, 1, 1] : memref<64x192x30x30xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    memref.copy %alloc_99, %subview_116 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    %alloc_117 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    memref.copy %alloc_100, %alloc_117 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 192 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S76(%arg1, %arg4, %arg2, %arg3, %alloc_117, %arg5, %arg6, %alloc_4, %alloc_115) : (index, index, index, index, memref<64x192x28x28xf32>, index, index, memref<192x3x3xf32>, memref<64x192x30x30xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_118 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S77(%arg1, %arg2, %arg3, %arg4, %alloc_118, %alloc_117) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_119 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S78(%arg1, %arg2, %arg3, %arg4, %alloc_119, %alloc_59, %alloc_118) : (index, index, index, index, memref<64x192x28x28xf32>, memref<f32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S79(%arg1, %arg2, %arg3, %arg4, %alloc_99, %alloc_119, %alloc_58) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 192 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S80(%arg1, %arg2, %arg3, %arg4, %alloc_96, %arg5, %arg6, %arg7, %alloc_40, %alloc_99) : (index, index, index, index, memref<64x32x28x28xf32>, index, index, index, memref<32x192x1x1xf32>, memref<64x192x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_120 = memref.alloc() {alignment = 64 : i64} : memref<64x32x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S81(%arg1, %arg2, %arg3, %arg4, %alloc_120, %alloc_96) : (index, index, index, index, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S82(%arg1, %arg2, %arg3, %arg4, %alloc_96, %alloc_120, %alloc_111) : (index, index, index, index, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>, memref<64x32x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S83(%arg1, %arg2, %arg3, %arg4, %alloc_100, %arg5, %arg6, %arg7, %alloc_39, %alloc_96) : (index, index, index, index, memref<64x192x28x28xf32>, index, index, index, memref<192x32x1x1xf32>, memref<64x32x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_121 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S84(%arg1, %arg2, %arg3, %arg4, %alloc_121, %alloc_100) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_122 = memref.alloc() {alignment = 64 : i64} : memref<64x192x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S85(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_59, %alloc_121) : (index, index, index, index, memref<64x192x28x28xf32>, memref<f32>, memref<64x192x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S86(%arg1, %arg2, %arg3, %arg4, %alloc_99, %alloc_122, %alloc_58) : (index, index, index, index, memref<64x192x28x28xf32>, memref<64x192x28x28xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_123 = memref.alloc() {alignment = 64 : i64} : memref<64x192x30x30xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 30 {
          affine.for %arg4 = 0 to 30 {
            func.call @S87(%arg1, %arg2, %arg3, %arg4, %alloc_123) : (index, index, index, index, memref<64x192x30x30xf32>) -> ()
          }
        }
      }
    }
    %subview_124 = memref.subview %alloc_123[0, 0, 1, 1] [64, 192, 28, 28] [1, 1, 1, 1] : memref<64x192x30x30xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    memref.copy %alloc_99, %subview_124 : memref<64x192x28x28xf32> to memref<64x192x28x28xf32, strided<[172800, 900, 30, 1], offset: 31>>
    %alloc_125 = memref.alloc() {alignment = 64 : i64} : memref<64x192x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S88(%arg1, %arg2, %arg3, %arg4, %alloc_125) : (index, index, index, index, memref<64x192x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 192 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S89(%arg1, %arg4, %arg2, %arg3, %alloc_125, %arg5, %arg6, %alloc_5, %alloc_123) : (index, index, index, index, memref<64x192x14x14xf32>, index, index, memref<192x3x3xf32>, memref<64x192x30x30xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_126 = memref.alloc() {alignment = 64 : i64} : memref<64x192x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S90(%arg1, %arg2, %arg3, %arg4, %alloc_126, %alloc_125) : (index, index, index, index, memref<64x192x14x14xf32>, memref<64x192x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_127 = memref.alloc() {alignment = 64 : i64} : memref<64x192x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S91(%arg1, %arg2, %arg3, %arg4, %alloc_127, %alloc_59, %alloc_126) : (index, index, index, index, memref<64x192x14x14xf32>, memref<f32>, memref<64x192x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S92(%arg1, %arg2, %arg3, %arg4, %alloc_125, %alloc_127, %alloc_58) : (index, index, index, index, memref<64x192x14x14xf32>, memref<64x192x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_128 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    %alloc_129 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S93(%arg1, %arg2, %arg3, %arg4, %alloc_129) : (index, index, index, index, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_130 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    memref.copy %alloc_129, %alloc_130 : memref<64x64x14x14xf32> to memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 192 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S94(%arg1, %arg2, %arg3, %arg4, %alloc_130, %arg5, %arg6, %arg7, %alloc_38, %alloc_125) : (index, index, index, index, memref<64x64x14x14xf32>, index, index, index, memref<64x192x1x1xf32>, memref<64x192x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_131 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S95(%arg1, %arg2, %arg3, %arg4, %alloc_131, %alloc_130) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_132 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    %alloc_133 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S96(%arg1, %arg2, %arg3, %arg4, %alloc_133) : (index, index, index, index, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_134 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_134 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S97(%arg1, %arg2, %arg3, %arg4, %alloc_134, %arg5, %arg6, %arg7, %alloc_37, %alloc_131) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, index, memref<384x64x1x1xf32>, memref<64x64x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_135 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S98(%arg1, %arg2, %arg3, %arg4, %alloc_135, %alloc_134) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_136 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S99(%arg1, %arg2, %arg3, %arg4, %alloc_136, %alloc_59, %alloc_135) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S100(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_136, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_137 = memref.alloc() {alignment = 64 : i64} : memref<64x384x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S101(%arg1, %arg2, %arg3, %arg4, %alloc_137) : (index, index, index, index, memref<64x384x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_138 = memref.subview %alloc_137[0, 0, 1, 1] [64, 384, 14, 14] [1, 1, 1, 1] : memref<64x384x16x16xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    memref.copy %alloc_132, %subview_138 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    %alloc_139 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_139 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 384 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S102(%arg1, %arg4, %arg2, %arg3, %alloc_139, %arg5, %arg6, %alloc_6, %alloc_137) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, memref<384x3x3xf32>, memref<64x384x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_140 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S103(%arg1, %arg2, %arg3, %arg4, %alloc_140, %alloc_139) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_141 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S104(%arg1, %arg2, %arg3, %arg4, %alloc_141, %alloc_59, %alloc_140) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S105(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_141, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_142 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    memref.copy %alloc_129, %alloc_142 : memref<64x64x14x14xf32> to memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 384 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S106(%arg1, %arg2, %arg3, %arg4, %alloc_142, %arg5, %arg6, %arg7, %alloc_36, %alloc_132) : (index, index, index, index, memref<64x64x14x14xf32>, index, index, index, memref<64x384x1x1xf32>, memref<64x384x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_143 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S107(%arg1, %arg2, %arg3, %arg4, %alloc_143, %alloc_142) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S108(%arg1, %arg2, %arg3, %arg4, %alloc_128, %alloc_143, %alloc_131) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_144 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_144 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S109(%arg1, %arg2, %arg3, %arg4, %alloc_144, %arg5, %arg6, %arg7, %alloc_35, %alloc_128) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, index, memref<384x64x1x1xf32>, memref<64x64x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_145 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S110(%arg1, %arg2, %arg3, %arg4, %alloc_145, %alloc_144) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_146 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S111(%arg1, %arg2, %arg3, %arg4, %alloc_146, %alloc_59, %alloc_145) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S112(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_146, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_147 = memref.alloc() {alignment = 64 : i64} : memref<64x384x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S113(%arg1, %arg2, %arg3, %arg4, %alloc_147) : (index, index, index, index, memref<64x384x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_148 = memref.subview %alloc_147[0, 0, 1, 1] [64, 384, 14, 14] [1, 1, 1, 1] : memref<64x384x16x16xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    memref.copy %alloc_132, %subview_148 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    %alloc_149 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_149 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 384 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S114(%arg1, %arg4, %arg2, %arg3, %alloc_149, %arg5, %arg6, %alloc_7, %alloc_147) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, memref<384x3x3xf32>, memref<64x384x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_150 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S115(%arg1, %arg2, %arg3, %arg4, %alloc_150, %alloc_149) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_151 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S116(%arg1, %arg2, %arg3, %arg4, %alloc_151, %alloc_59, %alloc_150) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S117(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_151, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_152 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    memref.copy %alloc_129, %alloc_152 : memref<64x64x14x14xf32> to memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 384 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S118(%arg1, %arg2, %arg3, %arg4, %alloc_152, %arg5, %arg6, %arg7, %alloc_34, %alloc_132) : (index, index, index, index, memref<64x64x14x14xf32>, index, index, index, memref<64x384x1x1xf32>, memref<64x384x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_153 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S119(%arg1, %arg2, %arg3, %arg4, %alloc_153, %alloc_152) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_154 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S120(%arg1, %arg2, %arg3, %arg4, %alloc_154, %alloc_153, %alloc_128) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_155 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_155 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S121(%arg1, %arg2, %arg3, %arg4, %alloc_155, %arg5, %arg6, %arg7, %alloc_33, %alloc_154) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, index, memref<384x64x1x1xf32>, memref<64x64x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_156 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S122(%arg1, %arg2, %arg3, %arg4, %alloc_156, %alloc_155) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_157 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S123(%arg1, %arg2, %arg3, %arg4, %alloc_157, %alloc_59, %alloc_156) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S124(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_157, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_158 = memref.alloc() {alignment = 64 : i64} : memref<64x384x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S125(%arg1, %arg2, %arg3, %arg4, %alloc_158) : (index, index, index, index, memref<64x384x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_159 = memref.subview %alloc_158[0, 0, 1, 1] [64, 384, 14, 14] [1, 1, 1, 1] : memref<64x384x16x16xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    memref.copy %alloc_132, %subview_159 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    %alloc_160 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_160 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 384 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S126(%arg1, %arg4, %arg2, %arg3, %alloc_160, %arg5, %arg6, %alloc_8, %alloc_158) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, memref<384x3x3xf32>, memref<64x384x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_161 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S127(%arg1, %arg2, %arg3, %arg4, %alloc_161, %alloc_160) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_162 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S128(%arg1, %arg2, %arg3, %arg4, %alloc_162, %alloc_59, %alloc_161) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S129(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_162, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 384 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S130(%arg1, %arg2, %arg3, %arg4, %alloc_129, %arg5, %arg6, %arg7, %alloc_32, %alloc_132) : (index, index, index, index, memref<64x64x14x14xf32>, index, index, index, memref<64x384x1x1xf32>, memref<64x384x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_163 = memref.alloc() {alignment = 64 : i64} : memref<64x64x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S131(%arg1, %arg2, %arg3, %arg4, %alloc_163, %alloc_129) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S132(%arg1, %arg2, %arg3, %arg4, %alloc_128, %alloc_163, %alloc_154) : (index, index, index, index, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>, memref<64x64x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_164 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    memref.copy %alloc_133, %alloc_164 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S133(%arg1, %arg2, %arg3, %arg4, %alloc_164, %arg5, %arg6, %arg7, %alloc_31, %alloc_128) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, index, memref<384x64x1x1xf32>, memref<64x64x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_165 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S134(%arg1, %arg2, %arg3, %arg4, %alloc_165, %alloc_164) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_166 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S135(%arg1, %arg2, %arg3, %arg4, %alloc_166, %alloc_59, %alloc_165) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S136(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_166, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_167 = memref.alloc() {alignment = 64 : i64} : memref<64x384x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S137(%arg1, %arg2, %arg3, %arg4, %alloc_167) : (index, index, index, index, memref<64x384x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_168 = memref.subview %alloc_167[0, 0, 1, 1] [64, 384, 14, 14] [1, 1, 1, 1] : memref<64x384x16x16xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    memref.copy %alloc_132, %subview_168 : memref<64x384x14x14xf32> to memref<64x384x14x14xf32, strided<[98304, 256, 16, 1], offset: 17>>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 384 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S138(%arg1, %arg4, %arg2, %arg3, %alloc_133, %arg5, %arg6, %alloc_9, %alloc_167) : (index, index, index, index, memref<64x384x14x14xf32>, index, index, memref<384x3x3xf32>, memref<64x384x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_169 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S139(%arg1, %arg2, %arg3, %arg4, %alloc_169, %alloc_133) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_170 = memref.alloc() {alignment = 64 : i64} : memref<64x384x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S140(%arg1, %arg2, %arg3, %arg4, %alloc_170, %alloc_59, %alloc_169) : (index, index, index, index, memref<64x384x14x14xf32>, memref<f32>, memref<64x384x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S141(%arg1, %arg2, %arg3, %arg4, %alloc_132, %alloc_170, %alloc_58) : (index, index, index, index, memref<64x384x14x14xf32>, memref<64x384x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_171 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S142(%arg1, %arg2, %arg3, %arg4, %alloc_171) : (index, index, index, index, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_172 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    memref.copy %alloc_171, %alloc_172 : memref<64x96x14x14xf32> to memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 384 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S143(%arg1, %arg2, %arg3, %arg4, %alloc_172, %arg5, %arg6, %arg7, %alloc_30, %alloc_132) : (index, index, index, index, memref<64x96x14x14xf32>, index, index, index, memref<96x384x1x1xf32>, memref<64x384x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_173 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S144(%arg1, %arg2, %arg3, %arg4, %alloc_173, %alloc_172) : (index, index, index, index, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_174 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    %alloc_175 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S145(%arg1, %arg2, %arg3, %arg4, %alloc_175) : (index, index, index, index, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_176 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    memref.copy %alloc_175, %alloc_176 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 96 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S146(%arg1, %arg2, %arg3, %arg4, %alloc_176, %arg5, %arg6, %arg7, %alloc_29, %alloc_173) : (index, index, index, index, memref<64x576x14x14xf32>, index, index, index, memref<576x96x1x1xf32>, memref<64x96x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_177 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S147(%arg1, %arg2, %arg3, %arg4, %alloc_177, %alloc_176) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_178 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S148(%arg1, %arg2, %arg3, %arg4, %alloc_178, %alloc_59, %alloc_177) : (index, index, index, index, memref<64x576x14x14xf32>, memref<f32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S149(%arg1, %arg2, %arg3, %arg4, %alloc_174, %alloc_178, %alloc_58) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_179 = memref.alloc() {alignment = 64 : i64} : memref<64x576x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S150(%arg1, %arg2, %arg3, %arg4, %alloc_179) : (index, index, index, index, memref<64x576x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_180 = memref.subview %alloc_179[0, 0, 1, 1] [64, 576, 14, 14] [1, 1, 1, 1] : memref<64x576x16x16xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    memref.copy %alloc_174, %subview_180 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    %alloc_181 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    memref.copy %alloc_175, %alloc_181 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 576 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S151(%arg1, %arg4, %arg2, %arg3, %alloc_181, %arg5, %arg6, %alloc_10, %alloc_179) : (index, index, index, index, memref<64x576x14x14xf32>, index, index, memref<576x3x3xf32>, memref<64x576x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_182 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S152(%arg1, %arg2, %arg3, %arg4, %alloc_182, %alloc_181) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_183 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S153(%arg1, %arg2, %arg3, %arg4, %alloc_183, %alloc_59, %alloc_182) : (index, index, index, index, memref<64x576x14x14xf32>, memref<f32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S154(%arg1, %arg2, %arg3, %arg4, %alloc_174, %alloc_183, %alloc_58) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_184 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    memref.copy %alloc_171, %alloc_184 : memref<64x96x14x14xf32> to memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 576 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S155(%arg1, %arg2, %arg3, %arg4, %alloc_184, %arg5, %arg6, %arg7, %alloc_28, %alloc_174) : (index, index, index, index, memref<64x96x14x14xf32>, index, index, index, memref<96x576x1x1xf32>, memref<64x576x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_185 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S156(%arg1, %arg2, %arg3, %arg4, %alloc_185, %alloc_184) : (index, index, index, index, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_186 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S157(%arg1, %arg2, %arg3, %arg4, %alloc_186, %alloc_185, %alloc_173) : (index, index, index, index, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_187 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    memref.copy %alloc_175, %alloc_187 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 96 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S158(%arg1, %arg2, %arg3, %arg4, %alloc_187, %arg5, %arg6, %arg7, %alloc_27, %alloc_186) : (index, index, index, index, memref<64x576x14x14xf32>, index, index, index, memref<576x96x1x1xf32>, memref<64x96x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_188 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S159(%arg1, %arg2, %arg3, %arg4, %alloc_188, %alloc_187) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_189 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S160(%arg1, %arg2, %arg3, %arg4, %alloc_189, %alloc_59, %alloc_188) : (index, index, index, index, memref<64x576x14x14xf32>, memref<f32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S161(%arg1, %arg2, %arg3, %arg4, %alloc_174, %alloc_189, %alloc_58) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_190 = memref.alloc() {alignment = 64 : i64} : memref<64x576x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S162(%arg1, %arg2, %arg3, %arg4, %alloc_190) : (index, index, index, index, memref<64x576x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_191 = memref.subview %alloc_190[0, 0, 1, 1] [64, 576, 14, 14] [1, 1, 1, 1] : memref<64x576x16x16xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    memref.copy %alloc_174, %subview_191 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    %alloc_192 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    memref.copy %alloc_175, %alloc_192 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 576 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S163(%arg1, %arg4, %arg2, %arg3, %alloc_192, %arg5, %arg6, %alloc_11, %alloc_190) : (index, index, index, index, memref<64x576x14x14xf32>, index, index, memref<576x3x3xf32>, memref<64x576x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_193 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S164(%arg1, %arg2, %arg3, %arg4, %alloc_193, %alloc_192) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_194 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S165(%arg1, %arg2, %arg3, %arg4, %alloc_194, %alloc_59, %alloc_193) : (index, index, index, index, memref<64x576x14x14xf32>, memref<f32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S166(%arg1, %arg2, %arg3, %arg4, %alloc_174, %alloc_194, %alloc_58) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 576 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S167(%arg1, %arg2, %arg3, %arg4, %alloc_171, %arg5, %arg6, %arg7, %alloc_26, %alloc_174) : (index, index, index, index, memref<64x96x14x14xf32>, index, index, index, memref<96x576x1x1xf32>, memref<64x576x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_195 = memref.alloc() {alignment = 64 : i64} : memref<64x96x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S168(%arg1, %arg2, %arg3, %arg4, %alloc_195, %alloc_171) : (index, index, index, index, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 96 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S169(%arg1, %arg2, %arg3, %arg4, %alloc_171, %alloc_195, %alloc_186) : (index, index, index, index, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>, memref<64x96x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 96 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S170(%arg1, %arg2, %arg3, %arg4, %alloc_175, %arg5, %arg6, %arg7, %alloc_25, %alloc_171) : (index, index, index, index, memref<64x576x14x14xf32>, index, index, index, memref<576x96x1x1xf32>, memref<64x96x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_196 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S171(%arg1, %arg2, %arg3, %arg4, %alloc_196, %alloc_175) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_197 = memref.alloc() {alignment = 64 : i64} : memref<64x576x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S172(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_59, %alloc_196) : (index, index, index, index, memref<64x576x14x14xf32>, memref<f32>, memref<64x576x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S173(%arg1, %arg2, %arg3, %arg4, %alloc_174, %alloc_197, %alloc_58) : (index, index, index, index, memref<64x576x14x14xf32>, memref<64x576x14x14xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_198 = memref.alloc() {alignment = 64 : i64} : memref<64x576x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S174(%arg1, %arg2, %arg3, %arg4, %alloc_198) : (index, index, index, index, memref<64x576x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_199 = memref.subview %alloc_198[0, 0, 1, 1] [64, 576, 14, 14] [1, 1, 1, 1] : memref<64x576x16x16xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    memref.copy %alloc_174, %subview_199 : memref<64x576x14x14xf32> to memref<64x576x14x14xf32, strided<[147456, 256, 16, 1], offset: 17>>
    %alloc_200 = memref.alloc() {alignment = 64 : i64} : memref<64x576x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S175(%arg1, %arg2, %arg3, %arg4, %alloc_200) : (index, index, index, index, memref<64x576x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 576 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S176(%arg1, %arg4, %arg2, %arg3, %alloc_200, %arg5, %arg6, %alloc_12, %alloc_198) : (index, index, index, index, memref<64x576x7x7xf32>, index, index, memref<576x3x3xf32>, memref<64x576x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_201 = memref.alloc() {alignment = 64 : i64} : memref<64x576x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S177(%arg1, %arg2, %arg3, %arg4, %alloc_201, %alloc_200) : (index, index, index, index, memref<64x576x7x7xf32>, memref<64x576x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_202 = memref.alloc() {alignment = 64 : i64} : memref<64x576x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S178(%arg1, %arg2, %arg3, %arg4, %alloc_202, %alloc_59, %alloc_201) : (index, index, index, index, memref<64x576x7x7xf32>, memref<f32>, memref<64x576x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 576 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S179(%arg1, %arg2, %arg3, %arg4, %alloc_200, %alloc_202, %alloc_58) : (index, index, index, index, memref<64x576x7x7xf32>, memref<64x576x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_203 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S180(%arg1, %arg2, %arg3, %arg4, %alloc_203) : (index, index, index, index, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_204 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    memref.copy %alloc_203, %alloc_204 : memref<64x160x7x7xf32> to memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 576 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S181(%arg1, %arg2, %arg3, %arg4, %alloc_204, %arg5, %arg6, %arg7, %alloc_24, %alloc_200) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x576x1x1xf32>, memref<64x576x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_205 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S182(%arg1, %arg2, %arg3, %arg4, %alloc_205, %alloc_204) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_206 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    %alloc_207 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S183(%arg1, %arg2, %arg3, %arg4, %alloc_207) : (index, index, index, index, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_208 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_207, %alloc_208 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S184(%arg1, %arg2, %arg3, %arg4, %alloc_208, %arg5, %arg6, %arg7, %alloc_23, %alloc_205) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_209 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S185(%arg1, %arg2, %arg3, %arg4, %alloc_209, %alloc_208) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_210 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S186(%arg1, %arg2, %arg3, %arg4, %alloc_210, %alloc_59, %alloc_209) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S187(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_210, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_211 = memref.alloc() {alignment = 64 : i64} : memref<64x960x9x9xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 9 {
          affine.for %arg4 = 0 to 9 {
            func.call @S188(%arg1, %arg2, %arg3, %arg4, %alloc_211) : (index, index, index, index, memref<64x960x9x9xf32>) -> ()
          }
        }
      }
    }
    %subview_212 = memref.subview %alloc_211[0, 0, 1, 1] [64, 960, 7, 7] [1, 1, 1, 1] : memref<64x960x9x9xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    memref.copy %alloc_206, %subview_212 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    %alloc_213 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_207, %alloc_213 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 960 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S189(%arg1, %arg4, %arg2, %arg3, %alloc_213, %arg5, %arg6, %alloc_13, %alloc_211) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, memref<960x3x3xf32>, memref<64x960x9x9xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_214 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S190(%arg1, %arg2, %arg3, %arg4, %alloc_214, %alloc_213) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_215 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S191(%arg1, %arg2, %arg3, %arg4, %alloc_215, %alloc_59, %alloc_214) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S192(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_215, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_216 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    memref.copy %alloc_203, %alloc_216 : memref<64x160x7x7xf32> to memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S193(%arg1, %arg2, %arg3, %arg4, %alloc_216, %arg5, %arg6, %arg7, %alloc_22, %alloc_206) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x960x1x1xf32>, memref<64x960x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_217 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S194(%arg1, %arg2, %arg3, %arg4, %alloc_217, %alloc_216) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_218 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S195(%arg1, %arg2, %arg3, %arg4, %alloc_218, %alloc_217, %alloc_205) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_219 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_207, %alloc_219 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S196(%arg1, %arg2, %arg3, %arg4, %alloc_219, %arg5, %arg6, %arg7, %alloc_21, %alloc_218) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_220 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S197(%arg1, %arg2, %arg3, %arg4, %alloc_220, %alloc_219) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_221 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S198(%arg1, %arg2, %arg3, %arg4, %alloc_221, %alloc_59, %alloc_220) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S199(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_221, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_222 = memref.alloc() {alignment = 64 : i64} : memref<64x960x9x9xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 9 {
          affine.for %arg4 = 0 to 9 {
            func.call @S200(%arg1, %arg2, %arg3, %arg4, %alloc_222) : (index, index, index, index, memref<64x960x9x9xf32>) -> ()
          }
        }
      }
    }
    %subview_223 = memref.subview %alloc_222[0, 0, 1, 1] [64, 960, 7, 7] [1, 1, 1, 1] : memref<64x960x9x9xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    memref.copy %alloc_206, %subview_223 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    %alloc_224 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_207, %alloc_224 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 960 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S201(%arg1, %arg4, %arg2, %arg3, %alloc_224, %arg5, %arg6, %alloc_14, %alloc_222) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, memref<960x3x3xf32>, memref<64x960x9x9xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_225 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S202(%arg1, %arg2, %arg3, %arg4, %alloc_225, %alloc_224) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_226 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S203(%arg1, %arg2, %arg3, %arg4, %alloc_226, %alloc_59, %alloc_225) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S204(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_226, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S205(%arg1, %arg2, %arg3, %arg4, %alloc_203, %arg5, %arg6, %arg7, %alloc_20, %alloc_206) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x960x1x1xf32>, memref<64x960x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_227 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S206(%arg1, %arg2, %arg3, %arg4, %alloc_227, %alloc_203) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S207(%arg1, %arg2, %arg3, %arg4, %alloc_203, %alloc_227, %alloc_218) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_228 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_207, %alloc_228 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S208(%arg1, %arg2, %arg3, %arg4, %alloc_228, %arg5, %arg6, %arg7, %alloc_19, %alloc_203) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_229 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S209(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_228) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_230 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S210(%arg1, %arg2, %arg3, %arg4, %alloc_230, %alloc_59, %alloc_229) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S211(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_230, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_231 = memref.alloc() {alignment = 64 : i64} : memref<64x960x9x9xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 9 {
          affine.for %arg4 = 0 to 9 {
            func.call @S212(%arg1, %arg2, %arg3, %arg4, %alloc_231) : (index, index, index, index, memref<64x960x9x9xf32>) -> ()
          }
        }
      }
    }
    %subview_232 = memref.subview %alloc_231[0, 0, 1, 1] [64, 960, 7, 7] [1, 1, 1, 1] : memref<64x960x9x9xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    memref.copy %alloc_206, %subview_232 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32, strided<[77760, 81, 9, 1], offset: 10>>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 960 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S213(%arg1, %arg4, %arg2, %arg3, %alloc_207, %arg5, %arg6, %alloc_15, %alloc_231) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, memref<960x3x3xf32>, memref<64x960x9x9xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_233 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S214(%arg1, %arg2, %arg3, %arg4, %alloc_233, %alloc_207) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_234 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S215(%arg1, %arg2, %arg3, %arg4, %alloc_234, %alloc_59, %alloc_233) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S216(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_234, %alloc_58) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_235 = memref.alloc() {alignment = 64 : i64} : memref<64x320x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 320 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S217(%arg1, %arg2, %arg3, %arg4, %alloc_235) : (index, index, index, index, memref<64x320x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 320 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S218(%arg1, %arg2, %arg3, %arg4, %alloc_235, %arg5, %arg6, %arg7, %alloc_18, %alloc_206) : (index, index, index, index, memref<64x320x7x7xf32>, index, index, index, memref<320x960x1x1xf32>, memref<64x960x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_236 = memref.alloc() {alignment = 64 : i64} : memref<64x320x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 320 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S219(%arg1, %arg2, %arg3, %arg4, %alloc_236, %alloc_235) : (index, index, index, index, memref<64x320x7x7xf32>, memref<64x320x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_237 = memref.alloc() {alignment = 64 : i64} : memref<64x1280x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S220(%arg1, %arg2, %arg3, %arg4, %alloc_237) : (index, index, index, index, memref<64x1280x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 320 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S221(%arg1, %arg2, %arg3, %arg4, %alloc_237, %arg5, %arg6, %arg7, %alloc_17, %alloc_236) : (index, index, index, index, memref<64x1280x7x7xf32>, index, index, index, memref<1280x320x1x1xf32>, memref<64x320x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_238 = memref.alloc() {alignment = 64 : i64} : memref<64x1280x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S222(%arg1, %arg2, %arg3, %arg4, %alloc_238, %alloc_237) : (index, index, index, index, memref<64x1280x7x7xf32>, memref<64x1280x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_239 = memref.alloc() {alignment = 64 : i64} : memref<64x1280x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S223(%arg1, %arg2, %arg3, %arg4, %alloc_239, %alloc_59, %alloc_238) : (index, index, index, index, memref<64x1280x7x7xf32>, memref<f32>, memref<64x1280x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S224(%arg1, %arg2, %arg3, %arg4, %alloc_237, %alloc_239, %alloc_58) : (index, index, index, index, memref<64x1280x7x7xf32>, memref<64x1280x7x7xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    %alloc_240 = memref.alloc() {alignment = 64 : i64} : memref<64x1280x1x1xf32>
    %alloc_241 = memref.alloc() {alignment = 64 : i64} : memref<64x1280x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S225(%arg1, %arg2, %arg3, %arg4, %alloc_241) : (index, index, index, index, memref<64x1280x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 7 {
              affine.for %arg6 = 0 to 7 {
                func.call @S226(%arg1, %arg2, %arg3, %arg4, %alloc_241, %arg5, %arg6, %alloc_237) : (index, index, index, index, memref<64x1280x1x1xf32>, index, index, memref<64x1280x7x7xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S227(%arg1, %arg2, %arg3, %arg4, %alloc_240, %alloc_241) : (index, index, index, index, memref<64x1280x1x1xf32>, memref<64x1280x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_242 = memref.alloc() : memref<64x1280xf32>
    %collapse_shape = memref.collapse_shape %alloc_240 [[0], [1, 2, 3]] : memref<64x1280x1x1xf32> into memref<64x1280xf32>
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        %0 = memref.load %collapse_shape[%arg1, %arg2] : memref<64x1280xf32>
        memref.store %0, %alloc_242[%arg1, %arg2] : memref<64x1280xf32>
      }
    }
    %alloc_243 = memref.alloc() {alignment = 64 : i64} : memref<1280x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 1000 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S228(%arg2, %arg1, %alloc_243, %alloc_16) : (index, index, memref<1280x1000xf32>, memref<1000x1280xf32>) -> ()
      }
    }
    %alloc_244 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    %alloc_245 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S229(%arg1, %arg2, %alloc_245) : (index, index, memref<64x1000xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        affine.for %arg3 = 0 to 1280 {
          func.call @S230(%arg1, %arg2, %alloc_245, %arg3, %alloc_243, %alloc_242) : (index, index, memref<64x1000xf32>, index, memref<1280x1000xf32>, memref<64x1280xf32>) -> ()
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S231(%arg1, %arg2, %alloc_244, %alloc_245) : (index, index, memref<64x1000xf32>, memref<64x1000xf32>) -> ()
      }
    }
    memref.dealloc %alloc_53 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_54 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_55 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_56 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_57 : memref<f64>
    memref.dealloc %alloc_58 : memref<f32>
    memref.dealloc %alloc_59 : memref<f32>
    memref.dealloc %alloc_60 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_63 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_64 : memref<64x32x112x112xf32>
    memref.dealloc %alloc_65 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_66 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_67 : memref<64x96x112x112xf32>
    memref.dealloc %alloc_68 : memref<64x96x112x112xf32>
    memref.dealloc %alloc_69 : memref<64x96x112x112xf32>
    memref.dealloc %alloc_72 : memref<64x96x56x56xf32>
    memref.dealloc %alloc_73 : memref<64x96x56x56xf32>
    memref.dealloc %alloc_74 : memref<64x96x56x56xf32>
    memref.dealloc %alloc_75 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_76 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_77 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_78 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_79 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_80 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_81 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_82 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_85 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_86 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_87 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_88 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_89 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_90 : memref<64x144x56x56xf32>
    memref.dealloc %alloc_93 : memref<64x144x28x28xf32>
    memref.dealloc %alloc_94 : memref<64x144x28x28xf32>
    memref.dealloc %alloc_95 : memref<64x144x28x28xf32>
    memref.dealloc %alloc_96 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_97 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_98 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_99 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_100 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_101 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_102 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_103 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_106 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_107 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_108 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_109 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_110 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_111 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_112 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_113 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_114 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_117 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_118 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_119 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_120 : memref<64x32x28x28xf32>
    memref.dealloc %alloc_121 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_122 : memref<64x192x28x28xf32>
    memref.dealloc %alloc_125 : memref<64x192x14x14xf32>
    memref.dealloc %alloc_126 : memref<64x192x14x14xf32>
    memref.dealloc %alloc_127 : memref<64x192x14x14xf32>
    memref.dealloc %alloc_128 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_129 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_130 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_131 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_132 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_133 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_134 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_135 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_136 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_139 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_140 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_141 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_142 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_143 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_144 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_145 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_146 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_149 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_150 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_151 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_152 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_153 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_154 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_155 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_156 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_157 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_160 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_161 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_162 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_163 : memref<64x64x14x14xf32>
    memref.dealloc %alloc_164 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_165 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_166 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_169 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_170 : memref<64x384x14x14xf32>
    memref.dealloc %alloc_171 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_172 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_173 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_174 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_175 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_176 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_177 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_178 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_181 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_182 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_183 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_184 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_185 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_186 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_187 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_188 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_189 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_192 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_193 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_194 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_195 : memref<64x96x14x14xf32>
    memref.dealloc %alloc_196 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_197 : memref<64x576x14x14xf32>
    memref.dealloc %alloc_200 : memref<64x576x7x7xf32>
    memref.dealloc %alloc_201 : memref<64x576x7x7xf32>
    memref.dealloc %alloc_202 : memref<64x576x7x7xf32>
    memref.dealloc %alloc_203 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_204 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_205 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_206 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_207 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_208 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_209 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_210 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_213 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_214 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_215 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_216 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_217 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_218 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_219 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_220 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_221 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_224 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_225 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_226 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_227 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_228 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_229 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_230 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_233 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_234 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_235 : memref<64x320x7x7xf32>
    memref.dealloc %alloc_236 : memref<64x320x7x7xf32>
    memref.dealloc %alloc_237 : memref<64x1280x7x7xf32>
    memref.dealloc %alloc_238 : memref<64x1280x7x7xf32>
    memref.dealloc %alloc_239 : memref<64x1280x7x7xf32>
    memref.dealloc %alloc_240 : memref<64x1280x1x1xf32>
    memref.dealloc %alloc_241 : memref<64x1280x1x1xf32>
    memref.dealloc %alloc_243 : memref<1280x1000xf32>
    memref.dealloc %alloc_244 : memref<64x1000xf32>
    memref.dealloc %alloc_245 : memref<64x1000xf32>
    memref.dealloc %alloc_52 : memref<64x3x226x226xf32>
    memref.dealloc %alloc_61 : memref<64x32x114x114xf32>
    memref.dealloc %alloc_70 : memref<64x96x114x114xf32>
    memref.dealloc %alloc_83 : memref<64x144x58x58xf32>
    memref.dealloc %alloc_91 : memref<64x144x58x58xf32>
    memref.dealloc %alloc_104 : memref<64x192x30x30xf32>
    memref.dealloc %alloc_115 : memref<64x192x30x30xf32>
    memref.dealloc %alloc_123 : memref<64x192x30x30xf32>
    memref.dealloc %alloc_137 : memref<64x384x16x16xf32>
    memref.dealloc %alloc_147 : memref<64x384x16x16xf32>
    memref.dealloc %alloc_158 : memref<64x384x16x16xf32>
    memref.dealloc %alloc_167 : memref<64x384x16x16xf32>
    memref.dealloc %alloc_179 : memref<64x576x16x16xf32>
    memref.dealloc %alloc_190 : memref<64x576x16x16xf32>
    memref.dealloc %alloc_198 : memref<64x576x16x16xf32>
    memref.dealloc %alloc_211 : memref<64x960x9x9xf32>
    memref.dealloc %alloc_222 : memref<64x960x9x9xf32>
    memref.dealloc %alloc_231 : memref<64x960x9x9xf32>
    return %alloc_244 : memref<64x1000xf32>
  }
  func.func @main() -> i32 {
    %c0_i32 = arith.constant 0 : i32
    %cst = arith.constant 0.000000e+00 : f32
    %alloc = memref.alloc() : memref<64x3x224x224xf32>
    affine.for %arg0 = 0 to 64 {
      affine.for %arg1 = 0 to 3 {
        affine.for %arg2 = 0 to 224 {
          affine.for %arg3 = 0 to 224 {
            affine.store %cst, %alloc[%arg0, %arg1, %arg2, %arg3] : memref<64x3x224x224xf32>
          }
        }
      }
    }
    call @start_energy_time() : () -> ()
    %0 = call @forward(%alloc) : (memref<64x3x224x224xf32>) -> memref<64x1000xf32>
    call @stop_energy_time() : () -> ()
    call @print_energy_time() : () -> ()
    return %c0_i32 : i32
  }
}

