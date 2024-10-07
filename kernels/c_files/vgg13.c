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
#define S6(i,j,k,l,m,n,o) {total++; printf("S6 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S7(i,j,k,l) {total++; printf("S7 %d %d %d %d\n",i,j,k,l);}
#define S8(i,j,k,l) {total++; printf("S8 %d %d %d %d\n",i,j,k,l);}
#define S9(i,j,k,l,m,n) {total++; printf("S9 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S10(i,j,k,l) {total++; printf("S10 %d %d %d %d\n",i,j,k,l);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l,m,n,o) {total++; printf("S12 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S13(i,j,k,l) {total++; printf("S13 %d %d %d %d\n",i,j,k,l);}
#define S14(i,j,k,l) {total++; printf("S14 %d %d %d %d\n",i,j,k,l);}
#define S15(i,j,k,l,m,n,o) {total++; printf("S15 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S16(i,j,k,l) {total++; printf("S16 %d %d %d %d\n",i,j,k,l);}
#define S17(i,j,k,l) {total++; printf("S17 %d %d %d %d\n",i,j,k,l);}
#define S18(i,j,k,l,m,n) {total++; printf("S18 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S19(i,j,k,l) {total++; printf("S19 %d %d %d %d\n",i,j,k,l);}
#define S20(i,j,k,l) {total++; printf("S20 %d %d %d %d\n",i,j,k,l);}
#define S21(i,j,k,l,m,n,o) {total++; printf("S21 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l) {total++; printf("S23 %d %d %d %d\n",i,j,k,l);}
#define S24(i,j,k,l,m,n,o) {total++; printf("S24 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l) {total++; printf("S26 %d %d %d %d\n",i,j,k,l);}
#define S27(i,j,k,l,m,n) {total++; printf("S27 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S28(i,j,k,l) {total++; printf("S28 %d %d %d %d\n",i,j,k,l);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l,m,n,o) {total++; printf("S30 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S31(i,j,k,l) {total++; printf("S31 %d %d %d %d\n",i,j,k,l);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l,m,n,o) {total++; printf("S33 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S34(i,j,k,l) {total++; printf("S34 %d %d %d %d\n",i,j,k,l);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l,m,n) {total++; printf("S36 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l,m,n,o) {total++; printf("S39 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l) {total++; printf("S41 %d %d %d %d\n",i,j,k,l);}
#define S42(i,j,k,l,m,n,o) {total++; printf("S42 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S43(i,j,k,l) {total++; printf("S43 %d %d %d %d\n",i,j,k,l);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l,m,n) {total++; printf("S45 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S46(i,j,k,l) {total++; printf("S46 %d %d %d %d\n",i,j,k,l);}
#define S47(i,j,k,l,m,n) {total++; printf("S47 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S48(i,j) {total++; printf("S48 %d %d\n",i,j);}
#define S49(i,j) {total++; printf("S49 %d %d\n",i,j);}
#define S50(i,j,k) {total++; printf("S50 %d %d %d\n",i,j,k);}
#define S51(i,j) {total++; printf("S51 %d %d\n",i,j);}
#define S52(i,j) {total++; printf("S52 %d %d\n",i,j);}
#define S53(i,j) {total++; printf("S53 %d %d\n",i,j);}
#define S54(i,j,k) {total++; printf("S54 %d %d %d\n",i,j,k);}
#define S55(i,j) {total++; printf("S55 %d %d\n",i,j);}
#define S56(i,j) {total++; printf("S56 %d %d\n",i,j);}
#define S57(i,j) {total++; printf("S57 %d %d\n",i,j);}
#define S58(i,j) {total++; printf("S58 %d %d\n",i,j);}
#define S59(i,j,k) {total++; printf("S59 %d %d %d\n",i,j,k);}
#define S60(i,j) {total++; printf("S60 %d %d\n",i,j);}
  volatile float A1[64][3][226][226];
  volatile float A10[64][128][112][112];
  volatile float A11[64][128][112][112];
  volatile float A12[128][64][3][3];
  volatile float A13[64][128][112][112];
  volatile float A14[64][128][114][114];
  volatile float A15[128][128][3][3];
  volatile float A16[64][128][56][56];
  volatile float A17[64][128][58][58];
  volatile float A18[64][256][56][56];
  volatile float A19[64][256][56][56];
  volatile float A2[64][64][224][224];
  volatile float A20[256][128][3][3];
  volatile float A21[64][256][56][56];
  volatile float A22[64][256][58][58];
  volatile float A23[256][256][3][3];
  volatile float A24[64][256][28][28];
  volatile float A25[64][256][30][30];
  volatile float A26[64][512][28][28];
  volatile float A27[64][512][28][28];
  volatile float A28[512][256][3][3];
  volatile float A29[64][512][28][28];
  volatile float A3[64][64][224][224];
  volatile float A30[64][512][30][30];
  volatile float A31[512][512][3][3];
  volatile float A32[64][512][14][14];
  volatile float A33[64][512][16][16];
  volatile float A34[64][512][14][14];
  volatile float A35[64][512][14][14];
  volatile float A36[512][512][3][3];
  volatile float A37[64][512][16][16];
  volatile float A38[512][512][3][3];
  volatile float A39[64][512][7][7];
  volatile float A4[64][3][3][3];
  volatile float A40[64][512][7][7];
  volatile float A41[4096][25088];
  volatile float A42[25088][4096];
  volatile float A43[64][4096];
  volatile float A44[64][4096];
  volatile float A45[64][25088];
  volatile float A46[64][4096];
  volatile float A47[64][4096];
  volatile float A48[4096][4096];
  volatile float A49[4096][4096];
  volatile float A5[64][64][224][224];
  volatile float A50[64][4096];
  volatile float A51[1000][4096];
  volatile float A52[4096][1000];
  volatile float A53[64][1000];
  volatile float A54[64][1000];
  volatile float A6[64][64][226][226];
  volatile float A7[64][64][3][3];
  volatile float A8[64][64][112][112];
  volatile float A9[64][64][114][114];


int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
#pragma scop
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2;c4++) {
      for (c6=0;c6<=225;c6++) {
        for (c8=0;c8<=225;c8++) {
          A1[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          A2[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A3[c2][c4][c6][c8] = A3[c2][c4][c6][c8] + A1[c2][c10][c6+c12][c8+c14] + A4[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          A5[c2][c4][c6][c8] = A3[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=225;c6++) {
        for (c8=0;c8<=225;c8++) {
          A6[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A2[c2][c4][c6][c8] = A2[c2][c4][c6][c8] + A6[c2][c10][c6+c12][c8+c14] + A7[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          A5[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A8[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=1;c10++) {
            for (c12=0;c12<=1;c12++) {
              A8[c2][c4][c6][c8] = A8[c2][c4][c6][c8] + A5[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A9[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A10[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A11[c2][c4][c6][c8] = A11[c2][c4][c6][c8] + A9[c2][c10][c6+c12][c8+c14] + A12[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A13[c2][c4][c6][c8] = A11[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A14[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A10[c2][c4][c6][c8] = A10[c2][c4][c6][c8] + A14[c2][c10][c6+c12][c8+c14] + A15[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A13[c2][c4][c6][c8] = A10[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A16[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=1;c10++) {
            for (c12=0;c12<=1;c12++) {
              A16[c2][c4][c6][c8] = A16[c2][c4][c6][c8] + A13[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A17[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A18[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A19[c2][c4][c6][c8] = A19[c2][c4][c6][c8] + A17[c2][c10][c6+c12][c8+c14] + A20[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A21[c2][c4][c6][c8] = A19[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A22[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A18[c2][c4][c6][c8] = A18[c2][c4][c6][c8] + A22[c2][c10][c6+c12][c8+c14] + A23[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A21[c2][c4][c6][c8] = A18[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A24[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=1;c10++) {
            for (c12=0;c12<=1;c12++) {
              A24[c2][c4][c6][c8] = A24[c2][c4][c6][c8] + A21[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A25[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A26[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A27[c2][c4][c6][c8] = A27[c2][c4][c6][c8] + A25[c2][c10][c6+c12][c8+c14] + A28[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A29[c2][c4][c6][c8] = A27[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A30[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A26[c2][c4][c6][c8] = A26[c2][c4][c6][c8] + A30[c2][c10][c6+c12][c8+c14] + A31[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A29[c2][c4][c6][c8] = A26[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A32[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1;c10++) {
            for (c12=0;c12<=1;c12++) {
              A32[c2][c4][c6][c8] = A32[c2][c4][c6][c8] + A29[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A33[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A34[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A35[c2][c4][c6][c8] = A35[c2][c4][c6][c8] + A33[c2][c10][c6+c12][c8+c14] + A36[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A32[c2][c4][c6][c8] = A35[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A37[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A34[c2][c4][c6][c8] = A34[c2][c4][c6][c8] + A37[c2][c10][c6+c12][c8+c14] + A38[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A32[c2][c4][c6][c8] = A34[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A39[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1;c10++) {
            for (c12=0;c12<=1;c12++) {
              A39[c2][c4][c6][c8] = A39[c2][c4][c6][c8] + A32[c2][c4][2*(c6)+c10][2*(c8)+c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A40[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A40[c2][c4][c6][c8] = A40[c2][c4][c6][c8] + A39[c2][c4][c6+0][c8+0];
        }
      }
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=25087;c4++) {
      A42[c4][c2] = A41[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A43[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=25087;c6++) {
        A44[c2][c4] = A44[c2][c4] + A45[c2][c6] + A42[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A46[c2][c4] = A44[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A47[c2][c4] = A46[c2][c4];
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A49[c4][c2] = A48[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A43[c2][c4] = A43[c2][c4] + A47[c2][c6] + A49[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A50[c2][c4] = A43[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A47[c2][c4] = A50[c2][c4];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A52[c4][c2] = A51[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A53[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A53[c2][c4] = A53[c2][c4] + A47[c2][c6] + A52[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A54[c2][c4] = A53[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
