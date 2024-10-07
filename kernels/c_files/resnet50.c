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
#define S166(i,j,k,l) {total++; printf("S166 %d %d %d %d\n",i,j,k,l);}
#define S167(i,j,k,l,m,n,o) {total++; printf("S167 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S168(i,j,k,l) {total++; printf("S168 %d %d %d %d\n",i,j,k,l);}
#define S169(i,j,k,l) {total++; printf("S169 %d %d %d %d\n",i,j,k,l);}
#define S170(i,j,k,l) {total++; printf("S170 %d %d %d %d\n",i,j,k,l);}
#define S171(i,j,k,l) {total++; printf("S171 %d %d %d %d\n",i,j,k,l);}
#define S172(i,j,k,l,m,n,o) {total++; printf("S172 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S173(i,j,k,l) {total++; printf("S173 %d %d %d %d\n",i,j,k,l);}
#define S174(i,j,k,l) {total++; printf("S174 %d %d %d %d\n",i,j,k,l);}
#define S175(i,j,k,l) {total++; printf("S175 %d %d %d %d\n",i,j,k,l);}
#define S176(i,j,k,l,m,n,o) {total++; printf("S176 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S177(i,j,k,l) {total++; printf("S177 %d %d %d %d\n",i,j,k,l);}
#define S178(i,j,k,l,m,n,o) {total++; printf("S178 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S179(i,j,k,l) {total++; printf("S179 %d %d %d %d\n",i,j,k,l);}
#define S180(i,j,k,l) {total++; printf("S180 %d %d %d %d\n",i,j,k,l);}
#define S181(i,j,k,l) {total++; printf("S181 %d %d %d %d\n",i,j,k,l);}
#define S182(i,j,k,l,m,n,o) {total++; printf("S182 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S183(i,j,k,l) {total++; printf("S183 %d %d %d %d\n",i,j,k,l);}
#define S184(i,j,k,l) {total++; printf("S184 %d %d %d %d\n",i,j,k,l);}
#define S185(i,j,k,l) {total++; printf("S185 %d %d %d %d\n",i,j,k,l);}
#define S186(i,j,k,l,m,n,o) {total++; printf("S186 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S187(i,j,k,l) {total++; printf("S187 %d %d %d %d\n",i,j,k,l);}
#define S188(i,j,k,l) {total++; printf("S188 %d %d %d %d\n",i,j,k,l);}
#define S189(i,j,k,l,m,n,o) {total++; printf("S189 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S190(i,j,k,l) {total++; printf("S190 %d %d %d %d\n",i,j,k,l);}
#define S191(i,j,k,l) {total++; printf("S191 %d %d %d %d\n",i,j,k,l);}
#define S192(i,j,k,l) {total++; printf("S192 %d %d %d %d\n",i,j,k,l);}
#define S193(i,j,k,l,m,n,o) {total++; printf("S193 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S194(i,j,k,l) {total++; printf("S194 %d %d %d %d\n",i,j,k,l);}
#define S195(i,j,k,l) {total++; printf("S195 %d %d %d %d\n",i,j,k,l);}
#define S196(i,j,k,l) {total++; printf("S196 %d %d %d %d\n",i,j,k,l);}
#define S197(i,j,k,l,m,n,o) {total++; printf("S197 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S198(i,j,k,l) {total++; printf("S198 %d %d %d %d\n",i,j,k,l);}
#define S199(i,j,k,l) {total++; printf("S199 %d %d %d %d\n",i,j,k,l);}
#define S200(i,j,k,l,m,n,o) {total++; printf("S200 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S201(i,j,k,l) {total++; printf("S201 %d %d %d %d\n",i,j,k,l);}
#define S202(i,j,k,l) {total++; printf("S202 %d %d %d %d\n",i,j,k,l);}
#define S203(i,j,k,l) {total++; printf("S203 %d %d %d %d\n",i,j,k,l);}
#define S204(i,j,k,l) {total++; printf("S204 %d %d %d %d\n",i,j,k,l);}
#define S205(i,j,k,l,m,n) {total++; printf("S205 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S206(i,j,k,l) {total++; printf("S206 %d %d %d %d\n",i,j,k,l);}
#define S207(i,j) {total++; printf("S207 %d %d\n",i,j);}
#define S208(i,j) {total++; printf("S208 %d %d\n",i,j);}
#define S209(i,j,k) {total++; printf("S209 %d %d %d\n",i,j,k);}
#define S210(i,j) {total++; printf("S210 %d %d\n",i,j);}
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
  volatile float A160[256][256][3][3];
  volatile float A161[64][256][14][14];
  volatile float A162[1024][256][1][1];
  volatile float A163[64][1024][14][14];
  volatile float A164[64][1024][14][14];
  volatile float A165[64][512][14][14];
  volatile float A166[512][1024][1][1];
  volatile float A167[64][512][14][14];
  volatile float A168[64][512][16][16];
  volatile float A169[64][512][7][7];
  volatile float A17[64][256][56][56];
  volatile float A170[64][512][7][7];
  volatile float A171[512][512][3][3];
  volatile float A172[64][512][7][7];
  volatile float A173[64][512][7][7];
  volatile float A174[64][2048][7][7];
  volatile float A175[64][2048][7][7];
  volatile float A176[2048][512][1][1];
  volatile float A177[64][2048][7][7];
  volatile float A178[64][2048][7][7];
  volatile float A179[2048][1024][1][1];
  volatile float A18[256][64][1][1];
  volatile float A180[64][2048][7][7];
  volatile float A181[64][2048][7][7];
  volatile float A182[64][2048][7][7];
  volatile float A183[64][512][7][7];
  volatile float A184[512][2048][1][1];
  volatile float A185[64][512][7][7];
  volatile float A186[64][512][9][9];
  volatile float A187[64][512][7][7];
  volatile float A188[512][512][3][3];
  volatile float A189[64][512][7][7];
  volatile float A19[64][256][56][56];
  volatile float A190[64][2048][7][7];
  volatile float A191[2048][512][1][1];
  volatile float A192[64][2048][7][7];
  volatile float A193[64][2048][7][7];
  volatile float A194[64][512][7][7];
  volatile float A195[512][2048][1][1];
  volatile float A196[64][512][7][7];
  volatile float A197[64][512][9][9];
  volatile float A198[512][512][3][3];
  volatile float A199[64][512][7][7];
  volatile float A2[64][64][112][112];
  volatile float A20[64][256][56][56];
  volatile float A200[2048][512][1][1];
  volatile float A201[64][2048][7][7];
  volatile float A202[64][2048][7][7];
  volatile float A203[64][2048][1][1];
  volatile float A204[64][2048][1][1];
  volatile float A205[1000][2048];
  volatile float A206[2048][1000];
  volatile float A207[64][1000];
  volatile float A208[64][2048];
  volatile float A209[1000];
  volatile float A21[256][64][1][1];
  volatile float A210[64][1000];
  volatile float A22[64][256][56][56];
  volatile float A23[64][256][56][56];
  volatile float A24[64][256][56][56];
  volatile float A25[64][64][56][56];
  volatile float A26[64][256][1][1];
  volatile float A27[64][64][56][56];
  volatile float A28[64][64][58][58];
  volatile float A29[64][64][56][56];
  volatile float A3[64][3][7][7];
  volatile float A30[64][64][3][3];
  volatile float A31[64][64][56][56];
  volatile float A32[64][256][56][56];
  volatile float A33[256][64][1][1];
  volatile float A34[64][256][56][56];
  volatile float A35[64][256][56][56];
  volatile float A36[64][64][56][56];
  volatile float A37[64][256][1][1];
  volatile float A38[64][64][56][56];
  volatile float A39[64][64][58][58];
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
                A98[c2][c4][c6][c8] = A98[c2][c4][c6][c8] + A159[c2][c10][c6+c12][c8+c14] + A160[c4][c10][c12][c14];
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
          A161[c2][c4][c6][c8] = A98[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=255;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A161[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=255;c10++) {
            A103[c2][c4][c6][c8] = A103[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A162[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A163[c2][c4][c6][c8] = A103[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A164[c2][c4][c6][c8] = A163[c2][c4][c6][c8] + A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A164[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A165[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A165[c2][c4][c6][c8] = A165[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A166[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A167[c2][c4][c6][c8] = A165[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A165[c2][c4][c6][c8] = A167[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A168[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A169[c2][c4][c6][c8]=0;
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
                A170[c2][c4][c6][c8] = A170[c2][c4][c6][c8] + A168[c2][c10][2*(c6)+c12][2*(c8)+c14] + A171[c4][c10][c12][c14];
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
          A172[c2][c4][c6][c8] = A170[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A173[c2][c4][c6][c8] = A172[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A174[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A175[c2][c4][c6][c8] = A175[c2][c4][c6][c8] + A173[c2][c10][c6+0][c8+0] + A176[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A177[c2][c4][c6][c8] = A175[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1023;c10++) {
            A178[c2][c4][c6][c8] = A178[c2][c4][c6][c8] + A111[c2][c10][2*(c6)+0][2*(c8)+0] + A179[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A180[c2][c4][c6][c8] = A178[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A181[c2][c4][c6][c8] = A177[c2][c4][c6][c8] + A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A182[c2][c4][c6][c8] = A181[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A183[c2][c4][c6][c8] = A183[c2][c4][c6][c8] + A182[c2][c10][c6+0][c8+0] + A184[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A185[c2][c4][c6][c8] = A183[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A173[c2][c4][c6][c8] = A185[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A186[c2][c4][c6][c8]=0;
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
                A187[c2][c4][c6][c8] = A187[c2][c4][c6][c8] + A186[c2][c10][c6+c12][c8+c14] + A188[c4][c10][c12][c14];
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
          A189[c2][c4][c6][c8] = A187[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A173[c2][c4][c6][c8] = A189[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A190[c2][c4][c6][c8] = A190[c2][c4][c6][c8] + A173[c2][c10][c6+0][c8+0] + A191[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A192[c2][c4][c6][c8] = A190[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A193[c2][c4][c6][c8] = A192[c2][c4][c6][c8] + A182[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A182[c2][c4][c6][c8] = A193[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=2047;c10++) {
            A194[c2][c4][c6][c8] = A194[c2][c4][c6][c8] + A182[c2][c10][c6+0][c8+0] + A195[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A196[c2][c4][c6][c8] = A194[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A173[c2][c4][c6][c8] = A196[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A197[c2][c4][c6][c8]=0;
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
                A169[c2][c4][c6][c8] = A169[c2][c4][c6][c8] + A197[c2][c10][c6+c12][c8+c14] + A198[c4][c10][c12][c14];
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
          A199[c2][c4][c6][c8] = A169[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=511;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A173[c2][c4][c6][c8] = A199[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=511;c10++) {
            A174[c2][c4][c6][c8] = A174[c2][c4][c6][c8] + A173[c2][c10][c6+0][c8+0] + A200[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A201[c2][c4][c6][c8] = A174[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A202[c2][c4][c6][c8] = A201[c2][c4][c6][c8] + A182[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A182[c2][c4][c6][c8] = A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A203[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A203[c2][c4][0][0] = A203[c2][c4][0][0] + A182[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A204[c2][c4][0][0] = A203[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=2047;c4++) {
      A206[c4][c2] = A205[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A207[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=2047;c6++) {
        A207[c2][c4] = A207[c2][c4] + A208[c2][c6] + A206[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A210[c2][c4] = A207[c2][c4] + A209[c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
