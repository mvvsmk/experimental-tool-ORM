module attributes {torch.debug_module_name = "MobileNetV3"} {
  func.func private @start_energy_time()
  func.func private @stop_energy_time()
  func.func private @print_energy_time()
  func.func private @set_frequency_caps(i64, i64)
  func.func private @S0(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x3x226x226xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x3x226x226xf32>
    return
  }
  func.func private @S1(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S2(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<16x3x3x3xf32>, %arg9: memref<64x3x226x226xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) * 2 + symbol(%arg6), symbol(%arg3) * 2 + symbol(%arg7)] : memref<64x3x226x226xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<16x3x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S3(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S4(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S5(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S6(%arg0: memref<i64>) attributes {scop.stmt} {
    %c6_i64 = arith.constant 6 : i64
    affine.store %c6_i64, %arg0[] : memref<i64>
    return
  }
  func.func private @S7(%arg0: memref<f32>, %arg1: memref<i64>) attributes {scop.stmt} {
    %0 = affine.load %arg1[] : memref<i64>
    %1 = arith.sitofp %0 : i64 to f32
    affine.store %1, %arg0[] : memref<f32>
    return
  }
  func.func private @S8(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<f32>, %arg6: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S9(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S10(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>, %arg6: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S11(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x114x114xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x114x114xf32>
    return
  }
  func.func private @S12(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: index, %arg6: index, %arg7: memref<16x3x3xf32>, %arg8: memref<64x16x114x114xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x16x114x114xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<16x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S13(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S14(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S15(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<16x16x1x1xf32>, %arg9: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x16x112x112xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<16x16x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S16(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S17(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x16x112x112xf32>, %arg5: memref<64x16x112x112xf32>, %arg6: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x16x112x112xf32>
    return
  }
  func.func private @S18(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    return
  }
  func.func private @S19(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x112x112xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x16x1x1xf32>, %arg9: memref<64x16x112x112xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x16x112x112xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x16x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    return
  }
  func.func private @S20(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x112x112xf32>, %arg5: memref<64x64x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    return
  }
  func.func private @S21(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x112x112xf32>, %arg5: memref<64x64x112x112xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x112x112xf32>
    return
  }
  func.func private @S22(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x114x114xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x114x114xf32>
    return
  }
  func.func private @S23(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    return
  }
  func.func private @S24(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x56x56xf32>, %arg5: index, %arg6: index, %arg7: memref<64x3x3xf32>, %arg8: memref<64x64x114x114xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x64x114x114xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<64x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    return
  }
  func.func private @S25(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x56x56xf32>, %arg5: memref<64x64x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    return
  }
  func.func private @S26(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x56x56xf32>, %arg5: memref<64x64x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x56x56xf32>
    return
  }
  func.func private @S27(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S28(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<24x64x1x1xf32>, %arg9: memref<64x64x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<24x64x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S29(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S30(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S31(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<72x24x1x1xf32>, %arg9: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x24x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<72x24x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S32(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S33(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S34(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x58x58xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x58x58xf32>
    return
  }
  func.func private @S35(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: index, %arg6: index, %arg7: memref<72x3x3xf32>, %arg8: memref<64x72x58x58xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x72x58x58xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<72x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S36(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S37(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S38(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<24x72x1x1xf32>, %arg9: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x72x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<24x72x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S39(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S40(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x56x56xf32>, %arg5: memref<64x24x56x56xf32>, %arg6: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x56x56xf32>
    return
  }
  func.func private @S41(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<72x24x1x1xf32>, %arg9: memref<64x24x56x56xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x24x56x56xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<72x24x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S42(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S43(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x56x56xf32>, %arg5: memref<64x72x56x56xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x56x56xf32>
    return
  }
  func.func private @S44(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x60x60xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x60x60xf32>
    return
  }
  func.func private @S45(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    return
  }
  func.func private @S46(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<72x5x5xf32>, %arg8: memref<64x72x60x60xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x72x60x60xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<72x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    return
  }
  func.func private @S47(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x28x28xf32>, %arg5: memref<64x72x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    return
  }
  func.func private @S48(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x28x28xf32>, %arg5: memref<64x72x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    return
  }
  func.func private @S49(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S50(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x72x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x72x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S51(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 7.840000e+02 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S52(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x1x1xf32>
    return
  }
  func.func private @S53(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<24x72x1x1xf32>, %arg9: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x72x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<24x72x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x1x1xf32>
    return
  }
  func.func private @S54(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x24x1x1xf32>, %arg5: memref<64x24x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x24x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x24x1x1xf32>
    return
  }
  func.func private @S55(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S56(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<72x24x1x1xf32>, %arg9: memref<64x24x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x24x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<72x24x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S57(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x72x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S58(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x72x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S59(%arg0: memref<i64>) attributes {scop.stmt} {
    %c1_i64 = arith.constant 1 : i64
    affine.store %c1_i64, %arg0[] : memref<i64>
    return
  }
  func.func private @S60(%arg0: memref<f32>, %arg1: memref<i64>) attributes {scop.stmt} {
    %0 = affine.load %arg1[] : memref<i64>
    %1 = arith.sitofp %0 : i64 to f32
    affine.store %1, %arg0[] : memref<f32>
    return
  }
  func.func private @S61(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: memref<64x72x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x72x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S62(%arg0: memref<i64>) attributes {scop.stmt} {
    %c0_i64 = arith.constant 0 : i64
    affine.store %c0_i64, %arg0[] : memref<i64>
    return
  }
  func.func private @S63(%arg0: memref<f32>, %arg1: memref<i64>) attributes {scop.stmt} {
    %0 = affine.load %arg1[] : memref<i64>
    %1 = arith.sitofp %0 : i64 to f32
    affine.store %1, %arg0[] : memref<f32>
    return
  }
  func.func private @S64(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x1x1xf32>, %arg5: memref<64x72x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x72x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x1x1xf32>
    return
  }
  func.func private @S65(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x72x28x28xf32>, %arg5: memref<64x72x28x28xf32>, %arg6: memref<64x72x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x72x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x72x28x28xf32>
    return
  }
  func.func private @S66(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S67(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<40x72x1x1xf32>, %arg9: memref<64x72x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x72x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<40x72x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S68(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S69(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S70(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<120x40x1x1xf32>, %arg9: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x40x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<120x40x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S71(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S72(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S73(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x32x32xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x32x32xf32>
    return
  }
  func.func private @S74(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<120x5x5xf32>, %arg8: memref<64x120x32x32xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x120x32x32xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<120x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S75(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S76(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S77(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S78(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x120x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S79(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 7.840000e+02 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S80(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    return
  }
  func.func private @S81(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x120x1x1xf32>, %arg9: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x120x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x120x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    return
  }
  func.func private @S82(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x1x1xf32>, %arg5: memref<64x32x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x32x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    return
  }
  func.func private @S83(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S84(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<120x32x1x1xf32>, %arg9: memref<64x32x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<120x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S85(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S86(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S87(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S88(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S89(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>, %arg6: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S90(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<40x120x1x1xf32>, %arg9: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x120x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<40x120x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S91(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S92(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: memref<64x40x28x28xf32>, %arg6: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S93(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<120x40x1x1xf32>, %arg9: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x40x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<120x40x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S94(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S95(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S96(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x32x32xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x32x32xf32>
    return
  }
  func.func private @S97(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: index, %arg6: index, %arg7: memref<120x5x5xf32>, %arg8: memref<64x120x32x32xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x120x32x32xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<120x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S98(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S99(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S100(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x120x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S101(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 7.840000e+02 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S102(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<32x120x1x1xf32>, %arg9: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x120x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<32x120x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    return
  }
  func.func private @S103(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x32x1x1xf32>, %arg5: memref<64x32x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x32x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x32x1x1xf32>
    return
  }
  func.func private @S104(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<120x32x1x1xf32>, %arg9: memref<64x32x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x32x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<120x32x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S105(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S106(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S107(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S108(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S109(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x28x28xf32>, %arg5: memref<64x120x28x28xf32>, %arg6: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x28x28xf32>
    return
  }
  func.func private @S110(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<40x120x1x1xf32>, %arg9: memref<64x120x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x120x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<40x120x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S111(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S112(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x40x28x28xf32>, %arg5: memref<64x40x28x28xf32>, %arg6: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x40x28x28xf32>
    return
  }
  func.func private @S113(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S114(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<240x40x1x1xf32>, %arg9: memref<64x40x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x40x28x28xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<240x40x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S115(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S116(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S117(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S118(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<f32>, %arg6: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S119(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S120(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x28x28xf32>, %arg5: memref<64x240x28x28xf32>, %arg6: memref<64x240x28x28xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x28x28xf32>
    return
  }
  func.func private @S121(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x30x30xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x30x30xf32>
    return
  }
  func.func private @S122(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S123(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<240x3x3xf32>, %arg8: memref<64x240x30x30xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x240x30x30xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<240x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S124(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S125(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S126(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S127(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S128(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S129(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x14x14xf32>, %arg5: memref<64x240x14x14xf32>, %arg6: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x14x14xf32>
    return
  }
  func.func private @S130(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S131(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<80x240x1x1xf32>, %arg9: memref<64x240x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x240x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<80x240x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S132(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S133(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S134(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<200x80x1x1xf32>, %arg9: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x80x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<200x80x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S135(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S136(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S137(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S138(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S139(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S140(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>, %arg6: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S141(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x16x16xf32>
    return
  }
  func.func private @S142(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<200x3x3xf32>, %arg8: memref<64x200x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x200x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<200x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S143(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S144(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S145(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S146(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S147(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S148(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x200x14x14xf32>, %arg5: memref<64x200x14x14xf32>, %arg6: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x200x14x14xf32>
    return
  }
  func.func private @S149(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<80x200x1x1xf32>, %arg9: memref<64x200x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x200x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<80x200x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S150(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S151(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>, %arg6: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S152(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S153(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<184x80x1x1xf32>, %arg9: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x80x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<184x80x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S154(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S155(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S156(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S157(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S158(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S159(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S160(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x16x16xf32>
    return
  }
  func.func private @S161(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<184x3x3xf32>, %arg8: memref<64x184x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x184x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<184x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S162(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S163(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S164(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S165(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S166(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S167(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S168(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<80x184x1x1xf32>, %arg9: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x184x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<80x184x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S169(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S170(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>, %arg6: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S171(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<184x80x1x1xf32>, %arg9: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x80x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<184x80x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S172(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S173(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S174(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S175(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S176(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S177(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S178(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x16x16xf32>
    return
  }
  func.func private @S179(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<184x3x3xf32>, %arg8: memref<64x184x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x184x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<184x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S180(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S181(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S182(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S183(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S184(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S185(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x184x14x14xf32>, %arg5: memref<64x184x14x14xf32>, %arg6: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x184x14x14xf32>
    return
  }
  func.func private @S186(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<80x184x1x1xf32>, %arg9: memref<64x184x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x184x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<80x184x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S187(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S188(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x80x14x14xf32>, %arg5: memref<64x80x14x14xf32>, %arg6: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x80x14x14xf32>
    return
  }
  func.func private @S189(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S190(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<480x80x1x1xf32>, %arg9: memref<64x80x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x80x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<480x80x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S191(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S192(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S193(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S194(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S195(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S196(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>, %arg6: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S197(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x16x16xf32>
    return
  }
  func.func private @S198(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<480x3x3xf32>, %arg8: memref<64x480x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x480x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<480x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S199(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S200(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S201(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S202(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S203(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S204(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>, %arg6: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S205(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S206(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x480x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S207(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 1.960000e+02 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S208(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<120x480x1x1xf32>, %arg9: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x480x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<120x480x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S209(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x120x1x1xf32>, %arg5: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x120x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x120x1x1xf32>
    return
  }
  func.func private @S210(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S211(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<480x120x1x1xf32>, %arg9: memref<64x120x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x120x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<480x120x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S212(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x480x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S213(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x480x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S214(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: memref<64x480x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x480x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S215(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x1x1xf32>, %arg5: memref<64x480x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x480x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x1x1xf32>
    return
  }
  func.func private @S216(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x480x14x14xf32>, %arg5: memref<64x480x14x14xf32>, %arg6: memref<64x480x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x480x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x480x14x14xf32>
    return
  }
  func.func private @S217(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S218(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<112x480x1x1xf32>, %arg9: memref<64x480x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x480x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<112x480x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S219(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>, %arg5: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S220(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S221(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<672x112x1x1xf32>, %arg9: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x112x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<672x112x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S222(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S223(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S224(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S225(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S226(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S227(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S228(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x16x16xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x16x16xf32>
    return
  }
  func.func private @S229(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: index, %arg6: index, %arg7: memref<672x3x3xf32>, %arg8: memref<64x672x16x16xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x672x16x16xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<672x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S230(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S231(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S232(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S233(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S234(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S235(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S236(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S237(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x672x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S238(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 1.960000e+02 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S239(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x168x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    return
  }
  func.func private @S240(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x168x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<168x672x1x1xf32>, %arg9: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x672x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<168x672x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    return
  }
  func.func private @S241(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x168x1x1xf32>, %arg5: memref<64x168x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x168x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    return
  }
  func.func private @S242(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S243(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<672x168x1x1xf32>, %arg9: memref<64x168x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x168x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<672x168x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S244(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S245(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S246(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S247(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S248(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>, %arg6: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S249(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<112x672x1x1xf32>, %arg9: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x672x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<112x672x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S250(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>, %arg5: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S251(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x112x14x14xf32>, %arg5: memref<64x112x14x14xf32>, %arg6: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x112x14x14xf32>
    return
  }
  func.func private @S252(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<672x112x1x1xf32>, %arg9: memref<64x112x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x112x14x14xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<672x112x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S253(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S254(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S255(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S256(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<f32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S257(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S258(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x14x14xf32>, %arg5: memref<64x672x14x14xf32>, %arg6: memref<64x672x14x14xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x14x14xf32>
    return
  }
  func.func private @S259(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x18x18xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x18x18xf32>
    return
  }
  func.func private @S260(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S261(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<672x5x5xf32>, %arg8: memref<64x672x18x18xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x672x18x18xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<672x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S262(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S263(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S264(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S265(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S266(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S267(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>, %arg6: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S268(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x672x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S269(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 4.900000e+01 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S270(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x168x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<168x672x1x1xf32>, %arg9: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x672x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<168x672x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    return
  }
  func.func private @S271(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x168x1x1xf32>, %arg5: memref<64x168x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x168x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x168x1x1xf32>
    return
  }
  func.func private @S272(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<672x168x1x1xf32>, %arg9: memref<64x168x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x168x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<672x168x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S273(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S274(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S275(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S276(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x1x1xf32>, %arg5: memref<64x672x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x1x1xf32>
    return
  }
  func.func private @S277(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x672x7x7xf32>, %arg5: memref<64x672x7x7xf32>, %arg6: memref<64x672x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x672x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x672x7x7xf32>
    return
  }
  func.func private @S278(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S279(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x672x1x1xf32>, %arg9: memref<64x672x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x672x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x672x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S280(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S281(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S282(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S283(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S284(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S285(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S286(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S287(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S288(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S289(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x11x11xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x11x11xf32>
    return
  }
  func.func private @S290(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<960x5x5xf32>, %arg8: memref<64x960x11x11xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x11x11xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<960x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S291(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S292(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S293(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S294(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S295(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S296(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S297(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S298(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S299(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 4.900000e+01 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S300(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    return
  }
  func.func private @S301(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<240x960x1x1xf32>, %arg9: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<240x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    return
  }
  func.func private @S302(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x1x1xf32>, %arg5: memref<64x240x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x240x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    return
  }
  func.func private @S303(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S304(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x240x1x1xf32>, %arg9: memref<64x240x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x240x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x240x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S305(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S306(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S307(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S308(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S309(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S310(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x960x1x1xf32>, %arg9: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S311(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S312(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>, %arg6: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S313(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S314(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S315(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S316(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S317(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S318(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S319(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S320(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x11x11xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x11x11xf32>
    return
  }
  func.func private @S321(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: memref<960x5x5xf32>, %arg8: memref<64x960x11x11xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg8[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x11x11xf32>
    %2 = affine.load %arg7[symbol(%arg1), symbol(%arg5), symbol(%arg6)] : memref<960x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S322(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S323(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S324(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S325(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S326(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S327(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S328(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S329(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 4.900000e+01 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S330(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<240x960x1x1xf32>, %arg9: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<240x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    return
  }
  func.func private @S331(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x240x1x1xf32>, %arg5: memref<64x240x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x240x1x1xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x240x1x1xf32>
    return
  }
  func.func private @S332(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x240x1x1xf32>, %arg9: memref<64x240x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x240x1x1xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x240x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S333(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S334(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S335(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S336(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>, %arg6: memref<f32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[] : memref<f32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %2 = arith.cmpf ugt, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S337(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), 0, 0] : memref<64x960x1x1xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S338(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<160x960x1x1xf32>, %arg9: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x960x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<160x960x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S339(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S340(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x160x7x7xf32>, %arg5: memref<64x160x7x7xf32>, %arg6: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x160x7x7xf32>
    return
  }
  func.func private @S341(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<960x160x1x1xf32>, %arg9: memref<64x160x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x160x7x7xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<960x160x1x1xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S342(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %cst_0 = arith.constant 1.000000e+00 : f32
    %cst_1 = arith.constant 1.000000e-03 : f64
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.truncf %cst_1 : f64 to f32
    %2 = arith.addf %1, %cst_0 : f32
    %3 = math.rsqrt %2 : f32
    %4 = arith.mulf %0, %3 : f32
    %5 = arith.addf %4, %cst : f32
    affine.store %5, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S343(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S344(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S345(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<f32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S346(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S347(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x7x7xf32>, %arg5: memref<64x960x7x7xf32>, %arg6: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg6[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x7x7xf32>
    return
  }
  func.func private @S348(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: index, %arg6: index, %arg7: memref<64x960x7x7xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x960x7x7xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S349(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x960x1x1xf32>, %arg5: memref<64x960x1x1xf32>) attributes {scop.stmt} {
    %cst = arith.constant 4.900000e+01 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x960x1x1xf32>
    return
  }
  func.func private @S350(%arg0: index, %arg1: index, %arg2: memref<960x1280xf32>, %arg3: memref<1280x960xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<1280x960xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<960x1280xf32>
    return
  }
  func.func private @S351(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S352(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: index, %arg4: memref<960x1280xf32>, %arg5: memref<64x960xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x960xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<960x1280xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S353(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<64x1280xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S354(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<64x1280xf32>) attributes {scop.stmt} {
    %cst = arith.constant 3.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S355(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<64x1280xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S356(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<f32>, %arg4: memref<64x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = affine.load %arg3[] : memref<f32>
    %2 = arith.cmpf ult, %0, %1 : f32
    %3 = arith.select %2, %0, %1 : f32
    affine.store %3, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S357(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<64x1280xf32>) attributes {scop.stmt} {
    %cst = arith.constant 6.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = arith.divf %0, %cst : f32
    affine.store %1, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S358(%arg0: index, %arg1: index, %arg2: memref<64x1280xf32>, %arg3: memref<64x1280xf32>, %arg4: memref<64x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %1 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    %2 = arith.mulf %0, %1 : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1280xf32>
    return
  }
  func.func private @S359(%arg0: index, %arg1: index, %arg2: memref<1280x1000xf32>, %arg3: memref<1000x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<1000x1280xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<1280x1000xf32>
    return
  }
  func.func private @S360(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S361(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: index, %arg4: memref<1280x1000xf32>, %arg5: memref<64x1280xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x1280xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<1280x1000xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S362(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: memref<64x1000xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = arith.addf %0, %cst : f32
    affine.store %1, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func @forward(%arg0: memref<64x3x224x224xf32>) -> memref<64x1000xf32> attributes {L1 = 7466422592 : i64, L2 = 310697443 : i64, L3 = 115014373 : i64, bytes = 3.71481431E+12 : f32, compulsory = 0x4CA11161 : f32, flops = 28024024064 : i64} {
    %c1192087_i64 = arith.constant 1192087 : i64
    %c1149013_i64 = arith.constant 1149013 : i64
    %c899999_i64 = arith.constant 899999 : i64
    %c799999_i64 = arith.constant 799999 : i64
    %c800000_i64 = arith.constant 800000 : i64
    %c4600000_i64 = arith.constant 4600000 : i64
    %c5000000_i64 = arith.constant 5000000 : i64
    %alloc = memref.alloc() {alignment = 64 : i64} : memref<16x3x3xf32>
    %alloc_0 = memref.alloc() {alignment = 64 : i64} : memref<64x3x3xf32>
    %alloc_1 = memref.alloc() {alignment = 64 : i64} : memref<72x3x3xf32>
    %alloc_2 = memref.alloc() {alignment = 64 : i64} : memref<72x5x5xf32>
    %alloc_3 = memref.alloc() {alignment = 64 : i64} : memref<120x5x5xf32>
    %alloc_4 = memref.alloc() {alignment = 64 : i64} : memref<120x5x5xf32>
    %alloc_5 = memref.alloc() {alignment = 64 : i64} : memref<240x3x3xf32>
    %alloc_6 = memref.alloc() {alignment = 64 : i64} : memref<200x3x3xf32>
    %alloc_7 = memref.alloc() {alignment = 64 : i64} : memref<184x3x3xf32>
    %alloc_8 = memref.alloc() {alignment = 64 : i64} : memref<184x3x3xf32>
    %alloc_9 = memref.alloc() {alignment = 64 : i64} : memref<480x3x3xf32>
    %alloc_10 = memref.alloc() {alignment = 64 : i64} : memref<672x3x3xf32>
    %alloc_11 = memref.alloc() {alignment = 64 : i64} : memref<672x5x5xf32>
    %alloc_12 = memref.alloc() {alignment = 64 : i64} : memref<960x5x5xf32>
    %alloc_13 = memref.alloc() {alignment = 64 : i64} : memref<960x5x5xf32>
    %alloc_14 = memref.alloc() {alignment = 64 : i64} : memref<1000x1280xf32>
    %alloc_15 = memref.alloc() {alignment = 64 : i64} : memref<1280x960xf32>
    %alloc_16 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_17 = memref.alloc() {alignment = 64 : i64} : memref<160x960x1x1xf32>
    %alloc_18 = memref.alloc() {alignment = 64 : i64} : memref<960x240x1x1xf32>
    %alloc_19 = memref.alloc() {alignment = 64 : i64} : memref<240x960x1x1xf32>
    %alloc_20 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_21 = memref.alloc() {alignment = 64 : i64} : memref<160x960x1x1xf32>
    %alloc_22 = memref.alloc() {alignment = 64 : i64} : memref<960x240x1x1xf32>
    %alloc_23 = memref.alloc() {alignment = 64 : i64} : memref<240x960x1x1xf32>
    %alloc_24 = memref.alloc() {alignment = 64 : i64} : memref<960x160x1x1xf32>
    %alloc_25 = memref.alloc() {alignment = 64 : i64} : memref<160x672x1x1xf32>
    %alloc_26 = memref.alloc() {alignment = 64 : i64} : memref<672x168x1x1xf32>
    %alloc_27 = memref.alloc() {alignment = 64 : i64} : memref<168x672x1x1xf32>
    %alloc_28 = memref.alloc() {alignment = 64 : i64} : memref<672x112x1x1xf32>
    %alloc_29 = memref.alloc() {alignment = 64 : i64} : memref<112x672x1x1xf32>
    %alloc_30 = memref.alloc() {alignment = 64 : i64} : memref<672x168x1x1xf32>
    %alloc_31 = memref.alloc() {alignment = 64 : i64} : memref<168x672x1x1xf32>
    %alloc_32 = memref.alloc() {alignment = 64 : i64} : memref<672x112x1x1xf32>
    %alloc_33 = memref.alloc() {alignment = 64 : i64} : memref<112x480x1x1xf32>
    %alloc_34 = memref.alloc() {alignment = 64 : i64} : memref<480x120x1x1xf32>
    %alloc_35 = memref.alloc() {alignment = 64 : i64} : memref<120x480x1x1xf32>
    %alloc_36 = memref.alloc() {alignment = 64 : i64} : memref<480x80x1x1xf32>
    %alloc_37 = memref.alloc() {alignment = 64 : i64} : memref<80x184x1x1xf32>
    %alloc_38 = memref.alloc() {alignment = 64 : i64} : memref<184x80x1x1xf32>
    %alloc_39 = memref.alloc() {alignment = 64 : i64} : memref<80x184x1x1xf32>
    %alloc_40 = memref.alloc() {alignment = 64 : i64} : memref<184x80x1x1xf32>
    %alloc_41 = memref.alloc() {alignment = 64 : i64} : memref<80x200x1x1xf32>
    %alloc_42 = memref.alloc() {alignment = 64 : i64} : memref<200x80x1x1xf32>
    %alloc_43 = memref.alloc() {alignment = 64 : i64} : memref<80x240x1x1xf32>
    %alloc_44 = memref.alloc() {alignment = 64 : i64} : memref<240x40x1x1xf32>
    %alloc_45 = memref.alloc() {alignment = 64 : i64} : memref<40x120x1x1xf32>
    %alloc_46 = memref.alloc() {alignment = 64 : i64} : memref<120x32x1x1xf32>
    %alloc_47 = memref.alloc() {alignment = 64 : i64} : memref<32x120x1x1xf32>
    %alloc_48 = memref.alloc() {alignment = 64 : i64} : memref<120x40x1x1xf32>
    %alloc_49 = memref.alloc() {alignment = 64 : i64} : memref<40x120x1x1xf32>
    %alloc_50 = memref.alloc() {alignment = 64 : i64} : memref<120x32x1x1xf32>
    %alloc_51 = memref.alloc() {alignment = 64 : i64} : memref<32x120x1x1xf32>
    %alloc_52 = memref.alloc() {alignment = 64 : i64} : memref<120x40x1x1xf32>
    %alloc_53 = memref.alloc() {alignment = 64 : i64} : memref<40x72x1x1xf32>
    %alloc_54 = memref.alloc() {alignment = 64 : i64} : memref<72x24x1x1xf32>
    %alloc_55 = memref.alloc() {alignment = 64 : i64} : memref<24x72x1x1xf32>
    %alloc_56 = memref.alloc() {alignment = 64 : i64} : memref<72x24x1x1xf32>
    %alloc_57 = memref.alloc() {alignment = 64 : i64} : memref<24x72x1x1xf32>
    %alloc_58 = memref.alloc() {alignment = 64 : i64} : memref<72x24x1x1xf32>
    %alloc_59 = memref.alloc() {alignment = 64 : i64} : memref<24x64x1x1xf32>
    %alloc_60 = memref.alloc() {alignment = 64 : i64} : memref<64x16x1x1xf32>
    %alloc_61 = memref.alloc() {alignment = 64 : i64} : memref<16x16x1x1xf32>
    %alloc_62 = memref.alloc() {alignment = 64 : i64} : memref<16x3x3x3xf32>
    %alloc_63 = memref.alloc() {alignment = 64 : i64} : memref<64x3x226x226xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 3 {
        affine.for %arg3 = 0 to 226 {
          affine.for %arg4 = 0 to 226 {
            func.call @S0(%arg1, %arg2, %arg3, %arg4, %alloc_63) : (index, index, index, index, memref<64x3x226x226xf32>) -> ()
          }
        }
      }
    }
    %subview = memref.subview %alloc_63[0, 0, 1, 1] [64, 3, 224, 224] [1, 1, 1, 1] : memref<64x3x226x226xf32> to memref<64x3x224x224xf32, strided<[153228, 51076, 226, 1], offset: 227>>
    memref.copy %arg0, %subview : memref<64x3x224x224xf32> to memref<64x3x224x224xf32, strided<[153228, 51076, 226, 1], offset: 227>>
    %alloc_64 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    %alloc_65 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S1(%arg1, %arg2, %arg3, %arg4, %alloc_65) : (index, index, index, index, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_66 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    memref.copy %alloc_65, %alloc_66 : memref<64x16x112x112xf32> to memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                affine.for %arg7 = 0 to 3 {
                  func.call @S2(%arg1, %arg2, %arg3, %arg4, %alloc_66, %arg5, %arg6, %arg7, %alloc_62, %alloc_63) : (index, index, index, index, memref<64x16x112x112xf32>, index, index, index, memref<16x3x3x3xf32>, memref<64x3x226x226xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_67 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S3(%arg1, %arg2, %arg3, %arg4, %alloc_67, %alloc_66) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_68 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S4(%arg1, %arg2, %arg3, %arg4, %alloc_68, %alloc_67) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S5(%arg1, %arg2, %arg3, %arg4, %alloc_64, %alloc_68) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_69 = memref.alloc() {alignment = 64 : i64} : memref<i64>
    call @S6(%alloc_69) : (memref<i64>) -> ()
    %alloc_70 = memref.alloc() {alignment = 64 : i64} : memref<f32>
    %alloc_71 = memref.alloc() {alignment = 64 : i64} : memref<f32>
    call @S7(%alloc_71, %alloc_69) : (memref<f32>, memref<i64>) -> ()
    %alloc_72 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S8(%arg1, %arg2, %arg3, %arg4, %alloc_72, %alloc_71, %alloc_64) : (index, index, index, index, memref<64x16x112x112xf32>, memref<f32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S9(%arg1, %arg2, %arg3, %arg4, %alloc_64, %alloc_72) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_73 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S10(%arg1, %arg2, %arg3, %arg4, %alloc_73, %alloc_67, %alloc_64) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_74 = memref.alloc() {alignment = 64 : i64} : memref<64x16x114x114xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 114 {
          affine.for %arg4 = 0 to 114 {
            func.call @S11(%arg1, %arg2, %arg3, %arg4, %alloc_74) : (index, index, index, index, memref<64x16x114x114xf32>) -> ()
          }
        }
      }
    }
    %subview_75 = memref.subview %alloc_74[0, 0, 1, 1] [64, 16, 112, 112] [1, 1, 1, 1] : memref<64x16x114x114xf32> to memref<64x16x112x112xf32, strided<[207936, 12996, 114, 1], offset: 115>>
    memref.copy %alloc_73, %subview_75 : memref<64x16x112x112xf32> to memref<64x16x112x112xf32, strided<[207936, 12996, 114, 1], offset: 115>>
    %alloc_76 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    memref.copy %alloc_65, %alloc_76 : memref<64x16x112x112xf32> to memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 16 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S12(%arg1, %arg4, %arg2, %arg3, %alloc_76, %arg5, %arg6, %alloc, %alloc_74) : (index, index, index, index, memref<64x16x112x112xf32>, index, index, memref<16x3x3xf32>, memref<64x16x114x114xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_77 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S13(%arg1, %arg2, %arg3, %arg4, %alloc_77, %alloc_76) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S14(%arg1, %arg2, %arg3, %arg4, %alloc_64, %alloc_77) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 16 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S15(%arg1, %arg2, %arg3, %arg4, %alloc_65, %arg5, %arg6, %arg7, %alloc_61, %alloc_64) : (index, index, index, index, memref<64x16x112x112xf32>, index, index, index, memref<16x16x1x1xf32>, memref<64x16x112x112xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_78 = memref.alloc() {alignment = 64 : i64} : memref<64x16x112x112xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S16(%arg1, %arg2, %arg3, %arg4, %alloc_78, %alloc_65) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 16 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S17(%arg1, %arg2, %arg3, %arg4, %alloc_64, %alloc_73, %alloc_78) : (index, index, index, index, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>, memref<64x16x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_79 = memref.alloc() {alignment = 64 : i64} : memref<64x64x112x112xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S18(%arg1, %arg2, %arg3, %arg4, %alloc_79) : (index, index, index, index, memref<64x64x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            affine.for %arg5 = 0 to 16 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S19(%arg1, %arg2, %arg3, %arg4, %alloc_79, %arg5, %arg6, %arg7, %alloc_60, %alloc_64) : (index, index, index, index, memref<64x64x112x112xf32>, index, index, index, memref<64x16x1x1xf32>, memref<64x16x112x112xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_80 = memref.alloc() {alignment = 64 : i64} : memref<64x64x112x112xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S20(%arg1, %arg2, %arg3, %arg4, %alloc_80, %alloc_79) : (index, index, index, index, memref<64x64x112x112xf32>, memref<64x64x112x112xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 112 {
          affine.for %arg4 = 0 to 112 {
            func.call @S21(%arg1, %arg2, %arg3, %arg4, %alloc_79, %alloc_80) : (index, index, index, index, memref<64x64x112x112xf32>, memref<64x64x112x112xf32>) -> ()
          }
        }
      }
    }
    %alloc_81 = memref.alloc() {alignment = 64 : i64} : memref<64x64x114x114xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 114 {
          affine.for %arg4 = 0 to 114 {
            func.call @S22(%arg1, %arg2, %arg3, %arg4, %alloc_81) : (index, index, index, index, memref<64x64x114x114xf32>) -> ()
          }
        }
      }
    }
    %subview_82 = memref.subview %alloc_81[0, 0, 1, 1] [64, 64, 112, 112] [1, 1, 1, 1] : memref<64x64x114x114xf32> to memref<64x64x112x112xf32, strided<[831744, 12996, 114, 1], offset: 115>>
    memref.copy %alloc_79, %subview_82 : memref<64x64x112x112xf32> to memref<64x64x112x112xf32, strided<[831744, 12996, 114, 1], offset: 115>>
    %alloc_83 = memref.alloc() {alignment = 64 : i64} : memref<64x64x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S23(%arg1, %arg2, %arg3, %arg4, %alloc_83) : (index, index, index, index, memref<64x64x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 56 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 64 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S24(%arg1, %arg4, %arg2, %arg3, %alloc_83, %arg5, %arg6, %alloc_0, %alloc_81) : (index, index, index, index, memref<64x64x56x56xf32>, index, index, memref<64x3x3xf32>, memref<64x64x114x114xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_84 = memref.alloc() {alignment = 64 : i64} : memref<64x64x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S25(%arg1, %arg2, %arg3, %arg4, %alloc_84, %alloc_83) : (index, index, index, index, memref<64x64x56x56xf32>, memref<64x64x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S26(%arg1, %arg2, %arg3, %arg4, %alloc_83, %alloc_84) : (index, index, index, index, memref<64x64x56x56xf32>, memref<64x64x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_85 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S27(%arg1, %arg2, %arg3, %arg4, %alloc_85) : (index, index, index, index, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_86 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    memref.copy %alloc_85, %alloc_86 : memref<64x24x56x56xf32> to memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S28(%arg1, %arg2, %arg3, %arg4, %alloc_86, %arg5, %arg6, %arg7, %alloc_59, %alloc_83) : (index, index, index, index, memref<64x24x56x56xf32>, index, index, index, memref<24x64x1x1xf32>, memref<64x64x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_87 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S29(%arg1, %arg2, %arg3, %arg4, %alloc_87, %alloc_86) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_88 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    %alloc_89 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S30(%arg1, %arg2, %arg3, %arg4, %alloc_89) : (index, index, index, index, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_90 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    memref.copy %alloc_89, %alloc_90 : memref<64x72x56x56xf32> to memref<64x72x56x56xf32>
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 24 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S31(%arg1, %arg2, %arg3, %arg4, %alloc_90, %arg5, %arg6, %arg7, %alloc_58, %alloc_87) : (index, index, index, index, memref<64x72x56x56xf32>, index, index, index, memref<72x24x1x1xf32>, memref<64x24x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_91 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S32(%arg1, %arg2, %arg3, %arg4, %alloc_91, %alloc_90) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S33(%arg1, %arg2, %arg3, %arg4, %alloc_88, %alloc_91) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_92 = memref.alloc() {alignment = 64 : i64} : memref<64x72x58x58xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 58 {
          affine.for %arg4 = 0 to 58 {
            func.call @S34(%arg1, %arg2, %arg3, %arg4, %alloc_92) : (index, index, index, index, memref<64x72x58x58xf32>) -> ()
          }
        }
      }
    }
    %subview_93 = memref.subview %alloc_92[0, 0, 1, 1] [64, 72, 56, 56] [1, 1, 1, 1] : memref<64x72x58x58xf32> to memref<64x72x56x56xf32, strided<[242208, 3364, 58, 1], offset: 59>>
    memref.copy %alloc_88, %subview_93 : memref<64x72x56x56xf32> to memref<64x72x56x56xf32, strided<[242208, 3364, 58, 1], offset: 59>>
    %alloc_94 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    memref.copy %alloc_89, %alloc_94 : memref<64x72x56x56xf32> to memref<64x72x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 56 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 72 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S35(%arg1, %arg4, %arg2, %arg3, %alloc_94, %arg5, %arg6, %alloc_1, %alloc_92) : (index, index, index, index, memref<64x72x56x56xf32>, index, index, memref<72x3x3xf32>, memref<64x72x58x58xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_95 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S36(%arg1, %arg2, %arg3, %arg4, %alloc_95, %alloc_94) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S37(%arg1, %arg2, %arg3, %arg4, %alloc_88, %alloc_95) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 72 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S38(%arg1, %arg2, %arg3, %arg4, %alloc_85, %arg5, %arg6, %arg7, %alloc_57, %alloc_88) : (index, index, index, index, memref<64x24x56x56xf32>, index, index, index, memref<24x72x1x1xf32>, memref<64x72x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_96 = memref.alloc() {alignment = 64 : i64} : memref<64x24x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S39(%arg1, %arg2, %arg3, %arg4, %alloc_96, %alloc_85) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S40(%arg1, %arg2, %arg3, %arg4, %alloc_85, %alloc_87, %alloc_96) : (index, index, index, index, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>, memref<64x24x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            affine.for %arg5 = 0 to 24 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S41(%arg1, %arg2, %arg3, %arg4, %alloc_89, %arg5, %arg6, %arg7, %alloc_56, %alloc_85) : (index, index, index, index, memref<64x72x56x56xf32>, index, index, index, memref<72x24x1x1xf32>, memref<64x24x56x56xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_97 = memref.alloc() {alignment = 64 : i64} : memref<64x72x56x56xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S42(%arg1, %arg2, %arg3, %arg4, %alloc_97, %alloc_89) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 56 {
          affine.for %arg4 = 0 to 56 {
            func.call @S43(%arg1, %arg2, %arg3, %arg4, %alloc_88, %alloc_97) : (index, index, index, index, memref<64x72x56x56xf32>, memref<64x72x56x56xf32>) -> ()
          }
        }
      }
    }
    %alloc_98 = memref.alloc() {alignment = 64 : i64} : memref<64x72x60x60xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 60 {
          affine.for %arg4 = 0 to 60 {
            func.call @S44(%arg1, %arg2, %arg3, %arg4, %alloc_98) : (index, index, index, index, memref<64x72x60x60xf32>) -> ()
          }
        }
      }
    }
    %subview_99 = memref.subview %alloc_98[0, 0, 2, 2] [64, 72, 56, 56] [1, 1, 1, 1] : memref<64x72x60x60xf32> to memref<64x72x56x56xf32, strided<[259200, 3600, 60, 1], offset: 122>>
    memref.copy %alloc_88, %subview_99 : memref<64x72x56x56xf32> to memref<64x72x56x56xf32, strided<[259200, 3600, 60, 1], offset: 122>>
    %alloc_100 = memref.alloc() {alignment = 64 : i64} : memref<64x72x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S45(%arg1, %arg2, %arg3, %arg4, %alloc_100) : (index, index, index, index, memref<64x72x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 72 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S46(%arg1, %arg4, %arg2, %arg3, %alloc_100, %arg5, %arg6, %alloc_2, %alloc_98) : (index, index, index, index, memref<64x72x28x28xf32>, index, index, memref<72x5x5xf32>, memref<64x72x60x60xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_101 = memref.alloc() {alignment = 64 : i64} : memref<64x72x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S47(%arg1, %arg2, %arg3, %arg4, %alloc_101, %alloc_100) : (index, index, index, index, memref<64x72x28x28xf32>, memref<64x72x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_102 = memref.alloc() {alignment = 64 : i64} : memref<64x72x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S48(%arg1, %arg2, %arg3, %arg4, %alloc_102, %alloc_101) : (index, index, index, index, memref<64x72x28x28xf32>, memref<64x72x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_103 = memref.alloc() {alignment = 64 : i64} : memref<64x72x1x1xf32>
    %alloc_104 = memref.alloc() {alignment = 64 : i64} : memref<64x72x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S49(%arg1, %arg2, %arg3, %arg4, %alloc_104) : (index, index, index, index, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 28 {
              affine.for %arg6 = 0 to 28 {
                func.call @S50(%arg1, %arg2, %arg3, %arg4, %alloc_104, %arg5, %arg6, %alloc_102) : (index, index, index, index, memref<64x72x1x1xf32>, index, index, memref<64x72x28x28xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S51(%arg1, %arg2, %arg3, %arg4, %alloc_103, %alloc_104) : (index, index, index, index, memref<64x72x1x1xf32>, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_105 = memref.alloc() {alignment = 64 : i64} : memref<64x24x1x1xf32>
    %alloc_106 = memref.alloc() {alignment = 64 : i64} : memref<64x24x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S52(%arg1, %arg2, %arg3, %arg4, %alloc_106) : (index, index, index, index, memref<64x24x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 72 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S53(%arg1, %arg2, %arg3, %arg4, %alloc_106, %arg5, %arg6, %arg7, %alloc_55, %alloc_103) : (index, index, index, index, memref<64x24x1x1xf32>, index, index, index, memref<24x72x1x1xf32>, memref<64x72x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 24 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S54(%arg1, %arg2, %arg3, %arg4, %alloc_105, %alloc_106) : (index, index, index, index, memref<64x24x1x1xf32>, memref<64x24x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S55(%arg1, %arg2, %arg3, %arg4, %alloc_103) : (index, index, index, index, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 24 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S56(%arg1, %arg2, %arg3, %arg4, %alloc_103, %arg5, %arg6, %arg7, %alloc_54, %alloc_105) : (index, index, index, index, memref<64x72x1x1xf32>, index, index, index, memref<72x24x1x1xf32>, memref<64x24x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_107 = memref.alloc() {alignment = 64 : i64} : memref<64x72x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S57(%arg1, %arg2, %arg3, %arg4, %alloc_107, %alloc_103) : (index, index, index, index, memref<64x72x1x1xf32>, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S58(%arg1, %arg2, %arg3, %arg4, %alloc_103, %alloc_107) : (index, index, index, index, memref<64x72x1x1xf32>, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    call @S59(%alloc_69) : (memref<i64>) -> ()
    %alloc_108 = memref.alloc() {alignment = 64 : i64} : memref<f32>
    call @S60(%alloc_108, %alloc_69) : (memref<f32>, memref<i64>) -> ()
    %alloc_109 = memref.alloc() {alignment = 64 : i64} : memref<64x72x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S61(%arg1, %arg2, %arg3, %arg4, %alloc_109, %alloc_103, %alloc_108) : (index, index, index, index, memref<64x72x1x1xf32>, memref<64x72x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @S62(%alloc_69) : (memref<i64>) -> ()
    call @S63(%alloc_70, %alloc_69) : (memref<f32>, memref<i64>) -> ()
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S64(%arg1, %arg2, %arg3, %arg4, %alloc_103, %alloc_109, %alloc_70) : (index, index, index, index, memref<64x72x1x1xf32>, memref<64x72x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 72 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S65(%arg1, %arg2, %arg3, %arg4, %alloc_100, %alloc_102, %alloc_103) : (index, index, index, index, memref<64x72x28x28xf32>, memref<64x72x28x28xf32>, memref<64x72x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_110 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S66(%arg1, %arg2, %arg3, %arg4, %alloc_110) : (index, index, index, index, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_111 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    memref.copy %alloc_110, %alloc_111 : memref<64x40x28x28xf32> to memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 72 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S67(%arg1, %arg2, %arg3, %arg4, %alloc_111, %arg5, %arg6, %arg7, %alloc_53, %alloc_100) : (index, index, index, index, memref<64x40x28x28xf32>, index, index, index, memref<40x72x1x1xf32>, memref<64x72x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_112 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S68(%arg1, %arg2, %arg3, %arg4, %alloc_112, %alloc_111) : (index, index, index, index, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_113 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    %alloc_114 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S69(%arg1, %arg2, %arg3, %arg4, %alloc_114) : (index, index, index, index, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_115 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    memref.copy %alloc_114, %alloc_115 : memref<64x120x28x28xf32> to memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 40 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S70(%arg1, %arg2, %arg3, %arg4, %alloc_115, %arg5, %arg6, %arg7, %alloc_52, %alloc_112) : (index, index, index, index, memref<64x120x28x28xf32>, index, index, index, memref<120x40x1x1xf32>, memref<64x40x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_116 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S71(%arg1, %arg2, %arg3, %arg4, %alloc_116, %alloc_115) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S72(%arg1, %arg2, %arg3, %arg4, %alloc_113, %alloc_116) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_117 = memref.alloc() {alignment = 64 : i64} : memref<64x120x32x32xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 32 {
          affine.for %arg4 = 0 to 32 {
            func.call @S73(%arg1, %arg2, %arg3, %arg4, %alloc_117) : (index, index, index, index, memref<64x120x32x32xf32>) -> ()
          }
        }
      }
    }
    %subview_118 = memref.subview %alloc_117[0, 0, 2, 2] [64, 120, 28, 28] [1, 1, 1, 1] : memref<64x120x32x32xf32> to memref<64x120x28x28xf32, strided<[122880, 1024, 32, 1], offset: 66>>
    memref.copy %alloc_113, %subview_118 : memref<64x120x28x28xf32> to memref<64x120x28x28xf32, strided<[122880, 1024, 32, 1], offset: 66>>
    %alloc_119 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    memref.copy %alloc_114, %alloc_119 : memref<64x120x28x28xf32> to memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 120 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S74(%arg1, %arg4, %arg2, %arg3, %alloc_119, %arg5, %arg6, %alloc_3, %alloc_117) : (index, index, index, index, memref<64x120x28x28xf32>, index, index, memref<120x5x5xf32>, memref<64x120x32x32xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_120 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S75(%arg1, %arg2, %arg3, %arg4, %alloc_120, %alloc_119) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_121 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S76(%arg1, %arg2, %arg3, %arg4, %alloc_121, %alloc_120) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_122 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    %alloc_123 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S77(%arg1, %arg2, %arg3, %arg4, %alloc_123) : (index, index, index, index, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_124 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    memref.copy %alloc_123, %alloc_124 : memref<64x120x1x1xf32> to memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 28 {
              affine.for %arg6 = 0 to 28 {
                func.call @S78(%arg1, %arg2, %arg3, %arg4, %alloc_124, %arg5, %arg6, %alloc_121) : (index, index, index, index, memref<64x120x1x1xf32>, index, index, memref<64x120x28x28xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S79(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_124) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_125 = memref.alloc() {alignment = 64 : i64} : memref<64x32x1x1xf32>
    %alloc_126 = memref.alloc() {alignment = 64 : i64} : memref<64x32x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S80(%arg1, %arg2, %arg3, %arg4, %alloc_126) : (index, index, index, index, memref<64x32x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_127 = memref.alloc() {alignment = 64 : i64} : memref<64x32x1x1xf32>
    memref.copy %alloc_126, %alloc_127 : memref<64x32x1x1xf32> to memref<64x32x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 120 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S81(%arg1, %arg2, %arg3, %arg4, %alloc_127, %arg5, %arg6, %arg7, %alloc_51, %alloc_122) : (index, index, index, index, memref<64x32x1x1xf32>, index, index, index, memref<32x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S82(%arg1, %arg2, %arg3, %arg4, %alloc_125, %alloc_127) : (index, index, index, index, memref<64x32x1x1xf32>, memref<64x32x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_128 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S83(%arg1, %arg2, %arg3, %arg4, %alloc_128) : (index, index, index, index, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_129 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    memref.copy %alloc_128, %alloc_129 : memref<64x120x1x1xf32> to memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S84(%arg1, %arg2, %arg3, %arg4, %alloc_129, %arg5, %arg6, %arg7, %alloc_50, %alloc_125) : (index, index, index, index, memref<64x120x1x1xf32>, index, index, index, memref<120x32x1x1xf32>, memref<64x32x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_130 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S85(%arg1, %arg2, %arg3, %arg4, %alloc_130, %alloc_129) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S86(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_130) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_131 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S87(%arg1, %arg2, %arg3, %arg4, %alloc_131, %alloc_122, %alloc_108) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S88(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_131, %alloc_70) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S89(%arg1, %arg2, %arg3, %arg4, %alloc_113, %alloc_121, %alloc_122) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_132 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    memref.copy %alloc_110, %alloc_132 : memref<64x40x28x28xf32> to memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c1149013_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 120 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S90(%arg1, %arg2, %arg3, %arg4, %alloc_132, %arg5, %arg6, %arg7, %alloc_49, %alloc_113) : (index, index, index, index, memref<64x40x28x28xf32>, index, index, index, memref<40x120x1x1xf32>, memref<64x120x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_133 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S91(%arg1, %arg2, %arg3, %arg4, %alloc_133, %alloc_132) : (index, index, index, index, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_134 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S92(%arg1, %arg2, %arg3, %arg4, %alloc_134, %alloc_112, %alloc_133) : (index, index, index, index, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_135 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    memref.copy %alloc_114, %alloc_135 : memref<64x120x28x28xf32> to memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 40 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S93(%arg1, %arg2, %arg3, %arg4, %alloc_135, %arg5, %arg6, %arg7, %alloc_48, %alloc_134) : (index, index, index, index, memref<64x120x28x28xf32>, index, index, index, memref<120x40x1x1xf32>, memref<64x40x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_136 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S94(%arg1, %arg2, %arg3, %arg4, %alloc_136, %alloc_135) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S95(%arg1, %arg2, %arg3, %arg4, %alloc_113, %alloc_136) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_137 = memref.alloc() {alignment = 64 : i64} : memref<64x120x32x32xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 32 {
          affine.for %arg4 = 0 to 32 {
            func.call @S96(%arg1, %arg2, %arg3, %arg4, %alloc_137) : (index, index, index, index, memref<64x120x32x32xf32>) -> ()
          }
        }
      }
    }
    %subview_138 = memref.subview %alloc_137[0, 0, 2, 2] [64, 120, 28, 28] [1, 1, 1, 1] : memref<64x120x32x32xf32> to memref<64x120x28x28xf32, strided<[122880, 1024, 32, 1], offset: 66>>
    memref.copy %alloc_113, %subview_138 : memref<64x120x28x28xf32> to memref<64x120x28x28xf32, strided<[122880, 1024, 32, 1], offset: 66>>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 28 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 120 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S97(%arg1, %arg4, %arg2, %arg3, %alloc_114, %arg5, %arg6, %alloc_4, %alloc_137) : (index, index, index, index, memref<64x120x28x28xf32>, index, index, memref<120x5x5xf32>, memref<64x120x32x32xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_139 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S98(%arg1, %arg2, %arg3, %arg4, %alloc_139, %alloc_114) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_140 = memref.alloc() {alignment = 64 : i64} : memref<64x120x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S99(%arg1, %arg2, %arg3, %arg4, %alloc_140, %alloc_139) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 28 {
              affine.for %arg6 = 0 to 28 {
                func.call @S100(%arg1, %arg2, %arg3, %arg4, %alloc_123, %arg5, %arg6, %alloc_140) : (index, index, index, index, memref<64x120x1x1xf32>, index, index, memref<64x120x28x28xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S101(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_123) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 120 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S102(%arg1, %arg2, %arg3, %arg4, %alloc_126, %arg5, %arg6, %arg7, %alloc_47, %alloc_122) : (index, index, index, index, memref<64x32x1x1xf32>, index, index, index, memref<32x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 32 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S103(%arg1, %arg2, %arg3, %arg4, %alloc_125, %alloc_126) : (index, index, index, index, memref<64x32x1x1xf32>, memref<64x32x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_141 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    memref.copy %alloc_128, %alloc_141 : memref<64x120x1x1xf32> to memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 32 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S104(%arg1, %arg2, %arg3, %arg4, %alloc_141, %arg5, %arg6, %arg7, %alloc_46, %alloc_125) : (index, index, index, index, memref<64x120x1x1xf32>, index, index, index, memref<120x32x1x1xf32>, memref<64x32x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_142 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S105(%arg1, %arg2, %arg3, %arg4, %alloc_142, %alloc_141) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S106(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_142) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_143 = memref.alloc() {alignment = 64 : i64} : memref<64x120x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S107(%arg1, %arg2, %arg3, %arg4, %alloc_143, %alloc_122, %alloc_108) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S108(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_143, %alloc_70) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S109(%arg1, %arg2, %arg3, %arg4, %alloc_113, %alloc_140, %alloc_122) : (index, index, index, index, memref<64x120x28x28xf32>, memref<64x120x28x28xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c1192087_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 120 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S110(%arg1, %arg2, %arg3, %arg4, %alloc_110, %arg5, %arg6, %arg7, %alloc_45, %alloc_113) : (index, index, index, index, memref<64x40x28x28xf32>, index, index, index, memref<40x120x1x1xf32>, memref<64x120x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_144 = memref.alloc() {alignment = 64 : i64} : memref<64x40x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S111(%arg1, %arg2, %arg3, %arg4, %alloc_144, %alloc_110) : (index, index, index, index, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 40 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S112(%arg1, %arg2, %arg3, %arg4, %alloc_110, %alloc_134, %alloc_144) : (index, index, index, index, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>, memref<64x40x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_145 = memref.alloc() {alignment = 64 : i64} : memref<64x240x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S113(%arg1, %arg2, %arg3, %arg4, %alloc_145) : (index, index, index, index, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            affine.for %arg5 = 0 to 40 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S114(%arg1, %arg2, %arg3, %arg4, %alloc_145, %arg5, %arg6, %arg7, %alloc_44, %alloc_110) : (index, index, index, index, memref<64x240x28x28xf32>, index, index, index, memref<240x40x1x1xf32>, memref<64x40x28x28xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_146 = memref.alloc() {alignment = 64 : i64} : memref<64x240x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S115(%arg1, %arg2, %arg3, %arg4, %alloc_146, %alloc_145) : (index, index, index, index, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S116(%arg1, %arg2, %arg3, %arg4, %alloc_145, %alloc_146) : (index, index, index, index, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_147 = memref.alloc() {alignment = 64 : i64} : memref<64x240x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S117(%arg1, %arg2, %arg3, %arg4, %alloc_147, %alloc_145) : (index, index, index, index, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S118(%arg1, %arg2, %arg3, %arg4, %alloc_145, %alloc_71, %alloc_147) : (index, index, index, index, memref<64x240x28x28xf32>, memref<f32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_148 = memref.alloc() {alignment = 64 : i64} : memref<64x240x28x28xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S119(%arg1, %arg2, %arg3, %arg4, %alloc_148, %alloc_145) : (index, index, index, index, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 28 {
          affine.for %arg4 = 0 to 28 {
            func.call @S120(%arg1, %arg2, %arg3, %arg4, %alloc_145, %alloc_146, %alloc_148) : (index, index, index, index, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>, memref<64x240x28x28xf32>) -> ()
          }
        }
      }
    }
    %alloc_149 = memref.alloc() {alignment = 64 : i64} : memref<64x240x30x30xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 30 {
          affine.for %arg4 = 0 to 30 {
            func.call @S121(%arg1, %arg2, %arg3, %arg4, %alloc_149) : (index, index, index, index, memref<64x240x30x30xf32>) -> ()
          }
        }
      }
    }
    %subview_150 = memref.subview %alloc_149[0, 0, 1, 1] [64, 240, 28, 28] [1, 1, 1, 1] : memref<64x240x30x30xf32> to memref<64x240x28x28xf32, strided<[216000, 900, 30, 1], offset: 31>>
    memref.copy %alloc_145, %subview_150 : memref<64x240x28x28xf32> to memref<64x240x28x28xf32, strided<[216000, 900, 30, 1], offset: 31>>
    %alloc_151 = memref.alloc() {alignment = 64 : i64} : memref<64x240x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S122(%arg1, %arg2, %arg3, %arg4, %alloc_151) : (index, index, index, index, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 240 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S123(%arg1, %arg4, %arg2, %arg3, %alloc_151, %arg5, %arg6, %alloc_5, %alloc_149) : (index, index, index, index, memref<64x240x14x14xf32>, index, index, memref<240x3x3xf32>, memref<64x240x30x30xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_152 = memref.alloc() {alignment = 64 : i64} : memref<64x240x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S124(%arg1, %arg2, %arg3, %arg4, %alloc_152, %alloc_151) : (index, index, index, index, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S125(%arg1, %arg2, %arg3, %arg4, %alloc_151, %alloc_152) : (index, index, index, index, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_153 = memref.alloc() {alignment = 64 : i64} : memref<64x240x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S126(%arg1, %arg2, %arg3, %arg4, %alloc_153, %alloc_151) : (index, index, index, index, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S127(%arg1, %arg2, %arg3, %arg4, %alloc_151, %alloc_71, %alloc_153) : (index, index, index, index, memref<64x240x14x14xf32>, memref<f32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_154 = memref.alloc() {alignment = 64 : i64} : memref<64x240x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S128(%arg1, %arg2, %arg3, %arg4, %alloc_154, %alloc_151) : (index, index, index, index, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S129(%arg1, %arg2, %arg3, %arg4, %alloc_151, %alloc_152, %alloc_154) : (index, index, index, index, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>, memref<64x240x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_155 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    %alloc_156 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S130(%arg1, %arg2, %arg3, %arg4, %alloc_156) : (index, index, index, index, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_157 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    memref.copy %alloc_156, %alloc_157 : memref<64x80x14x14xf32> to memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 240 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S131(%arg1, %arg2, %arg3, %arg4, %alloc_157, %arg5, %arg6, %arg7, %alloc_43, %alloc_151) : (index, index, index, index, memref<64x80x14x14xf32>, index, index, index, memref<80x240x1x1xf32>, memref<64x240x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_158 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S132(%arg1, %arg2, %arg3, %arg4, %alloc_158, %alloc_157) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_159 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    %alloc_160 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S133(%arg1, %arg2, %arg3, %arg4, %alloc_160) : (index, index, index, index, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_161 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    memref.copy %alloc_160, %alloc_161 : memref<64x200x14x14xf32> to memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 80 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S134(%arg1, %arg2, %arg3, %arg4, %alloc_161, %arg5, %arg6, %arg7, %alloc_42, %alloc_158) : (index, index, index, index, memref<64x200x14x14xf32>, index, index, index, memref<200x80x1x1xf32>, memref<64x80x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_162 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S135(%arg1, %arg2, %arg3, %arg4, %alloc_162, %alloc_161) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S136(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_162) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_163 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S137(%arg1, %arg2, %arg3, %arg4, %alloc_163, %alloc_159) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S138(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_71, %alloc_163) : (index, index, index, index, memref<64x200x14x14xf32>, memref<f32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_164 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S139(%arg1, %arg2, %arg3, %arg4, %alloc_164, %alloc_159) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S140(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_162, %alloc_164) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_165 = memref.alloc() {alignment = 64 : i64} : memref<64x200x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S141(%arg1, %arg2, %arg3, %arg4, %alloc_165) : (index, index, index, index, memref<64x200x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_166 = memref.subview %alloc_165[0, 0, 1, 1] [64, 200, 14, 14] [1, 1, 1, 1] : memref<64x200x16x16xf32> to memref<64x200x14x14xf32, strided<[51200, 256, 16, 1], offset: 17>>
    memref.copy %alloc_159, %subview_166 : memref<64x200x14x14xf32> to memref<64x200x14x14xf32, strided<[51200, 256, 16, 1], offset: 17>>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 200 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S142(%arg1, %arg4, %arg2, %arg3, %alloc_160, %arg5, %arg6, %alloc_6, %alloc_165) : (index, index, index, index, memref<64x200x14x14xf32>, index, index, memref<200x3x3xf32>, memref<64x200x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_167 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S143(%arg1, %arg2, %arg3, %arg4, %alloc_167, %alloc_160) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S144(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_167) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_168 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S145(%arg1, %arg2, %arg3, %arg4, %alloc_168, %alloc_159) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S146(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_71, %alloc_168) : (index, index, index, index, memref<64x200x14x14xf32>, memref<f32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_169 = memref.alloc() {alignment = 64 : i64} : memref<64x200x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S147(%arg1, %arg2, %arg3, %arg4, %alloc_169, %alloc_159) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 200 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S148(%arg1, %arg2, %arg3, %arg4, %alloc_159, %alloc_167, %alloc_169) : (index, index, index, index, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>, memref<64x200x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_170 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    memref.copy %alloc_156, %alloc_170 : memref<64x80x14x14xf32> to memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 200 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S149(%arg1, %arg2, %arg3, %arg4, %alloc_170, %arg5, %arg6, %arg7, %alloc_41, %alloc_159) : (index, index, index, index, memref<64x80x14x14xf32>, index, index, index, memref<80x200x1x1xf32>, memref<64x200x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_171 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S150(%arg1, %arg2, %arg3, %arg4, %alloc_171, %alloc_170) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S151(%arg1, %arg2, %arg3, %arg4, %alloc_155, %alloc_158, %alloc_171) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_172 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    %alloc_173 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S152(%arg1, %arg2, %arg3, %arg4, %alloc_173) : (index, index, index, index, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_174 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    memref.copy %alloc_173, %alloc_174 : memref<64x184x14x14xf32> to memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 80 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S153(%arg1, %arg2, %arg3, %arg4, %alloc_174, %arg5, %arg6, %arg7, %alloc_40, %alloc_155) : (index, index, index, index, memref<64x184x14x14xf32>, index, index, index, memref<184x80x1x1xf32>, memref<64x80x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_175 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S154(%arg1, %arg2, %arg3, %arg4, %alloc_175, %alloc_174) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S155(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_175) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_176 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S156(%arg1, %arg2, %arg3, %arg4, %alloc_176, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S157(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_71, %alloc_176) : (index, index, index, index, memref<64x184x14x14xf32>, memref<f32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_177 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S158(%arg1, %arg2, %arg3, %arg4, %alloc_177, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S159(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_175, %alloc_177) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_178 = memref.alloc() {alignment = 64 : i64} : memref<64x184x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S160(%arg1, %arg2, %arg3, %arg4, %alloc_178) : (index, index, index, index, memref<64x184x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_179 = memref.subview %alloc_178[0, 0, 1, 1] [64, 184, 14, 14] [1, 1, 1, 1] : memref<64x184x16x16xf32> to memref<64x184x14x14xf32, strided<[47104, 256, 16, 1], offset: 17>>
    memref.copy %alloc_172, %subview_179 : memref<64x184x14x14xf32> to memref<64x184x14x14xf32, strided<[47104, 256, 16, 1], offset: 17>>
    %alloc_180 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    memref.copy %alloc_173, %alloc_180 : memref<64x184x14x14xf32> to memref<64x184x14x14xf32>
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 184 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S161(%arg1, %arg4, %arg2, %arg3, %alloc_180, %arg5, %arg6, %alloc_7, %alloc_178) : (index, index, index, index, memref<64x184x14x14xf32>, index, index, memref<184x3x3xf32>, memref<64x184x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_181 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S162(%arg1, %arg2, %arg3, %arg4, %alloc_181, %alloc_180) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S163(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_181) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_182 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S164(%arg1, %arg2, %arg3, %arg4, %alloc_182, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S165(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_71, %alloc_182) : (index, index, index, index, memref<64x184x14x14xf32>, memref<f32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_183 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S166(%arg1, %arg2, %arg3, %arg4, %alloc_183, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S167(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_181, %alloc_183) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_184 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    memref.copy %alloc_156, %alloc_184 : memref<64x80x14x14xf32> to memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 184 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S168(%arg1, %arg2, %arg3, %arg4, %alloc_184, %arg5, %arg6, %arg7, %alloc_39, %alloc_172) : (index, index, index, index, memref<64x80x14x14xf32>, index, index, index, memref<80x184x1x1xf32>, memref<64x184x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_185 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S169(%arg1, %arg2, %arg3, %arg4, %alloc_185, %alloc_184) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_186 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S170(%arg1, %arg2, %arg3, %arg4, %alloc_186, %alloc_155, %alloc_185) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_187 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    memref.copy %alloc_173, %alloc_187 : memref<64x184x14x14xf32> to memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 80 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S171(%arg1, %arg2, %arg3, %arg4, %alloc_187, %arg5, %arg6, %arg7, %alloc_38, %alloc_186) : (index, index, index, index, memref<64x184x14x14xf32>, index, index, index, memref<184x80x1x1xf32>, memref<64x80x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_188 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S172(%arg1, %arg2, %arg3, %arg4, %alloc_188, %alloc_187) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S173(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_188) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_189 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S174(%arg1, %arg2, %arg3, %arg4, %alloc_189, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S175(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_71, %alloc_189) : (index, index, index, index, memref<64x184x14x14xf32>, memref<f32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_190 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S176(%arg1, %arg2, %arg3, %arg4, %alloc_190, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S177(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_188, %alloc_190) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_191 = memref.alloc() {alignment = 64 : i64} : memref<64x184x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S178(%arg1, %arg2, %arg3, %arg4, %alloc_191) : (index, index, index, index, memref<64x184x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_192 = memref.subview %alloc_191[0, 0, 1, 1] [64, 184, 14, 14] [1, 1, 1, 1] : memref<64x184x16x16xf32> to memref<64x184x14x14xf32, strided<[47104, 256, 16, 1], offset: 17>>
    memref.copy %alloc_172, %subview_192 : memref<64x184x14x14xf32> to memref<64x184x14x14xf32, strided<[47104, 256, 16, 1], offset: 17>>
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 184 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S179(%arg1, %arg4, %arg2, %arg3, %alloc_173, %arg5, %arg6, %alloc_8, %alloc_191) : (index, index, index, index, memref<64x184x14x14xf32>, index, index, memref<184x3x3xf32>, memref<64x184x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_193 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S180(%arg1, %arg2, %arg3, %arg4, %alloc_193, %alloc_173) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S181(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_193) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_194 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S182(%arg1, %arg2, %arg3, %arg4, %alloc_194, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S183(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_71, %alloc_194) : (index, index, index, index, memref<64x184x14x14xf32>, memref<f32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_195 = memref.alloc() {alignment = 64 : i64} : memref<64x184x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S184(%arg1, %arg2, %arg3, %arg4, %alloc_195, %alloc_172) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 184 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S185(%arg1, %arg2, %arg3, %arg4, %alloc_172, %alloc_193, %alloc_195) : (index, index, index, index, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>, memref<64x184x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 184 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S186(%arg1, %arg2, %arg3, %arg4, %alloc_156, %arg5, %arg6, %arg7, %alloc_37, %alloc_172) : (index, index, index, index, memref<64x80x14x14xf32>, index, index, index, memref<80x184x1x1xf32>, memref<64x184x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_196 = memref.alloc() {alignment = 64 : i64} : memref<64x80x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S187(%arg1, %arg2, %arg3, %arg4, %alloc_196, %alloc_156) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 80 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S188(%arg1, %arg2, %arg3, %arg4, %alloc_155, %alloc_186, %alloc_196) : (index, index, index, index, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>, memref<64x80x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_197 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    %alloc_198 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S189(%arg1, %arg2, %arg3, %arg4, %alloc_198) : (index, index, index, index, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_199 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    memref.copy %alloc_198, %alloc_199 : memref<64x480x14x14xf32> to memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 80 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S190(%arg1, %arg2, %arg3, %arg4, %alloc_199, %arg5, %arg6, %arg7, %alloc_36, %alloc_155) : (index, index, index, index, memref<64x480x14x14xf32>, index, index, index, memref<480x80x1x1xf32>, memref<64x80x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_200 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S191(%arg1, %arg2, %arg3, %arg4, %alloc_200, %alloc_199) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S192(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_200) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_201 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S193(%arg1, %arg2, %arg3, %arg4, %alloc_201, %alloc_197) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S194(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_71, %alloc_201) : (index, index, index, index, memref<64x480x14x14xf32>, memref<f32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_202 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S195(%arg1, %arg2, %arg3, %arg4, %alloc_202, %alloc_197) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S196(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_200, %alloc_202) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_203 = memref.alloc() {alignment = 64 : i64} : memref<64x480x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S197(%arg1, %arg2, %arg3, %arg4, %alloc_203) : (index, index, index, index, memref<64x480x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_204 = memref.subview %alloc_203[0, 0, 1, 1] [64, 480, 14, 14] [1, 1, 1, 1] : memref<64x480x16x16xf32> to memref<64x480x14x14xf32, strided<[122880, 256, 16, 1], offset: 17>>
    memref.copy %alloc_197, %subview_204 : memref<64x480x14x14xf32> to memref<64x480x14x14xf32, strided<[122880, 256, 16, 1], offset: 17>>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 480 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S198(%arg1, %arg4, %arg2, %arg3, %alloc_198, %arg5, %arg6, %alloc_9, %alloc_203) : (index, index, index, index, memref<64x480x14x14xf32>, index, index, memref<480x3x3xf32>, memref<64x480x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_205 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S199(%arg1, %arg2, %arg3, %arg4, %alloc_205, %alloc_198) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_206 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S200(%arg1, %arg2, %arg3, %arg4, %alloc_206, %alloc_205) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S201(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_206) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_207 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S202(%arg1, %arg2, %arg3, %arg4, %alloc_207, %alloc_71, %alloc_197) : (index, index, index, index, memref<64x480x14x14xf32>, memref<f32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S203(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_207) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_208 = memref.alloc() {alignment = 64 : i64} : memref<64x480x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S204(%arg1, %arg2, %arg3, %arg4, %alloc_208, %alloc_205, %alloc_197) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_209 = memref.alloc() {alignment = 64 : i64} : memref<64x480x1x1xf32>
    %alloc_210 = memref.alloc() {alignment = 64 : i64} : memref<64x480x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S205(%arg1, %arg2, %arg3, %arg4, %alloc_210) : (index, index, index, index, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 14 {
              affine.for %arg6 = 0 to 14 {
                func.call @S206(%arg1, %arg2, %arg3, %arg4, %alloc_210, %arg5, %arg6, %alloc_208) : (index, index, index, index, memref<64x480x1x1xf32>, index, index, memref<64x480x14x14xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S207(%arg1, %arg2, %arg3, %arg4, %alloc_209, %alloc_210) : (index, index, index, index, memref<64x480x1x1xf32>, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 480 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S208(%arg1, %arg2, %arg3, %arg4, %alloc_128, %arg5, %arg6, %arg7, %alloc_35, %alloc_209) : (index, index, index, index, memref<64x120x1x1xf32>, index, index, index, memref<120x480x1x1xf32>, memref<64x480x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 120 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S209(%arg1, %arg2, %arg3, %arg4, %alloc_122, %alloc_128) : (index, index, index, index, memref<64x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S210(%arg1, %arg2, %arg3, %arg4, %alloc_209) : (index, index, index, index, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 120 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S211(%arg1, %arg2, %arg3, %arg4, %alloc_209, %arg5, %arg6, %arg7, %alloc_34, %alloc_122) : (index, index, index, index, memref<64x480x1x1xf32>, index, index, index, memref<480x120x1x1xf32>, memref<64x120x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_211 = memref.alloc() {alignment = 64 : i64} : memref<64x480x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S212(%arg1, %arg2, %arg3, %arg4, %alloc_211, %alloc_209) : (index, index, index, index, memref<64x480x1x1xf32>, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S213(%arg1, %arg2, %arg3, %arg4, %alloc_209, %alloc_211) : (index, index, index, index, memref<64x480x1x1xf32>, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_212 = memref.alloc() {alignment = 64 : i64} : memref<64x480x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S214(%arg1, %arg2, %arg3, %arg4, %alloc_212, %alloc_209, %alloc_108) : (index, index, index, index, memref<64x480x1x1xf32>, memref<64x480x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S215(%arg1, %arg2, %arg3, %arg4, %alloc_209, %alloc_212, %alloc_70) : (index, index, index, index, memref<64x480x1x1xf32>, memref<64x480x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 480 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S216(%arg1, %arg2, %arg3, %arg4, %alloc_197, %alloc_208, %alloc_209) : (index, index, index, index, memref<64x480x14x14xf32>, memref<64x480x14x14xf32>, memref<64x480x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_213 = memref.alloc() {alignment = 64 : i64} : memref<64x112x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S217(%arg1, %arg2, %arg3, %arg4, %alloc_213) : (index, index, index, index, memref<64x112x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_214 = memref.alloc() {alignment = 64 : i64} : memref<64x112x14x14xf32>
    memref.copy %alloc_213, %alloc_214 : memref<64x112x14x14xf32> to memref<64x112x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 480 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S218(%arg1, %arg2, %arg3, %arg4, %alloc_214, %arg5, %arg6, %arg7, %alloc_33, %alloc_197) : (index, index, index, index, memref<64x112x14x14xf32>, index, index, index, memref<112x480x1x1xf32>, memref<64x480x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_215 = memref.alloc() {alignment = 64 : i64} : memref<64x112x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S219(%arg1, %arg2, %arg3, %arg4, %alloc_215, %alloc_214) : (index, index, index, index, memref<64x112x14x14xf32>, memref<64x112x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_216 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    %alloc_217 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S220(%arg1, %arg2, %arg3, %arg4, %alloc_217) : (index, index, index, index, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_218 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    memref.copy %alloc_217, %alloc_218 : memref<64x672x14x14xf32> to memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 112 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S221(%arg1, %arg2, %arg3, %arg4, %alloc_218, %arg5, %arg6, %arg7, %alloc_32, %alloc_215) : (index, index, index, index, memref<64x672x14x14xf32>, index, index, index, memref<672x112x1x1xf32>, memref<64x112x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_219 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S222(%arg1, %arg2, %arg3, %arg4, %alloc_219, %alloc_218) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S223(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_219) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_220 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S224(%arg1, %arg2, %arg3, %arg4, %alloc_220, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S225(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_71, %alloc_220) : (index, index, index, index, memref<64x672x14x14xf32>, memref<f32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_221 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S226(%arg1, %arg2, %arg3, %arg4, %alloc_221, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S227(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_219, %alloc_221) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_222 = memref.alloc() {alignment = 64 : i64} : memref<64x672x16x16xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 16 {
          affine.for %arg4 = 0 to 16 {
            func.call @S228(%arg1, %arg2, %arg3, %arg4, %alloc_222) : (index, index, index, index, memref<64x672x16x16xf32>) -> ()
          }
        }
      }
    }
    %subview_223 = memref.subview %alloc_222[0, 0, 1, 1] [64, 672, 14, 14] [1, 1, 1, 1] : memref<64x672x16x16xf32> to memref<64x672x14x14xf32, strided<[172032, 256, 16, 1], offset: 17>>
    memref.copy %alloc_216, %subview_223 : memref<64x672x14x14xf32> to memref<64x672x14x14xf32, strided<[172032, 256, 16, 1], offset: 17>>
    %alloc_224 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    memref.copy %alloc_217, %alloc_224 : memref<64x672x14x14xf32> to memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 14 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 672 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S229(%arg1, %arg4, %arg2, %arg3, %alloc_224, %arg5, %arg6, %alloc_10, %alloc_222) : (index, index, index, index, memref<64x672x14x14xf32>, index, index, memref<672x3x3xf32>, memref<64x672x16x16xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_225 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S230(%arg1, %arg2, %arg3, %arg4, %alloc_225, %alloc_224) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_226 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S231(%arg1, %arg2, %arg3, %arg4, %alloc_226, %alloc_225) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S232(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_226) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_227 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S233(%arg1, %arg2, %arg3, %arg4, %alloc_227, %alloc_71, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<f32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S234(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_227) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_228 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S235(%arg1, %arg2, %arg3, %arg4, %alloc_228, %alloc_225, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_229 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    %alloc_230 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S236(%arg1, %arg2, %arg3, %arg4, %alloc_230) : (index, index, index, index, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_231 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    memref.copy %alloc_230, %alloc_231 : memref<64x672x1x1xf32> to memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 14 {
              affine.for %arg6 = 0 to 14 {
                func.call @S237(%arg1, %arg2, %arg3, %arg4, %alloc_231, %arg5, %arg6, %alloc_228) : (index, index, index, index, memref<64x672x1x1xf32>, index, index, memref<64x672x14x14xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S238(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_231) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_232 = memref.alloc() {alignment = 64 : i64} : memref<64x168x1x1xf32>
    %alloc_233 = memref.alloc() {alignment = 64 : i64} : memref<64x168x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 168 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S239(%arg1, %arg2, %arg3, %arg4, %alloc_233) : (index, index, index, index, memref<64x168x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_234 = memref.alloc() {alignment = 64 : i64} : memref<64x168x1x1xf32>
    memref.copy %alloc_233, %alloc_234 : memref<64x168x1x1xf32> to memref<64x168x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 168 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 672 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S240(%arg1, %arg2, %arg3, %arg4, %alloc_234, %arg5, %arg6, %arg7, %alloc_31, %alloc_229) : (index, index, index, index, memref<64x168x1x1xf32>, index, index, index, memref<168x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 168 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S241(%arg1, %arg2, %arg3, %arg4, %alloc_232, %alloc_234) : (index, index, index, index, memref<64x168x1x1xf32>, memref<64x168x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_235 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S242(%arg1, %arg2, %arg3, %arg4, %alloc_235) : (index, index, index, index, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_236 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    memref.copy %alloc_235, %alloc_236 : memref<64x672x1x1xf32> to memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 168 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S243(%arg1, %arg2, %arg3, %arg4, %alloc_236, %arg5, %arg6, %arg7, %alloc_30, %alloc_232) : (index, index, index, index, memref<64x672x1x1xf32>, index, index, index, memref<672x168x1x1xf32>, memref<64x168x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_237 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S244(%arg1, %arg2, %arg3, %arg4, %alloc_237, %alloc_236) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S245(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_237) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_238 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S246(%arg1, %arg2, %arg3, %arg4, %alloc_238, %alloc_229, %alloc_108) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S247(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_238, %alloc_70) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S248(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_228, %alloc_229) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 672 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S249(%arg1, %arg2, %arg3, %arg4, %alloc_213, %arg5, %arg6, %arg7, %alloc_29, %alloc_216) : (index, index, index, index, memref<64x112x14x14xf32>, index, index, index, memref<112x672x1x1xf32>, memref<64x672x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_239 = memref.alloc() {alignment = 64 : i64} : memref<64x112x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S250(%arg1, %arg2, %arg3, %arg4, %alloc_239, %alloc_213) : (index, index, index, index, memref<64x112x14x14xf32>, memref<64x112x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 112 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S251(%arg1, %arg2, %arg3, %arg4, %alloc_213, %alloc_215, %alloc_239) : (index, index, index, index, memref<64x112x14x14xf32>, memref<64x112x14x14xf32>, memref<64x112x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            affine.for %arg5 = 0 to 112 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S252(%arg1, %arg2, %arg3, %arg4, %alloc_217, %arg5, %arg6, %arg7, %alloc_28, %alloc_213) : (index, index, index, index, memref<64x672x14x14xf32>, index, index, index, memref<672x112x1x1xf32>, memref<64x112x14x14xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_240 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S253(%arg1, %arg2, %arg3, %arg4, %alloc_240, %alloc_217) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S254(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_240) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_241 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S255(%arg1, %arg2, %arg3, %arg4, %alloc_241, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S256(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_71, %alloc_241) : (index, index, index, index, memref<64x672x14x14xf32>, memref<f32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_242 = memref.alloc() {alignment = 64 : i64} : memref<64x672x14x14xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S257(%arg1, %arg2, %arg3, %arg4, %alloc_242, %alloc_216) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 14 {
          affine.for %arg4 = 0 to 14 {
            func.call @S258(%arg1, %arg2, %arg3, %arg4, %alloc_216, %alloc_240, %alloc_242) : (index, index, index, index, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>, memref<64x672x14x14xf32>) -> ()
          }
        }
      }
    }
    %alloc_243 = memref.alloc() {alignment = 64 : i64} : memref<64x672x18x18xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 18 {
          affine.for %arg4 = 0 to 18 {
            func.call @S259(%arg1, %arg2, %arg3, %arg4, %alloc_243) : (index, index, index, index, memref<64x672x18x18xf32>) -> ()
          }
        }
      }
    }
    %subview_244 = memref.subview %alloc_243[0, 0, 2, 2] [64, 672, 14, 14] [1, 1, 1, 1] : memref<64x672x18x18xf32> to memref<64x672x14x14xf32, strided<[217728, 324, 18, 1], offset: 38>>
    memref.copy %alloc_216, %subview_244 : memref<64x672x14x14xf32> to memref<64x672x14x14xf32, strided<[217728, 324, 18, 1], offset: 38>>
    %alloc_245 = memref.alloc() {alignment = 64 : i64} : memref<64x672x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S260(%arg1, %arg2, %arg3, %arg4, %alloc_245) : (index, index, index, index, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 672 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S261(%arg1, %arg4, %arg2, %arg3, %alloc_245, %arg5, %arg6, %alloc_11, %alloc_243) : (index, index, index, index, memref<64x672x7x7xf32>, index, index, memref<672x5x5xf32>, memref<64x672x18x18xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_246 = memref.alloc() {alignment = 64 : i64} : memref<64x672x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S262(%arg1, %arg2, %arg3, %arg4, %alloc_246, %alloc_245) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_247 = memref.alloc() {alignment = 64 : i64} : memref<64x672x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S263(%arg1, %arg2, %arg3, %arg4, %alloc_247, %alloc_246) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S264(%arg1, %arg2, %arg3, %arg4, %alloc_245, %alloc_247) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_248 = memref.alloc() {alignment = 64 : i64} : memref<64x672x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S265(%arg1, %arg2, %arg3, %arg4, %alloc_248, %alloc_71, %alloc_245) : (index, index, index, index, memref<64x672x7x7xf32>, memref<f32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S266(%arg1, %arg2, %arg3, %arg4, %alloc_245, %alloc_248) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_249 = memref.alloc() {alignment = 64 : i64} : memref<64x672x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S267(%arg1, %arg2, %arg3, %arg4, %alloc_249, %alloc_246, %alloc_245) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 7 {
              affine.for %arg6 = 0 to 7 {
                func.call @S268(%arg1, %arg2, %arg3, %arg4, %alloc_230, %arg5, %arg6, %alloc_249) : (index, index, index, index, memref<64x672x1x1xf32>, index, index, memref<64x672x7x7xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S269(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_230) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 168 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 672 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S270(%arg1, %arg2, %arg3, %arg4, %alloc_233, %arg5, %arg6, %arg7, %alloc_27, %alloc_229) : (index, index, index, index, memref<64x168x1x1xf32>, index, index, index, memref<168x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 168 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S271(%arg1, %arg2, %arg3, %arg4, %alloc_232, %alloc_233) : (index, index, index, index, memref<64x168x1x1xf32>, memref<64x168x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 168 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S272(%arg1, %arg2, %arg3, %arg4, %alloc_235, %arg5, %arg6, %arg7, %alloc_26, %alloc_232) : (index, index, index, index, memref<64x672x1x1xf32>, index, index, index, memref<672x168x1x1xf32>, memref<64x168x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_250 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S273(%arg1, %arg2, %arg3, %arg4, %alloc_250, %alloc_235) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S274(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_250) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_251 = memref.alloc() {alignment = 64 : i64} : memref<64x672x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S275(%arg1, %arg2, %arg3, %arg4, %alloc_251, %alloc_229, %alloc_108) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S276(%arg1, %arg2, %arg3, %arg4, %alloc_229, %alloc_251, %alloc_70) : (index, index, index, index, memref<64x672x1x1xf32>, memref<64x672x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 672 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S277(%arg1, %arg2, %arg3, %arg4, %alloc_245, %alloc_249, %alloc_229) : (index, index, index, index, memref<64x672x7x7xf32>, memref<64x672x7x7xf32>, memref<64x672x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_252 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S278(%arg1, %arg2, %arg3, %arg4, %alloc_252) : (index, index, index, index, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_253 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    memref.copy %alloc_252, %alloc_253 : memref<64x160x7x7xf32> to memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 672 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S279(%arg1, %arg2, %arg3, %arg4, %alloc_253, %arg5, %arg6, %arg7, %alloc_25, %alloc_245) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x672x1x1xf32>, memref<64x672x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_254 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S280(%arg1, %arg2, %arg3, %arg4, %alloc_254, %alloc_253) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_255 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    %alloc_256 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S281(%arg1, %arg2, %arg3, %arg4, %alloc_256) : (index, index, index, index, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_257 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_256, %alloc_257 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c899999_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S282(%arg1, %arg2, %arg3, %arg4, %alloc_257, %arg5, %arg6, %arg7, %alloc_24, %alloc_254) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_258 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S283(%arg1, %arg2, %arg3, %arg4, %alloc_258, %alloc_257) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S284(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_258) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_259 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S285(%arg1, %arg2, %arg3, %arg4, %alloc_259, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S286(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_71, %alloc_259) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_260 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S287(%arg1, %arg2, %arg3, %arg4, %alloc_260, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S288(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_258, %alloc_260) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_261 = memref.alloc() {alignment = 64 : i64} : memref<64x960x11x11xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 11 {
          affine.for %arg4 = 0 to 11 {
            func.call @S289(%arg1, %arg2, %arg3, %arg4, %alloc_261) : (index, index, index, index, memref<64x960x11x11xf32>) -> ()
          }
        }
      }
    }
    %subview_262 = memref.subview %alloc_261[0, 0, 2, 2] [64, 960, 7, 7] [1, 1, 1, 1] : memref<64x960x11x11xf32> to memref<64x960x7x7xf32, strided<[116160, 121, 11, 1], offset: 24>>
    memref.copy %alloc_255, %subview_262 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32, strided<[116160, 121, 11, 1], offset: 24>>
    %alloc_263 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_256, %alloc_263 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 960 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S290(%arg1, %arg4, %arg2, %arg3, %alloc_263, %arg5, %arg6, %alloc_12, %alloc_261) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, memref<960x5x5xf32>, memref<64x960x11x11xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_264 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S291(%arg1, %arg2, %arg3, %arg4, %alloc_264, %alloc_263) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_265 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S292(%arg1, %arg2, %arg3, %arg4, %alloc_265, %alloc_264) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S293(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_265) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_266 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S294(%arg1, %arg2, %arg3, %arg4, %alloc_266, %alloc_71, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S295(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_266) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_267 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S296(%arg1, %arg2, %arg3, %arg4, %alloc_267, %alloc_264, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_268 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    %alloc_269 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S297(%arg1, %arg2, %arg3, %arg4, %alloc_269) : (index, index, index, index, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_270 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    memref.copy %alloc_269, %alloc_270 : memref<64x960x1x1xf32> to memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 7 {
              affine.for %arg6 = 0 to 7 {
                func.call @S298(%arg1, %arg2, %arg3, %arg4, %alloc_270, %arg5, %arg6, %alloc_267) : (index, index, index, index, memref<64x960x1x1xf32>, index, index, memref<64x960x7x7xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S299(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_270) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_271 = memref.alloc() {alignment = 64 : i64} : memref<64x240x1x1xf32>
    %alloc_272 = memref.alloc() {alignment = 64 : i64} : memref<64x240x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S300(%arg1, %arg2, %arg3, %arg4, %alloc_272) : (index, index, index, index, memref<64x240x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_273 = memref.alloc() {alignment = 64 : i64} : memref<64x240x1x1xf32>
    memref.copy %alloc_272, %alloc_273 : memref<64x240x1x1xf32> to memref<64x240x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S301(%arg1, %arg2, %arg3, %arg4, %alloc_273, %arg5, %arg6, %arg7, %alloc_23, %alloc_268) : (index, index, index, index, memref<64x240x1x1xf32>, index, index, index, memref<240x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S302(%arg1, %arg2, %arg3, %arg4, %alloc_271, %alloc_273) : (index, index, index, index, memref<64x240x1x1xf32>, memref<64x240x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_274 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S303(%arg1, %arg2, %arg3, %arg4, %alloc_274) : (index, index, index, index, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_275 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    memref.copy %alloc_274, %alloc_275 : memref<64x960x1x1xf32> to memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 240 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S304(%arg1, %arg2, %arg3, %arg4, %alloc_275, %arg5, %arg6, %arg7, %alloc_22, %alloc_271) : (index, index, index, index, memref<64x960x1x1xf32>, index, index, index, memref<960x240x1x1xf32>, memref<64x240x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_276 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S305(%arg1, %arg2, %arg3, %arg4, %alloc_276, %alloc_275) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S306(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_276) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_277 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S307(%arg1, %arg2, %arg3, %arg4, %alloc_277, %alloc_268, %alloc_108) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S308(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_277, %alloc_70) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S309(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_267, %alloc_268) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_278 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    memref.copy %alloc_252, %alloc_278 : memref<64x160x7x7xf32> to memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S310(%arg1, %arg2, %arg3, %arg4, %alloc_278, %arg5, %arg6, %arg7, %alloc_21, %alloc_255) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x960x1x1xf32>, memref<64x960x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_279 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S311(%arg1, %arg2, %arg3, %arg4, %alloc_279, %alloc_278) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_280 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S312(%arg1, %arg2, %arg3, %arg4, %alloc_280, %alloc_254, %alloc_279) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_281 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_256, %alloc_281 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S313(%arg1, %arg2, %arg3, %arg4, %alloc_281, %arg5, %arg6, %arg7, %alloc_20, %alloc_280) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_282 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S314(%arg1, %arg2, %arg3, %arg4, %alloc_282, %alloc_281) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S315(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_282) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_283 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S316(%arg1, %arg2, %arg3, %arg4, %alloc_283, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S317(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_71, %alloc_283) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_284 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S318(%arg1, %arg2, %arg3, %arg4, %alloc_284, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S319(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_282, %alloc_284) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_285 = memref.alloc() {alignment = 64 : i64} : memref<64x960x11x11xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 11 {
          affine.for %arg4 = 0 to 11 {
            func.call @S320(%arg1, %arg2, %arg3, %arg4, %alloc_285) : (index, index, index, index, memref<64x960x11x11xf32>) -> ()
          }
        }
      }
    }
    %subview_286 = memref.subview %alloc_285[0, 0, 2, 2] [64, 960, 7, 7] [1, 1, 1, 1] : memref<64x960x11x11xf32> to memref<64x960x7x7xf32, strided<[116160, 121, 11, 1], offset: 24>>
    memref.copy %alloc_255, %subview_286 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32, strided<[116160, 121, 11, 1], offset: 24>>
    %alloc_287 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    memref.copy %alloc_256, %alloc_287 : memref<64x960x7x7xf32> to memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 7 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 960 {
            affine.for %arg5 = 0 to 5 {
              affine.for %arg6 = 0 to 5 {
                func.call @S321(%arg1, %arg4, %arg2, %arg3, %alloc_287, %arg5, %arg6, %alloc_13, %alloc_285) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, memref<960x5x5xf32>, memref<64x960x11x11xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_288 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S322(%arg1, %arg2, %arg3, %arg4, %alloc_288, %alloc_287) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_289 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S323(%arg1, %arg2, %arg3, %arg4, %alloc_289, %alloc_288) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S324(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_289) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_290 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S325(%arg1, %arg2, %arg3, %arg4, %alloc_290, %alloc_71, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S326(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_290) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_291 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S327(%arg1, %arg2, %arg3, %arg4, %alloc_291, %alloc_288, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_292 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    memref.copy %alloc_269, %alloc_292 : memref<64x960x1x1xf32> to memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 7 {
              affine.for %arg6 = 0 to 7 {
                func.call @S328(%arg1, %arg2, %arg3, %arg4, %alloc_292, %arg5, %arg6, %alloc_291) : (index, index, index, index, memref<64x960x1x1xf32>, index, index, memref<64x960x7x7xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S329(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_292) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 960 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S330(%arg1, %arg2, %arg3, %arg4, %alloc_272, %arg5, %arg6, %arg7, %alloc_19, %alloc_268) : (index, index, index, index, memref<64x240x1x1xf32>, index, index, index, memref<240x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 240 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S331(%arg1, %arg2, %arg3, %arg4, %alloc_271, %alloc_272) : (index, index, index, index, memref<64x240x1x1xf32>, memref<64x240x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 240 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S332(%arg1, %arg2, %arg3, %arg4, %alloc_274, %arg5, %arg6, %arg7, %alloc_18, %alloc_271) : (index, index, index, index, memref<64x960x1x1xf32>, index, index, index, memref<960x240x1x1xf32>, memref<64x240x1x1xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_293 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S333(%arg1, %arg2, %arg3, %arg4, %alloc_293, %alloc_274) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S334(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_293) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_294 = memref.alloc() {alignment = 64 : i64} : memref<64x960x1x1xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S335(%arg1, %arg2, %arg3, %arg4, %alloc_294, %alloc_268, %alloc_108) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S336(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_294, %alloc_70) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>, memref<f32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S337(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_291, %alloc_268) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x1x1xf32>) -> ()
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
                  func.call @S338(%arg1, %arg2, %arg3, %arg4, %alloc_252, %arg5, %arg6, %arg7, %alloc_17, %alloc_255) : (index, index, index, index, memref<64x160x7x7xf32>, index, index, index, memref<160x960x1x1xf32>, memref<64x960x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_295 = memref.alloc() {alignment = 64 : i64} : memref<64x160x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S339(%arg1, %arg2, %arg3, %arg4, %alloc_295, %alloc_252) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 160 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S340(%arg1, %arg2, %arg3, %arg4, %alloc_252, %alloc_280, %alloc_295) : (index, index, index, index, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>, memref<64x160x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            affine.for %arg5 = 0 to 160 {
              affine.for %arg6 = 0 to 1 {
                affine.for %arg7 = 0 to 1 {
                  func.call @S341(%arg1, %arg2, %arg3, %arg4, %alloc_256, %arg5, %arg6, %arg7, %alloc_16, %alloc_252) : (index, index, index, index, memref<64x960x7x7xf32>, index, index, index, memref<960x160x1x1xf32>, memref<64x160x7x7xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    %alloc_296 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S342(%arg1, %arg2, %arg3, %arg4, %alloc_296, %alloc_256) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S343(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_296) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_297 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S344(%arg1, %arg2, %arg3, %arg4, %alloc_297, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S345(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_71, %alloc_297) : (index, index, index, index, memref<64x960x7x7xf32>, memref<f32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    %alloc_298 = memref.alloc() {alignment = 64 : i64} : memref<64x960x7x7xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S346(%arg1, %arg2, %arg3, %arg4, %alloc_298, %alloc_255) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 7 {
          affine.for %arg4 = 0 to 7 {
            func.call @S347(%arg1, %arg2, %arg3, %arg4, %alloc_255, %alloc_296, %alloc_298) : (index, index, index, index, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>, memref<64x960x7x7xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            affine.for %arg5 = 0 to 7 {
              affine.for %arg6 = 0 to 7 {
                func.call @S348(%arg1, %arg2, %arg3, %arg4, %alloc_269, %arg5, %arg6, %alloc_255) : (index, index, index, index, memref<64x960x1x1xf32>, index, index, memref<64x960x7x7xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        affine.for %arg3 = 0 to 1 {
          affine.for %arg4 = 0 to 1 {
            func.call @S349(%arg1, %arg2, %arg3, %arg4, %alloc_268, %alloc_269) : (index, index, index, index, memref<64x960x1x1xf32>, memref<64x960x1x1xf32>) -> ()
          }
        }
      }
    }
    %alloc_299 = memref.alloc() : memref<64x960xf32>
    %collapse_shape = memref.collapse_shape %alloc_268 [[0], [1, 2, 3]] : memref<64x960x1x1xf32> into memref<64x960xf32>
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 960 {
        %0 = memref.load %collapse_shape[%arg1, %arg2] : memref<64x960xf32>
        memref.store %0, %alloc_299[%arg1, %arg2] : memref<64x960xf32>
      }
    }
    %alloc_300 = memref.alloc() {alignment = 64 : i64} : memref<960x1280xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 1280 {
      affine.for %arg2 = 0 to 960 {
        func.call @S350(%arg2, %arg1, %alloc_300, %alloc_15) : (index, index, memref<960x1280xf32>, memref<1280x960xf32>) -> ()
      }
    }
    %alloc_301 = memref.alloc() {alignment = 64 : i64} : memref<64x1280xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S351(%arg1, %arg2, %alloc_301) : (index, index, memref<64x1280xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        affine.for %arg3 = 0 to 960 {
          func.call @S352(%arg1, %arg2, %alloc_301, %arg3, %alloc_300, %alloc_299) : (index, index, memref<64x1280xf32>, index, memref<960x1280xf32>, memref<64x960xf32>) -> ()
        }
      }
    }
    %alloc_302 = memref.alloc() {alignment = 64 : i64} : memref<64x1280xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S353(%arg1, %arg2, %alloc_302, %alloc_301) : (index, index, memref<64x1280xf32>, memref<64x1280xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S354(%arg1, %arg2, %alloc_301, %alloc_302) : (index, index, memref<64x1280xf32>, memref<64x1280xf32>) -> ()
      }
    }
    %alloc_303 = memref.alloc() {alignment = 64 : i64} : memref<64x1280xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S355(%arg1, %arg2, %alloc_303, %alloc_301) : (index, index, memref<64x1280xf32>, memref<64x1280xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S356(%arg1, %arg2, %alloc_301, %alloc_71, %alloc_303) : (index, index, memref<64x1280xf32>, memref<f32>, memref<64x1280xf32>) -> ()
      }
    }
    %alloc_304 = memref.alloc() {alignment = 64 : i64} : memref<64x1280xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S357(%arg1, %arg2, %alloc_304, %alloc_301) : (index, index, memref<64x1280xf32>, memref<64x1280xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S358(%arg1, %arg2, %alloc_301, %alloc_302, %alloc_304) : (index, index, memref<64x1280xf32>, memref<64x1280xf32>, memref<64x1280xf32>) -> ()
      }
    }
    %alloc_305 = memref.alloc() {alignment = 64 : i64} : memref<1280x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 1000 {
      affine.for %arg2 = 0 to 1280 {
        func.call @S359(%arg2, %arg1, %alloc_305, %alloc_14) : (index, index, memref<1280x1000xf32>, memref<1000x1280xf32>) -> ()
      }
    }
    %alloc_306 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    %alloc_307 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S360(%arg1, %arg2, %alloc_307) : (index, index, memref<64x1000xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        affine.for %arg3 = 0 to 1280 {
          func.call @S361(%arg1, %arg2, %alloc_307, %arg3, %alloc_305, %alloc_301) : (index, index, memref<64x1000xf32>, index, memref<1280x1000xf32>, memref<64x1280xf32>) -> ()
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S362(%arg1, %arg2, %alloc_306, %alloc_307) : (index, index, memref<64x1000xf32>, memref<64x1000xf32>) -> ()
      }
    }
    memref.dealloc %alloc_64 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_65 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_66 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_67 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_68 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_69 : memref<i64>
    memref.dealloc %alloc_70 : memref<f32>
    memref.dealloc %alloc_71 : memref<f32>
    memref.dealloc %alloc_72 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_73 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_76 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_77 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_78 : memref<64x16x112x112xf32>
    memref.dealloc %alloc_79 : memref<64x64x112x112xf32>
    memref.dealloc %alloc_80 : memref<64x64x112x112xf32>
    memref.dealloc %alloc_83 : memref<64x64x56x56xf32>
    memref.dealloc %alloc_84 : memref<64x64x56x56xf32>
    memref.dealloc %alloc_85 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_86 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_87 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_88 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_89 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_90 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_91 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_94 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_95 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_96 : memref<64x24x56x56xf32>
    memref.dealloc %alloc_97 : memref<64x72x56x56xf32>
    memref.dealloc %alloc_100 : memref<64x72x28x28xf32>
    memref.dealloc %alloc_101 : memref<64x72x28x28xf32>
    memref.dealloc %alloc_102 : memref<64x72x28x28xf32>
    memref.dealloc %alloc_103 : memref<64x72x1x1xf32>
    memref.dealloc %alloc_104 : memref<64x72x1x1xf32>
    memref.dealloc %alloc_105 : memref<64x24x1x1xf32>
    memref.dealloc %alloc_106 : memref<64x24x1x1xf32>
    memref.dealloc %alloc_107 : memref<64x72x1x1xf32>
    memref.dealloc %alloc_108 : memref<f32>
    memref.dealloc %alloc_109 : memref<64x72x1x1xf32>
    memref.dealloc %alloc_110 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_111 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_112 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_113 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_114 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_115 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_116 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_119 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_120 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_121 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_122 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_123 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_124 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_125 : memref<64x32x1x1xf32>
    memref.dealloc %alloc_126 : memref<64x32x1x1xf32>
    memref.dealloc %alloc_127 : memref<64x32x1x1xf32>
    memref.dealloc %alloc_128 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_129 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_130 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_131 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_132 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_133 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_134 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_135 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_136 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_139 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_140 : memref<64x120x28x28xf32>
    memref.dealloc %alloc_141 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_142 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_143 : memref<64x120x1x1xf32>
    memref.dealloc %alloc_144 : memref<64x40x28x28xf32>
    memref.dealloc %alloc_145 : memref<64x240x28x28xf32>
    memref.dealloc %alloc_146 : memref<64x240x28x28xf32>
    memref.dealloc %alloc_147 : memref<64x240x28x28xf32>
    memref.dealloc %alloc_148 : memref<64x240x28x28xf32>
    memref.dealloc %alloc_151 : memref<64x240x14x14xf32>
    memref.dealloc %alloc_152 : memref<64x240x14x14xf32>
    memref.dealloc %alloc_153 : memref<64x240x14x14xf32>
    memref.dealloc %alloc_154 : memref<64x240x14x14xf32>
    memref.dealloc %alloc_155 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_156 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_157 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_158 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_159 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_160 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_161 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_162 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_163 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_164 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_167 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_168 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_169 : memref<64x200x14x14xf32>
    memref.dealloc %alloc_170 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_171 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_172 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_173 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_174 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_175 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_176 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_177 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_180 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_181 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_182 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_183 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_184 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_185 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_186 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_187 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_188 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_189 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_190 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_193 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_194 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_195 : memref<64x184x14x14xf32>
    memref.dealloc %alloc_196 : memref<64x80x14x14xf32>
    memref.dealloc %alloc_197 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_198 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_199 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_200 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_201 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_202 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_205 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_206 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_207 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_208 : memref<64x480x14x14xf32>
    memref.dealloc %alloc_209 : memref<64x480x1x1xf32>
    memref.dealloc %alloc_210 : memref<64x480x1x1xf32>
    memref.dealloc %alloc_211 : memref<64x480x1x1xf32>
    memref.dealloc %alloc_212 : memref<64x480x1x1xf32>
    memref.dealloc %alloc_213 : memref<64x112x14x14xf32>
    memref.dealloc %alloc_214 : memref<64x112x14x14xf32>
    memref.dealloc %alloc_215 : memref<64x112x14x14xf32>
    memref.dealloc %alloc_216 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_217 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_218 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_219 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_220 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_221 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_224 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_225 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_226 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_227 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_228 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_229 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_230 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_231 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_232 : memref<64x168x1x1xf32>
    memref.dealloc %alloc_233 : memref<64x168x1x1xf32>
    memref.dealloc %alloc_234 : memref<64x168x1x1xf32>
    memref.dealloc %alloc_235 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_236 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_237 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_238 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_239 : memref<64x112x14x14xf32>
    memref.dealloc %alloc_240 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_241 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_242 : memref<64x672x14x14xf32>
    memref.dealloc %alloc_245 : memref<64x672x7x7xf32>
    memref.dealloc %alloc_246 : memref<64x672x7x7xf32>
    memref.dealloc %alloc_247 : memref<64x672x7x7xf32>
    memref.dealloc %alloc_248 : memref<64x672x7x7xf32>
    memref.dealloc %alloc_249 : memref<64x672x7x7xf32>
    memref.dealloc %alloc_250 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_251 : memref<64x672x1x1xf32>
    memref.dealloc %alloc_252 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_253 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_254 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_255 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_256 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_257 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_258 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_259 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_260 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_263 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_264 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_265 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_266 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_267 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_268 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_269 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_270 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_271 : memref<64x240x1x1xf32>
    memref.dealloc %alloc_272 : memref<64x240x1x1xf32>
    memref.dealloc %alloc_273 : memref<64x240x1x1xf32>
    memref.dealloc %alloc_274 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_275 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_276 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_277 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_278 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_279 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_280 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_281 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_282 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_283 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_284 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_287 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_288 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_289 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_290 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_291 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_292 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_293 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_294 : memref<64x960x1x1xf32>
    memref.dealloc %alloc_295 : memref<64x160x7x7xf32>
    memref.dealloc %alloc_296 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_297 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_298 : memref<64x960x7x7xf32>
    memref.dealloc %alloc_300 : memref<960x1280xf32>
    memref.dealloc %alloc_301 : memref<64x1280xf32>
    memref.dealloc %alloc_302 : memref<64x1280xf32>
    memref.dealloc %alloc_303 : memref<64x1280xf32>
    memref.dealloc %alloc_304 : memref<64x1280xf32>
    memref.dealloc %alloc_305 : memref<1280x1000xf32>
    memref.dealloc %alloc_306 : memref<64x1000xf32>
    memref.dealloc %alloc_307 : memref<64x1000xf32>
    memref.dealloc %alloc_63 : memref<64x3x226x226xf32>
    memref.dealloc %alloc_74 : memref<64x16x114x114xf32>
    memref.dealloc %alloc_81 : memref<64x64x114x114xf32>
    memref.dealloc %alloc_92 : memref<64x72x58x58xf32>
    memref.dealloc %alloc_98 : memref<64x72x60x60xf32>
    memref.dealloc %alloc_117 : memref<64x120x32x32xf32>
    memref.dealloc %alloc_137 : memref<64x120x32x32xf32>
    memref.dealloc %alloc_149 : memref<64x240x30x30xf32>
    memref.dealloc %alloc_165 : memref<64x200x16x16xf32>
    memref.dealloc %alloc_178 : memref<64x184x16x16xf32>
    memref.dealloc %alloc_191 : memref<64x184x16x16xf32>
    memref.dealloc %alloc_203 : memref<64x480x16x16xf32>
    memref.dealloc %alloc_222 : memref<64x672x16x16xf32>
    memref.dealloc %alloc_243 : memref<64x672x18x18xf32>
    memref.dealloc %alloc_261 : memref<64x960x11x11xf32>
    memref.dealloc %alloc_285 : memref<64x960x11x11xf32>
    return %alloc_306 : memref<64x1000xf32>
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

