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
#define S27(i,j,k,l,m,n,o) {total++; printf("S27 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S28(i,j,k,l) {total++; printf("S28 %d %d %d %d\n",i,j,k,l);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l,m,n,o) {total++; printf("S30 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S31(i,j,k,l) {total++; printf("S31 %d %d %d %d\n",i,j,k,l);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l,m,n) {total++; printf("S33 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S34(i,j,k,l) {total++; printf("S34 %d %d %d %d\n",i,j,k,l);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l,m,n,o) {total++; printf("S36 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l,m,n,o) {total++; printf("S39 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l) {total++; printf("S41 %d %d %d %d\n",i,j,k,l);}
#define S42(i,j,k,l,m,n,o) {total++; printf("S42 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S43(i,j,k,l) {total++; printf("S43 %d %d %d %d\n",i,j,k,l);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l,m,n,o) {total++; printf("S45 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S46(i,j,k,l) {total++; printf("S46 %d %d %d %d\n",i,j,k,l);}
#define S47(i,j,k,l) {total++; printf("S47 %d %d %d %d\n",i,j,k,l);}
#define S48(i,j,k,l,m,n) {total++; printf("S48 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S49(i,j,k,l) {total++; printf("S49 %d %d %d %d\n",i,j,k,l);}
#define S50(i,j,k,l) {total++; printf("S50 %d %d %d %d\n",i,j,k,l);}
#define S51(i,j,k,l,m,n,o) {total++; printf("S51 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S52(i,j,k,l) {total++; printf("S52 %d %d %d %d\n",i,j,k,l);}
#define S53(i,j,k,l) {total++; printf("S53 %d %d %d %d\n",i,j,k,l);}
#define S54(i,j,k,l,m,n,o) {total++; printf("S54 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S55(i,j,k,l) {total++; printf("S55 %d %d %d %d\n",i,j,k,l);}
#define S56(i,j,k,l) {total++; printf("S56 %d %d %d %d\n",i,j,k,l);}
#define S57(i,j,k,l,m,n,o) {total++; printf("S57 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S58(i,j,k,l) {total++; printf("S58 %d %d %d %d\n",i,j,k,l);}
#define S59(i,j,k,l) {total++; printf("S59 %d %d %d %d\n",i,j,k,l);}
#define S60(i,j,k,l,m,n,o) {total++; printf("S60 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S61(i,j,k,l) {total++; printf("S61 %d %d %d %d\n",i,j,k,l);}
#define S62(i,j,k,l) {total++; printf("S62 %d %d %d %d\n",i,j,k,l);}
#define S63(i,j,k,l,m,n) {total++; printf("S63 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S64(i,j,k,l) {total++; printf("S64 %d %d %d %d\n",i,j,k,l);}
#define S65(i,j,k,l,m,n) {total++; printf("S65 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S66(i,j) {total++; printf("S66 %d %d\n",i,j);}
#define S67(i,j) {total++; printf("S67 %d %d\n",i,j);}
#define S68(i,j,k) {total++; printf("S68 %d %d %d\n",i,j,k);}
#define S69(i,j) {total++; printf("S69 %d %d\n",i,j);}
#define S70(i,j) {total++; printf("S70 %d %d\n",i,j);}
#define S71(i,j) {total++; printf("S71 %d %d\n",i,j);}
#define S72(i,j,k) {total++; printf("S72 %d %d %d\n",i,j,k);}
#define S73(i,j) {total++; printf("S73 %d %d\n",i,j);}
#define S74(i,j) {total++; printf("S74 %d %d\n",i,j);}
#define S75(i,j) {total++; printf("S75 %d %d\n",i,j);}
#define S76(i,j) {total++; printf("S76 %d %d\n",i,j);}
#define S77(i,j,k) {total++; printf("S77 %d %d %d\n",i,j,k);}
#define S78(i,j) {total++; printf("S78 %d %d\n",i,j);}

int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
  double A71[2000][2000];
  double A67[2000][2000];
  double A65[2000][2000];
  double A61[2000][2000];
  double A64[2000][2000];
  double A60[2000][2000];
  double A70[2000][2000];
  double A63[2000][2000];
  double A62[2000][2000];
  double A30[2000][2000][2000][2000];
  double A57[2000][2000][2000][2000];
  double A26[2000][2000][2000][2000];
  double A43[2000][2000][2000][2000];
  double A22[2000][2000][2000][2000];
  double A49[2000][2000][2000][2000];
  double A25[2000][2000][2000][2000];
  double A42[2000][2000][2000][2000];
  double A13[2000][2000][2000][2000];
  double A8[2000][2000][2000][2000];
  double A10[2000][2000][2000][2000];
  double A16[2000][2000][2000][2000];
  double A15[2000][2000][2000][2000];
  double A28[2000][2000][2000][2000];
  double A54[2000][2000][2000][2000];
  double A17[2000][2000][2000][2000];
  double A69[2000][2000];
  double A3[2000][2000][2000][2000];
  double A5[2000][2000][2000][2000];
  double A4[2000][2000][2000][2000];
  double A11[2000][2000][2000][2000];
  double A59[2000][2000];
  double A9[2000][2000][2000][2000];
  double A27[2000][2000][2000][2000];
  double A72[2000][2000];
  double A14[2000][2000][2000][2000];
  double A2[2000][2000][2000][2000];
  double A66[2000][2000];
  double A24[2000][2000][2000][2000];
  double A29[2000][2000][2000][2000];
  double A6[2000][2000][2000][2000];
  double A7[2000][2000][2000][2000];
  double A18[2000][2000][2000][2000];
  double A46[2000][2000][2000][2000];
  double A1[2000][2000][2000][2000];
  double A12[2000][2000][2000][2000];
  double A21[2000][2000][2000][2000];
  double A23[2000][2000][2000][2000];
  double A20[2000][2000][2000][2000];
  double A31[2000][2000][2000][2000];
  double A34[2000][2000][2000][2000];
  double A50[2000][2000][2000][2000];
  double A45[2000][2000][2000][2000];
  double A38[2000][2000][2000][2000];
  double A19[2000][2000][2000][2000];
  double A40[2000][2000][2000][2000];
  double A68[2000][2000];
  double A44[2000][2000][2000][2000];
  double A39[2000][2000][2000][2000];
  double A41[2000][2000][2000][2000];
  double A47[2000][2000][2000][2000];
  double A32[2000][2000][2000][2000];
  double A35[2000][2000][2000][2000];
  double A55[2000][2000][2000][2000];
  double A48[2000][2000][2000][2000];
  double A51[2000][2000][2000][2000];
  double A53[2000][2000][2000][2000];
  double A36[2000][2000][2000][2000];
  double A33[2000][2000][2000][2000];
  double A52[2000][2000][2000][2000];
  double A58[2000][2000][2000][2000];
  double A37[2000][2000][2000][2000];
  double A56[2000][2000][2000][2000];

#pragma scop
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2;c4++) {
      for (c6=0;c6<=225;c6++) {
        for (c8=0;c8<=225;c8++) {
          A1[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=223;c6++) {
        for (c8=0;c8<=223;c8++) {
          A2[c2][c4][c6][c8];
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
          A6[c2][c4][c6][c8];
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
          A8[c2][c4][c6][c8];
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
          A9[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A10[c2][c4][c6][c8];
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
          A14[c2][c4][c6][c8];
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
          A16[c2][c4][c6][c8];
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
          A17[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A18[c2][c4][c6][c8];
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
          A22[c2][c4][c6][c8];
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
                A23[c2][c4][c6][c8] = A23[c2][c4][c6][c8] + A22[c2][c10][c6+c12][c8+c14] + A24[c4][c10][c12][c14];
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
          A21[c2][c4][c6][c8] = A23[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A25[c2][c4][c6][c8];
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
                A26[c2][c4][c6][c8] = A26[c2][c4][c6][c8] + A25[c2][c10][c6+c12][c8+c14] + A27[c4][c10][c12][c14];
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
          A21[c2][c4][c6][c8] = A26[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A28[c2][c4][c6][c8];
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
                A18[c2][c4][c6][c8] = A18[c2][c4][c6][c8] + A28[c2][c10][c6+c12][c8+c14] + A29[c4][c10][c12][c14];
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
          A30[c2][c4][c6][c8];
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
              A30[c2][c4][c6][c8] = A30[c2][c4][c6][c8] + A21[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A31[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A32[c2][c4][c6][c8];
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
                A33[c2][c4][c6][c8] = A33[c2][c4][c6][c8] + A31[c2][c10][c6+c12][c8+c14] + A34[c4][c10][c12][c14];
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
          A35[c2][c4][c6][c8] = A33[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A36[c2][c4][c6][c8];
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
                A37[c2][c4][c6][c8] = A37[c2][c4][c6][c8] + A36[c2][c10][c6+c12][c8+c14] + A38[c4][c10][c12][c14];
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
          A35[c2][c4][c6][c8] = A37[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A39[c2][c4][c6][c8];
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
                A40[c2][c4][c6][c8] = A40[c2][c4][c6][c8] + A39[c2][c10][c6+c12][c8+c14] + A41[c4][c10][c12][c14];
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
          A35[c2][c4][c6][c8] = A40[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A42[c2][c4][c6][c8];
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
                A32[c2][c4][c6][c8] = A32[c2][c4][c6][c8] + A42[c2][c10][c6+c12][c8+c14] + A43[c4][c10][c12][c14];
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
          A35[c2][c4][c6][c8] = A32[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A44[c2][c4][c6][c8];
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
              A44[c2][c4][c6][c8] = A44[c2][c4][c6][c8] + A35[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A45[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A46[c2][c4][c6][c8];
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
                A47[c2][c4][c6][c8] = A47[c2][c4][c6][c8] + A45[c2][c10][c6+c12][c8+c14] + A48[c4][c10][c12][c14];
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
          A44[c2][c4][c6][c8] = A47[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A49[c2][c4][c6][c8];
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
                A50[c2][c4][c6][c8] = A50[c2][c4][c6][c8] + A49[c2][c10][c6+c12][c8+c14] + A51[c4][c10][c12][c14];
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
          A44[c2][c4][c6][c8] = A50[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A52[c2][c4][c6][c8];
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
                A53[c2][c4][c6][c8] = A53[c2][c4][c6][c8] + A52[c2][c10][c6+c12][c8+c14] + A54[c4][c10][c12][c14];
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
          A44[c2][c4][c6][c8] = A53[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A55[c2][c4][c6][c8];
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
                A46[c2][c4][c6][c8] = A46[c2][c4][c6][c8] + A55[c2][c10][c6+c12][c8+c14] + A56[c4][c10][c12][c14];
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
          A44[c2][c4][c6][c8] = A46[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A57[c2][c4][c6][c8];
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
              A57[c2][c4][c6][c8] = A57[c2][c4][c6][c8] + A44[c2][c4][2*(c6)+c10][2*(c8)+c12];
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
          A58[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A58[c2][c4][c6][c8] = A58[c2][c4][c6][c8] + A57[c2][c4][c6+0][c8+0];
        }
      }
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=25087;c4++) {
      A60[c4][c2] = A59[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A61[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=25087;c6++) {
        A62[c2][c4] = A62[c2][c4] + A63[c2][c6] + A60[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A64[c2][c4] = A62[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A65[c2][c4] = A64[c2][c4];
    }
  }
  for (c2=0;c2<=4095;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A67[c4][c2] = A66[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A61[c2][c4] = A61[c2][c4] + A65[c2][c6] + A67[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A68[c2][c4] = A61[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A65[c2][c4] = A68[c2][c4];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=4095;c4++) {
      A70[c4][c2] = A69[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A71[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=4095;c6++) {
        A71[c2][c4] = A71[c2][c4] + A65[c2][c6] + A70[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A72[c2][c4] = A71[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
