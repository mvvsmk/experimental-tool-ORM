module attributes {torch.debug_module_name = "AlexNet"} {
  func.func private @set_frequency_caps(i64, i64)
  func.func private @S0(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x3x228x228xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x3x228x228xf32>
    return
  }
  func.func private @S1(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x55x55xf32>, %arg5: memref<64xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg5[symbol(%arg1)] : memref<64xf32>
    affine.store %0, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x55x55xf32>
    return
  }
  func.func private @S2(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x55x55xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<64x3x11x11xf32>, %arg9: memref<64x3x228x228xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x55x55xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) * 4 + symbol(%arg6), symbol(%arg3) * 4 + symbol(%arg7)] : memref<64x3x228x228xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<64x3x11x11xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x55x55xf32>
    return
  }
  func.func private @S3(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x55x55xf32>, %arg5: memref<64x64x55x55xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x55x55xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x55x55xf32>
    return
  }
  func.func private @S4(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x27x27xf32>) attributes {scop.stmt} {
    %cst = arith.constant -3.40282347E+38 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x27x27xf32>
    return
  }
  func.func private @S5(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x27x27xf32>, %arg5: index, %arg6: index, %arg7: memref<64x64x55x55xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x27x27xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x64x55x55xf32>
    %2 = arith.maximumf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x27x27xf32>
    return
  }
  func.func private @S6(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x64x31x31xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x64x31x31xf32>
    return
  }
  func.func private @S7(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x27x27xf32>, %arg5: memref<192xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg5[symbol(%arg1)] : memref<192xf32>
    affine.store %0, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x27x27xf32>
    return
  }
  func.func private @S8(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x27x27xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<192x64x5x5xf32>, %arg9: memref<64x64x31x31xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x27x27xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x64x31x31xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<192x64x5x5xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x27x27xf32>
    return
  }
  func.func private @S9(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x27x27xf32>, %arg5: memref<64x192x27x27xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x27x27xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x27x27xf32>
    return
  }
  func.func private @S10(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x13x13xf32>) attributes {scop.stmt} {
    %cst = arith.constant -3.40282347E+38 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x13x13xf32>
    return
  }
  func.func private @S11(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x13x13xf32>, %arg5: index, %arg6: index, %arg7: memref<64x192x27x27xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x13x13xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x192x27x27xf32>
    %2 = arith.maximumf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x13x13xf32>
    return
  }
  func.func private @S12(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x192x15x15xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x192x15x15xf32>
    return
  }
  func.func private @S13(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x13x13xf32>, %arg5: memref<384xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg5[symbol(%arg1)] : memref<384xf32>
    affine.store %0, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x13x13xf32>
    return
  }
  func.func private @S14(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x13x13xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<384x192x3x3xf32>, %arg9: memref<64x192x15x15xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x13x13xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x192x15x15xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<384x192x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x13x13xf32>
    return
  }
  func.func private @S15(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x13x13xf32>, %arg5: memref<64x384x13x13xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x13x13xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x13x13xf32>
    return
  }
  func.func private @S16(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x384x15x15xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x384x15x15xf32>
    return
  }
  func.func private @S17(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: memref<256xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg5[symbol(%arg1)] : memref<256xf32>
    affine.store %0, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S18(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<256x384x3x3xf32>, %arg9: memref<64x384x15x15xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x384x15x15xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<256x384x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S19(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: memref<64x256x13x13xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S20(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x15x15xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x15x15xf32>
    return
  }
  func.func private @S21(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: memref<256xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg5[symbol(%arg1)] : memref<256xf32>
    affine.store %0, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S22(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: index, %arg6: index, %arg7: index, %arg8: memref<256x256x3x3xf32>, %arg9: memref<64x256x15x15xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    %1 = affine.load %arg9[symbol(%arg0), symbol(%arg5), symbol(%arg2) + symbol(%arg6), symbol(%arg3) + symbol(%arg7)] : memref<64x256x15x15xf32>
    %2 = affine.load %arg8[symbol(%arg1), symbol(%arg5), symbol(%arg6), symbol(%arg7)] : memref<256x256x3x3xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S23(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x13x13xf32>, %arg5: memref<64x256x13x13xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg5[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x13x13xf32>
    return
  }
  func.func private @S24(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x6x6xf32>) attributes {scop.stmt} {
    %cst = arith.constant -3.40282347E+38 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    return
  }
  func.func private @S25(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x6x6xf32>, %arg5: index, %arg6: index, %arg7: memref<64x256x13x13xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) * 2 + symbol(%arg5), symbol(%arg3) * 2 + symbol(%arg6)] : memref<64x256x13x13xf32>
    %2 = arith.maximumf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    return
  }
  func.func private @S26(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x6x6xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    return
  }
  func.func private @S27(%arg0: index, %arg1: index, %arg2: index, %arg3: index, %arg4: memref<64x256x6x6xf32>, %arg5: index, %arg6: index, %arg7: memref<64x256x6x6xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    %1 = affine.load %arg7[symbol(%arg0), symbol(%arg1), symbol(%arg2) + symbol(%arg5), symbol(%arg3) + symbol(%arg6)] : memref<64x256x6x6xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg4[symbol(%arg0), symbol(%arg1), symbol(%arg2), symbol(%arg3)] : memref<64x256x6x6xf32>
    return
  }
  func.func private @S28(%arg0: index, %arg1: index, %arg2: memref<9216x4096xf32>, %arg3: memref<4096x9216xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<4096x9216xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<9216x4096xf32>
    return
  }
  func.func private @S29(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S30(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: index, %arg4: memref<9216x4096xf32>, %arg5: memref<64x9216xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x9216xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<9216x4096xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S31(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: memref<4096xf32>, %arg4: memref<64x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = affine.load %arg3[symbol(%arg1)] : memref<4096xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S32(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: memref<64x4096xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S33(%arg0: index, %arg1: index, %arg2: memref<4096x4096xf32>, %arg3: memref<4096x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<4096x4096xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<4096x4096xf32>
    return
  }
  func.func private @S34(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: index, %arg4: memref<4096x4096xf32>, %arg5: memref<64x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x4096xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<4096x4096xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S35(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: memref<4096xf32>, %arg4: memref<64x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = affine.load %arg3[symbol(%arg1)] : memref<4096xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S36(%arg0: index, %arg1: index, %arg2: memref<64x4096xf32>, %arg3: memref<64x4096xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    %0 = affine.load %arg3[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    %1 = arith.cmpf ugt, %0, %cst : f32
    %2 = arith.select %1, %0, %cst : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x4096xf32>
    return
  }
  func.func private @S37(%arg0: index, %arg1: index, %arg2: memref<4096x1000xf32>, %arg3: memref<1000x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg3[symbol(%arg1), symbol(%arg0)] : memref<1000x4096xf32>
    affine.store %0, %arg2[symbol(%arg0), symbol(%arg1)] : memref<4096x1000xf32>
    return
  }
  func.func private @S38(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>) attributes {scop.stmt} {
    %cst = arith.constant 0.000000e+00 : f32
    affine.store %cst, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S39(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: index, %arg4: memref<4096x1000xf32>, %arg5: memref<64x4096xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = affine.load %arg5[symbol(%arg0), symbol(%arg3)] : memref<64x4096xf32>
    %2 = affine.load %arg4[symbol(%arg3), symbol(%arg1)] : memref<4096x1000xf32>
    %3 = arith.mulf %1, %2 : f32
    %4 = arith.addf %0, %3 : f32
    affine.store %4, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func private @S40(%arg0: index, %arg1: index, %arg2: memref<64x1000xf32>, %arg3: memref<1000xf32>, %arg4: memref<64x1000xf32>) attributes {scop.stmt} {
    %0 = affine.load %arg4[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    %1 = affine.load %arg3[symbol(%arg1)] : memref<1000xf32>
    %2 = arith.addf %0, %1 : f32
    affine.store %2, %arg2[symbol(%arg0), symbol(%arg1)] : memref<64x1000xf32>
    return
  }
  func.func @forward(%arg0: memref<64x3x224x224xf32>) -> memref<64x1000xf32> attributes {L1 = 20828736376 : i64, L2 = 291501177 : i64, L3 = 225689413 : i64, bytes = 1.17288521E+13 : f32, compulsory = 0x4B63C747 : f32, flops = 91468175872 : i64} {
    %c800000_i64 = arith.constant 800000 : i64
    %c899999_i64 = arith.constant 899999 : i64
    %c799999_i64 = arith.constant 799999 : i64
    %c4600000_i64 = arith.constant 4600000 : i64
    %c5000000_i64 = arith.constant 5000000 : i64
    %alloc = memref.alloc() {alignment = 64 : i64} : memref<1000xf32>
    %alloc_0 = memref.alloc() {alignment = 64 : i64} : memref<1000x4096xf32>
    %alloc_1 = memref.alloc() {alignment = 64 : i64} : memref<4096xf32>
    %alloc_2 = memref.alloc() {alignment = 64 : i64} : memref<4096x4096xf32>
    %alloc_3 = memref.alloc() {alignment = 64 : i64} : memref<4096xf32>
    %alloc_4 = memref.alloc() {alignment = 64 : i64} : memref<4096x9216xf32>
    %alloc_5 = memref.alloc() {alignment = 64 : i64} : memref<256xf32>
    %alloc_6 = memref.alloc() {alignment = 64 : i64} : memref<256x256x3x3xf32>
    %alloc_7 = memref.alloc() {alignment = 64 : i64} : memref<256xf32>
    %alloc_8 = memref.alloc() {alignment = 64 : i64} : memref<256x384x3x3xf32>
    %alloc_9 = memref.alloc() {alignment = 64 : i64} : memref<384xf32>
    %alloc_10 = memref.alloc() {alignment = 64 : i64} : memref<384x192x3x3xf32>
    %alloc_11 = memref.alloc() {alignment = 64 : i64} : memref<192xf32>
    %alloc_12 = memref.alloc() {alignment = 64 : i64} : memref<192x64x5x5xf32>
    %alloc_13 = memref.alloc() {alignment = 64 : i64} : memref<64xf32>
    %alloc_14 = memref.alloc() {alignment = 64 : i64} : memref<64x3x11x11xf32>
    %alloc_15 = memref.alloc() {alignment = 64 : i64} : memref<64x3x228x228xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 3 {
        affine.for %arg3 = 0 to 228 {
          affine.for %arg4 = 0 to 228 {
            func.call @S0(%arg1, %arg2, %arg3, %arg4, %alloc_15) : (index, index, index, index, memref<64x3x228x228xf32>) -> ()
          }
        }
      }
    }
    %subview = memref.subview %alloc_15[0, 0, 2, 2] [64, 3, 224, 224] [1, 1, 1, 1] : memref<64x3x228x228xf32> to memref<64x3x224x224xf32, strided<[155952, 51984, 228, 1], offset: 458>>
    memref.copy %arg0, %subview : memref<64x3x224x224xf32> to memref<64x3x224x224xf32, strided<[155952, 51984, 228, 1], offset: 458>>
    %alloc_16 = memref.alloc() {alignment = 64 : i64} : memref<64x64x55x55xf32>
    %alloc_17 = memref.alloc() {alignment = 64 : i64} : memref<64x64x55x55xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 55 {
          affine.for %arg4 = 0 to 55 {
            func.call @S1(%arg1, %arg2, %arg3, %arg4, %alloc_17, %alloc_13) : (index, index, index, index, memref<64x64x55x55xf32>, memref<64xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 55 {
          affine.for %arg4 = 0 to 55 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 11 {
                affine.for %arg7 = 0 to 11 {
                  func.call @S2(%arg1, %arg2, %arg3, %arg4, %alloc_17, %arg5, %arg6, %arg7, %alloc_14, %alloc_15) : (index, index, index, index, memref<64x64x55x55xf32>, index, index, index, memref<64x3x11x11xf32>, memref<64x3x228x228xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 55 {
          affine.for %arg4 = 0 to 55 {
            func.call @S3(%arg1, %arg2, %arg3, %arg4, %alloc_16, %alloc_17) : (index, index, index, index, memref<64x64x55x55xf32>, memref<64x64x55x55xf32>) -> ()
          }
        }
      }
    }
    %alloc_18 = memref.alloc() {alignment = 64 : i64} : memref<64x64x27x27xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 27 {
          affine.for %arg4 = 0 to 27 {
            func.call @S4(%arg1, %arg2, %arg3, %arg4, %alloc_18) : (index, index, index, index, memref<64x64x27x27xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 27 {
          affine.for %arg4 = 0 to 27 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S5(%arg1, %arg2, %arg3, %arg4, %alloc_18, %arg5, %arg6, %alloc_16) : (index, index, index, index, memref<64x64x27x27xf32>, index, index, memref<64x64x55x55xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_19 = memref.alloc() {alignment = 64 : i64} : memref<64x64x31x31xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 64 {
        affine.for %arg3 = 0 to 31 {
          affine.for %arg4 = 0 to 31 {
            func.call @S6(%arg1, %arg2, %arg3, %arg4, %alloc_19) : (index, index, index, index, memref<64x64x31x31xf32>) -> ()
          }
        }
      }
    }
    %subview_20 = memref.subview %alloc_19[0, 0, 2, 2] [64, 64, 27, 27] [1, 1, 1, 1] : memref<64x64x31x31xf32> to memref<64x64x27x27xf32, strided<[61504, 961, 31, 1], offset: 64>>
    memref.copy %alloc_18, %subview_20 : memref<64x64x27x27xf32> to memref<64x64x27x27xf32, strided<[61504, 961, 31, 1], offset: 64>>
    %alloc_21 = memref.alloc() {alignment = 64 : i64} : memref<64x192x27x27xf32>
    %alloc_22 = memref.alloc() {alignment = 64 : i64} : memref<64x192x27x27xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 27 {
          affine.for %arg4 = 0 to 27 {
            func.call @S7(%arg1, %arg2, %arg3, %arg4, %alloc_22, %alloc_11) : (index, index, index, index, memref<64x192x27x27xf32>, memref<192xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 27 {
          affine.for %arg4 = 0 to 27 {
            affine.for %arg5 = 0 to 64 {
              affine.for %arg6 = 0 to 5 {
                affine.for %arg7 = 0 to 5 {
                  func.call @S8(%arg1, %arg2, %arg3, %arg4, %alloc_22, %arg5, %arg6, %arg7, %alloc_12, %alloc_19) : (index, index, index, index, memref<64x192x27x27xf32>, index, index, index, memref<192x64x5x5xf32>, memref<64x64x31x31xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 27 {
          affine.for %arg4 = 0 to 27 {
            func.call @S9(%arg1, %arg2, %arg3, %arg4, %alloc_21, %alloc_22) : (index, index, index, index, memref<64x192x27x27xf32>, memref<64x192x27x27xf32>) -> ()
          }
        }
      }
    }
    %alloc_23 = memref.alloc() {alignment = 64 : i64} : memref<64x192x13x13xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S10(%arg1, %arg2, %arg3, %arg4, %alloc_23) : (index, index, index, index, memref<64x192x13x13xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S11(%arg1, %arg2, %arg3, %arg4, %alloc_23, %arg5, %arg6, %alloc_21) : (index, index, index, index, memref<64x192x13x13xf32>, index, index, memref<64x192x27x27xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_24 = memref.alloc() {alignment = 64 : i64} : memref<64x192x15x15xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 192 {
        affine.for %arg3 = 0 to 15 {
          affine.for %arg4 = 0 to 15 {
            func.call @S12(%arg1, %arg2, %arg3, %arg4, %alloc_24) : (index, index, index, index, memref<64x192x15x15xf32>) -> ()
          }
        }
      }
    }
    %subview_25 = memref.subview %alloc_24[0, 0, 1, 1] [64, 192, 13, 13] [1, 1, 1, 1] : memref<64x192x15x15xf32> to memref<64x192x13x13xf32, strided<[43200, 225, 15, 1], offset: 16>>
    memref.copy %alloc_23, %subview_25 : memref<64x192x13x13xf32> to memref<64x192x13x13xf32, strided<[43200, 225, 15, 1], offset: 16>>
    %alloc_26 = memref.alloc() {alignment = 64 : i64} : memref<64x384x13x13xf32>
    %alloc_27 = memref.alloc() {alignment = 64 : i64} : memref<64x384x13x13xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S13(%arg1, %arg2, %arg3, %arg4, %alloc_27, %alloc_9) : (index, index, index, index, memref<64x384x13x13xf32>, memref<384xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            affine.for %arg5 = 0 to 192 {
              affine.for %arg6 = 0 to 3 {
                affine.for %arg7 = 0 to 3 {
                  func.call @S14(%arg1, %arg2, %arg3, %arg4, %alloc_27, %arg5, %arg6, %arg7, %alloc_10, %alloc_24) : (index, index, index, index, memref<64x384x13x13xf32>, index, index, index, memref<384x192x3x3xf32>, memref<64x192x15x15xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S15(%arg1, %arg2, %arg3, %arg4, %alloc_26, %alloc_27) : (index, index, index, index, memref<64x384x13x13xf32>, memref<64x384x13x13xf32>) -> ()
          }
        }
      }
    }
    %alloc_28 = memref.alloc() {alignment = 64 : i64} : memref<64x384x15x15xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 384 {
        affine.for %arg3 = 0 to 15 {
          affine.for %arg4 = 0 to 15 {
            func.call @S16(%arg1, %arg2, %arg3, %arg4, %alloc_28) : (index, index, index, index, memref<64x384x15x15xf32>) -> ()
          }
        }
      }
    }
    %subview_29 = memref.subview %alloc_28[0, 0, 1, 1] [64, 384, 13, 13] [1, 1, 1, 1] : memref<64x384x15x15xf32> to memref<64x384x13x13xf32, strided<[86400, 225, 15, 1], offset: 16>>
    memref.copy %alloc_26, %subview_29 : memref<64x384x13x13xf32> to memref<64x384x13x13xf32, strided<[86400, 225, 15, 1], offset: 16>>
    %alloc_30 = memref.alloc() {alignment = 64 : i64} : memref<64x256x13x13xf32>
    %alloc_31 = memref.alloc() {alignment = 64 : i64} : memref<64x256x13x13xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S17(%arg1, %arg2, %arg3, %arg4, %alloc_31, %alloc_7) : (index, index, index, index, memref<64x256x13x13xf32>, memref<256xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c800000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            affine.for %arg5 = 0 to 384 {
              affine.for %arg6 = 0 to 3 {
                affine.for %arg7 = 0 to 3 {
                  func.call @S18(%arg1, %arg2, %arg3, %arg4, %alloc_31, %arg5, %arg6, %arg7, %alloc_8, %alloc_28) : (index, index, index, index, memref<64x256x13x13xf32>, index, index, index, memref<256x384x3x3xf32>, memref<64x384x15x15xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S19(%arg1, %arg2, %arg3, %arg4, %alloc_30, %alloc_31) : (index, index, index, index, memref<64x256x13x13xf32>, memref<64x256x13x13xf32>) -> ()
          }
        }
      }
    }
    %alloc_32 = memref.alloc() {alignment = 64 : i64} : memref<64x256x15x15xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 15 {
          affine.for %arg4 = 0 to 15 {
            func.call @S20(%arg1, %arg2, %arg3, %arg4, %alloc_32) : (index, index, index, index, memref<64x256x15x15xf32>) -> ()
          }
        }
      }
    }
    %subview_33 = memref.subview %alloc_32[0, 0, 1, 1] [64, 256, 13, 13] [1, 1, 1, 1] : memref<64x256x15x15xf32> to memref<64x256x13x13xf32, strided<[57600, 225, 15, 1], offset: 16>>
    memref.copy %alloc_30, %subview_33 : memref<64x256x13x13xf32> to memref<64x256x13x13xf32, strided<[57600, 225, 15, 1], offset: 16>>
    %alloc_34 = memref.alloc() {alignment = 64 : i64} : memref<64x256x13x13xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S21(%arg1, %arg2, %arg3, %arg4, %alloc_34, %alloc_5) : (index, index, index, index, memref<64x256x13x13xf32>, memref<256xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            affine.for %arg5 = 0 to 256 {
              affine.for %arg6 = 0 to 3 {
                affine.for %arg7 = 0 to 3 {
                  func.call @S22(%arg1, %arg2, %arg3, %arg4, %alloc_34, %arg5, %arg6, %arg7, %alloc_6, %alloc_32) : (index, index, index, index, memref<64x256x13x13xf32>, index, index, index, memref<256x256x3x3xf32>, memref<64x256x15x15xf32>) -> ()
                }
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 13 {
          affine.for %arg4 = 0 to 13 {
            func.call @S23(%arg1, %arg2, %arg3, %arg4, %alloc_30, %alloc_34) : (index, index, index, index, memref<64x256x13x13xf32>, memref<64x256x13x13xf32>) -> ()
          }
        }
      }
    }
    %alloc_35 = memref.alloc() {alignment = 64 : i64} : memref<64x256x6x6xf32>
    %alloc_36 = memref.alloc() {alignment = 64 : i64} : memref<64x256x6x6xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 6 {
          affine.for %arg4 = 0 to 6 {
            func.call @S24(%arg1, %arg2, %arg3, %arg4, %alloc_36) : (index, index, index, index, memref<64x256x6x6xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 6 {
          affine.for %arg4 = 0 to 6 {
            affine.for %arg5 = 0 to 3 {
              affine.for %arg6 = 0 to 3 {
                func.call @S25(%arg1, %arg2, %arg3, %arg4, %alloc_36, %arg5, %arg6, %alloc_30) : (index, index, index, index, memref<64x256x6x6xf32>, index, index, memref<64x256x13x13xf32>) -> ()
              }
            }
          }
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 6 {
          affine.for %arg4 = 0 to 6 {
            func.call @S26(%arg1, %arg2, %arg3, %arg4, %alloc_35) : (index, index, index, index, memref<64x256x6x6xf32>) -> ()
          }
        }
      }
    }
    call @set_frequency_caps(%c899999_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 256 {
        affine.for %arg3 = 0 to 6 {
          affine.for %arg4 = 0 to 6 {
            affine.for %arg5 = 0 to 1 {
              affine.for %arg6 = 0 to 1 {
                func.call @S27(%arg1, %arg2, %arg3, %arg4, %alloc_35, %arg5, %arg6, %alloc_36) : (index, index, index, index, memref<64x256x6x6xf32>, index, index, memref<64x256x6x6xf32>) -> ()
              }
            }
          }
        }
      }
    }
    %alloc_37 = memref.alloc() : memref<64x9216xf32>
    %collapse_shape = memref.collapse_shape %alloc_35 [[0], [1, 2, 3]] : memref<64x256x6x6xf32> into memref<64x9216xf32>
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 9216 {
        %0 = memref.load %collapse_shape[%arg1, %arg2] : memref<64x9216xf32>
        memref.store %0, %alloc_37[%arg1, %arg2] : memref<64x9216xf32>
      }
    }
    %alloc_38 = memref.alloc() {alignment = 64 : i64} : memref<9216x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 4096 {
      affine.for %arg2 = 0 to 9216 {
        func.call @S28(%arg2, %arg1, %alloc_38, %alloc_4) : (index, index, memref<9216x4096xf32>, memref<4096x9216xf32>) -> ()
      }
    }
    %alloc_39 = memref.alloc() {alignment = 64 : i64} : memref<64x4096xf32>
    %alloc_40 = memref.alloc() {alignment = 64 : i64} : memref<64x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S29(%arg1, %arg2, %alloc_40) : (index, index, memref<64x4096xf32>) -> ()
      }
    }
    %alloc_41 = memref.alloc() {alignment = 64 : i64} : memref<64x4096xf32>
    memref.copy %alloc_40, %alloc_41 : memref<64x4096xf32> to memref<64x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        affine.for %arg3 = 0 to 9216 {
          func.call @S30(%arg1, %arg2, %alloc_41, %arg3, %alloc_38, %alloc_37) : (index, index, memref<64x4096xf32>, index, memref<9216x4096xf32>, memref<64x9216xf32>) -> ()
        }
      }
    }
    %alloc_42 = memref.alloc() {alignment = 64 : i64} : memref<64x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S31(%arg1, %arg2, %alloc_42, %alloc_3, %alloc_41) : (index, index, memref<64x4096xf32>, memref<4096xf32>, memref<64x4096xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S32(%arg1, %arg2, %alloc_39, %alloc_42) : (index, index, memref<64x4096xf32>, memref<64x4096xf32>) -> ()
      }
    }
    %alloc_43 = memref.alloc() {alignment = 64 : i64} : memref<4096x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 4096 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S33(%arg2, %arg1, %alloc_43, %alloc_2) : (index, index, memref<4096x4096xf32>, memref<4096x4096xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        affine.for %arg3 = 0 to 4096 {
          func.call @S34(%arg1, %arg2, %alloc_40, %arg3, %alloc_43, %alloc_39) : (index, index, memref<64x4096xf32>, index, memref<4096x4096xf32>, memref<64x4096xf32>) -> ()
        }
      }
    }
    %alloc_44 = memref.alloc() {alignment = 64 : i64} : memref<64x4096xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S35(%arg1, %arg2, %alloc_44, %alloc_1, %alloc_40) : (index, index, memref<64x4096xf32>, memref<4096xf32>, memref<64x4096xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S36(%arg1, %arg2, %alloc_39, %alloc_44) : (index, index, memref<64x4096xf32>, memref<64x4096xf32>) -> ()
      }
    }
    %alloc_45 = memref.alloc() {alignment = 64 : i64} : memref<4096x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 1000 {
      affine.for %arg2 = 0 to 4096 {
        func.call @S37(%arg2, %arg1, %alloc_45, %alloc_0) : (index, index, memref<4096x1000xf32>, memref<1000x4096xf32>) -> ()
      }
    }
    %alloc_46 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    %alloc_47 = memref.alloc() {alignment = 64 : i64} : memref<64x1000xf32>
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S38(%arg1, %arg2, %alloc_47) : (index, index, memref<64x1000xf32>) -> ()
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c799999_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        affine.for %arg3 = 0 to 4096 {
          func.call @S39(%arg1, %arg2, %alloc_47, %arg3, %alloc_45, %alloc_39) : (index, index, memref<64x1000xf32>, index, memref<4096x1000xf32>, memref<64x4096xf32>) -> ()
        }
      }
    }
    call @set_frequency_caps(%c5000000_i64, %c4600000_i64) : (i64, i64) -> ()
    affine.for %arg1 = 0 to 64 {
      affine.for %arg2 = 0 to 1000 {
        func.call @S40(%arg1, %arg2, %alloc_46, %alloc, %alloc_47) : (index, index, memref<64x1000xf32>, memref<1000xf32>, memref<64x1000xf32>) -> ()
      }
    }
    memref.dealloc %alloc_16 : memref<64x64x55x55xf32>
    memref.dealloc %alloc_17 : memref<64x64x55x55xf32>
    memref.dealloc %alloc_18 : memref<64x64x27x27xf32>
    memref.dealloc %alloc_21 : memref<64x192x27x27xf32>
    memref.dealloc %alloc_22 : memref<64x192x27x27xf32>
    memref.dealloc %alloc_23 : memref<64x192x13x13xf32>
    memref.dealloc %alloc_26 : memref<64x384x13x13xf32>
    memref.dealloc %alloc_27 : memref<64x384x13x13xf32>
    memref.dealloc %alloc_30 : memref<64x256x13x13xf32>
    memref.dealloc %alloc_31 : memref<64x256x13x13xf32>
    memref.dealloc %alloc_34 : memref<64x256x13x13xf32>
    memref.dealloc %alloc_35 : memref<64x256x6x6xf32>
    memref.dealloc %alloc_36 : memref<64x256x6x6xf32>
    memref.dealloc %alloc_38 : memref<9216x4096xf32>
    memref.dealloc %alloc_39 : memref<64x4096xf32>
    memref.dealloc %alloc_40 : memref<64x4096xf32>
    memref.dealloc %alloc_41 : memref<64x4096xf32>
    memref.dealloc %alloc_42 : memref<64x4096xf32>
    memref.dealloc %alloc_43 : memref<4096x4096xf32>
    memref.dealloc %alloc_44 : memref<64x4096xf32>
    memref.dealloc %alloc_45 : memref<4096x1000xf32>
    memref.dealloc %alloc_46 : memref<64x1000xf32>
    memref.dealloc %alloc_47 : memref<64x1000xf32>
    memref.dealloc %alloc_15 : memref<64x3x228x228xf32>
    memref.dealloc %alloc_19 : memref<64x64x31x31xf32>
    memref.dealloc %alloc_24 : memref<64x192x15x15xf32>
    memref.dealloc %alloc_28 : memref<64x384x15x15xf32>
    memref.dealloc %alloc_32 : memref<64x256x15x15xf32>
    return %alloc_46 : memref<64x1000xf32>
  }
}

