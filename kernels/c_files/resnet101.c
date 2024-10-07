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
#define S6(i,j,k,l) {total++; printf("S6 %d %d %d %d\n",i,j,k,l);}
#define S7(i,j,k,l) {total++; printf("S7 %d %d %d %d\n",i,j,k,l);}
#define S8(i,j,k,l,m,n) {total++; printf("S8 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S9(i,j,k,l) {total++; printf("S9 %d %d %d %d\n",i,j,k,l);}
#define S10(i,j,k,l,m,n,o) {total++; printf("S10 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l) {total++; printf("S12 %d %d %d %d\n",i,j,k,l);}
#define S13(i,j,k,l) {total++; printf("S13 %d %d %d %d\n",i,j,k,l);}
#define S14(i,j,k,l,m,n,o) {total++; printf("S14 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S15(i,j,k,l) {total++; printf("S15 %d %d %d %d\n",i,j,k,l);}
#define S16(i,j,k,l) {total++; printf("S16 %d %d %d %d\n",i,j,k,l);}
#define S17(i,j,k,l) {total++; printf("S17 %d %d %d %d\n",i,j,k,l);}
#define S18(i,j,k,l,m,n,o) {total++; printf("S18 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S19(i,j,k,l) {total++; printf("S19 %d %d %d %d\n",i,j,k,l);}
#define S20(i,j,k,l,m,n,o) {total++; printf("S20 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S21(i,j,k,l) {total++; printf("S21 %d %d %d %d\n",i,j,k,l);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l) {total++; printf("S23 %d %d %d %d\n",i,j,k,l);}
#define S24(i,j,k,l,m,n,o) {total++; printf("S24 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l) {total++; printf("S26 %d %d %d %d\n",i,j,k,l);}
#define S27(i,j,k,l) {total++; printf("S27 %d %d %d %d\n",i,j,k,l);}
#define S28(i,j,k,l,m,n,o) {total++; printf("S28 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l) {total++; printf("S30 %d %d %d %d\n",i,j,k,l);}
#define S31(i,j,k,l,m,n,o) {total++; printf("S31 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l) {total++; printf("S33 %d %d %d %d\n",i,j,k,l);}
#define S34(i,j,k,l) {total++; printf("S34 %d %d %d %d\n",i,j,k,l);}
#define S35(i,j,k,l,m,n,o) {total++; printf("S35 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S36(i,j,k,l) {total++; printf("S36 %d %d %d %d\n",i,j,k,l);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l,m,n,o) {total++; printf("S39 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l) {total++; printf("S41 %d %d %d %d\n",i,j,k,l);}
#define S42(i,j,k,l,m,n,o) {total++; printf("S42 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S43(i,j,k,l) {total++; printf("S43 %d %d %d %d\n",i,j,k,l);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l) {total++; printf("S45 %d %d %d %d\n",i,j,k,l);}
#define S46(i,j,k,l) {total++; printf("S46 %d %d %d %d\n",i,j,k,l);}
#define S47(i,j,k,l,m,n,o) {total++; printf("S47 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S48(i,j,k,l) {total++; printf("S48 %d %d %d %d\n",i,j,k,l);}
#define S49(i,j,k,l) {total++; printf("S49 %d %d %d %d\n",i,j,k,l);}
#define S50(i,j,k,l) {total++; printf("S50 %d %d %d %d\n",i,j,k,l);}
#define S51(i,j,k,l) {total++; printf("S51 %d %d %d %d\n",i,j,k,l);}
#define S52(i,j,k,l,m,n,o) {total++; printf("S52 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S53(i,j,k,l) {total++; printf("S53 %d %d %d %d\n",i,j,k,l);}
#define S54(i,j,k,l) {total++; printf("S54 %d %d %d %d\n",i,j,k,l);}
#define S55(i,j,k,l) {total++; printf("S55 %d %d %d %d\n",i,j,k,l);}
#define S56(i,j,k,l,m,n,o) {total++; printf("S56 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S57(i,j,k,l) {total++; printf("S57 %d %d %d %d\n",i,j,k,l);}
#define S58(i,j,k,l,m,n,o) {total++; printf("S58 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S59(i,j,k,l) {total++; printf("S59 %d %d %d %d\n",i,j,k,l);}
#define S60(i,j,k,l) {total++; printf("S60 %d %d %d %d\n",i,j,k,l);}
#define S61(i,j,k,l) {total++; printf("S61 %d %d %d %d\n",i,j,k,l);}
#define S62(i,j,k,l,m,n,o) {total++; printf("S62 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S63(i,j,k,l) {total++; printf("S63 %d %d %d %d\n",i,j,k,l);}
#define S64(i,j,k,l) {total++; printf("S64 %d %d %d %d\n",i,j,k,l);}
#define S65(i,j,k,l) {total++; printf("S65 %d %d %d %d\n",i,j,k,l);}
#define S66(i,j,k,l,m,n,o) {total++; printf("S66 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S67(i,j,k,l) {total++; printf("S67 %d %d %d %d\n",i,j,k,l);}
#define S68(i,j,k,l) {total++; printf("S68 %d %d %d %d\n",i,j,k,l);}
#define S69(i,j,k,l,m,n,o) {total++; printf("S69 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S70(i,j,k,l) {total++; printf("S70 %d %d %d %d\n",i,j,k,l);}
#define S71(i,j,k,l) {total++; printf("S71 %d %d %d %d\n",i,j,k,l);}
#define S72(i,j,k,l) {total++; printf("S72 %d %d %d %d\n",i,j,k,l);}
#define S73(i,j,k,l,m,n,o) {total++; printf("S73 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S74(i,j,k,l) {total++; printf("S74 %d %d %d %d\n",i,j,k,l);}
#define S75(i,j,k,l) {total++; printf("S75 %d %d %d %d\n",i,j,k,l);}
#define S76(i,j,k,l) {total++; printf("S76 %d %d %d %d\n",i,j,k,l);}
#define S77(i,j,k,l,m,n,o) {total++; printf("S77 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S78(i,j,k,l) {total++; printf("S78 %d %d %d %d\n",i,j,k,l);}
#define S79(i,j,k,l) {total++; printf("S79 %d %d %d %d\n",i,j,k,l);}
#define S80(i,j,k,l,m,n,o) {total++; printf("S80 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S81(i,j,k,l) {total++; printf("S81 %d %d %d %d\n",i,j,k,l);}
#define S82(i,j,k,l) {total++; printf("S82 %d %d %d %d\n",i,j,k,l);}
#define S83(i,j,k,l) {total++; printf("S83 %d %d %d %d\n",i,j,k,l);}
#define S84(i,j,k,l,m,n,o) {total++; printf("S84 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S85(i,j,k,l) {total++; printf("S85 %d %d %d %d\n",i,j,k,l);}
#define S86(i,j,k,l) {total++; printf("S86 %d %d %d %d\n",i,j,k,l);}
#define S87(i,j,k,l) {total++; printf("S87 %d %d %d %d\n",i,j,k,l);}
#define S88(i,j,k,l,m,n,o) {total++; printf("S88 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S89(i,j,k,l) {total++; printf("S89 %d %d %d %d\n",i,j,k,l);}
#define S90(i,j,k,l) {total++; printf("S90 %d %d %d %d\n",i,j,k,l);}
#define S91(i,j,k,l,m,n,o) {total++; printf("S91 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S92(i,j,k,l) {total++; printf("S92 %d %d %d %d\n",i,j,k,l);}
#define S93(i,j,k,l) {total++; printf("S93 %d %d %d %d\n",i,j,k,l);}
#define S94(i,j,k,l) {total++; printf("S94 %d %d %d %d\n",i,j,k,l);}
#define S95(i,j,k,l) {total++; printf("S95 %d %d %d %d\n",i,j,k,l);}
#define S96(i,j,k,l,m,n,o) {total++; printf("S96 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S97(i,j,k,l) {total++; printf("S97 %d %d %d %d\n",i,j,k,l);}
#define S98(i,j,k,l) {total++; printf("S98 %d %d %d %d\n",i,j,k,l);}
#define S99(i,j,k,l) {total++; printf("S99 %d %d %d %d\n",i,j,k,l);}
#define S100(i,j,k,l) {total++; printf("S100 %d %d %d %d\n",i,j,k,l);}
#define S101(i,j,k,l,m,n,o) {total++; printf("S101 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S102(i,j,k,l) {total++; printf("S102 %d %d %d %d\n",i,j,k,l);}
#define S103(i,j,k,l) {total++; printf("S103 %d %d %d %d\n",i,j,k,l);}
#define S104(i,j,k,l) {total++; printf("S104 %d %d %d %d\n",i,j,k,l);}
#define S105(i,j,k,l,m,n,o) {total++; printf("S105 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S106(i,j,k,l) {total++; printf("S106 %d %d %d %d\n",i,j,k,l);}
#define S107(i,j,k,l,m,n,o) {total++; printf("S107 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S108(i,j,k,l) {total++; printf("S108 %d %d %d %d\n",i,j,k,l);}
#define S109(i,j,k,l) {total++; printf("S109 %d %d %d %d\n",i,j,k,l);}
#define S110(i,j,k,l) {total++; printf("S110 %d %d %d %d\n",i,j,k,l);}
#define S111(i,j,k,l,m,n,o) {total++; printf("S111 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S112(i,j,k,l) {total++; printf("S112 %d %d %d %d\n",i,j,k,l);}
#define S113(i,j,k,l) {total++; printf("S113 %d %d %d %d\n",i,j,k,l);}
#define S114(i,j,k,l) {total++; printf("S114 %d %d %d %d\n",i,j,k,l);}
#define S115(i,j,k,l,m,n,o) {total++; printf("S115 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S116(i,j,k,l) {total++; printf("S116 %d %d %d %d\n",i,j,k,l);}
#define S117(i,j,k,l) {total++; printf("S117 %d %d %d %d\n",i,j,k,l);}
#define S118(i,j,k,l,m,n,o) {total++; printf("S118 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S119(i,j,k,l) {total++; printf("S119 %d %d %d %d\n",i,j,k,l);}
#define S120(i,j,k,l) {total++; printf("S120 %d %d %d %d\n",i,j,k,l);}
#define S121(i,j,k,l) {total++; printf("S121 %d %d %d %d\n",i,j,k,l);}
#define S122(i,j,k,l,m,n,o) {total++; printf("S122 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S123(i,j,k,l) {total++; printf("S123 %d %d %d %d\n",i,j,k,l);}
#define S124(i,j,k,l) {total++; printf("S124 %d %d %d %d\n",i,j,k,l);}
#define S125(i,j,k,l) {total++; printf("S125 %d %d %d %d\n",i,j,k,l);}
#define S126(i,j,k,l,m,n,o) {total++; printf("S126 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S127(i,j,k,l) {total++; printf("S127 %d %d %d %d\n",i,j,k,l);}
#define S128(i,j,k,l) {total++; printf("S128 %d %d %d %d\n",i,j,k,l);}
#define S129(i,j,k,l,m,n,o) {total++; printf("S129 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S130(i,j,k,l) {total++; printf("S130 %d %d %d %d\n",i,j,k,l);}
#define S131(i,j,k,l) {total++; printf("S131 %d %d %d %d\n",i,j,k,l);}
#define S132(i,j,k,l) {total++; printf("S132 %d %d %d %d\n",i,j,k,l);}
#define S133(i,j,k,l,m,n,o) {total++; printf("S133 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S134(i,j,k,l) {total++; printf("S134 %d %d %d %d\n",i,j,k,l);}
#define S135(i,j,k,l) {total++; printf("S135 %d %d %d %d\n",i,j,k,l);}
#define S136(i,j,k,l) {total++; printf("S136 %d %d %d %d\n",i,j,k,l);}
#define S137(i,j,k,l,m,n,o) {total++; printf("S137 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S138(i,j,k,l) {total++; printf("S138 %d %d %d %d\n",i,j,k,l);}
#define S139(i,j,k,l) {total++; printf("S139 %d %d %d %d\n",i,j,k,l);}
#define S140(i,j,k,l,m,n,o) {total++; printf("S140 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S141(i,j,k,l) {total++; printf("S141 %d %d %d %d\n",i,j,k,l);}
#define S142(i,j,k,l) {total++; printf("S142 %d %d %d %d\n",i,j,k,l);}
#define S143(i,j,k,l) {total++; printf("S143 %d %d %d %d\n",i,j,k,l);}
#define S144(i,j,k,l,m,n,o) {total++; printf("S144 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S145(i,j,k,l) {total++; printf("S145 %d %d %d %d\n",i,j,k,l);}
#define S146(i,j,k,l) {total++; printf("S146 %d %d %d %d\n",i,j,k,l);}
#define S147(i,j,k,l) {total++; printf("S147 %d %d %d %d\n",i,j,k,l);}
#define S148(i,j,k,l,m,n,o) {total++; printf("S148 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S149(i,j,k,l) {total++; printf("S149 %d %d %d %d\n",i,j,k,l);}
#define S150(i,j,k,l) {total++; printf("S150 %d %d %d %d\n",i,j,k,l);}
#define S151(i,j,k,l,m,n,o) {total++; printf("S151 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S152(i,j,k,l) {total++; printf("S152 %d %d %d %d\n",i,j,k,l);}
#define S153(i,j,k,l) {total++; printf("S153 %d %d %d %d\n",i,j,k,l);}
#define S154(i,j,k,l) {total++; printf("S154 %d %d %d %d\n",i,j,k,l);}
#define S155(i,j,k,l,m,n,o) {total++; printf("S155 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S156(i,j,k,l) {total++; printf("S156 %d %d %d %d\n",i,j,k,l);}
#define S157(i,j,k,l) {total++; printf("S157 %d %d %d %d\n",i,j,k,l);}
#define S158(i,j,k,l) {total++; printf("S158 %d %d %d %d\n",i,j,k,l);}
#define S159(i,j,k,l,m,n,o) {total++; printf("S159 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S160(i,j,k,l) {total++; printf("S160 %d %d %d %d\n",i,j,k,l);}
#define S161(i,j,k,l) {total++; printf("S161 %d %d %d %d\n",i,j,k,l);}
#define S162(i,j,k,l,m,n,o) {total++; printf("S162 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S163(i,j,k,l) {total++; printf("S163 %d %d %d %d\n",i,j,k,l);}
#define S164(i,j,k,l) {total++; printf("S164 %d %d %d %d\n",i,j,k,l);}
#define S165(i,j,k,l) {total++; printf("S165 %d %d %d %d\n",i,j,k,l);}
#define S166(i,j,k,l,m,n,o) {total++; printf("S166 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S167(i,j,k,l) {total++; printf("S167 %d %d %d %d\n",i,j,k,l);}
#define S168(i,j,k,l) {total++; printf("S168 %d %d %d %d\n",i,j,k,l);}
#define S169(i,j,k,l) {total++; printf("S169 %d %d %d %d\n",i,j,k,l);}
#define S170(i,j,k,l,m,n,o) {total++; printf("S170 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S171(i,j,k,l) {total++; printf("S171 %d %d %d %d\n",i,j,k,l);}
#define S172(i,j,k,l) {total++; printf("S172 %d %d %d %d\n",i,j,k,l);}
#define S173(i,j,k,l,m,n,o) {total++; printf("S173 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S174(i,j,k,l) {total++; printf("S174 %d %d %d %d\n",i,j,k,l);}
#define S175(i,j,k,l) {total++; printf("S175 %d %d %d %d\n",i,j,k,l);}
#define S176(i,j,k,l) {total++; printf("S176 %d %d %d %d\n",i,j,k,l);}
#define S177(i,j,k,l,m,n,o) {total++; printf("S177 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S178(i,j,k,l) {total++; printf("S178 %d %d %d %d\n",i,j,k,l);}
#define S179(i,j,k,l) {total++; printf("S179 %d %d %d %d\n",i,j,k,l);}
#define S180(i,j,k,l) {total++; printf("S180 %d %d %d %d\n",i,j,k,l);}
#define S181(i,j,k,l,m,n,o) {total++; printf("S181 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S182(i,j,k,l) {total++; printf("S182 %d %d %d %d\n",i,j,k,l);}
#define S183(i,j,k,l) {total++; printf("S183 %d %d %d %d\n",i,j,k,l);}
#define S184(i,j,k,l,m,n,o) {total++; printf("S184 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S185(i,j,k,l) {total++; printf("S185 %d %d %d %d\n",i,j,k,l);}
#define S186(i,j,k,l) {total++; printf("S186 %d %d %d %d\n",i,j,k,l);}
#define S187(i,j,k,l) {total++; printf("S187 %d %d %d %d\n",i,j,k,l);}
#define S188(i,j,k,l,m,n,o) {total++; printf("S188 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S189(i,j,k,l) {total++; printf("S189 %d %d %d %d\n",i,j,k,l);}
#define S190(i,j,k,l) {total++; printf("S190 %d %d %d %d\n",i,j,k,l);}
#define S191(i,j,k,l) {total++; printf("S191 %d %d %d %d\n",i,j,k,l);}
#define S192(i,j,k,l,m,n,o) {total++; printf("S192 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S193(i,j,k,l) {total++; printf("S193 %d %d %d %d\n",i,j,k,l);}
#define S194(i,j,k,l) {total++; printf("S194 %d %d %d %d\n",i,j,k,l);}
#define S195(i,j,k,l,m,n,o) {total++; printf("S195 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S196(i,j,k,l) {total++; printf("S196 %d %d %d %d\n",i,j,k,l);}
#define S197(i,j,k,l) {total++; printf("S197 %d %d %d %d\n",i,j,k,l);}
#define S198(i,j,k,l) {total++; printf("S198 %d %d %d %d\n",i,j,k,l);}
#define S199(i,j,k,l,m,n,o) {total++; printf("S199 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S200(i,j,k,l) {total++; printf("S200 %d %d %d %d\n",i,j,k,l);}
#define S201(i,j,k,l) {total++; printf("S201 %d %d %d %d\n",i,j,k,l);}
#define S202(i,j,k,l) {total++; printf("S202 %d %d %d %d\n",i,j,k,l);}
#define S203(i,j,k,l,m,n,o) {total++; printf("S203 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S204(i,j,k,l) {total++; printf("S204 %d %d %d %d\n",i,j,k,l);}
#define S205(i,j,k,l) {total++; printf("S205 %d %d %d %d\n",i,j,k,l);}
#define S206(i,j,k,l,m,n,o) {total++; printf("S206 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S207(i,j,k,l) {total++; printf("S207 %d %d %d %d\n",i,j,k,l);}
#define S208(i,j,k,l) {total++; printf("S208 %d %d %d %d\n",i,j,k,l);}
#define S209(i,j,k,l) {total++; printf("S209 %d %d %d %d\n",i,j,k,l);}
#define S210(i,j,k,l,m,n,o) {total++; printf("S210 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S211(i,j,k,l) {total++; printf("S211 %d %d %d %d\n",i,j,k,l);}
#define S212(i,j,k,l) {total++; printf("S212 %d %d %d %d\n",i,j,k,l);}
#define S213(i,j,k,l) {total++; printf("S213 %d %d %d %d\n",i,j,k,l);}
#define S214(i,j,k,l,m,n,o) {total++; printf("S214 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S215(i,j,k,l) {total++; printf("S215 %d %d %d %d\n",i,j,k,l);}
#define S216(i,j,k,l) {total++; printf("S216 %d %d %d %d\n",i,j,k,l);}
#define S217(i,j,k,l,m,n,o) {total++; printf("S217 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S218(i,j,k,l) {total++; printf("S218 %d %d %d %d\n",i,j,k,l);}
#define S219(i,j,k,l) {total++; printf("S219 %d %d %d %d\n",i,j,k,l);}
#define S220(i,j,k,l) {total++; printf("S220 %d %d %d %d\n",i,j,k,l);}
#define S221(i,j,k,l,m,n,o) {total++; printf("S221 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S222(i,j,k,l) {total++; printf("S222 %d %d %d %d\n",i,j,k,l);}
#define S223(i,j,k,l) {total++; printf("S223 %d %d %d %d\n",i,j,k,l);}
#define S224(i,j,k,l) {total++; printf("S224 %d %d %d %d\n",i,j,k,l);}
#define S225(i,j,k,l,m,n,o) {total++; printf("S225 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S226(i,j,k,l) {total++; printf("S226 %d %d %d %d\n",i,j,k,l);}
#define S227(i,j,k,l) {total++; printf("S227 %d %d %d %d\n",i,j,k,l);}
#define S228(i,j,k,l,m,n,o) {total++; printf("S228 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S229(i,j,k,l) {total++; printf("S229 %d %d %d %d\n",i,j,k,l);}
#define S230(i,j,k,l) {total++; printf("S230 %d %d %d %d\n",i,j,k,l);}
#define S231(i,j,k,l) {total++; printf("S231 %d %d %d %d\n",i,j,k,l);}
#define S232(i,j,k,l,m,n,o) {total++; printf("S232 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S233(i,j,k,l) {total++; printf("S233 %d %d %d %d\n",i,j,k,l);}
#define S234(i,j,k,l) {total++; printf("S234 %d %d %d %d\n",i,j,k,l);}
#define S235(i,j,k,l) {total++; printf("S235 %d %d %d %d\n",i,j,k,l);}
#define S236(i,j,k,l,m,n,o) {total++; printf("S236 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S237(i,j,k,l) {total++; printf("S237 %d %d %d %d\n",i,j,k,l);}
#define S238(i,j,k,l) {total++; printf("S238 %d %d %d %d\n",i,j,k,l);}
#define S239(i,j,k,l,m,n,o) {total++; printf("S239 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S240(i,j,k,l) {total++; printf("S240 %d %d %d %d\n",i,j,k,l);}
#define S241(i,j,k,l) {total++; printf("S241 %d %d %d %d\n",i,j,k,l);}
#define S242(i,j,k,l) {total++; printf("S242 %d %d %d %d\n",i,j,k,l);}
#define S243(i,j,k,l,m,n,o) {total++; printf("S243 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S244(i,j,k,l) {total++; printf("S244 %d %d %d %d\n",i,j,k,l);}
#define S245(i,j,k,l) {total++; printf("S245 %d %d %d %d\n",i,j,k,l);}
#define S246(i,j,k,l) {total++; printf("S246 %d %d %d %d\n",i,j,k,l);}
#define S247(i,j,k,l,m,n,o) {total++; printf("S247 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S248(i,j,k,l) {total++; printf("S248 %d %d %d %d\n",i,j,k,l);}
#define S249(i,j,k,l) {total++; printf("S249 %d %d %d %d\n",i,j,k,l);}
#define S250(i,j,k,l,m,n,o) {total++; printf("S250 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S251(i,j,k,l) {total++; printf("S251 %d %d %d %d\n",i,j,k,l);}
#define S252(i,j,k,l) {total++; printf("S252 %d %d %d %d\n",i,j,k,l);}
#define S253(i,j,k,l) {total++; printf("S253 %d %d %d %d\n",i,j,k,l);}
#define S254(i,j,k,l,m,n,o) {total++; printf("S254 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S255(i,j,k,l) {total++; printf("S255 %d %d %d %d\n",i,j,k,l);}
#define S256(i,j,k,l) {total++; printf("S256 %d %d %d %d\n",i,j,k,l);}
#define S257(i,j,k,l) {total++; printf("S257 %d %d %d %d\n",i,j,k,l);}
#define S258(i,j,k,l,m,n,o) {total++; printf("S258 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S259(i,j,k,l) {total++; printf("S259 %d %d %d %d\n",i,j,k,l);}
#define S260(i,j,k,l) {total++; printf("S260 %d %d %d %d\n",i,j,k,l);}
#define S261(i,j,k,l,m,n,o) {total++; printf("S261 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S262(i,j,k,l) {total++; printf("S262 %d %d %d %d\n",i,j,k,l);}
#define S263(i,j,k,l) {total++; printf("S263 %d %d %d %d\n",i,j,k,l);}
#define S264(i,j,k,l) {total++; printf("S264 %d %d %d %d\n",i,j,k,l);}
#define S265(i,j,k,l,m,n,o) {total++; printf("S265 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S266(i,j,k,l) {total++; printf("S266 %d %d %d %d\n",i,j,k,l);}
#define S267(i,j,k,l) {total++; printf("S267 %d %d %d %d\n",i,j,k,l);}
#define S268(i,j,k,l) {total++; printf("S268 %d %d %d %d\n",i,j,k,l);}
#define S269(i,j,k,l,m,n,o) {total++; printf("S269 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S270(i,j,k,l) {total++; printf("S270 %d %d %d %d\n",i,j,k,l);}
#define S271(i,j,k,l) {total++; printf("S271 %d %d %d %d\n",i,j,k,l);}
#define S272(i,j,k,l,m,n,o) {total++; printf("S272 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S273(i,j,k,l) {total++; printf("S273 %d %d %d %d\n",i,j,k,l);}
#define S274(i,j,k,l) {total++; printf("S274 %d %d %d %d\n",i,j,k,l);}
#define S275(i,j,k,l) {total++; printf("S275 %d %d %d %d\n",i,j,k,l);}
#define S276(i,j,k,l,m,n,o) {total++; printf("S276 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S277(i,j,k,l) {total++; printf("S277 %d %d %d %d\n",i,j,k,l);}
#define S278(i,j,k,l) {total++; printf("S278 %d %d %d %d\n",i,j,k,l);}
#define S279(i,j,k,l) {total++; printf("S279 %d %d %d %d\n",i,j,k,l);}
#define S280(i,j,k,l,m,n,o) {total++; printf("S280 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S281(i,j,k,l) {total++; printf("S281 %d %d %d %d\n",i,j,k,l);}
#define S282(i,j,k,l) {total++; printf("S282 %d %d %d %d\n",i,j,k,l);}
#define S283(i,j,k,l,m,n,o) {total++; printf("S283 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S284(i,j,k,l) {total++; printf("S284 %d %d %d %d\n",i,j,k,l);}
#define S285(i,j,k,l) {total++; printf("S285 %d %d %d %d\n",i,j,k,l);}
#define S286(i,j,k,l) {total++; printf("S286 %d %d %d %d\n",i,j,k,l);}
#define S287(i,j,k,l,m,n,o) {total++; printf("S287 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S288(i,j,k,l) {total++; printf("S288 %d %d %d %d\n",i,j,k,l);}
#define S289(i,j,k,l) {total++; printf("S289 %d %d %d %d\n",i,j,k,l);}
#define S290(i,j,k,l) {total++; printf("S290 %d %d %d %d\n",i,j,k,l);}
#define S291(i,j,k,l,m,n,o) {total++; printf("S291 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S292(i,j,k,l) {total++; printf("S292 %d %d %d %d\n",i,j,k,l);}
#define S293(i,j,k,l) {total++; printf("S293 %d %d %d %d\n",i,j,k,l);}
#define S294(i,j,k,l,m,n,o) {total++; printf("S294 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S295(i,j,k,l) {total++; printf("S295 %d %d %d %d\n",i,j,k,l);}
#define S296(i,j,k,l) {total++; printf("S296 %d %d %d %d\n",i,j,k,l);}
#define S297(i,j,k,l) {total++; printf("S297 %d %d %d %d\n",i,j,k,l);}
#define S298(i,j,k,l,m,n,o) {total++; printf("S298 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S299(i,j,k,l) {total++; printf("S299 %d %d %d %d\n",i,j,k,l);}
#define S300(i,j,k,l) {total++; printf("S300 %d %d %d %d\n",i,j,k,l);}
#define S301(i,j,k,l) {total++; printf("S301 %d %d %d %d\n",i,j,k,l);}
#define S302(i,j,k,l,m,n,o) {total++; printf("S302 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S303(i,j,k,l) {total++; printf("S303 %d %d %d %d\n",i,j,k,l);}
#define S304(i,j,k,l) {total++; printf("S304 %d %d %d %d\n",i,j,k,l);}
#define S305(i,j,k,l,m,n,o) {total++; printf("S305 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S306(i,j,k,l) {total++; printf("S306 %d %d %d %d\n",i,j,k,l);}
#define S307(i,j,k,l) {total++; printf("S307 %d %d %d %d\n",i,j,k,l);}
#define S308(i,j,k,l) {total++; printf("S308 %d %d %d %d\n",i,j,k,l);}
#define S309(i,j,k,l,m,n,o) {total++; printf("S309 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S310(i,j,k,l) {total++; printf("S310 %d %d %d %d\n",i,j,k,l);}
#define S311(i,j,k,l) {total++; printf("S311 %d %d %d %d\n",i,j,k,l);}
#define S312(i,j,k,l) {total++; printf("S312 %d %d %d %d\n",i,j,k,l);}
#define S313(i,j,k,l,m,n,o) {total++; printf("S313 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S314(i,j,k,l) {total++; printf("S314 %d %d %d %d\n",i,j,k,l);}
#define S315(i,j,k,l) {total++; printf("S315 %d %d %d %d\n",i,j,k,l);}
#define S316(i,j,k,l,m,n,o) {total++; printf("S316 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S317(i,j,k,l) {total++; printf("S317 %d %d %d %d\n",i,j,k,l);}
#define S318(i,j,k,l) {total++; printf("S318 %d %d %d %d\n",i,j,k,l);}
#define S319(i,j,k,l) {total++; printf("S319 %d %d %d %d\n",i,j,k,l);}
#define S320(i,j,k,l,m,n,o) {total++; printf("S320 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S321(i,j,k,l) {total++; printf("S321 %d %d %d %d\n",i,j,k,l);}
#define S322(i,j,k,l) {total++; printf("S322 %d %d %d %d\n",i,j,k,l);}
#define S323(i,j,k,l) {total++; printf("S323 %d %d %d %d\n",i,j,k,l);}
#define S324(i,j,k,l,m,n,o) {total++; printf("S324 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S325(i,j,k,l) {total++; printf("S325 %d %d %d %d\n",i,j,k,l);}
#define S326(i,j,k,l) {total++; printf("S326 %d %d %d %d\n",i,j,k,l);}
#define S327(i,j,k,l,m,n,o) {total++; printf("S327 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S328(i,j,k,l) {total++; printf("S328 %d %d %d %d\n",i,j,k,l);}
#define S329(i,j,k,l) {total++; printf("S329 %d %d %d %d\n",i,j,k,l);}
#define S330(i,j,k,l) {total++; printf("S330 %d %d %d %d\n",i,j,k,l);}
#define S331(i,j,k,l,m,n,o) {total++; printf("S331 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S332(i,j,k,l) {total++; printf("S332 %d %d %d %d\n",i,j,k,l);}
#define S333(i,j,k,l) {total++; printf("S333 %d %d %d %d\n",i,j,k,l);}
#define S334(i,j,k,l) {total++; printf("S334 %d %d %d %d\n",i,j,k,l);}
#define S335(i,j,k,l,m,n,o) {total++; printf("S335 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S336(i,j,k,l) {total++; printf("S336 %d %d %d %d\n",i,j,k,l);}
#define S337(i,j,k,l) {total++; printf("S337 %d %d %d %d\n",i,j,k,l);}
#define S338(i,j,k,l,m,n,o) {total++; printf("S338 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S339(i,j,k,l) {total++; printf("S339 %d %d %d %d\n",i,j,k,l);}
#define S340(i,j,k,l) {total++; printf("S340 %d %d %d %d\n",i,j,k,l);}
#define S341(i,j,k,l) {total++; printf("S341 %d %d %d %d\n",i,j,k,l);}
#define S342(i,j,k,l,m,n,o) {total++; printf("S342 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S343(i,j,k,l) {total++; printf("S343 %d %d %d %d\n",i,j,k,l);}
#define S344(i,j,k,l) {total++; printf("S344 %d %d %d %d\n",i,j,k,l);}
#define S345(i,j,k,l) {total++; printf("S345 %d %d %d %d\n",i,j,k,l);}
#define S346(i,j,k,l,m,n,o) {total++; printf("S346 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S347(i,j,k,l) {total++; printf("S347 %d %d %d %d\n",i,j,k,l);}
#define S348(i,j,k,l) {total++; printf("S348 %d %d %d %d\n",i,j,k,l);}
#define S349(i,j,k,l,m,n,o) {total++; printf("S349 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S350(i,j,k,l) {total++; printf("S350 %d %d %d %d\n",i,j,k,l);}
#define S351(i,j,k,l) {total++; printf("S351 %d %d %d %d\n",i,j,k,l);}
#define S352(i,j,k,l) {total++; printf("S352 %d %d %d %d\n",i,j,k,l);}
#define S353(i,j,k,l) {total++; printf("S353 %d %d %d %d\n",i,j,k,l);}
#define S354(i,j,k,l,m,n,o) {total++; printf("S354 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S355(i,j,k,l) {total++; printf("S355 %d %d %d %d\n",i,j,k,l);}
#define S356(i,j,k,l) {total++; printf("S356 %d %d %d %d\n",i,j,k,l);}
#define S357(i,j,k,l) {total++; printf("S357 %d %d %d %d\n",i,j,k,l);}
#define S358(i,j,k,l) {total++; printf("S358 %d %d %d %d\n",i,j,k,l);}
#define S359(i,j,k,l,m,n,o) {total++; printf("S359 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S360(i,j,k,l) {total++; printf("S360 %d %d %d %d\n",i,j,k,l);}
#define S361(i,j,k,l) {total++; printf("S361 %d %d %d %d\n",i,j,k,l);}
#define S362(i,j,k,l) {total++; printf("S362 %d %d %d %d\n",i,j,k,l);}
#define S363(i,j,k,l,m,n,o) {total++; printf("S363 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S364(i,j,k,l) {total++; printf("S364 %d %d %d %d\n",i,j,k,l);}
#define S365(i,j,k,l,m,n,o) {total++; printf("S365 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S366(i,j,k,l) {total++; printf("S366 %d %d %d %d\n",i,j,k,l);}
#define S367(i,j,k,l) {total++; printf("S367 %d %d %d %d\n",i,j,k,l);}
#define S368(i,j,k,l) {total++; printf("S368 %d %d %d %d\n",i,j,k,l);}
#define S369(i,j,k,l,m,n,o) {total++; printf("S369 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S370(i,j,k,l) {total++; printf("S370 %d %d %d %d\n",i,j,k,l);}
#define S371(i,j,k,l) {total++; printf("S371 %d %d %d %d\n",i,j,k,l);}
#define S372(i,j,k,l) {total++; printf("S372 %d %d %d %d\n",i,j,k,l);}
#define S373(i,j,k,l,m,n,o) {total++; printf("S373 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S374(i,j,k,l) {total++; printf("S374 %d %d %d %d\n",i,j,k,l);}
#define S375(i,j,k,l) {total++; printf("S375 %d %d %d %d\n",i,j,k,l);}
#define S376(i,j,k,l,m,n,o) {total++; printf("S376 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S377(i,j,k,l) {total++; printf("S377 %d %d %d %d\n",i,j,k,l);}
#define S378(i,j,k,l) {total++; printf("S378 %d %d %d %d\n",i,j,k,l);}
#define S379(i,j,k,l) {total++; printf("S379 %d %d %d %d\n",i,j,k,l);}
#define S380(i,j,k,l,m,n,o) {total++; printf("S380 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S381(i,j,k,l) {total++; printf("S381 %d %d %d %d\n",i,j,k,l);}
#define S382(i,j,k,l) {total++; printf("S382 %d %d %d %d\n",i,j,k,l);}
#define S383(i,j,k,l) {total++; printf("S383 %d %d %d %d\n",i,j,k,l);}
#define S384(i,j,k,l,m,n,o) {total++; printf("S384 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S385(i,j,k,l) {total++; printf("S385 %d %d %d %d\n",i,j,k,l);}
#define S386(i,j,k,l) {total++; printf("S386 %d %d %d %d\n",i,j,k,l);}
#define S387(i,j,k,l,m,n,o) {total++; printf("S387 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S388(i,j,k,l) {total++; printf("S388 %d %d %d %d\n",i,j,k,l);}
#define S389(i,j,k,l) {total++; printf("S389 %d %d %d %d\n",i,j,k,l);}
#define S390(i,j,k,l) {total++; printf("S390 %d %d %d %d\n",i,j,k,l);}
#define S391(i,j,k,l) {total++; printf("S391 %d %d %d %d\n",i,j,k,l);}
#define S392(i,j,k,l,m,n) {total++; printf("S392 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S393(i,j,k,l) {total++; printf("S393 %d %d %d %d\n",i,j,k,l);}
#define S394(i,j) {total++; printf("S394 %d %d\n",i,j);}
#define S395(i,j) {total++; printf("S395 %d %d\n",i,j);}
#define S396(i,j,k) {total++; printf("S396 %d %d %d\n",i,j,k);}
#define S397(i,j) {total++; printf("S397 %d %d\n",i,j);}
  volatile float A1[64][3][230][230];
  volatile float A10[64][64][56][56];
  volatile float A100[256][256][3][3];
  volatile float A101[64][256][14][14];
  volatile float A102[64][256][14][14];
  volatile float A103[64][1024][14][14];
  volatile float A104[64][1024][14][14];
  volatile float A105[1024][256][1][1];
  volatile float A106[64][1024][14][14];
  volatile float A107[64][1024][14][14];
  volatile float A108[1024][512][1][1];
  volatile float A109[64][1024][14][14];
  volatile float A11[64][64][56][56];
  volatile float A110[64][1024][14][14];
  volatile float A111[64][1024][14][14];
  volatile float A112[64][256][14][14];
  volatile float A113[256][1024][1][1];
  volatile float A114[64][256][14][14];
  volatile float A115[64][256][16][16];
  volatile float A116[64][256][14][14];
  volatile float A117[256][256][3][3];
  volatile float A118[64][256][14][14];
  volatile float A119[64][1024][14][14];
  volatile float A12[64][64][58][58];
  volatile float A120[1024][256][1][1];
  volatile float A121[64][1024][14][14];
  volatile float A122[64][1024][14][14];
  volatile float A123[64][256][14][14];
  volatile float A124[256][1024][1][1];
  volatile float A125[64][256][14][14];
  volatile float A126[64][256][16][16];
  volatile float A127[64][256][14][14];
  volatile float A128[256][256][3][3];
  volatile float A129[64][256][14][14];
  volatile float A13[64][64][56][56];
  volatile float A130[64][1024][14][14];
  volatile float A131[1024][256][1][1];
  volatile float A132[64][1024][14][14];
  volatile float A133[64][1024][14][14];
  volatile float A134[64][256][14][14];
  volatile float A135[256][1024][1][1];
  volatile float A136[64][256][14][14];
  volatile float A137[64][256][16][16];
  volatile float A138[64][256][14][14];
  volatile float A139[256][256][3][3];
  volatile float A14[64][64][3][3];
  volatile float A140[64][256][14][14];
  volatile float A141[64][1024][14][14];
  volatile float A142[1024][256][1][1];
  volatile float A143[64][1024][14][14];
  volatile float A144[64][1024][14][14];
  volatile float A145[64][256][14][14];
  volatile float A146[256][1024][1][1];
  volatile float A147[64][256][14][14];
  volatile float A148[64][256][16][16];
  volatile float A149[64][256][14][14];
  volatile float A15[64][64][56][56];
  volatile float A150[256][256][3][3];
  volatile float A151[64][256][14][14];
  volatile float A152[64][1024][14][14];
  volatile float A153[1024][256][1][1];
  volatile float A154[64][1024][14][14];
  volatile float A155[64][1024][14][14];
  volatile float A156[64][256][14][14];
  volatile float A157[256][1024][1][1];
  volatile float A158[64][256][14][14];
  volatile float A159[64][256][16][16];
  volatile float A16[64][256][56][56];
  volatile float A160[64][256][14][14];
  volatile float A161[256][256][3][3];
  volatile float A162[64][256][14][14];
  volatile float A163[64][1024][14][14];
  volatile float A164[1024][256][1][1];
  volatile float A165[64][1024][14][14];
  volatile float A166[64][1024][14][14];
  volatile float A167[64][256][14][14];
  volatile float A168[256][1024][1][1];
  volatile float A169[64][256][14][14];
  volatile float A17[64][256][56][56];
  volatile float A170[64][256][16][16];
  volatile float A171[64][256][14][14];
  volatile float A172[256][256][3][3];
  volatile float A173[64][256][14][14];
  volatile float A174[64][1024][14][14];
  volatile float A175[1024][256][1][1];
  volatile float A176[64][1024][14][14];
  volatile float A177[64][1024][14][14];
  volatile float A178[64][256][14][14];
  volatile float A179[256][1024][1][1];
  volatile float A18[256][64][1][1];
  volatile float A180[64][256][14][14];
  volatile float A181[64][256][16][16];
  volatile float A182[64][256][14][14];
  volatile float A183[256][256][3][3];
  volatile float A184[64][256][14][14];
  volatile float A185[64][1024][14][14];
  volatile float A186[1024][256][1][1];
  volatile float A187[64][1024][14][14];
  volatile float A188[64][1024][14][14];
  volatile float A189[64][256][14][14];
  volatile float A19[64][256][56][56];
  volatile float A190[256][1024][1][1];
  volatile float A191[64][256][14][14];
  volatile float A192[64][256][16][16];
  volatile float A193[64][256][14][14];
  volatile float A194[256][256][3][3];
  volatile float A195[64][256][14][14];
  volatile float A196[64][1024][14][14];
  volatile float A197[1024][256][1][1];
  volatile float A198[64][1024][14][14];
  volatile float A199[64][1024][14][14];
  volatile float A2[64][64][112][112];
  volatile float A20[64][256][56][56];
  volatile float A200[64][256][14][14];
  volatile float A201[256][1024][1][1];
  volatile float A202[64][256][14][14];
  volatile float A203[64][256][16][16];
  volatile float A204[64][256][14][14];
  volatile float A205[256][256][3][3];
  volatile float A206[64][256][14][14];
  volatile float A207[64][1024][14][14];
  volatile float A208[1024][256][1][1];
  volatile float A209[64][1024][14][14];
  volatile float A21[256][64][1][1];
  volatile float A210[64][1024][14][14];
  volatile float A211[64][256][14][14];
  volatile float A212[256][1024][1][1];
  volatile float A213[64][256][14][14];
  volatile float A214[64][256][16][16];
  volatile float A215[64][256][14][14];
  volatile float A216[256][256][3][3];
  volatile float A217[64][256][14][14];
  volatile float A218[64][1024][14][14];
  volatile float A219[1024][256][1][1];
  volatile float A22[64][256][56][56];
  volatile float A220[64][1024][14][14];
  volatile float A221[64][1024][14][14];
  volatile float A222[64][256][14][14];
  volatile float A223[256][1024][1][1];
  volatile float A224[64][256][14][14];
  volatile float A225[64][256][16][16];
  volatile float A226[64][256][14][14];
  volatile float A227[256][256][3][3];
  volatile float A228[64][256][14][14];
  volatile float A229[64][1024][14][14];
  volatile float A23[64][256][56][56];
  volatile float A230[1024][256][1][1];
  volatile float A231[64][1024][14][14];
  volatile float A232[64][1024][14][14];
  volatile float A233[64][256][14][14];
  volatile float A234[256][1024][1][1];
  volatile float A235[64][256][14][14];
  volatile float A236[64][256][16][16];
  volatile float A237[64][256][14][14];
  volatile float A238[256][256][3][3];
  volatile float A239[64][256][14][14];
  volatile float A24[64][256][56][56];
  volatile float A240[64][1024][14][14];
  volatile float A241[1024][256][1][1];
  volatile float A242[64][1024][14][14];
  volatile float A243[64][1024][14][14];
  volatile float A244[64][256][14][14];
  volatile float A245[256][1024][1][1];
  volatile float A246[64][256][14][14];
  volatile float A247[64][256][16][16];
  volatile float A248[64][256][14][14];
  volatile float A249[256][256][3][3];
  volatile float A25[64][64][56][56];
  volatile float A250[64][256][14][14];
  volatile float A251[64][1024][14][14];
  volatile float A252[1024][256][1][1];
  volatile float A253[64][1024][14][14];
  volatile float A254[64][1024][14][14];
  volatile float A255[64][256][14][14];
  volatile float A256[256][1024][1][1];
  volatile float A257[64][256][14][14];
  volatile float A258[64][256][16][16];
  volatile float A259[64][256][14][14];
  volatile float A26[64][256][1][1];
  volatile float A260[256][256][3][3];
  volatile float A261[64][256][14][14];
  volatile float A262[64][1024][14][14];
  volatile float A263[1024][256][1][1];
  volatile float A264[64][1024][14][14];
  volatile float A265[64][1024][14][14];
  volatile float A266[64][256][14][14];
  volatile float A267[256][1024][1][1];
  volatile float A268[64][256][14][14];
  volatile float A269[64][256][16][16];
  volatile float A27[64][64][56][56];
  volatile float A270[64][256][14][14];
  volatile float A271[256][256][3][3];
  volatile float A272[64][256][14][14];
  volatile float A273[64][1024][14][14];
  volatile float A274[1024][256][1][1];
  volatile float A275[64][1024][14][14];
  volatile float A276[64][1024][14][14];
  volatile float A277[64][256][14][14];
  volatile float A278[256][1024][1][1];
  volatile float A279[64][256][14][14];
  volatile float A28[64][64][58][58];
  volatile float A280[64][256][16][16];
  volatile float A281[64][256][14][14];
  volatile float A282[256][256][3][3];
  volatile float A283[64][256][14][14];
  volatile float A284[64][1024][14][14];
  volatile float A285[1024][256][1][1];
  volatile float A286[64][1024][14][14];
  volatile float A287[64][1024][14][14];
  volatile float A288[64][256][14][14];
  volatile float A289[256][1024][1][1];
  volatile float A29[64][64][56][56];
  volatile float A290[64][256][14][14];
  volatile float A291[64][256][16][16];
  volatile float A292[64][256][14][14];
  volatile float A293[256][256][3][3];
  volatile float A294[64][256][14][14];
  volatile float A295[64][1024][14][14];
  volatile float A296[1024][256][1][1];
  volatile float A297[64][1024][14][14];
  volatile float A298[64][1024][14][14];
  volatile float A299[64][256][14][14];
  volatile float A3[64][3][7][7];
  volatile float A30[64][64][3][3];
  volatile float A300[256][1024][1][1];
  volatile float A301[64][256][14][14];
  volatile float A302[64][256][16][16];
  volatile float A303[64][256][14][14];
  volatile float A304[256][256][3][3];
  volatile float A305[64][256][14][14];
  volatile float A306[64][1024][14][14];
  volatile float A307[1024][256][1][1];
  volatile float A308[64][1024][14][14];
  volatile float A309[64][1024][14][14];
  volatile float A31[64][64][56][56];
  volatile float A310[64][256][14][14];
  volatile float A311[256][1024][1][1];
  volatile float A312[64][256][14][14];
  volatile float A313[64][256][16][16];
  volatile float A314[64][256][14][14];
  volatile float A315[256][256][3][3];
  volatile float A316[64][256][14][14];
  volatile float A317[64][1024][14][14];
  volatile float A318[1024][256][1][1];
  volatile float A319[64][1024][14][14];
  volatile float A32[64][256][56][56];
  volatile float A320[64][1024][14][14];
  volatile float A321[64][256][14][14];
  volatile float A322[256][1024][1][1];
  volatile float A323[64][256][14][14];
  volatile float A324[64][256][16][16];
  volatile float A325[64][256][14][14];
  volatile float A326[256][256][3][3];
  volatile float A327[64][256][14][14];
  volatile float A328[64][1024][14][14];
  volatile float A329[1024][256][1][1];
  volatile float A33[256][64][1][1];
  volatile float A330[64][1024][14][14];
  volatile float A331[64][1024][14][14];
  volatile float A332[64][256][14][14];
  volatile float A333[256][1024][1][1];
  volatile float A334[64][256][14][14];
  volatile float A335[64][256][16][16];
  volatile float A336[64][256][14][14];
  volatile float A337[256][256][3][3];
  volatile float A338[64][256][14][14];
  volatile float A339[64][1024][14][14];
  volatile float A34[64][256][56][56];
  volatile float A340[1024][256][1][1];
  volatile float A341[64][1024][14][14];
  volatile float A342[64][1024][14][14];
  volatile float A343[64][256][14][14];
  volatile float A344[256][1024][1][1];
  volatile float A345[64][256][14][14];
  volatile float A346[64][256][16][16];
  volatile float A347[256][256][3][3];
  volatile float A348[64][256][14][14];
  volatile float A349[1024][256][1][1];
  volatile float A35[64][256][56][56];
  volatile float A350[64][1024][14][14];
  volatile float A351[64][1024][14][14];
  volatile float A352[64][512][14][14];
  volatile float A353[512][1024][1][1];
  volatile float A354[64][512][14][14];
  volatile float A355[64][512][16][16];
  volatile float A356[64][512][7][7];
  volatile float A357[64][512][7][7];
  volatile float A358[512][512][3][3];
  volatile float A359[64][512][7][7];
  volatile float A36[64][64][56][56];
  volatile float A360[64][512][7][7];
  volatile float A361[64][2048][7][7];
  volatile float A362[64][2048][7][7];
  volatile float A363[2048][512][1][1];
  volatile float A364[64][2048][7][7];
  volatile float A365[64][2048][7][7];
  volatile float A366[2048][1024][1][1];
  volatile float A367[64][2048][7][7];
  volatile float A368[64][2048][7][7];
  volatile float A369[64][2048][7][7];
  volatile float A37[64][256][1][1];
  volatile float A370[64][512][7][7];
  volatile float A371[512][2048][1][1];
  volatile float A372[64][512][7][7];
  volatile float A373[64][512][9][9];
  volatile float A374[64][512][7][7];
  volatile float A375[512][512][3][3];
  volatile float A376[64][512][7][7];
  volatile float A377[64][2048][7][7];
  volatile float A378[2048][512][1][1];
  volatile float A379[64][2048][7][7];
  volatile float A38[64][64][56][56];
  volatile float A380[64][2048][7][7];
  volatile float A381[64][512][7][7];
  volatile float A382[512][2048][1][1];
  volatile float A383[64][512][7][7];
  volatile float A384[64][512][9][9];
  volatile float A385[512][512][3][3];
  volatile float A386[64][512][7][7];
  volatile float A387[2048][512][1][1];
  volatile float A388[64][2048][7][7];
  volatile float A389[64][2048][7][7];
  volatile float A39[64][64][58][58];
  volatile float A390[64][2048][1][1];
  volatile float A391[64][2048][1][1];
  volatile float A392[1000][2048];
  volatile float A393[2048][1000];
  volatile float A394[64][1000];
  volatile float A395[64][2048];
  volatile float A396[1000];
  volatile float A397[64][1000];
  volatile float A4[64][64][112][112];
  volatile float A40[64][64][3][3];
  volatile float A41[64][64][56][56];
  volatile float A42[256][64][1][1];
  volatile float A43[64][256][56][56];
  volatile float A44[64][256][56][56];
  volatile float A45[64][128][56][56];
  volatile float A46[128][256][1][1];
  volatile float A47[64][128][56][56];
  volatile float A48[64][128][58][58];
  volatile float A49[64][128][28][28];
  volatile float A5[64][64][114][114];
  volatile float A50[64][128][28][28];
  volatile float A51[128][128][3][3];
  volatile float A52[64][128][28][28];
  volatile float A53[64][128][28][28];
  volatile float A54[64][512][28][28];
  volatile float A55[64][512][28][28];
  volatile float A56[512][128][1][1];
  volatile float A57[64][512][28][28];
  volatile float A58[64][512][28][28];
  volatile float A59[512][256][1][1];
  volatile float A6[64][64][56][56];
  volatile float A60[64][512][28][28];
  volatile float A61[64][512][28][28];
  volatile float A62[64][512][28][28];
  volatile float A63[64][128][28][28];
  volatile float A64[128][512][1][1];
  volatile float A65[64][128][28][28];
  volatile float A66[64][128][30][30];
  volatile float A67[64][128][28][28];
  volatile float A68[128][128][3][3];
  volatile float A69[64][128][28][28];
  volatile float A7[64][64][56][56];
  volatile float A70[64][512][28][28];
  volatile float A71[512][128][1][1];
  volatile float A72[64][512][28][28];
  volatile float A73[64][512][28][28];
  volatile float A74[64][128][28][28];
  volatile float A75[128][512][1][1];
  volatile float A76[64][128][28][28];
  volatile float A77[64][128][30][30];
  volatile float A78[64][128][28][28];
  volatile float A79[128][128][3][3];
  volatile float A8[64][64][56][56];
  volatile float A80[64][128][28][28];
  volatile float A81[64][512][28][28];
  volatile float A82[512][128][1][1];
  volatile float A83[64][512][28][28];
  volatile float A84[64][512][28][28];
  volatile float A85[64][128][28][28];
  volatile float A86[128][512][1][1];
  volatile float A87[64][128][28][28];
  volatile float A88[64][128][30][30];
  volatile float A89[128][128][3][3];
  volatile float A9[64][64][1][1];
  volatile float A90[64][128][28][28];
  volatile float A91[512][128][1][1];
  volatile float A92[64][512][28][28];
  volatile float A93[64][512][28][28];
  volatile float A94[64][256][28][28];
  volatile float A95[256][512][1][1];
  volatile float A96[64][256][28][28];
  volatile float A97[64][256][30][30];
  volatile float A98[64][256][14][14];
  volatile float A99[64][256][14][14];


int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
#pragma scop
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2;c4++) {
      for (c6=0;c6<=229;c6++) {
        for (c8=0;c8<=229;c8++) {
          A1[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=6;c12++) {
              for (c14=0;c14<=6;c14++) {
                A2[c2][c4][c6][c8] = A2[c2][c4][c6][c8] + A1[c2][c10][2*(c6)+c12][2*(c8)+c14] + A3[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A4[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8] = A4[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A5[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A6[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
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
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A7[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            A8[c2][c4][c6][c8] = A8[c2][c4][c6][c8] + A6[c2][c10][c6+0][c8+0] + A9[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A10[c2][c4][c6][c8] = A8[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A10[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A12[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A13[c2][c4][c6][c8] = A13[c2][c4][c6][c8] + A12[c2][c10][c6+c12][c8+c14] + A14[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A15[c2][c4][c6][c8] = A13[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A15[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A16[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            A17[c2][c4][c6][c8] = A17[c2][c4][c6][c8] + A11[c2][c10][c6+0][c8+0] + A18[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A19[c2][c4][c6][c8] = A17[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            A20[c2][c4][c6][c8] = A20[c2][c4][c6][c8] + A6[c2][c10][c6+0][c8+0] + A21[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A22[c2][c4][c6][c8] = A20[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A23[c2][c4][c6][c8] = A19[c2][c4][c6][c8] + A22[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A24[c2][c4][c6][c8] = A23[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=255;c10++) {
            A25[c2][c4][c6][c8] = A25[c2][c4][c6][c8] + A24[c2][c10][c6+0][c8+0] + A26[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A27[c2][c4][c6][c8] = A25[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A27[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A28[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A29[c2][c4][c6][c8] = A29[c2][c4][c6][c8] + A28[c2][c10][c6+c12][c8+c14] + A30[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A31[c2][c4][c6][c8] = A29[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A31[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            A32[c2][c4][c6][c8] = A32[c2][c4][c6][c8] + A11[c2][c10][c6+0][c8+0] + A33[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A34[c2][c4][c6][c8] = A32[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A35[c2][c4][c6][c8] = A34[c2][c4][c6][c8] + A24[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A24[c2][c4][c6][c8] = A35[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=255;c10++) {
            A36[c2][c4][c6][c8] = A36[c2][c4][c6][c8] + A24[c2][c10][c6+0][c8+0] + A37[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A38[c2][c4][c6][c8] = A36[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A38[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A39[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A7[c2][c4][c6][c8] = A7[c2][c4][c6][c8] + A39[c2][c10][c6+c12][c8+c14] + A40[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A41[c2][c4][c6][c8] = A7[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A11[c2][c4][c6][c8] = A41[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=63;c10++) {
            A16[c2][c4][c6][c8] = A16[c2][c4][c6][c8] + A11[c2][c10][c6+0][c8+0] + A42[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A43[c2][c4][c6][c8] = A16[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A44[c2][c4][c6][c8] = A43[c2][c4][c6][c8] + A24[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A24[c2][c4][c6][c8] = A44[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A45[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=255;c10++) {
            A45[c2][c4][c6][c8] = A45[c2][c4][c6][c8] + A24[c2][c10][c6+0][c8+0] + A46[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A47[c2][c4][c6][c8] = A45[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A45[c2][c4][c6][c8] = A47[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A48[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A50[c2][c4][c6][c8] = A50[c2][c4][c6][c8] + A48[c2][c10][2*(c6)+c12][2*(c8)+c14] + A51[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A52[c2][c4][c6][c8] = A50[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A52[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A54[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A55[c2][c4][c6][c8] = A55[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A56[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A57[c2][c4][c6][c8] = A55[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=255;c10++) {
            A58[c2][c4][c6][c8] = A58[c2][c4][c6][c8] + A24[c2][c10][2*(c6)+0][2*(c8)+0] + A59[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A60[c2][c4][c6][c8] = A58[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] = A57[c2][c4][c6][c8] + A60[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A61[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A63[c2][c4][c6][c8] = A63[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A64[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A65[c2][c4][c6][c8] = A63[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A65[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A66[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A67[c2][c4][c6][c8] = A67[c2][c4][c6][c8] + A66[c2][c10][c6+c12][c8+c14] + A68[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A69[c2][c4][c6][c8] = A67[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A69[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A70[c2][c4][c6][c8] = A70[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A71[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A72[c2][c4][c6][c8] = A70[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A73[c2][c4][c6][c8] = A72[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A73[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A74[c2][c4][c6][c8] = A74[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A75[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A76[c2][c4][c6][c8] = A74[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A76[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A77[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A78[c2][c4][c6][c8] = A78[c2][c4][c6][c8] + A77[c2][c10][c6+c12][c8+c14] + A79[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A80[c2][c4][c6][c8] = A78[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A80[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A81[c2][c4][c6][c8] = A81[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A82[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A83[c2][c4][c6][c8] = A81[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A84[c2][c4][c6][c8] = A83[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A84[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A85[c2][c4][c6][c8] = A85[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A86[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A87[c2][c4][c6][c8] = A85[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A87[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A88[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A49[c2][c4][c6][c8] = A49[c2][c4][c6][c8] + A88[c2][c10][c6+c12][c8+c14] + A89[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A90[c2][c4][c6][c8] = A49[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A90[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A54[c2][c4][c6][c8] = A54[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A91[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A92[c2][c4][c6][c8] = A54[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A93[c2][c4][c6][c8] = A92[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A93[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A94[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A94[c2][c4][c6][c8] = A94[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A95[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A96[c2][c4][c6][c8] = A94[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A94[c2][c4][c6][c8] = A96[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A97[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A98[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A99[c2][c4][c6][c8] = A99[c2][c4][c6][c8] + A97[c2][c10][2*(c6)+c12][2*(c8)+c14] + A100[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A101[c2][c4][c6][c8] = A99[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A101[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A103[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A104[c2][c4][c6][c8] = A104[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A105[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A106[c2][c4][c6][c8] = A104[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=511;c10++) {
            A107[c2][c4][c6][c8] = A107[c2][c4][c6][c8] + A62[c2][c10][2*(c6)+0][2*(c8)+0] + A108[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A109[c2][c4][c6][c8] = A107[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A110[c2][c4][c6][c8] = A106[c2][c4][c6][c8] + A109[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A110[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A112[c2][c4][c6][c8] = A112[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A113[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A114[c2][c4][c6][c8] = A112[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A114[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A115[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A116[c2][c4][c6][c8] = A116[c2][c4][c6][c8] + A115[c2][c10][c6+c12][c8+c14] + A117[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A118[c2][c4][c6][c8] = A116[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A118[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A119[c2][c4][c6][c8] = A119[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A120[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A121[c2][c4][c6][c8] = A119[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A122[c2][c4][c6][c8] = A121[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A122[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A123[c2][c4][c6][c8] = A123[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A124[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A125[c2][c4][c6][c8] = A123[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A125[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A126[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A127[c2][c4][c6][c8] = A127[c2][c4][c6][c8] + A126[c2][c10][c6+c12][c8+c14] + A128[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A129[c2][c4][c6][c8] = A127[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A129[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A130[c2][c4][c6][c8] = A130[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A131[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A132[c2][c4][c6][c8] = A130[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A133[c2][c4][c6][c8] = A132[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A133[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A134[c2][c4][c6][c8] = A134[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A135[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A136[c2][c4][c6][c8] = A134[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A136[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A137[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A138[c2][c4][c6][c8] = A138[c2][c4][c6][c8] + A137[c2][c10][c6+c12][c8+c14] + A139[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A140[c2][c4][c6][c8] = A138[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A140[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A141[c2][c4][c6][c8] = A141[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A142[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A143[c2][c4][c6][c8] = A141[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A144[c2][c4][c6][c8] = A143[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A144[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A145[c2][c4][c6][c8] = A145[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A146[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A147[c2][c4][c6][c8] = A145[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A147[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A148[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A149[c2][c4][c6][c8] = A149[c2][c4][c6][c8] + A148[c2][c10][c6+c12][c8+c14] + A150[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A151[c2][c4][c6][c8] = A149[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A151[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A152[c2][c4][c6][c8] = A152[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A153[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A154[c2][c4][c6][c8] = A152[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A154[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A156[c2][c4][c6][c8] = A156[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A157[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A158[c2][c4][c6][c8] = A156[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A158[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A159[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A160[c2][c4][c6][c8] = A160[c2][c4][c6][c8] + A159[c2][c10][c6+c12][c8+c14] + A161[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A162[c2][c4][c6][c8] = A160[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A162[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A163[c2][c4][c6][c8] = A163[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A164[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A165[c2][c4][c6][c8] = A163[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A166[c2][c4][c6][c8] = A165[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A166[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A167[c2][c4][c6][c8] = A167[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A168[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A169[c2][c4][c6][c8] = A167[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A169[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A170[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A171[c2][c4][c6][c8] = A171[c2][c4][c6][c8] + A170[c2][c10][c6+c12][c8+c14] + A172[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A173[c2][c4][c6][c8] = A171[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A173[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A174[c2][c4][c6][c8] = A174[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A175[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A176[c2][c4][c6][c8] = A174[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A177[c2][c4][c6][c8] = A176[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A177[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A178[c2][c4][c6][c8] = A178[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A179[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A180[c2][c4][c6][c8] = A178[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A181[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A182[c2][c4][c6][c8] = A182[c2][c4][c6][c8] + A181[c2][c10][c6+c12][c8+c14] + A183[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A184[c2][c4][c6][c8] = A182[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A184[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A185[c2][c4][c6][c8] = A185[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A186[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A187[c2][c4][c6][c8] = A185[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A188[c2][c4][c6][c8] = A187[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A188[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A189[c2][c4][c6][c8] = A189[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A190[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A191[c2][c4][c6][c8] = A189[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A191[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A192[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A193[c2][c4][c6][c8] = A193[c2][c4][c6][c8] + A192[c2][c10][c6+c12][c8+c14] + A194[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A195[c2][c4][c6][c8] = A193[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A195[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A196[c2][c4][c6][c8] = A196[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A197[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A198[c2][c4][c6][c8] = A196[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A199[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A199[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A200[c2][c4][c6][c8] = A200[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A201[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A202[c2][c4][c6][c8] = A200[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A203[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A204[c2][c4][c6][c8] = A204[c2][c4][c6][c8] + A203[c2][c10][c6+c12][c8+c14] + A205[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A206[c2][c4][c6][c8] = A204[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A206[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A207[c2][c4][c6][c8] = A207[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A208[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A209[c2][c4][c6][c8] = A207[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A210[c2][c4][c6][c8] = A209[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A210[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A211[c2][c4][c6][c8] = A211[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A212[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A213[c2][c4][c6][c8] = A211[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A213[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A214[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A215[c2][c4][c6][c8] = A215[c2][c4][c6][c8] + A214[c2][c10][c6+c12][c8+c14] + A216[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A217[c2][c4][c6][c8] = A215[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A217[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A218[c2][c4][c6][c8] = A218[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A219[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A220[c2][c4][c6][c8] = A218[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A221[c2][c4][c6][c8] = A220[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A221[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A222[c2][c4][c6][c8] = A222[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A223[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A224[c2][c4][c6][c8] = A222[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A225[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A226[c2][c4][c6][c8] = A226[c2][c4][c6][c8] + A225[c2][c10][c6+c12][c8+c14] + A227[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A228[c2][c4][c6][c8] = A226[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A228[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A229[c2][c4][c6][c8] = A229[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A230[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A231[c2][c4][c6][c8] = A229[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A232[c2][c4][c6][c8] = A231[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A232[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A233[c2][c4][c6][c8] = A233[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A234[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A235[c2][c4][c6][c8] = A233[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A235[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A236[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A237[c2][c4][c6][c8] = A237[c2][c4][c6][c8] + A236[c2][c10][c6+c12][c8+c14] + A238[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A239[c2][c4][c6][c8] = A237[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A239[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A240[c2][c4][c6][c8] = A240[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A241[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A242[c2][c4][c6][c8] = A240[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A243[c2][c4][c6][c8] = A242[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A243[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A244[c2][c4][c6][c8] = A244[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A245[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A246[c2][c4][c6][c8] = A244[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A246[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A247[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A248[c2][c4][c6][c8] = A248[c2][c4][c6][c8] + A247[c2][c10][c6+c12][c8+c14] + A249[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A250[c2][c4][c6][c8] = A248[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A250[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A251[c2][c4][c6][c8] = A251[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A252[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A253[c2][c4][c6][c8] = A251[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A254[c2][c4][c6][c8] = A253[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A254[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A255[c2][c4][c6][c8] = A255[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A256[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A257[c2][c4][c6][c8] = A255[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A257[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A258[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A259[c2][c4][c6][c8] = A259[c2][c4][c6][c8] + A258[c2][c10][c6+c12][c8+c14] + A260[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A261[c2][c4][c6][c8] = A259[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A261[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A262[c2][c4][c6][c8] = A262[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A263[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A264[c2][c4][c6][c8] = A262[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A265[c2][c4][c6][c8] = A264[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A265[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A266[c2][c4][c6][c8] = A266[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A267[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A268[c2][c4][c6][c8] = A266[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A268[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A269[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A270[c2][c4][c6][c8] = A270[c2][c4][c6][c8] + A269[c2][c10][c6+c12][c8+c14] + A271[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A272[c2][c4][c6][c8] = A270[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A272[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A273[c2][c4][c6][c8] = A273[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A274[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A275[c2][c4][c6][c8] = A273[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A276[c2][c4][c6][c8] = A275[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A276[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A277[c2][c4][c6][c8] = A277[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A278[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A279[c2][c4][c6][c8] = A277[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A279[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A280[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A281[c2][c4][c6][c8] = A281[c2][c4][c6][c8] + A280[c2][c10][c6+c12][c8+c14] + A282[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A283[c2][c4][c6][c8] = A281[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A283[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A284[c2][c4][c6][c8] = A284[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A285[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A286[c2][c4][c6][c8] = A284[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A287[c2][c4][c6][c8] = A286[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A287[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A288[c2][c4][c6][c8] = A288[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A289[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A290[c2][c4][c6][c8] = A288[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A290[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A291[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A292[c2][c4][c6][c8] = A292[c2][c4][c6][c8] + A291[c2][c10][c6+c12][c8+c14] + A293[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A294[c2][c4][c6][c8] = A292[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A294[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A295[c2][c4][c6][c8] = A295[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A296[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A297[c2][c4][c6][c8] = A295[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A298[c2][c4][c6][c8] = A297[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A298[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A299[c2][c4][c6][c8] = A299[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A300[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A301[c2][c4][c6][c8] = A299[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A301[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A302[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A303[c2][c4][c6][c8] = A303[c2][c4][c6][c8] + A302[c2][c10][c6+c12][c8+c14] + A304[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A305[c2][c4][c6][c8] = A303[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A305[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A306[c2][c4][c6][c8] = A306[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A307[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A308[c2][c4][c6][c8] = A306[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A309[c2][c4][c6][c8] = A308[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A309[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A310[c2][c4][c6][c8] = A310[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A311[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A312[c2][c4][c6][c8] = A310[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A312[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A313[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A314[c2][c4][c6][c8] = A314[c2][c4][c6][c8] + A313[c2][c10][c6+c12][c8+c14] + A315[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A316[c2][c4][c6][c8] = A314[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A316[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A317[c2][c4][c6][c8] = A317[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A318[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A319[c2][c4][c6][c8] = A317[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A320[c2][c4][c6][c8] = A319[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A320[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A321[c2][c4][c6][c8] = A321[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A322[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A323[c2][c4][c6][c8] = A321[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A323[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A324[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A325[c2][c4][c6][c8] = A325[c2][c4][c6][c8] + A324[c2][c10][c6+c12][c8+c14] + A326[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A327[c2][c4][c6][c8] = A325[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A327[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A328[c2][c4][c6][c8] = A328[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A329[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A330[c2][c4][c6][c8] = A328[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A331[c2][c4][c6][c8] = A330[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A331[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A332[c2][c4][c6][c8] = A332[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A333[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A334[c2][c4][c6][c8] = A332[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A334[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A335[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A336[c2][c4][c6][c8] = A336[c2][c4][c6][c8] + A335[c2][c10][c6+c12][c8+c14] + A337[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A338[c2][c4][c6][c8] = A336[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A338[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A339[c2][c4][c6][c8] = A339[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A340[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A341[c2][c4][c6][c8] = A339[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A342[c2][c4][c6][c8] = A341[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A342[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A343[c2][c4][c6][c8] = A343[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A344[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A345[c2][c4][c6][c8] = A343[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A345[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A346[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A98[c2][c4][c6][c8] = A98[c2][c4][c6][c8] + A346[c2][c10][c6+c12][c8+c14] + A347[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A348[c2][c4][c6][c8] = A98[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A348[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A103[c2][c4][c6][c8] = A103[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A349[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A350[c2][c4][c6][c8] = A103[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A351[c2][c4][c6][c8] = A350[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A351[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A352[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A352[c2][c4][c6][c8] = A352[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A353[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A354[c2][c4][c6][c8] = A352[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A352[c2][c4][c6][c8] = A354[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A355[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A356[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A357[c2][c4][c6][c8] = A357[c2][c4][c6][c8] + A355[c2][c10][2*(c6)+c12][2*(c8)+c14] + A358[c4][c10][c12][c14];
              }
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
          A359[c2][c4][c6][c8] = A357[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A360[c2][c4][c6][c8] = A359[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A361[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A362[c2][c4][c6][c8] = A362[c2][c4][c6][c8] + A360[c2][c10][c6+0][c8+0] + A363[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A364[c2][c4][c6][c8] = A362[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A365[c2][c4][c6][c8] = A365[c2][c4][c6][c8] + A111[c2][c10][2*(c6)+0][2*(c8)+0] + A366[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A367[c2][c4][c6][c8] = A365[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A368[c2][c4][c6][c8] = A364[c2][c4][c6][c8] + A367[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A369[c2][c4][c6][c8] = A368[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A370[c2][c4][c6][c8] = A370[c2][c4][c6][c8] + A369[c2][c10][c6+0][c8+0] + A371[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A372[c2][c4][c6][c8] = A370[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A360[c2][c4][c6][c8] = A372[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A373[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A374[c2][c4][c6][c8] = A374[c2][c4][c6][c8] + A373[c2][c10][c6+c12][c8+c14] + A375[c4][c10][c12][c14];
              }
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
          A376[c2][c4][c6][c8] = A374[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A360[c2][c4][c6][c8] = A376[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A377[c2][c4][c6][c8] = A377[c2][c4][c6][c8] + A360[c2][c10][c6+0][c8+0] + A378[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A379[c2][c4][c6][c8] = A377[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A380[c2][c4][c6][c8] = A379[c2][c4][c6][c8] + A369[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A369[c2][c4][c6][c8] = A380[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A381[c2][c4][c6][c8] = A381[c2][c4][c6][c8] + A369[c2][c10][c6+0][c8+0] + A382[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A383[c2][c4][c6][c8] = A381[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A360[c2][c4][c6][c8] = A383[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A384[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A356[c2][c4][c6][c8] = A356[c2][c4][c6][c8] + A384[c2][c10][c6+c12][c8+c14] + A385[c4][c10][c12][c14];
              }
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
          A386[c2][c4][c6][c8] = A356[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A360[c2][c4][c6][c8] = A386[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A361[c2][c4][c6][c8] = A361[c2][c4][c6][c8] + A360[c2][c10][c6+0][c8+0] + A387[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A388[c2][c4][c6][c8] = A361[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A389[c2][c4][c6][c8] = A388[c2][c4][c6][c8] + A369[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A369[c2][c4][c6][c8] = A389[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A390[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A390[c2][c4][0][0] = A390[c2][c4][0][0] + A369[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A391[c2][c4][0][0] = A390[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A393[c4][c2] = A392[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A394[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=2047;c6++) {
        A394[c2][c4] = A394[c2][c4] + A395[c2][c6] + A393[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A397[c2][c4] = A394[c2][c4] + A396[c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
