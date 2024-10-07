/* Generated from (null) by CLooG 0.20.0-43cfb85 gmp bits. */
/* DON'T FORGET TO USE -lm OPTION TO COMPILE. */

/* Useful headers. */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Parameter value. */
/* Useful macros. */
#define floord(n,d) (((n)<0) ? -((-(n)+(d)-1)/(d)) : (n)/(d))
#define ceild(n,d)  (((n)<0) ? -((-(n))/(d)) : ((n)+(d)-1)/(d))
#define max(x,y)    ((x) > (y) ? (x) : (y))
#define min(x,y)    ((x) < (y) ? (x) : (y))

#ifdef TIME 
#define IF_TIME(foo) foo; 
#else
#define IF_TIME(foo)
#endif

/* Statement macros (please set). */
#define S1(i,j,k,l) {total++; printf("S1 %d %d %d %d\n",i,j,k,l);}
#define S2(i,j,k,l) {total++; printf("S2 %d %d %d %d\n",i,j,k,l);}
#define S3(i,j,k,l,m,n,o) {total++; printf("S3 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S4(i,j,k,l) {total++; printf("S4 %d %d %d %d\n",i,j,k,l);}
#define S5(i,j,k,l) {total++; printf("S5 %d %d %d %d\n",i,j,k,l);}
#define S6(i,j,k,l,m,n) {total++; printf("S6 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S7(i,j,k,l) {total++; printf("S7 %d %d %d %d\n",i,j,k,l);}
#define S8(i,j,k,l) {total++; printf("S8 %d %d %d %d\n",i,j,k,l);}
#define S9(i,j,k,l,m,n,o) {total++; printf("S9 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S10(i,j,k,l) {total++; printf("S10 %d %d %d %d\n",i,j,k,l);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l,m,n) {total++; printf("S12 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S13(i,j,k,l) {total++; printf("S13 %d %d %d %d\n",i,j,k,l);}
#define S14(i,j,k,l) {total++; printf("S14 %d %d %d %d\n",i,j,k,l);}
#define S15(i,j,k,l,m,n,o) {total++; printf("S15 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S16(i,j,k,l) {total++; printf("S16 %d %d %d %d\n",i,j,k,l);}
#define S17(i,j,k,l) {total++; printf("S17 %d %d %d %d\n",i,j,k,l);}
#define S18(i,j,k,l) {total++; printf("S18 %d %d %d %d\n",i,j,k,l);}
#define S19(i,j,k,l,m,n,o) {total++; printf("S19 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S20(i,j,k,l) {total++; printf("S20 %d %d %d %d\n",i,j,k,l);}
#define S21(i,j,k,l) {total++; printf("S21 %d %d %d %d\n",i,j,k,l);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l,m,n,o) {total++; printf("S23 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S24(i,j,k,l) {total++; printf("S24 %d %d %d %d\n",i,j,k,l);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l,m,n) {total++; printf("S26 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S27(i,j,k,l) {total++; printf("S27 %d %d %d %d\n",i,j,k,l);}
#define S28(i,j,k,l,m,n) {total++; printf("S28 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S29(i,j) {total++; printf("S29 %d %d\n",i,j);}
#define S30(i,j) {total++; printf("S30 %d %d\n",i,j);}
#define S31(i,j,k) {total++; printf("S31 %d %d %d\n",i,j,k);}
#define S32(i,j) {total++; printf("S32 %d %d\n",i,j);}
#define S33(i,j) {total++; printf("S33 %d %d\n",i,j);}
#define S34(i,j) {total++; printf("S34 %d %d\n",i,j);}
#define S35(i,j,k) {total++; printf("S35 %d %d %d\n",i,j,k);}
#define S36(i,j) {total++; printf("S36 %d %d\n",i,j);}
#define S37(i,j) {total++; printf("S37 %d %d\n",i,j);}
#define S38(i,j) {total++; printf("S38 %d %d\n",i,j);}
#define S39(i,j) {total++; printf("S39 %d %d\n",i,j);}
#define S40(i,j,k) {total++; printf("S40 %d %d %d\n",i,j,k);}
#define S41(i,j) {total++; printf("S41 %d %d\n",i,j);}
  volatile float A1[64][3][228][228];
  volatile float A10[192][64][5][5];
  volatile float A11[64][192][27][27];
  volatile float A12[64][192][13][13];
  volatile float A13[64][192][15][15];
  volatile float A14[384];
  volatile float A15[64][384][13][13];
  volatile float A16[384][192][3][3];
  volatile float A17[64][384][13][13];
  volatile float A18[64][384][15][15];
  volatile float A19[256];
  volatile float A2[64];
  volatile float A20[64][256][13][13];
  volatile float A21[256][384][3][3];
  volatile float A22[64][256][13][13];
  volatile float A23[64][256][15][15];
  volatile float A24[256];
  volatile float A25[64][256][13][13];
  volatile float A26[256][256][3][3];
  volatile float A27[64][256][6][6];
  volatile float A28[64][256][6][6];
  volatile float A29[4096][9216];
  volatile float A3[64][64][55][55];
  volatile float A30[9216][4096];
  volatile float A31[64][4096];
  volatile float A32[64][4096];
  volatile float A33[64][9216];
  volatile float A34[4096];
  volatile float A35[64][4096];
  volatile float A36[64][4096];
  volatile float A37[4096][4096];
  volatile float A38[4096][4096];
  volatile float A39[4096];
  volatile float A4[64][3][11][11];
  volatile float A40[64][4096];
  volatile float A41[1000][4096];
  volatile float A42[4096][1000];
  volatile float A43[64][1000];
  volatile float A44[1000];
  volatile float A45[64][1000];
  volatile float A5[64][64][55][55];
  volatile float A6[64][64][27][27];
  volatile float A7[64][64][31][31];
  volatile float A8[192];
  volatile float A9[64][192][27][27];


int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
#pragma scop
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2;c4++) {
      for (c6=0;c6<=227;c6++) {
        for (c8=0;c8<=227;c8++) {
          A1[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=54;c6++) {
        for (c8=0;c8<=54;c8++) {
          A3[c2][c4][c6][c8] = A2[c4];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=54;c6++) {
        for (c8=0;c8<=54;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=10;c12++) {
              for (c14=0;c14<=10;c14++) {
                A3[c2][c4][c6][c8] = A3[c2][c4][c6][c8] + A1[c2][c10][4*(c6)+c12][4*(c8)+c14] + A4[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=54;c6++) {
        for (c8=0;c8<=54;c8++) {
          A5[c2][c4][c6][c8] = A3[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=26;c6++) {
        for (c8=0;c8<=26;c8++) {
          A6[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=26;c6++) {
        for (c8=0;c8<=26;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A6[c2][c4][c6][c8] = A6[c2][c4][c6][c8] + A5[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=30;c6++) {
        for (c8=0;c8<=30;c8++) {
          A7[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=26;c6++) {
        for (c8=0;c8<=26;c8++) {
          A9[c2][c4][c6][c8] = A8[c4];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=26;c6++) {
        for (c8=0;c8<=26;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=4;c12++) {
              for (c14=0;c14<=4;c14++) {
                A9[c2][c4][c6][c8] = A9[c2][c4][c6][c8] + A7[c2][c10][c6+c12][c8+c14] + A10[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=26;c6++) {
        for (c8=0;c8<=26;c8++) {
          A11[c2][c4][c6][c8] = A9[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A12[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A12[c2][c4][c6][c8] = A12[c2][c4][c6][c8] + A11[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=14;c6++) {
        for (c8=0;c8<=14;c8++) {
          A13[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A15[c2][c4][c6][c8] = A14[c4];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          for (c10=0;c10<=191;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A15[c2][c4][c6][c8] = A15[c2][c4][c6][c8] + A13[c2][c10][c6+c12][c8+c14] + A16[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A17[c2][c4][c6][c8] = A15[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=14;c6++) {
        for (c8=0;c8<=14;c8++) {
          A18[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A20[c2][c4][c6][c8] = A19[c4];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          for (c10=0;c10<=383;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A20[c2][c4][c6][c8] = A20[c2][c4][c6][c8] + A18[c2][c10][c6+c12][c8+c14] + A21[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A22[c2][c4][c6][c8] = A20[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=14;c6++) {
        for (c8=0;c8<=14;c8++) {
          A23[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A25[c2][c4][c6][c8] = A24[c4];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A25[c2][c4][c6][c8] = A25[c2][c4][c6][c8] + A23[c2][c10][c6+c12][c8+c14] + A26[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=12;c6++) {
        for (c8=0;c8<=12;c8++) {
          A22[c2][c4][c6][c8] = A25[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=5;c6++) {
        for (c8=0;c8<=5;c8++) {
          A27[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=5;c6++) {
        for (c8=0;c8<=5;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A27[c2][c4][c6][c8] = A27[c2][c4][c6][c8] + A22[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=5;c6++) {
        for (c8=0;c8<=5;c8++) {
          A28[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=5;c6++) {
        for (c8=0;c8<=5;c8++) {
          A28[c2][c4][c6][c8] = A28[c2][c4][c6][c8] + A27[c2][c4][c6+0][c8+0];
        }
      }
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=9215;c4++) {
      A30[c4][c2] = A29[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A31[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=9215;c6++) {
        A32[c2][c4] = A32[c2][c4] + A33[c2][c6] + A30[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A35[c2][c4] = A32[c2][c4] + A34[c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A36[c2][c4] = A35[c2][c4];
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A38[c4][c2] = A37[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A31[c2][c4] = A31[c2][c4] + A36[c2][c6] + A38[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A40[c2][c4] = A31[c2][c4] + A39[c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A36[c2][c4] = A40[c2][c4];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A42[c4][c2] = A41[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A43[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A43[c2][c4] = A43[c2][c4] + A36[c2][c6] + A42[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A45[c2][c4] = A43[c2][c4] + A44[c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
