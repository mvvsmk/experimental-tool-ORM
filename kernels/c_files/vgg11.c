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
#define S18(i,j,k,l,m,n,o) {total++; printf("S18 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S19(i,j,k,l) {total++; printf("S19 %d %d %d %d\n",i,j,k,l);}
#define S20(i,j,k,l) {total++; printf("S20 %d %d %d %d\n",i,j,k,l);}
#define S21(i,j,k,l,m,n) {total++; printf("S21 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l) {total++; printf("S23 %d %d %d %d\n",i,j,k,l);}
#define S24(i,j,k,l,m,n,o) {total++; printf("S24 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l) {total++; printf("S26 %d %d %d %d\n",i,j,k,l);}
#define S27(i,j,k,l,m,n,o) {total++; printf("S27 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S28(i,j,k,l) {total++; printf("S28 %d %d %d %d\n",i,j,k,l);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l,m,n) {total++; printf("S30 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S31(i,j,k,l) {total++; printf("S31 %d %d %d %d\n",i,j,k,l);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l,m,n,o) {total++; printf("S33 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S34(i,j,k,l) {total++; printf("S34 %d %d %d %d\n",i,j,k,l);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l,m,n,o) {total++; printf("S36 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l,m,n) {total++; printf("S39 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l,m,n) {total++; printf("S41 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S42(i,j) {total++; printf("S42 %d %d\n",i,j);}
#define S43(i,j) {total++; printf("S43 %d %d\n",i,j);}
#define S44(i,j,k) {total++; printf("S44 %d %d %d\n",i,j,k);}
#define S45(i,j) {total++; printf("S45 %d %d\n",i,j);}
#define S46(i,j) {total++; printf("S46 %d %d\n",i,j);}
#define S47(i,j) {total++; printf("S47 %d %d\n",i,j);}
#define S48(i,j,k) {total++; printf("S48 %d %d %d\n",i,j,k);}
#define S49(i,j) {total++; printf("S49 %d %d\n",i,j);}
#define S50(i,j) {total++; printf("S50 %d %d\n",i,j);}
#define S51(i,j) {total++; printf("S51 %d %d\n",i,j);}
#define S52(i,j) {total++; printf("S52 %d %d\n",i,j);}
#define S53(i,j,k) {total++; printf("S53 %d %d %d\n",i,j,k);}
#define S54(i,j) {total++; printf("S54 %d %d\n",i,j);}
  volatile float A1[64][3][226][226];
  volatile float A10[64][128][56][56];
  volatile float A11[64][128][58][58];
  volatile float A12[64][256][56][56];
  volatile float A13[64][256][56][56];
  volatile float A14[256][128][3][3];
  volatile float A15[64][256][56][56];
  volatile float A16[64][256][58][58];
  volatile float A17[256][256][3][3];
  volatile float A18[64][256][28][28];
  volatile float A19[64][256][30][30];
  volatile float A2[64][64][224][224];
  volatile float A20[64][512][28][28];
  volatile float A21[64][512][28][28];
  volatile float A22[512][256][3][3];
  volatile float A23[64][512][28][28];
  volatile float A24[64][512][30][30];
  volatile float A25[512][512][3][3];
  volatile float A26[64][512][14][14];
  volatile float A27[64][512][16][16];
  volatile float A28[64][512][14][14];
  volatile float A29[64][512][14][14];
  volatile float A3[64][3][3][3];
  volatile float A30[512][512][3][3];
  volatile float A31[64][512][16][16];
  volatile float A32[512][512][3][3];
  volatile float A33[64][512][7][7];
  volatile float A34[64][512][7][7];
  volatile float A35[4096][25088];
  volatile float A36[25088][4096];
  volatile float A37[64][4096];
  volatile float A38[64][4096];
  volatile float A39[64][25088];
  volatile float A4[64][64][224][224];
  volatile float A40[64][4096];
  volatile float A41[64][4096];
  volatile float A42[4096][4096];
  volatile float A43[4096][4096];
  volatile float A44[64][4096];
  volatile float A45[1000][4096];
  volatile float A46[4096][1000];
  volatile float A47[64][1000];
  volatile float A48[64][1000];
  volatile float A5[64][64][112][112];
  volatile float A6[64][64][114][114];
  volatile float A7[64][128][112][112];
  volatile float A8[128][64][3][3];
  volatile float A9[64][128][112][112];


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
                A2[c2][c4][c6][c8] = A2[c2][c4][c6][c8] + A1[c2][c10][c6+c12][c8+c14] + A3[c4][c10][c12][c14];
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
          A4[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A5[c2][c4][c6][c8]=0;
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
              A5[c2][c4][c6][c8] = A5[c2][c4][c6][c8] + A4[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A6[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A7[c2][c4][c6][c8]=0;
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
                A7[c2][c4][c6][c8] = A7[c2][c4][c6][c8] + A6[c2][c10][c6+c12][c8+c14] + A8[c4][c10][c12][c14];
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
          A9[c2][c4][c6][c8] = A7[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A10[c2][c4][c6][c8]=0;
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
              A10[c2][c4][c6][c8] = A10[c2][c4][c6][c8] + A9[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A11[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A12[c2][c4][c6][c8]=0;
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
                A13[c2][c4][c6][c8] = A13[c2][c4][c6][c8] + A11[c2][c10][c6+c12][c8+c14] + A14[c4][c10][c12][c14];
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
          A15[c2][c4][c6][c8] = A13[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A16[c2][c4][c6][c8]=0;
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
                A12[c2][c4][c6][c8] = A12[c2][c4][c6][c8] + A16[c2][c10][c6+c12][c8+c14] + A17[c4][c10][c12][c14];
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
          A15[c2][c4][c6][c8] = A12[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A18[c2][c4][c6][c8]=0;
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
              A18[c2][c4][c6][c8] = A18[c2][c4][c6][c8] + A15[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A19[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A20[c2][c4][c6][c8]=0;
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
                A21[c2][c4][c6][c8] = A21[c2][c4][c6][c8] + A19[c2][c10][c6+c12][c8+c14] + A22[c4][c10][c12][c14];
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
          A23[c2][c4][c6][c8] = A21[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A24[c2][c4][c6][c8]=0;
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
                A20[c2][c4][c6][c8] = A20[c2][c4][c6][c8] + A24[c2][c10][c6+c12][c8+c14] + A25[c4][c10][c12][c14];
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
          A23[c2][c4][c6][c8] = A20[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A26[c2][c4][c6][c8]=0;
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
              A26[c2][c4][c6][c8] = A26[c2][c4][c6][c8] + A23[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A27[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A28[c2][c4][c6][c8]=0;
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
                A29[c2][c4][c6][c8] = A29[c2][c4][c6][c8] + A27[c2][c10][c6+c12][c8+c14] + A30[c4][c10][c12][c14];
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
          A26[c2][c4][c6][c8] = A29[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A31[c2][c4][c6][c8]=0;
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
                A28[c2][c4][c6][c8] = A28[c2][c4][c6][c8] + A31[c2][c10][c6+c12][c8+c14] + A32[c4][c10][c12][c14];
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
          A26[c2][c4][c6][c8] = A28[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A33[c2][c4][c6][c8]=0;
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
              A33[c2][c4][c6][c8] = A33[c2][c4][c6][c8] + A26[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A34[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A34[c2][c4][c6][c8] = A34[c2][c4][c6][c8] + A33[c2][c4][c6+0][c8+0];
        }
      }
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=25087;c4++) {
      A36[c4][c2] = A35[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A37[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=25087;c6++) {
        A38[c2][c4] = A38[c2][c4] + A39[c2][c6] + A36[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A40[c2][c4] = A38[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A41[c2][c4] = A40[c2][c4];
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A43[c4][c2] = A42[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A37[c2][c4] = A37[c2][c4] + A41[c2][c6] + A43[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A44[c2][c4] = A37[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A41[c2][c4] = A44[c2][c4];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A46[c4][c2] = A45[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A47[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A47[c2][c4] = A47[c2][c4] + A41[c2][c6] + A46[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A48[c2][c4] = A47[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
