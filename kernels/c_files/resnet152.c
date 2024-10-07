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
#define S95(i,j,k,l,m,n,o) {total++; printf("S95 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S96(i,j,k,l) {total++; printf("S96 %d %d %d %d\n",i,j,k,l);}
#define S97(i,j,k,l) {total++; printf("S97 %d %d %d %d\n",i,j,k,l);}
#define S98(i,j,k,l) {total++; printf("S98 %d %d %d %d\n",i,j,k,l);}
#define S99(i,j,k,l,m,n,o) {total++; printf("S99 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S100(i,j,k,l) {total++; printf("S100 %d %d %d %d\n",i,j,k,l);}
#define S101(i,j,k,l) {total++; printf("S101 %d %d %d %d\n",i,j,k,l);}
#define S102(i,j,k,l,m,n,o) {total++; printf("S102 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S103(i,j,k,l) {total++; printf("S103 %d %d %d %d\n",i,j,k,l);}
#define S104(i,j,k,l) {total++; printf("S104 %d %d %d %d\n",i,j,k,l);}
#define S105(i,j,k,l) {total++; printf("S105 %d %d %d %d\n",i,j,k,l);}
#define S106(i,j,k,l,m,n,o) {total++; printf("S106 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S107(i,j,k,l) {total++; printf("S107 %d %d %d %d\n",i,j,k,l);}
#define S108(i,j,k,l) {total++; printf("S108 %d %d %d %d\n",i,j,k,l);}
#define S109(i,j,k,l) {total++; printf("S109 %d %d %d %d\n",i,j,k,l);}
#define S110(i,j,k,l,m,n,o) {total++; printf("S110 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S111(i,j,k,l) {total++; printf("S111 %d %d %d %d\n",i,j,k,l);}
#define S112(i,j,k,l) {total++; printf("S112 %d %d %d %d\n",i,j,k,l);}
#define S113(i,j,k,l,m,n,o) {total++; printf("S113 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S114(i,j,k,l) {total++; printf("S114 %d %d %d %d\n",i,j,k,l);}
#define S115(i,j,k,l) {total++; printf("S115 %d %d %d %d\n",i,j,k,l);}
#define S116(i,j,k,l) {total++; printf("S116 %d %d %d %d\n",i,j,k,l);}
#define S117(i,j,k,l,m,n,o) {total++; printf("S117 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S118(i,j,k,l) {total++; printf("S118 %d %d %d %d\n",i,j,k,l);}
#define S119(i,j,k,l) {total++; printf("S119 %d %d %d %d\n",i,j,k,l);}
#define S120(i,j,k,l) {total++; printf("S120 %d %d %d %d\n",i,j,k,l);}
#define S121(i,j,k,l,m,n,o) {total++; printf("S121 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S122(i,j,k,l) {total++; printf("S122 %d %d %d %d\n",i,j,k,l);}
#define S123(i,j,k,l) {total++; printf("S123 %d %d %d %d\n",i,j,k,l);}
#define S124(i,j,k,l,m,n,o) {total++; printf("S124 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S125(i,j,k,l) {total++; printf("S125 %d %d %d %d\n",i,j,k,l);}
#define S126(i,j,k,l) {total++; printf("S126 %d %d %d %d\n",i,j,k,l);}
#define S127(i,j,k,l) {total++; printf("S127 %d %d %d %d\n",i,j,k,l);}
#define S128(i,j,k,l,m,n,o) {total++; printf("S128 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S129(i,j,k,l) {total++; printf("S129 %d %d %d %d\n",i,j,k,l);}
#define S130(i,j,k,l) {total++; printf("S130 %d %d %d %d\n",i,j,k,l);}
#define S131(i,j,k,l) {total++; printf("S131 %d %d %d %d\n",i,j,k,l);}
#define S132(i,j,k,l,m,n,o) {total++; printf("S132 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S133(i,j,k,l) {total++; printf("S133 %d %d %d %d\n",i,j,k,l);}
#define S134(i,j,k,l) {total++; printf("S134 %d %d %d %d\n",i,j,k,l);}
#define S135(i,j,k,l,m,n,o) {total++; printf("S135 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S136(i,j,k,l) {total++; printf("S136 %d %d %d %d\n",i,j,k,l);}
#define S137(i,j,k,l) {total++; printf("S137 %d %d %d %d\n",i,j,k,l);}
#define S138(i,j,k,l) {total++; printf("S138 %d %d %d %d\n",i,j,k,l);}
#define S139(i,j,k,l) {total++; printf("S139 %d %d %d %d\n",i,j,k,l);}
#define S140(i,j,k,l,m,n,o) {total++; printf("S140 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S141(i,j,k,l) {total++; printf("S141 %d %d %d %d\n",i,j,k,l);}
#define S142(i,j,k,l) {total++; printf("S142 %d %d %d %d\n",i,j,k,l);}
#define S143(i,j,k,l) {total++; printf("S143 %d %d %d %d\n",i,j,k,l);}
#define S144(i,j,k,l) {total++; printf("S144 %d %d %d %d\n",i,j,k,l);}
#define S145(i,j,k,l,m,n,o) {total++; printf("S145 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S146(i,j,k,l) {total++; printf("S146 %d %d %d %d\n",i,j,k,l);}
#define S147(i,j,k,l) {total++; printf("S147 %d %d %d %d\n",i,j,k,l);}
#define S148(i,j,k,l) {total++; printf("S148 %d %d %d %d\n",i,j,k,l);}
#define S149(i,j,k,l,m,n,o) {total++; printf("S149 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
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
#define S353(i,j,k,l,m,n,o) {total++; printf("S353 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S354(i,j,k,l) {total++; printf("S354 %d %d %d %d\n",i,j,k,l);}
#define S355(i,j,k,l) {total++; printf("S355 %d %d %d %d\n",i,j,k,l);}
#define S356(i,j,k,l) {total++; printf("S356 %d %d %d %d\n",i,j,k,l);}
#define S357(i,j,k,l,m,n,o) {total++; printf("S357 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S358(i,j,k,l) {total++; printf("S358 %d %d %d %d\n",i,j,k,l);}
#define S359(i,j,k,l) {total++; printf("S359 %d %d %d %d\n",i,j,k,l);}
#define S360(i,j,k,l,m,n,o) {total++; printf("S360 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S361(i,j,k,l) {total++; printf("S361 %d %d %d %d\n",i,j,k,l);}
#define S362(i,j,k,l) {total++; printf("S362 %d %d %d %d\n",i,j,k,l);}
#define S363(i,j,k,l) {total++; printf("S363 %d %d %d %d\n",i,j,k,l);}
#define S364(i,j,k,l,m,n,o) {total++; printf("S364 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S365(i,j,k,l) {total++; printf("S365 %d %d %d %d\n",i,j,k,l);}
#define S366(i,j,k,l) {total++; printf("S366 %d %d %d %d\n",i,j,k,l);}
#define S367(i,j,k,l) {total++; printf("S367 %d %d %d %d\n",i,j,k,l);}
#define S368(i,j,k,l,m,n,o) {total++; printf("S368 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S369(i,j,k,l) {total++; printf("S369 %d %d %d %d\n",i,j,k,l);}
#define S370(i,j,k,l) {total++; printf("S370 %d %d %d %d\n",i,j,k,l);}
#define S371(i,j,k,l,m,n,o) {total++; printf("S371 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S372(i,j,k,l) {total++; printf("S372 %d %d %d %d\n",i,j,k,l);}
#define S373(i,j,k,l) {total++; printf("S373 %d %d %d %d\n",i,j,k,l);}
#define S374(i,j,k,l) {total++; printf("S374 %d %d %d %d\n",i,j,k,l);}
#define S375(i,j,k,l,m,n,o) {total++; printf("S375 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S376(i,j,k,l) {total++; printf("S376 %d %d %d %d\n",i,j,k,l);}
#define S377(i,j,k,l) {total++; printf("S377 %d %d %d %d\n",i,j,k,l);}
#define S378(i,j,k,l) {total++; printf("S378 %d %d %d %d\n",i,j,k,l);}
#define S379(i,j,k,l,m,n,o) {total++; printf("S379 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S380(i,j,k,l) {total++; printf("S380 %d %d %d %d\n",i,j,k,l);}
#define S381(i,j,k,l) {total++; printf("S381 %d %d %d %d\n",i,j,k,l);}
#define S382(i,j,k,l,m,n,o) {total++; printf("S382 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S383(i,j,k,l) {total++; printf("S383 %d %d %d %d\n",i,j,k,l);}
#define S384(i,j,k,l) {total++; printf("S384 %d %d %d %d\n",i,j,k,l);}
#define S385(i,j,k,l) {total++; printf("S385 %d %d %d %d\n",i,j,k,l);}
#define S386(i,j,k,l,m,n,o) {total++; printf("S386 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S387(i,j,k,l) {total++; printf("S387 %d %d %d %d\n",i,j,k,l);}
#define S388(i,j,k,l) {total++; printf("S388 %d %d %d %d\n",i,j,k,l);}
#define S389(i,j,k,l) {total++; printf("S389 %d %d %d %d\n",i,j,k,l);}
#define S390(i,j,k,l,m,n,o) {total++; printf("S390 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S391(i,j,k,l) {total++; printf("S391 %d %d %d %d\n",i,j,k,l);}
#define S392(i,j,k,l) {total++; printf("S392 %d %d %d %d\n",i,j,k,l);}
#define S393(i,j,k,l,m,n,o) {total++; printf("S393 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S394(i,j,k,l) {total++; printf("S394 %d %d %d %d\n",i,j,k,l);}
#define S395(i,j,k,l) {total++; printf("S395 %d %d %d %d\n",i,j,k,l);}
#define S396(i,j,k,l) {total++; printf("S396 %d %d %d %d\n",i,j,k,l);}
#define S397(i,j,k,l,m,n,o) {total++; printf("S397 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S398(i,j,k,l) {total++; printf("S398 %d %d %d %d\n",i,j,k,l);}
#define S399(i,j,k,l) {total++; printf("S399 %d %d %d %d\n",i,j,k,l);}
#define S400(i,j,k,l) {total++; printf("S400 %d %d %d %d\n",i,j,k,l);}
#define S401(i,j,k,l,m,n,o) {total++; printf("S401 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S402(i,j,k,l) {total++; printf("S402 %d %d %d %d\n",i,j,k,l);}
#define S403(i,j,k,l) {total++; printf("S403 %d %d %d %d\n",i,j,k,l);}
#define S404(i,j,k,l,m,n,o) {total++; printf("S404 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S405(i,j,k,l) {total++; printf("S405 %d %d %d %d\n",i,j,k,l);}
#define S406(i,j,k,l) {total++; printf("S406 %d %d %d %d\n",i,j,k,l);}
#define S407(i,j,k,l) {total++; printf("S407 %d %d %d %d\n",i,j,k,l);}
#define S408(i,j,k,l,m,n,o) {total++; printf("S408 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S409(i,j,k,l) {total++; printf("S409 %d %d %d %d\n",i,j,k,l);}
#define S410(i,j,k,l) {total++; printf("S410 %d %d %d %d\n",i,j,k,l);}
#define S411(i,j,k,l) {total++; printf("S411 %d %d %d %d\n",i,j,k,l);}
#define S412(i,j,k,l,m,n,o) {total++; printf("S412 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S413(i,j,k,l) {total++; printf("S413 %d %d %d %d\n",i,j,k,l);}
#define S414(i,j,k,l) {total++; printf("S414 %d %d %d %d\n",i,j,k,l);}
#define S415(i,j,k,l,m,n,o) {total++; printf("S415 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S416(i,j,k,l) {total++; printf("S416 %d %d %d %d\n",i,j,k,l);}
#define S417(i,j,k,l) {total++; printf("S417 %d %d %d %d\n",i,j,k,l);}
#define S418(i,j,k,l) {total++; printf("S418 %d %d %d %d\n",i,j,k,l);}
#define S419(i,j,k,l,m,n,o) {total++; printf("S419 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S420(i,j,k,l) {total++; printf("S420 %d %d %d %d\n",i,j,k,l);}
#define S421(i,j,k,l) {total++; printf("S421 %d %d %d %d\n",i,j,k,l);}
#define S422(i,j,k,l) {total++; printf("S422 %d %d %d %d\n",i,j,k,l);}
#define S423(i,j,k,l,m,n,o) {total++; printf("S423 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S424(i,j,k,l) {total++; printf("S424 %d %d %d %d\n",i,j,k,l);}
#define S425(i,j,k,l) {total++; printf("S425 %d %d %d %d\n",i,j,k,l);}
#define S426(i,j,k,l,m,n,o) {total++; printf("S426 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S427(i,j,k,l) {total++; printf("S427 %d %d %d %d\n",i,j,k,l);}
#define S428(i,j,k,l) {total++; printf("S428 %d %d %d %d\n",i,j,k,l);}
#define S429(i,j,k,l) {total++; printf("S429 %d %d %d %d\n",i,j,k,l);}
#define S430(i,j,k,l,m,n,o) {total++; printf("S430 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S431(i,j,k,l) {total++; printf("S431 %d %d %d %d\n",i,j,k,l);}
#define S432(i,j,k,l) {total++; printf("S432 %d %d %d %d\n",i,j,k,l);}
#define S433(i,j,k,l) {total++; printf("S433 %d %d %d %d\n",i,j,k,l);}
#define S434(i,j,k,l,m,n,o) {total++; printf("S434 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S435(i,j,k,l) {total++; printf("S435 %d %d %d %d\n",i,j,k,l);}
#define S436(i,j,k,l) {total++; printf("S436 %d %d %d %d\n",i,j,k,l);}
#define S437(i,j,k,l,m,n,o) {total++; printf("S437 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S438(i,j,k,l) {total++; printf("S438 %d %d %d %d\n",i,j,k,l);}
#define S439(i,j,k,l) {total++; printf("S439 %d %d %d %d\n",i,j,k,l);}
#define S440(i,j,k,l) {total++; printf("S440 %d %d %d %d\n",i,j,k,l);}
#define S441(i,j,k,l,m,n,o) {total++; printf("S441 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S442(i,j,k,l) {total++; printf("S442 %d %d %d %d\n",i,j,k,l);}
#define S443(i,j,k,l) {total++; printf("S443 %d %d %d %d\n",i,j,k,l);}
#define S444(i,j,k,l) {total++; printf("S444 %d %d %d %d\n",i,j,k,l);}
#define S445(i,j,k,l,m,n,o) {total++; printf("S445 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S446(i,j,k,l) {total++; printf("S446 %d %d %d %d\n",i,j,k,l);}
#define S447(i,j,k,l) {total++; printf("S447 %d %d %d %d\n",i,j,k,l);}
#define S448(i,j,k,l,m,n,o) {total++; printf("S448 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S449(i,j,k,l) {total++; printf("S449 %d %d %d %d\n",i,j,k,l);}
#define S450(i,j,k,l) {total++; printf("S450 %d %d %d %d\n",i,j,k,l);}
#define S451(i,j,k,l) {total++; printf("S451 %d %d %d %d\n",i,j,k,l);}
#define S452(i,j,k,l,m,n,o) {total++; printf("S452 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S453(i,j,k,l) {total++; printf("S453 %d %d %d %d\n",i,j,k,l);}
#define S454(i,j,k,l) {total++; printf("S454 %d %d %d %d\n",i,j,k,l);}
#define S455(i,j,k,l) {total++; printf("S455 %d %d %d %d\n",i,j,k,l);}
#define S456(i,j,k,l,m,n,o) {total++; printf("S456 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S457(i,j,k,l) {total++; printf("S457 %d %d %d %d\n",i,j,k,l);}
#define S458(i,j,k,l) {total++; printf("S458 %d %d %d %d\n",i,j,k,l);}
#define S459(i,j,k,l,m,n,o) {total++; printf("S459 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S460(i,j,k,l) {total++; printf("S460 %d %d %d %d\n",i,j,k,l);}
#define S461(i,j,k,l) {total++; printf("S461 %d %d %d %d\n",i,j,k,l);}
#define S462(i,j,k,l) {total++; printf("S462 %d %d %d %d\n",i,j,k,l);}
#define S463(i,j,k,l,m,n,o) {total++; printf("S463 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S464(i,j,k,l) {total++; printf("S464 %d %d %d %d\n",i,j,k,l);}
#define S465(i,j,k,l) {total++; printf("S465 %d %d %d %d\n",i,j,k,l);}
#define S466(i,j,k,l) {total++; printf("S466 %d %d %d %d\n",i,j,k,l);}
#define S467(i,j,k,l,m,n,o) {total++; printf("S467 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S468(i,j,k,l) {total++; printf("S468 %d %d %d %d\n",i,j,k,l);}
#define S469(i,j,k,l) {total++; printf("S469 %d %d %d %d\n",i,j,k,l);}
#define S470(i,j,k,l,m,n,o) {total++; printf("S470 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S471(i,j,k,l) {total++; printf("S471 %d %d %d %d\n",i,j,k,l);}
#define S472(i,j,k,l) {total++; printf("S472 %d %d %d %d\n",i,j,k,l);}
#define S473(i,j,k,l) {total++; printf("S473 %d %d %d %d\n",i,j,k,l);}
#define S474(i,j,k,l,m,n,o) {total++; printf("S474 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S475(i,j,k,l) {total++; printf("S475 %d %d %d %d\n",i,j,k,l);}
#define S476(i,j,k,l) {total++; printf("S476 %d %d %d %d\n",i,j,k,l);}
#define S477(i,j,k,l) {total++; printf("S477 %d %d %d %d\n",i,j,k,l);}
#define S478(i,j,k,l,m,n,o) {total++; printf("S478 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S479(i,j,k,l) {total++; printf("S479 %d %d %d %d\n",i,j,k,l);}
#define S480(i,j,k,l) {total++; printf("S480 %d %d %d %d\n",i,j,k,l);}
#define S481(i,j,k,l,m,n,o) {total++; printf("S481 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S482(i,j,k,l) {total++; printf("S482 %d %d %d %d\n",i,j,k,l);}
#define S483(i,j,k,l) {total++; printf("S483 %d %d %d %d\n",i,j,k,l);}
#define S484(i,j,k,l) {total++; printf("S484 %d %d %d %d\n",i,j,k,l);}
#define S485(i,j,k,l,m,n,o) {total++; printf("S485 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S486(i,j,k,l) {total++; printf("S486 %d %d %d %d\n",i,j,k,l);}
#define S487(i,j,k,l) {total++; printf("S487 %d %d %d %d\n",i,j,k,l);}
#define S488(i,j,k,l) {total++; printf("S488 %d %d %d %d\n",i,j,k,l);}
#define S489(i,j,k,l,m,n,o) {total++; printf("S489 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S490(i,j,k,l) {total++; printf("S490 %d %d %d %d\n",i,j,k,l);}
#define S491(i,j,k,l) {total++; printf("S491 %d %d %d %d\n",i,j,k,l);}
#define S492(i,j,k,l,m,n,o) {total++; printf("S492 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S493(i,j,k,l) {total++; printf("S493 %d %d %d %d\n",i,j,k,l);}
#define S494(i,j,k,l) {total++; printf("S494 %d %d %d %d\n",i,j,k,l);}
#define S495(i,j,k,l) {total++; printf("S495 %d %d %d %d\n",i,j,k,l);}
#define S496(i,j,k,l,m,n,o) {total++; printf("S496 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S497(i,j,k,l) {total++; printf("S497 %d %d %d %d\n",i,j,k,l);}
#define S498(i,j,k,l) {total++; printf("S498 %d %d %d %d\n",i,j,k,l);}
#define S499(i,j,k,l) {total++; printf("S499 %d %d %d %d\n",i,j,k,l);}
#define S500(i,j,k,l,m,n,o) {total++; printf("S500 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S501(i,j,k,l) {total++; printf("S501 %d %d %d %d\n",i,j,k,l);}
#define S502(i,j,k,l) {total++; printf("S502 %d %d %d %d\n",i,j,k,l);}
#define S503(i,j,k,l,m,n,o) {total++; printf("S503 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S504(i,j,k,l) {total++; printf("S504 %d %d %d %d\n",i,j,k,l);}
#define S505(i,j,k,l) {total++; printf("S505 %d %d %d %d\n",i,j,k,l);}
#define S506(i,j,k,l) {total++; printf("S506 %d %d %d %d\n",i,j,k,l);}
#define S507(i,j,k,l,m,n,o) {total++; printf("S507 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S508(i,j,k,l) {total++; printf("S508 %d %d %d %d\n",i,j,k,l);}
#define S509(i,j,k,l) {total++; printf("S509 %d %d %d %d\n",i,j,k,l);}
#define S510(i,j,k,l) {total++; printf("S510 %d %d %d %d\n",i,j,k,l);}
#define S511(i,j,k,l,m,n,o) {total++; printf("S511 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S512(i,j,k,l) {total++; printf("S512 %d %d %d %d\n",i,j,k,l);}
#define S513(i,j,k,l) {total++; printf("S513 %d %d %d %d\n",i,j,k,l);}
#define S514(i,j,k,l,m,n,o) {total++; printf("S514 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S515(i,j,k,l) {total++; printf("S515 %d %d %d %d\n",i,j,k,l);}
#define S516(i,j,k,l) {total++; printf("S516 %d %d %d %d\n",i,j,k,l);}
#define S517(i,j,k,l) {total++; printf("S517 %d %d %d %d\n",i,j,k,l);}
#define S518(i,j,k,l,m,n,o) {total++; printf("S518 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S519(i,j,k,l) {total++; printf("S519 %d %d %d %d\n",i,j,k,l);}
#define S520(i,j,k,l) {total++; printf("S520 %d %d %d %d\n",i,j,k,l);}
#define S521(i,j,k,l) {total++; printf("S521 %d %d %d %d\n",i,j,k,l);}
#define S522(i,j,k,l,m,n,o) {total++; printf("S522 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S523(i,j,k,l) {total++; printf("S523 %d %d %d %d\n",i,j,k,l);}
#define S524(i,j,k,l) {total++; printf("S524 %d %d %d %d\n",i,j,k,l);}
#define S525(i,j,k,l,m,n,o) {total++; printf("S525 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S526(i,j,k,l) {total++; printf("S526 %d %d %d %d\n",i,j,k,l);}
#define S527(i,j,k,l) {total++; printf("S527 %d %d %d %d\n",i,j,k,l);}
#define S528(i,j,k,l) {total++; printf("S528 %d %d %d %d\n",i,j,k,l);}
#define S529(i,j,k,l,m,n,o) {total++; printf("S529 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S530(i,j,k,l) {total++; printf("S530 %d %d %d %d\n",i,j,k,l);}
#define S531(i,j,k,l) {total++; printf("S531 %d %d %d %d\n",i,j,k,l);}
#define S532(i,j,k,l) {total++; printf("S532 %d %d %d %d\n",i,j,k,l);}
#define S533(i,j,k,l,m,n,o) {total++; printf("S533 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S534(i,j,k,l) {total++; printf("S534 %d %d %d %d\n",i,j,k,l);}
#define S535(i,j,k,l) {total++; printf("S535 %d %d %d %d\n",i,j,k,l);}
#define S536(i,j,k,l,m,n,o) {total++; printf("S536 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S537(i,j,k,l) {total++; printf("S537 %d %d %d %d\n",i,j,k,l);}
#define S538(i,j,k,l) {total++; printf("S538 %d %d %d %d\n",i,j,k,l);}
#define S539(i,j,k,l) {total++; printf("S539 %d %d %d %d\n",i,j,k,l);}
#define S540(i,j,k,l) {total++; printf("S540 %d %d %d %d\n",i,j,k,l);}
#define S541(i,j,k,l,m,n,o) {total++; printf("S541 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S542(i,j,k,l) {total++; printf("S542 %d %d %d %d\n",i,j,k,l);}
#define S543(i,j,k,l) {total++; printf("S543 %d %d %d %d\n",i,j,k,l);}
#define S544(i,j,k,l) {total++; printf("S544 %d %d %d %d\n",i,j,k,l);}
#define S545(i,j,k,l) {total++; printf("S545 %d %d %d %d\n",i,j,k,l);}
#define S546(i,j,k,l,m,n,o) {total++; printf("S546 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S547(i,j,k,l) {total++; printf("S547 %d %d %d %d\n",i,j,k,l);}
#define S548(i,j,k,l) {total++; printf("S548 %d %d %d %d\n",i,j,k,l);}
#define S549(i,j,k,l) {total++; printf("S549 %d %d %d %d\n",i,j,k,l);}
#define S550(i,j,k,l,m,n,o) {total++; printf("S550 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S551(i,j,k,l) {total++; printf("S551 %d %d %d %d\n",i,j,k,l);}
#define S552(i,j,k,l,m,n,o) {total++; printf("S552 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S553(i,j,k,l) {total++; printf("S553 %d %d %d %d\n",i,j,k,l);}
#define S554(i,j,k,l) {total++; printf("S554 %d %d %d %d\n",i,j,k,l);}
#define S555(i,j,k,l) {total++; printf("S555 %d %d %d %d\n",i,j,k,l);}
#define S556(i,j,k,l,m,n,o) {total++; printf("S556 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S557(i,j,k,l) {total++; printf("S557 %d %d %d %d\n",i,j,k,l);}
#define S558(i,j,k,l) {total++; printf("S558 %d %d %d %d\n",i,j,k,l);}
#define S559(i,j,k,l) {total++; printf("S559 %d %d %d %d\n",i,j,k,l);}
#define S560(i,j,k,l,m,n,o) {total++; printf("S560 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S561(i,j,k,l) {total++; printf("S561 %d %d %d %d\n",i,j,k,l);}
#define S562(i,j,k,l) {total++; printf("S562 %d %d %d %d\n",i,j,k,l);}
#define S563(i,j,k,l,m,n,o) {total++; printf("S563 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S564(i,j,k,l) {total++; printf("S564 %d %d %d %d\n",i,j,k,l);}
#define S565(i,j,k,l) {total++; printf("S565 %d %d %d %d\n",i,j,k,l);}
#define S566(i,j,k,l) {total++; printf("S566 %d %d %d %d\n",i,j,k,l);}
#define S567(i,j,k,l,m,n,o) {total++; printf("S567 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S568(i,j,k,l) {total++; printf("S568 %d %d %d %d\n",i,j,k,l);}
#define S569(i,j,k,l) {total++; printf("S569 %d %d %d %d\n",i,j,k,l);}
#define S570(i,j,k,l) {total++; printf("S570 %d %d %d %d\n",i,j,k,l);}
#define S571(i,j,k,l,m,n,o) {total++; printf("S571 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S572(i,j,k,l) {total++; printf("S572 %d %d %d %d\n",i,j,k,l);}
#define S573(i,j,k,l) {total++; printf("S573 %d %d %d %d\n",i,j,k,l);}
#define S574(i,j,k,l,m,n,o) {total++; printf("S574 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S575(i,j,k,l) {total++; printf("S575 %d %d %d %d\n",i,j,k,l);}
#define S576(i,j,k,l) {total++; printf("S576 %d %d %d %d\n",i,j,k,l);}
#define S577(i,j,k,l) {total++; printf("S577 %d %d %d %d\n",i,j,k,l);}
#define S578(i,j,k,l) {total++; printf("S578 %d %d %d %d\n",i,j,k,l);}
#define S579(i,j,k,l,m,n) {total++; printf("S579 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S580(i,j,k,l) {total++; printf("S580 %d %d %d %d\n",i,j,k,l);}
#define S581(i,j) {total++; printf("S581 %d %d\n",i,j);}
#define S582(i,j) {total++; printf("S582 %d %d\n",i,j);}
#define S583(i,j,k) {total++; printf("S583 %d %d %d\n",i,j,k);}
#define S584(i,j) {total++; printf("S584 %d %d\n",i,j);}

int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
  double A578[2000][2000][2000][2000];
  double A583[2000];
  double A580[2000][2000];
  double A582[2000][2000];
  double A581[2000][2000];
  double A579[2000][2000];
  double A577[2000][2000][2000][2000];
  double A576[2000][2000][2000][2000];
  double A575[2000][2000][2000][2000];
  double A548[2000][2000][2000][2000];
  double A571[2000][2000][2000][2000];
  double A543[2000][2000][2000][2000];
  double A568[2000][2000][2000][2000];
  double A567[2000][2000][2000][2000];
  double A565[2000][2000][2000][2000];
  double A564[2000][2000][2000][2000];
  double A563[2000][2000][2000][2000];
  double A562[2000][2000][2000][2000];
  double A560[2000][2000][2000][2000];
  double A559[2000][2000][2000][2000];
  double A557[2000][2000][2000][2000];
  double A555[2000][2000][2000][2000];
  double A554[2000][2000][2000][2000];
  double A551[2000][2000][2000][2000];
  double A553[2000][2000][2000][2000];
  double A552[2000][2000][2000][2000];
  double A550[2000][2000][2000][2000];
  double A547[2000][2000][2000][2000];
  double A546[2000][2000][2000][2000];
  double A545[2000][2000][2000][2000];
  double A259[2000][2000][2000][2000];
  double A257[2000][2000][2000][2000];
  double A119[2000][2000][2000][2000];
  double A332[2000][2000][2000][2000];
  double A221[2000][2000][2000][2000];
  double A217[2000][2000][2000][2000];
  double A252[2000][2000][2000][2000];
  double A250[2000][2000][2000][2000];
  double A52[2000][2000][2000][2000];
  double A249[2000][2000][2000][2000];
  double A207[2000][2000][2000][2000];
  double A353[2000][2000][2000][2000];
  double A245[2000][2000][2000][2000];
  double A241[2000][2000][2000][2000];
  double A240[2000][2000][2000][2000];
  double A365[2000][2000][2000][2000];
  double A239[2000][2000][2000][2000];
  double A232[2000][2000][2000][2000];
  double A248[2000][2000][2000][2000];
  double A338[2000][2000][2000][2000];
  double A345[2000][2000][2000][2000];
  double A517[2000][2000][2000][2000];
  double A234[2000][2000][2000][2000];
  double A271[2000][2000][2000][2000];
  double A228[2000][2000][2000][2000];
  double A225[2000][2000][2000][2000];
  double A27[2000][2000][2000][2000];
  double A572[2000][2000][2000][2000];
  double A429[2000][2000][2000][2000];
  double A285[2000][2000][2000][2000];
  double A220[2000][2000][2000][2000];
  double A468[2000][2000][2000][2000];
  double A201[2000][2000][2000][2000];
  double A231[2000][2000][2000][2000];
  double A214[2000][2000][2000][2000];
  double A339[2000][2000][2000][2000];
  double A502[2000][2000][2000][2000];
  double A35[2000][2000][2000][2000];
  double A20[2000][2000][2000][2000];
  double A561[2000][2000][2000][2000];
  double A213[2000][2000][2000][2000];
  double A224[2000][2000][2000][2000];
  double A211[2000][2000][2000][2000];
  double A191[2000][2000][2000][2000];
  double A208[2000][2000][2000][2000];
  double A7[2000][2000][2000][2000];
  double A29[2000][2000][2000][2000];
  double A420[2000][2000][2000][2000];
  double A457[2000][2000][2000][2000];
  double A202[2000][2000][2000][2000];
  double A541[2000][2000][2000][2000];
  double A195[2000][2000][2000][2000];
  double A197[2000][2000][2000][2000];
  double A190[2000][2000][2000][2000];
  double A107[2000][2000][2000][2000];
  double A187[2000][2000][2000][2000];
  double A206[2000][2000][2000][2000];
  double A185[2000][2000][2000][2000];
  double A219[2000][2000][2000][2000];
  double A200[2000][2000][2000][2000];
  double A61[2000][2000][2000][2000];
  double A67[2000][2000][2000][2000];
  double A181[2000][2000][2000][2000];
  double A292[2000][2000][2000][2000];
  double A179[2000][2000][2000][2000];
  double A287[2000][2000][2000][2000];
  double A236[2000][2000][2000][2000];
  double A360[2000][2000][2000][2000];
  double A172[2000][2000][2000][2000];
  double A44[2000][2000][2000][2000];
  double A413[2000][2000][2000][2000];
  double A258[2000][2000][2000][2000];
  double A12[2000][2000][2000][2000];
  double A278[2000][2000][2000][2000];
  double A496[2000][2000][2000][2000];
  double A196[2000][2000][2000][2000];
  double A400[2000][2000][2000][2000];
  double A161[2000][2000][2000][2000];
  double A159[2000][2000][2000][2000];
  double A158[2000][2000][2000][2000];
  double A307[2000][2000][2000][2000];
  double A180[2000][2000][2000][2000];
  double A157[2000][2000][2000][2000];
  double A138[2000][2000][2000][2000];
  double A13[2000][2000][2000][2000];
  double A155[2000][2000][2000][2000];
  double A409[2000][2000][2000][2000];
  double A466[2000][2000][2000][2000];
  double A472[2000][2000][2000][2000];
  double A573[2000][2000][2000][2000];
  double A154[2000][2000][2000][2000];
  double A150[2000][2000][2000][2000];
  double A243[2000][2000][2000][2000];
  double A152[2000][2000][2000][2000];
  double A244[2000][2000][2000][2000];
  double A92[2000][2000][2000][2000];
  double A203[2000][2000][2000][2000];
  double A149[2000][2000][2000][2000];
  double A66[2000][2000][2000][2000];
  double A146[2000][2000][2000][2000];
  double A110[2000][2000][2000][2000];
  double A144[2000][2000][2000][2000];
  double A233[2000][2000][2000][2000];
  double A115[2000][2000][2000][2000];
  double A199[2000][2000][2000][2000];
  double A4[2000][2000][2000][2000];
  double A536[2000][2000][2000][2000];
  double A140[2000][2000][2000][2000];
  double A54[2000][2000][2000][2000];
  double A357[2000][2000][2000][2000];
  double A134[2000][2000][2000][2000];
  double A133[2000][2000][2000][2000];
  double A135[2000][2000][2000][2000];
  double A131[2000][2000][2000][2000];
  double A68[2000][2000][2000][2000];
  double A335[2000][2000][2000][2000];
  double A130[2000][2000][2000][2000];
  double A165[2000][2000][2000][2000];
  double A265[2000][2000][2000][2000];
  double A385[2000][2000][2000][2000];
  double A109[2000][2000][2000][2000];
  double A326[2000][2000][2000][2000];
  double A528[2000][2000][2000][2000];
  double A281[2000][2000][2000][2000];
  double A36[2000][2000][2000][2000];
  double A584[2000][2000];
  double A48[2000][2000][2000][2000];
  double A41[2000][2000][2000][2000];
  double A33[2000][2000][2000][2000];
  double A310[2000][2000][2000][2000];
  double A83[2000][2000][2000][2000];
  double A77[2000][2000][2000][2000];
  double A464[2000][2000][2000][2000];
  double A246[2000][2000][2000][2000];
  double A38[2000][2000][2000][2000];
  double A192[2000][2000][2000][2000];
  double A45[2000][2000][2000][2000];
  double A372[2000][2000][2000][2000];
  double A40[2000][2000][2000][2000];
  double A55[2000][2000][2000][2000];
  double A141[2000][2000][2000][2000];
  double A255[2000][2000][2000][2000];
  double A279[2000][2000][2000][2000];
  double A288[2000][2000][2000][2000];
  double A32[2000][2000][2000][2000];
  double A358[2000][2000][2000][2000];
  double A127[2000][2000][2000][2000];
  double A223[2000][2000][2000][2000];
  double A108[2000][2000][2000][2000];
  double A70[2000][2000][2000][2000];
  double A376[2000][2000][2000][2000];
  double A128[2000][2000][2000][2000];
  double A209[2000][2000][2000][2000];
  double A153[2000][2000][2000][2000];
  double A348[2000][2000][2000][2000];
  double A531[2000][2000][2000][2000];
  double A566[2000][2000][2000][2000];
  double A49[2000][2000][2000][2000];
  double A293[2000][2000][2000][2000];
  double A18[2000][2000][2000][2000];
  double A168[2000][2000][2000][2000];
  double A26[2000][2000][2000][2000];
  double A59[2000][2000][2000][2000];
  double A118[2000][2000][2000][2000];
  double A47[2000][2000][2000][2000];
  double A323[2000][2000][2000][2000];
  double A526[2000][2000][2000][2000];
  double A114[2000][2000][2000][2000];
  double A98[2000][2000][2000][2000];
  double A392[2000][2000][2000][2000];
  double A25[2000][2000][2000][2000];
  double A404[2000][2000][2000][2000];
  double A242[2000][2000][2000][2000];
  double A82[2000][2000][2000][2000];
  double A215[2000][2000][2000][2000];
  double A512[2000][2000][2000][2000];
  double A10[2000][2000][2000][2000];
  double A31[2000][2000][2000][2000];
  double A183[2000][2000][2000][2000];
  double A23[2000][2000][2000][2000];
  double A504[2000][2000][2000][2000];
  double A378[2000][2000][2000][2000];
  double A24[2000][2000][2000][2000];
  double A436[2000][2000][2000][2000];
  double A304[2000][2000][2000][2000];
  double A75[2000][2000][2000][2000];
  double A101[2000][2000][2000][2000];
  double A289[2000][2000][2000][2000];
  double A89[2000][2000][2000][2000];
  double A537[2000][2000][2000][2000];
  double A390[2000][2000][2000][2000];
  double A484[2000][2000][2000][2000];
  double A14[2000][2000][2000][2000];
  double A487[2000][2000][2000][2000];
  double A72[2000][2000][2000][2000];
  double A50[2000][2000][2000][2000];
  double A381[2000][2000][2000][2000];
  double A393[2000][2000][2000][2000];
  double A97[2000][2000][2000][2000];
  double A434[2000][2000][2000][2000];
  double A105[2000][2000][2000][2000];
  double A520[2000][2000][2000][2000];
  double A5[2000][2000][2000][2000];
  double A3[2000][2000][2000][2000];
  double A368[2000][2000][2000][2000];
  double A198[2000][2000][2000][2000];
  double A124[2000][2000][2000][2000];
  double A542[2000][2000][2000][2000];
  double A253[2000][2000][2000][2000];
  double A58[2000][2000][2000][2000];
  double A363[2000][2000][2000][2000];
  double A170[2000][2000][2000][2000];
  double A425[2000][2000][2000][2000];
  double A69[2000][2000][2000][2000];
  double A439[2000][2000][2000][2000];
  double A235[2000][2000][2000][2000];
  double A371[2000][2000][2000][2000];
  double A549[2000][2000][2000][2000];
  double A167[2000][2000][2000][2000];
  double A432[2000][2000][2000][2000];
  double A113[2000][2000][2000][2000];
  double A366[2000][2000][2000][2000];
  double A122[2000][2000][2000][2000];
  double A230[2000][2000][2000][2000];
  double A194[2000][2000][2000][2000];
  double A340[2000][2000][2000][2000];
  double A443[2000][2000][2000][2000];
  double A151[2000][2000][2000][2000];
  double A103[2000][2000][2000][2000];
  double A9[2000][2000][2000][2000];
  double A21[2000][2000][2000][2000];
  double A469[2000][2000][2000][2000];
  double A226[2000][2000][2000][2000];
  double A88[2000][2000][2000][2000];
  double A121[2000][2000][2000][2000];
  double A373[2000][2000][2000][2000];
  double A37[2000][2000][2000][2000];
  double A22[2000][2000][2000][2000];
  double A254[2000][2000][2000][2000];
  double A266[2000][2000][2000][2000];
  double A296[2000][2000][2000][2000];
  double A43[2000][2000][2000][2000];
  double A507[2000][2000][2000][2000];
  double A145[2000][2000][2000][2000];
  double A95[2000][2000][2000][2000];
  double A112[2000][2000][2000][2000];
  double A569[2000][2000][2000][2000];
  double A495[2000][2000][2000][2000];
  double A28[2000][2000][2000][2000];
  double A126[2000][2000][2000][2000];
  double A522[2000][2000][2000][2000];
  double A60[2000][2000][2000][2000];
  double A356[2000][2000][2000][2000];
  double A148[2000][2000][2000][2000];
  double A57[2000][2000][2000][2000];
  double A364[2000][2000][2000][2000];
  double A99[2000][2000][2000][2000];
  double A382[2000][2000][2000][2000];
  double A305[2000][2000][2000][2000];
  double A301[2000][2000][2000][2000];
  double A19[2000][2000][2000][2000];
  double A337[2000][2000][2000][2000];
  double A489[2000][2000][2000][2000];
  double A62[2000][2000][2000][2000];
  double A294[2000][2000][2000][2000];
  double A369[2000][2000][2000][2000];
  double A74[2000][2000][2000][2000];
  double A455[2000][2000][2000][2000];
  double A64[2000][2000][2000][2000];
  double A123[2000][2000][2000][2000];
  double A65[2000][2000][2000][2000];
  double A189[2000][2000][2000][2000];
  double A174[2000][2000][2000][2000];
  double A129[2000][2000][2000][2000];
  double A398[2000][2000][2000][2000];
  double A73[2000][2000][2000][2000];
  double A295[2000][2000][2000][2000];
  double A111[2000][2000][2000][2000];
  double A410[2000][2000][2000][2000];
  double A525[2000][2000][2000][2000];
  double A175[2000][2000][2000][2000];
  double A78[2000][2000][2000][2000];
  double A80[2000][2000][2000][2000];
  double A260[2000][2000][2000][2000];
  double A81[2000][2000][2000][2000];
  double A300[2000][2000][2000][2000];
  double A473[2000][2000][2000][2000];
  double A321[2000][2000][2000][2000];
  double A53[2000][2000][2000][2000];
  double A383[2000][2000][2000][2000];
  double A84[2000][2000][2000][2000];
  double A166[2000][2000][2000][2000];
  double A465[2000][2000][2000][2000];
  double A216[2000][2000][2000][2000];
  double A442[2000][2000][2000][2000];
  double A85[2000][2000][2000][2000];
  double A500[2000][2000][2000][2000];
  double A86[2000][2000][2000][2000];
  double A71[2000][2000][2000][2000];
  double A79[2000][2000][2000][2000];
  double A227[2000][2000][2000][2000];
  double A90[2000][2000][2000][2000];
  double A91[2000][2000][2000][2000];
  double A16[2000][2000][2000][2000];
  double A516[2000][2000][2000][2000];
  double A96[2000][2000][2000][2000];
  double A315[2000][2000][2000][2000];
  double A459[2000][2000][2000][2000];
  double A341[2000][2000][2000][2000];
  double A411[2000][2000][2000][2000];
  double A104[2000][2000][2000][2000];
  double A156[2000][2000][2000][2000];
  double A93[2000][2000][2000][2000];
  double A405[2000][2000][2000][2000];
  double A222[2000][2000][2000][2000];
  double A8[2000][2000][2000][2000];
  double A106[2000][2000][2000][2000];
  double A136[2000][2000][2000][2000];
  double A513[2000][2000][2000][2000];
  double A42[2000][2000][2000][2000];
  double A467[2000][2000][2000][2000];
  double A39[2000][2000][2000][2000];
  double A117[2000][2000][2000][2000];
  double A193[2000][2000][2000][2000];
  double A336[2000][2000][2000][2000];
  double A261[2000][2000][2000][2000];
  double A262[2000][2000][2000][2000];
  double A463[2000][2000][2000][2000];
  double A263[2000][2000][2000][2000];
  double A452[2000][2000][2000][2000];
  double A160[2000][2000][2000][2000];
  double A264[2000][2000][2000][2000];
  double A471[2000][2000][2000][2000];
  double A267[2000][2000][2000][2000];
  double A268[2000][2000][2000][2000];
  double A6[2000][2000][2000][2000];
  double A387[2000][2000][2000][2000];
  double A497[2000][2000][2000][2000];
  double A270[2000][2000][2000][2000];
  double A162[2000][2000][2000][2000];
  double A269[2000][2000][2000][2000];
  double A402[2000][2000][2000][2000];
  double A76[2000][2000][2000][2000];
  double A272[2000][2000][2000][2000];
  double A163[2000][2000][2000][2000];
  double A186[2000][2000][2000][2000];
  double A204[2000][2000][2000][2000];
  double A273[2000][2000][2000][2000];
  double A274[2000][2000][2000][2000];
  double A275[2000][2000][2000][2000];
  double A276[2000][2000][2000][2000];
  double A177[2000][2000][2000][2000];
  double A147[2000][2000][2000][2000];
  double A318[2000][2000][2000][2000];
  double A277[2000][2000][2000][2000];
  double A574[2000][2000][2000][2000];
  double A308[2000][2000][2000][2000];
  double A280[2000][2000][2000][2000];
  double A143[2000][2000][2000][2000];
  double A508[2000][2000][2000][2000];
  double A282[2000][2000][2000][2000];
  double A284[2000][2000][2000][2000];
  double A317[2000][2000][2000][2000];
  double A350[2000][2000][2000][2000];
  double A286[2000][2000][2000][2000];
  double A291[2000][2000][2000][2000];
  double A329[2000][2000][2000][2000];
  double A490[2000][2000][2000][2000];
  double A125[2000][2000][2000][2000];
  double A188[2000][2000][2000][2000];
  double A297[2000][2000][2000][2000];
  double A299[2000][2000][2000][2000];
  double A477[2000][2000][2000][2000];
  double A303[2000][2000][2000][2000];
  double A462[2000][2000][2000][2000];
  double A428[2000][2000][2000][2000];
  double A302[2000][2000][2000][2000];
  double A306[2000][2000][2000][2000];
  double A519[2000][2000][2000][2000];
  double A570[2000][2000][2000][2000];
  double A309[2000][2000][2000][2000];
  double A251[2000][2000][2000][2000];
  double A311[2000][2000][2000][2000];
  double A312[2000][2000][2000][2000];
  double A314[2000][2000][2000][2000];
  double A313[2000][2000][2000][2000];
  double A316[2000][2000][2000][2000];
  double A319[2000][2000][2000][2000];
  double A132[2000][2000][2000][2000];
  double A320[2000][2000][2000][2000];
  double A218[2000][2000][2000][2000];
  double A322[2000][2000][2000][2000];
  double A17[2000][2000][2000][2000];
  double A283[2000][2000][2000][2000];
  double A325[2000][2000][2000][2000];
  double A327[2000][2000][2000][2000];
  double A328[2000][2000][2000][2000];
  double A379[2000][2000][2000][2000];
  double A486[2000][2000][2000][2000];
  double A330[2000][2000][2000][2000];
  double A331[2000][2000][2000][2000];
  double A499[2000][2000][2000][2000];
  double A481[2000][2000][2000][2000];
  double A333[2000][2000][2000][2000];
  double A94[2000][2000][2000][2000];
  double A334[2000][2000][2000][2000];
  double A529[2000][2000][2000][2000];
  double A346[2000][2000][2000][2000];
  double A403[2000][2000][2000][2000];
  double A427[2000][2000][2000][2000];
  double A544[2000][2000][2000][2000];
  double A298[2000][2000][2000][2000];
  double A142[2000][2000][2000][2000];
  double A137[2000][2000][2000][2000];
  double A446[2000][2000][2000][2000];
  double A342[2000][2000][2000][2000];
  double A374[2000][2000][2000][2000];
  double A343[2000][2000][2000][2000];
  double A164[2000][2000][2000][2000];
  double A347[2000][2000][2000][2000];
  double A454[2000][2000][2000][2000];
  double A351[2000][2000][2000][2000];
  double A352[2000][2000][2000][2000];
  double A355[2000][2000][2000][2000];
  double A478[2000][2000][2000][2000];
  double A182[2000][2000][2000][2000];
  double A359[2000][2000][2000][2000];
  double A397[2000][2000][2000][2000];
  double A51[2000][2000][2000][2000];
  double A440[2000][2000][2000][2000];
  double A238[2000][2000][2000][2000];
  double A361[2000][2000][2000][2000];
  double A370[2000][2000][2000][2000];
  double A375[2000][2000][2000][2000];
  double A485[2000][2000][2000][2000];
  double A524[2000][2000][2000][2000];
  double A377[2000][2000][2000][2000];
  double A380[2000][2000][2000][2000];
  double A30[2000][2000][2000][2000];
  double A120[2000][2000][2000][2000];
  double A445[2000][2000][2000][2000];
  double A173[2000][2000][2000][2000];
  double A384[2000][2000][2000][2000];
  double A386[2000][2000][2000][2000];
  double A388[2000][2000][2000][2000];
  double A391[2000][2000][2000][2000];
  double A2[2000][2000][2000][2000];
  double A474[2000][2000][2000][2000];
  double A534[2000][2000][2000][2000];
  double A394[2000][2000][2000][2000];
  double A395[2000][2000][2000][2000];
  double A396[2000][2000][2000][2000];
  double A100[2000][2000][2000][2000];
  double A399[2000][2000][2000][2000];
  double A256[2000][2000][2000][2000];
  double A401[2000][2000][2000][2000];
  double A406[2000][2000][2000][2000];
  double A407[2000][2000][2000][2000];
  double A444[2000][2000][2000][2000];
  double A354[2000][2000][2000][2000];
  double A408[2000][2000][2000][2000];
  double A412[2000][2000][2000][2000];
  double A414[2000][2000][2000][2000];
  double A46[2000][2000][2000][2000];
  double A415[2000][2000][2000][2000];
  double A171[2000][2000][2000][2000];
  double A416[2000][2000][2000][2000];
  double A205[2000][2000][2000][2000];
  double A56[2000][2000][2000][2000];
  double A518[2000][2000][2000][2000];
  double A87[2000][2000][2000][2000];
  double A417[2000][2000][2000][2000];
  double A418[2000][2000][2000][2000];
  double A229[2000][2000][2000][2000];
  double A362[2000][2000][2000][2000];
  double A419[2000][2000][2000][2000];
  double A210[2000][2000][2000][2000];
  double A169[2000][2000][2000][2000];
  double A63[2000][2000][2000][2000];
  double A421[2000][2000][2000][2000];
  double A422[2000][2000][2000][2000];
  double A34[2000][2000][2000][2000];
  double A423[2000][2000][2000][2000];
  double A506[2000][2000][2000][2000];
  double A424[2000][2000][2000][2000];
  double A426[2000][2000][2000][2000];
  double A367[2000][2000][2000][2000];
  double A430[2000][2000][2000][2000];
  double A431[2000][2000][2000][2000];
  double A1[2000][2000][2000][2000];
  double A433[2000][2000][2000][2000];
  double A247[2000][2000][2000][2000];
  double A435[2000][2000][2000][2000];
  double A176[2000][2000][2000][2000];
  double A437[2000][2000][2000][2000];
  double A438[2000][2000][2000][2000];
  double A441[2000][2000][2000][2000];
  double A556[2000][2000][2000][2000];
  double A447[2000][2000][2000][2000];
  double A448[2000][2000][2000][2000];
  double A479[2000][2000][2000][2000];
  double A449[2000][2000][2000][2000];
  double A212[2000][2000][2000][2000];
  double A450[2000][2000][2000][2000];
  double A389[2000][2000][2000][2000];
  double A451[2000][2000][2000][2000];
  double A453[2000][2000][2000][2000];
  double A15[2000][2000][2000][2000];
  double A456[2000][2000][2000][2000];
  double A184[2000][2000][2000][2000];
  double A458[2000][2000][2000][2000];
  double A460[2000][2000][2000][2000];
  double A116[2000][2000][2000][2000];
  double A461[2000][2000][2000][2000];
  double A470[2000][2000][2000][2000];
  double A290[2000][2000][2000][2000];
  double A527[2000][2000][2000][2000];
  double A349[2000][2000][2000][2000];
  double A475[2000][2000][2000][2000];
  double A476[2000][2000][2000][2000];
  double A480[2000][2000][2000][2000];
  double A11[2000][2000][2000][2000];
  double A482[2000][2000][2000][2000];
  double A237[2000][2000][2000][2000];
  double A483[2000][2000][2000][2000];
  double A488[2000][2000][2000][2000];
  double A491[2000][2000][2000][2000];
  double A492[2000][2000][2000][2000];
  double A493[2000][2000][2000][2000];
  double A494[2000][2000][2000][2000];
  double A498[2000][2000][2000][2000];
  double A533[2000][2000][2000][2000];
  double A501[2000][2000][2000][2000];
  double A139[2000][2000][2000][2000];
  double A503[2000][2000][2000][2000];
  double A509[2000][2000][2000][2000];
  double A344[2000][2000][2000][2000];
  double A505[2000][2000][2000][2000];
  double A510[2000][2000][2000][2000];
  double A511[2000][2000][2000][2000];
  double A324[2000][2000][2000][2000];
  double A514[2000][2000][2000][2000];
  double A515[2000][2000][2000][2000];
  double A521[2000][2000][2000][2000];
  double A102[2000][2000][2000][2000];
  double A523[2000][2000][2000][2000];
  double A530[2000][2000][2000][2000];
  double A532[2000][2000][2000][2000];
  double A558[2000][2000][2000][2000];
  double A535[2000][2000][2000][2000];
  double A538[2000][2000][2000][2000];
  double A539[2000][2000][2000][2000];
  double A178[2000][2000][2000][2000];
  double A540[2000][2000][2000][2000];

#pragma scop
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2;c4++) {
      for (c6=0;c6<=229;c6++) {
        for (c8=0;c8<=229;c8++) {
          A1[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8];
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
          A5[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A6[c2][c4][c6][c8];
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
          A7[c2][c4][c6][c8];
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
          A12[c2][c4][c6][c8];
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
          A16[c2][c4][c6][c8];
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
          A28[c2][c4][c6][c8];
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
          A39[c2][c4][c6][c8];
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
          A45[c2][c4][c6][c8];
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
          A48[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8];
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
          A54[c2][c4][c6][c8];
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
          A66[c2][c4][c6][c8];
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
          A77[c2][c4][c6][c8];
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
          A88[c2][c4][c6][c8];
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
                A89[c2][c4][c6][c8] = A89[c2][c4][c6][c8] + A88[c2][c10][c6+c12][c8+c14] + A90[c4][c10][c12][c14];
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
          A91[c2][c4][c6][c8] = A89[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A91[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A92[c2][c4][c6][c8] = A92[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A93[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A94[c2][c4][c6][c8] = A92[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A95[c2][c4][c6][c8] = A94[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A95[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A96[c2][c4][c6][c8] = A96[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A97[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A98[c2][c4][c6][c8] = A96[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A98[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A99[c2][c4][c6][c8];
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
                A100[c2][c4][c6][c8] = A100[c2][c4][c6][c8] + A99[c2][c10][c6+c12][c8+c14] + A101[c4][c10][c12][c14];
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
          A102[c2][c4][c6][c8] = A100[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A102[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A103[c2][c4][c6][c8] = A103[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A104[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A105[c2][c4][c6][c8] = A103[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A106[c2][c4][c6][c8] = A105[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A106[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A107[c2][c4][c6][c8] = A107[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A108[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A109[c2][c4][c6][c8] = A107[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A109[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A110[c2][c4][c6][c8];
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
                A111[c2][c4][c6][c8] = A111[c2][c4][c6][c8] + A110[c2][c10][c6+c12][c8+c14] + A112[c4][c10][c12][c14];
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
          A113[c2][c4][c6][c8] = A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A113[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A114[c2][c4][c6][c8] = A114[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A115[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A116[c2][c4][c6][c8] = A114[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A117[c2][c4][c6][c8] = A116[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A117[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A118[c2][c4][c6][c8] = A118[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A119[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A120[c2][c4][c6][c8] = A118[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A120[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A121[c2][c4][c6][c8];
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
                A122[c2][c4][c6][c8] = A122[c2][c4][c6][c8] + A121[c2][c10][c6+c12][c8+c14] + A123[c4][c10][c12][c14];
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
          A124[c2][c4][c6][c8] = A122[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A124[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A125[c2][c4][c6][c8] = A125[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A126[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A127[c2][c4][c6][c8] = A125[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A128[c2][c4][c6][c8] = A127[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A128[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A129[c2][c4][c6][c8] = A129[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A130[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A131[c2][c4][c6][c8] = A129[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A131[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A132[c2][c4][c6][c8];
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
                A49[c2][c4][c6][c8] = A49[c2][c4][c6][c8] + A132[c2][c10][c6+c12][c8+c14] + A133[c4][c10][c12][c14];
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
          A134[c2][c4][c6][c8] = A49[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=127;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A134[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=127;c10++) {
            A54[c2][c4][c6][c8] = A54[c2][c4][c6][c8] + A53[c2][c10][c6+0][c8+0] + A135[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A136[c2][c4][c6][c8] = A54[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A137[c2][c4][c6][c8] = A136[c2][c4][c6][c8] + A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A62[c2][c4][c6][c8] = A137[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A138[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=511;c10++) {
            A138[c2][c4][c6][c8] = A138[c2][c4][c6][c8] + A62[c2][c10][c6+0][c8+0] + A139[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A140[c2][c4][c6][c8] = A138[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A138[c2][c4][c6][c8] = A140[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A141[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A142[c2][c4][c6][c8];
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
                A143[c2][c4][c6][c8] = A143[c2][c4][c6][c8] + A141[c2][c10][2*(c6)+c12][2*(c8)+c14] + A144[c4][c10][c12][c14];
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
          A145[c2][c4][c6][c8] = A143[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A145[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A147[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A148[c2][c4][c6][c8] = A148[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A149[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] = A148[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=511;c10++) {
            A151[c2][c4][c6][c8] = A151[c2][c4][c6][c8] + A62[c2][c10][2*(c6)+0][2*(c8)+0] + A152[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A153[c2][c4][c6][c8] = A151[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A154[c2][c4][c6][c8] = A150[c2][c4][c6][c8] + A153[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A154[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A156[c2][c4][c6][c8] = A156[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A157[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A158[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A159[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A162[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A163[c2][c4][c6][c8] = A163[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A164[c4][c10][0][0];
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
          A166[c2][c4][c6][c8] = A165[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A166[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A167[c2][c4][c6][c8] = A167[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A168[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A169[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A170[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A173[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A174[c2][c4][c6][c8] = A174[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A175[c4][c10][0][0];
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
          A177[c2][c4][c6][c8] = A176[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A177[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A178[c2][c4][c6][c8] = A178[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A179[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A181[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A184[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A185[c2][c4][c6][c8] = A185[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A186[c4][c10][0][0];
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
          A188[c2][c4][c6][c8] = A187[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A188[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A189[c2][c4][c6][c8] = A189[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A190[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A191[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A192[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A195[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A196[c2][c4][c6][c8] = A196[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A197[c4][c10][0][0];
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
          A199[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A199[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A200[c2][c4][c6][c8] = A200[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A201[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A203[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A206[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A207[c2][c4][c6][c8] = A207[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A208[c4][c10][0][0];
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
          A210[c2][c4][c6][c8] = A209[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A210[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A211[c2][c4][c6][c8] = A211[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A212[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A213[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A214[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A217[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A218[c2][c4][c6][c8] = A218[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A219[c4][c10][0][0];
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
          A221[c2][c4][c6][c8] = A220[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A221[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A222[c2][c4][c6][c8] = A222[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A223[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A225[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A228[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A229[c2][c4][c6][c8] = A229[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A230[c4][c10][0][0];
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
          A232[c2][c4][c6][c8] = A231[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A232[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A233[c2][c4][c6][c8] = A233[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A234[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A235[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A236[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A239[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A240[c2][c4][c6][c8] = A240[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A241[c4][c10][0][0];
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
          A243[c2][c4][c6][c8] = A242[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A243[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A244[c2][c4][c6][c8] = A244[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A245[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A246[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A247[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A250[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A251[c2][c4][c6][c8] = A251[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A252[c4][c10][0][0];
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
          A254[c2][c4][c6][c8] = A253[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A254[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A255[c2][c4][c6][c8] = A255[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A256[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A257[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A258[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A261[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A262[c2][c4][c6][c8] = A262[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A263[c4][c10][0][0];
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
          A265[c2][c4][c6][c8] = A264[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A265[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A266[c2][c4][c6][c8] = A266[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A267[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A268[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A269[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A272[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A273[c2][c4][c6][c8] = A273[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A274[c4][c10][0][0];
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
          A276[c2][c4][c6][c8] = A275[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A276[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A277[c2][c4][c6][c8] = A277[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A278[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A279[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A280[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A283[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A284[c2][c4][c6][c8] = A284[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A285[c4][c10][0][0];
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
          A287[c2][c4][c6][c8] = A286[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A287[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A288[c2][c4][c6][c8] = A288[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A289[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A290[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A291[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A294[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A295[c2][c4][c6][c8] = A295[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A296[c4][c10][0][0];
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
          A298[c2][c4][c6][c8] = A297[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A298[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A299[c2][c4][c6][c8] = A299[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A300[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A301[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A302[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A305[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A306[c2][c4][c6][c8] = A306[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A307[c4][c10][0][0];
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
          A309[c2][c4][c6][c8] = A308[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A309[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A310[c2][c4][c6][c8] = A310[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A311[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A312[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A313[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A316[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A317[c2][c4][c6][c8] = A317[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A318[c4][c10][0][0];
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
          A320[c2][c4][c6][c8] = A319[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A320[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A321[c2][c4][c6][c8] = A321[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A322[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A323[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A324[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A327[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A328[c2][c4][c6][c8] = A328[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A329[c4][c10][0][0];
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
          A331[c2][c4][c6][c8] = A330[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A331[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A332[c2][c4][c6][c8] = A332[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A333[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A334[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A335[c2][c4][c6][c8];
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
          A146[c2][c4][c6][c8] = A338[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A339[c2][c4][c6][c8] = A339[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A340[c4][c10][0][0];
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
          A342[c2][c4][c6][c8] = A341[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A342[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A343[c2][c4][c6][c8] = A343[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A344[c4][c10][0][0];
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
          A146[c2][c4][c6][c8] = A345[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A346[c2][c4][c6][c8];
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
                A347[c2][c4][c6][c8] = A347[c2][c4][c6][c8] + A346[c2][c10][c6+c12][c8+c14] + A348[c4][c10][c12][c14];
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
          A349[c2][c4][c6][c8] = A347[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A349[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A350[c2][c4][c6][c8] = A350[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A351[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A352[c2][c4][c6][c8] = A350[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A353[c2][c4][c6][c8] = A352[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A353[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A354[c2][c4][c6][c8] = A354[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A355[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A356[c2][c4][c6][c8] = A354[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A356[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A357[c2][c4][c6][c8];
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
                A358[c2][c4][c6][c8] = A358[c2][c4][c6][c8] + A357[c2][c10][c6+c12][c8+c14] + A359[c4][c10][c12][c14];
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
          A360[c2][c4][c6][c8] = A358[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A360[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A361[c2][c4][c6][c8] = A361[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A362[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A363[c2][c4][c6][c8] = A361[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A364[c2][c4][c6][c8] = A363[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A364[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A365[c2][c4][c6][c8] = A365[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A366[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A367[c2][c4][c6][c8] = A365[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A367[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A368[c2][c4][c6][c8];
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
                A369[c2][c4][c6][c8] = A369[c2][c4][c6][c8] + A368[c2][c10][c6+c12][c8+c14] + A370[c4][c10][c12][c14];
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
          A371[c2][c4][c6][c8] = A369[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A371[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A372[c2][c4][c6][c8] = A372[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A373[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A374[c2][c4][c6][c8] = A372[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A375[c2][c4][c6][c8] = A374[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A375[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A376[c2][c4][c6][c8] = A376[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A377[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A378[c2][c4][c6][c8] = A376[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A378[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A379[c2][c4][c6][c8];
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
                A380[c2][c4][c6][c8] = A380[c2][c4][c6][c8] + A379[c2][c10][c6+c12][c8+c14] + A381[c4][c10][c12][c14];
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
          A382[c2][c4][c6][c8] = A380[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A382[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A383[c2][c4][c6][c8] = A383[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A384[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A385[c2][c4][c6][c8] = A383[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A386[c2][c4][c6][c8] = A385[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A386[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A387[c2][c4][c6][c8] = A387[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A388[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A389[c2][c4][c6][c8] = A387[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A389[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A390[c2][c4][c6][c8];
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
                A391[c2][c4][c6][c8] = A391[c2][c4][c6][c8] + A390[c2][c10][c6+c12][c8+c14] + A392[c4][c10][c12][c14];
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
          A393[c2][c4][c6][c8] = A391[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A393[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A394[c2][c4][c6][c8] = A394[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A395[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A396[c2][c4][c6][c8] = A394[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A397[c2][c4][c6][c8] = A396[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A397[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A398[c2][c4][c6][c8] = A398[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A399[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A400[c2][c4][c6][c8] = A398[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A400[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A401[c2][c4][c6][c8];
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
                A402[c2][c4][c6][c8] = A402[c2][c4][c6][c8] + A401[c2][c10][c6+c12][c8+c14] + A403[c4][c10][c12][c14];
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
          A404[c2][c4][c6][c8] = A402[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A404[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A405[c2][c4][c6][c8] = A405[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A406[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A407[c2][c4][c6][c8] = A405[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A408[c2][c4][c6][c8] = A407[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A408[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A409[c2][c4][c6][c8] = A409[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A410[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A411[c2][c4][c6][c8] = A409[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A411[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A412[c2][c4][c6][c8];
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
                A413[c2][c4][c6][c8] = A413[c2][c4][c6][c8] + A412[c2][c10][c6+c12][c8+c14] + A414[c4][c10][c12][c14];
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
          A415[c2][c4][c6][c8] = A413[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A415[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A416[c2][c4][c6][c8] = A416[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A417[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A418[c2][c4][c6][c8] = A416[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A419[c2][c4][c6][c8] = A418[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A419[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A420[c2][c4][c6][c8] = A420[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A421[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A422[c2][c4][c6][c8] = A420[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A422[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A423[c2][c4][c6][c8];
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
                A424[c2][c4][c6][c8] = A424[c2][c4][c6][c8] + A423[c2][c10][c6+c12][c8+c14] + A425[c4][c10][c12][c14];
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
          A426[c2][c4][c6][c8] = A424[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A426[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A427[c2][c4][c6][c8] = A427[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A428[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A429[c2][c4][c6][c8] = A427[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A430[c2][c4][c6][c8] = A429[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A430[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A431[c2][c4][c6][c8] = A431[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A432[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A433[c2][c4][c6][c8] = A431[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A433[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A434[c2][c4][c6][c8];
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
                A435[c2][c4][c6][c8] = A435[c2][c4][c6][c8] + A434[c2][c10][c6+c12][c8+c14] + A436[c4][c10][c12][c14];
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
          A437[c2][c4][c6][c8] = A435[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A437[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A438[c2][c4][c6][c8] = A438[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A439[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A440[c2][c4][c6][c8] = A438[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A441[c2][c4][c6][c8] = A440[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A441[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A442[c2][c4][c6][c8] = A442[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A443[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A444[c2][c4][c6][c8] = A442[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A444[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A445[c2][c4][c6][c8];
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
                A446[c2][c4][c6][c8] = A446[c2][c4][c6][c8] + A445[c2][c10][c6+c12][c8+c14] + A447[c4][c10][c12][c14];
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
          A448[c2][c4][c6][c8] = A446[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A448[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A449[c2][c4][c6][c8] = A449[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A450[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A451[c2][c4][c6][c8] = A449[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A452[c2][c4][c6][c8] = A451[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A452[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A453[c2][c4][c6][c8] = A453[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A454[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A455[c2][c4][c6][c8] = A453[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A455[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A456[c2][c4][c6][c8];
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
                A457[c2][c4][c6][c8] = A457[c2][c4][c6][c8] + A456[c2][c10][c6+c12][c8+c14] + A458[c4][c10][c12][c14];
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
          A459[c2][c4][c6][c8] = A457[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A459[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A460[c2][c4][c6][c8] = A460[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A461[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A462[c2][c4][c6][c8] = A460[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A463[c2][c4][c6][c8] = A462[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A463[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A464[c2][c4][c6][c8] = A464[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A465[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A466[c2][c4][c6][c8] = A464[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A466[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A467[c2][c4][c6][c8];
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
                A468[c2][c4][c6][c8] = A468[c2][c4][c6][c8] + A467[c2][c10][c6+c12][c8+c14] + A469[c4][c10][c12][c14];
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
          A470[c2][c4][c6][c8] = A468[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A470[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A471[c2][c4][c6][c8] = A471[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A472[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A473[c2][c4][c6][c8] = A471[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A474[c2][c4][c6][c8] = A473[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A474[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A475[c2][c4][c6][c8] = A475[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A476[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A477[c2][c4][c6][c8] = A475[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A477[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A478[c2][c4][c6][c8];
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
                A479[c2][c4][c6][c8] = A479[c2][c4][c6][c8] + A478[c2][c10][c6+c12][c8+c14] + A480[c4][c10][c12][c14];
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
          A481[c2][c4][c6][c8] = A479[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A481[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A482[c2][c4][c6][c8] = A482[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A483[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A484[c2][c4][c6][c8] = A482[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A485[c2][c4][c6][c8] = A484[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A485[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A486[c2][c4][c6][c8] = A486[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A487[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A488[c2][c4][c6][c8] = A486[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A488[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A489[c2][c4][c6][c8];
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
                A490[c2][c4][c6][c8] = A490[c2][c4][c6][c8] + A489[c2][c10][c6+c12][c8+c14] + A491[c4][c10][c12][c14];
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
          A492[c2][c4][c6][c8] = A490[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A492[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A493[c2][c4][c6][c8] = A493[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A494[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A495[c2][c4][c6][c8] = A493[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A496[c2][c4][c6][c8] = A495[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A496[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A497[c2][c4][c6][c8] = A497[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A498[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A499[c2][c4][c6][c8] = A497[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A499[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A500[c2][c4][c6][c8];
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
                A501[c2][c4][c6][c8] = A501[c2][c4][c6][c8] + A500[c2][c10][c6+c12][c8+c14] + A502[c4][c10][c12][c14];
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
          A503[c2][c4][c6][c8] = A501[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A503[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A504[c2][c4][c6][c8] = A504[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A505[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A506[c2][c4][c6][c8] = A504[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A507[c2][c4][c6][c8] = A506[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A507[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A508[c2][c4][c6][c8] = A508[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A509[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A510[c2][c4][c6][c8] = A508[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A510[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A511[c2][c4][c6][c8];
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
                A512[c2][c4][c6][c8] = A512[c2][c4][c6][c8] + A511[c2][c10][c6+c12][c8+c14] + A513[c4][c10][c12][c14];
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
          A514[c2][c4][c6][c8] = A512[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A514[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A515[c2][c4][c6][c8] = A515[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A516[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A517[c2][c4][c6][c8] = A515[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A518[c2][c4][c6][c8] = A517[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A518[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A519[c2][c4][c6][c8] = A519[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A520[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A521[c2][c4][c6][c8] = A519[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A521[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A522[c2][c4][c6][c8];
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
                A523[c2][c4][c6][c8] = A523[c2][c4][c6][c8] + A522[c2][c10][c6+c12][c8+c14] + A524[c4][c10][c12][c14];
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
          A525[c2][c4][c6][c8] = A523[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A525[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A526[c2][c4][c6][c8] = A526[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A527[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A528[c2][c4][c6][c8] = A526[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A529[c2][c4][c6][c8] = A528[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A529[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A530[c2][c4][c6][c8] = A530[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A531[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A532[c2][c4][c6][c8] = A530[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A532[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A533[c2][c4][c6][c8];
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
                A142[c2][c4][c6][c8] = A142[c2][c4][c6][c8] + A533[c2][c10][c6+c12][c8+c14] + A534[c4][c10][c12][c14];
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
          A535[c2][c4][c6][c8] = A142[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A535[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A147[c2][c4][c6][c8] = A147[c2][c4][c6][c8] + A146[c2][c10][c6+0][c8+0] + A536[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A537[c2][c4][c6][c8] = A147[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A538[c2][c4][c6][c8] = A537[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A538[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A539[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A539[c2][c4][c6][c8] = A539[c2][c4][c6][c8] + A155[c2][c10][c6+0][c8+0] + A540[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A541[c2][c4][c6][c8] = A539[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A539[c2][c4][c6][c8] = A541[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A542[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A543[c2][c4][c6][c8];
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
                A544[c2][c4][c6][c8] = A544[c2][c4][c6][c8] + A542[c2][c10][2*(c6)+c12][2*(c8)+c14] + A545[c4][c10][c12][c14];
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
          A546[c2][c4][c6][c8] = A544[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A547[c2][c4][c6][c8] = A546[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A548[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A549[c2][c4][c6][c8] = A549[c2][c4][c6][c8] + A547[c2][c10][c6+0][c8+0] + A550[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A551[c2][c4][c6][c8] = A549[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A552[c2][c4][c6][c8] = A552[c2][c4][c6][c8] + A155[c2][c10][2*(c6)+0][2*(c8)+0] + A553[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A554[c2][c4][c6][c8] = A552[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A555[c2][c4][c6][c8] = A551[c2][c4][c6][c8] + A554[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A556[c2][c4][c6][c8] = A555[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A557[c2][c4][c6][c8] = A557[c2][c4][c6][c8] + A556[c2][c10][c6+0][c8+0] + A558[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A559[c2][c4][c6][c8] = A557[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A547[c2][c4][c6][c8] = A559[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A560[c2][c4][c6][c8];
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
                A561[c2][c4][c6][c8] = A561[c2][c4][c6][c8] + A560[c2][c10][c6+c12][c8+c14] + A562[c4][c10][c12][c14];
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
          A563[c2][c4][c6][c8] = A561[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A547[c2][c4][c6][c8] = A563[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A564[c2][c4][c6][c8] = A564[c2][c4][c6][c8] + A547[c2][c10][c6+0][c8+0] + A565[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A566[c2][c4][c6][c8] = A564[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A567[c2][c4][c6][c8] = A566[c2][c4][c6][c8] + A556[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A556[c2][c4][c6][c8] = A567[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A568[c2][c4][c6][c8] = A568[c2][c4][c6][c8] + A556[c2][c10][c6+0][c8+0] + A569[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A570[c2][c4][c6][c8] = A568[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A547[c2][c4][c6][c8] = A570[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A571[c2][c4][c6][c8];
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
                A543[c2][c4][c6][c8] = A543[c2][c4][c6][c8] + A571[c2][c10][c6+c12][c8+c14] + A572[c4][c10][c12][c14];
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
          A573[c2][c4][c6][c8] = A543[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A547[c2][c4][c6][c8] = A573[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A548[c2][c4][c6][c8] = A548[c2][c4][c6][c8] + A547[c2][c10][c6+0][c8+0] + A574[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A575[c2][c4][c6][c8] = A548[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A576[c2][c4][c6][c8] = A575[c2][c4][c6][c8] + A556[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A556[c2][c4][c6][c8] = A576[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A577[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A577[c2][c4][0][0] = A577[c2][c4][0][0] + A556[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A578[c2][c4][0][0] = A577[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A580[c4][c2] = A579[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A581[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=2047;c6++) {
        A581[c2][c4] = A581[c2][c4] + A582[c2][c6] + A580[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A584[c2][c4] = A581[c2][c4] + A583[c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
