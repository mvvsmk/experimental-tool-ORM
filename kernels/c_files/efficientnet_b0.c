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
#define S10(i,j,k,l) {total++; printf("S10 %d %d %d %d\n",i,j,k,l);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l) {total++; printf("S12 %d %d %d %d\n",i,j,k,l);}
#define S13(i,j,k,l,m,n) {total++; printf("S13 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S14(i,j,k,l) {total++; printf("S14 %d %d %d %d\n",i,j,k,l);}
#define S15(i,j,k,l) {total++; printf("S15 %d %d %d %d\n",i,j,k,l);}
#define S16(i,j,k,l,m,n,o) {total++; printf("S16 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S17(i,j,k,l) {total++; printf("S17 %d %d %d %d\n",i,j,k,l);}
#define S18(i,j,k,l) {total++; printf("S18 %d %d %d %d\n",i,j,k,l);}
#define S19(i,j,k,l) {total++; printf("S19 %d %d %d %d\n",i,j,k,l);}
#define S20(i,j,k,l,m,n,o) {total++; printf("S20 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S21(i,j,k,l) {total++; printf("S21 %d %d %d %d\n",i,j,k,l);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l) {total++; printf("S23 %d %d %d %d\n",i,j,k,l);}
#define S24(i,j,k,l,m,n,o) {total++; printf("S24 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l) {total++; printf("S26 %d %d %d %d\n",i,j,k,l);}
#define S27(i,j,k,l,m,n,o) {total++; printf("S27 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S28(i,j,k,l) {total++; printf("S28 %d %d %d %d\n",i,j,k,l);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l) {total++; printf("S30 %d %d %d %d\n",i,j,k,l);}
#define S31(i,j,k,l) {total++; printf("S31 %d %d %d %d\n",i,j,k,l);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l,m,n) {total++; printf("S33 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S34(i,j,k,l) {total++; printf("S34 %d %d %d %d\n",i,j,k,l);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l) {total++; printf("S36 %d %d %d %d\n",i,j,k,l);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l,m,n) {total++; printf("S38 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S39(i,j,k,l) {total++; printf("S39 %d %d %d %d\n",i,j,k,l);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l,m,n,o) {total++; printf("S41 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S42(i,j,k,l) {total++; printf("S42 %d %d %d %d\n",i,j,k,l);}
#define S43(i,j,k,l) {total++; printf("S43 %d %d %d %d\n",i,j,k,l);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l,m,n,o) {total++; printf("S45 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S46(i,j,k,l) {total++; printf("S46 %d %d %d %d\n",i,j,k,l);}
#define S47(i,j,k,l) {total++; printf("S47 %d %d %d %d\n",i,j,k,l);}
#define S48(i,j,k,l) {total++; printf("S48 %d %d %d %d\n",i,j,k,l);}
#define S49(i,j,k,l,m,n,o) {total++; printf("S49 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S50(i,j,k,l) {total++; printf("S50 %d %d %d %d\n",i,j,k,l);}
#define S51(i,j,k,l) {total++; printf("S51 %d %d %d %d\n",i,j,k,l);}
#define S52(i,j,k,l,m,n,o) {total++; printf("S52 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S53(i,j,k,l) {total++; printf("S53 %d %d %d %d\n",i,j,k,l);}
#define S54(i,j,k,l) {total++; printf("S54 %d %d %d %d\n",i,j,k,l);}
#define S55(i,j,k,l) {total++; printf("S55 %d %d %d %d\n",i,j,k,l);}
#define S56(i,j,k,l) {total++; printf("S56 %d %d %d %d\n",i,j,k,l);}
#define S57(i,j,k,l,m,n) {total++; printf("S57 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S58(i,j,k,l) {total++; printf("S58 %d %d %d %d\n",i,j,k,l);}
#define S59(i,j,k,l) {total++; printf("S59 %d %d %d %d\n",i,j,k,l);}
#define S60(i,j,k,l) {total++; printf("S60 %d %d %d %d\n",i,j,k,l);}
#define S61(i,j,k,l) {total++; printf("S61 %d %d %d %d\n",i,j,k,l);}
#define S62(i,j,k,l,m,n) {total++; printf("S62 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S63(i,j,k,l) {total++; printf("S63 %d %d %d %d\n",i,j,k,l);}
#define S64(i,j,k,l) {total++; printf("S64 %d %d %d %d\n",i,j,k,l);}
#define S65(i,j,k,l,m,n,o) {total++; printf("S65 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S66(i,j,k,l) {total++; printf("S66 %d %d %d %d\n",i,j,k,l);}
#define S67(i,j,k,l) {total++; printf("S67 %d %d %d %d\n",i,j,k,l);}
#define S68(i,j,k,l) {total++; printf("S68 %d %d %d %d\n",i,j,k,l);}
#define S69(i,j,k,l,m,n,o) {total++; printf("S69 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S70(i,j,k,l) {total++; printf("S70 %d %d %d %d\n",i,j,k,l);}
#define S71(i,j,k,l) {total++; printf("S71 %d %d %d %d\n",i,j,k,l);}
#define S72(i,j,k,l,m,n,o) {total++; printf("S72 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S73(i,j,k,l) {total++; printf("S73 %d %d %d %d\n",i,j,k,l);}
#define S74(i,j,k,l) {total++; printf("S74 %d %d %d %d\n",i,j,k,l);}
#define S75(i,j,k,l,m,n,o) {total++; printf("S75 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S76(i,j,k,l) {total++; printf("S76 %d %d %d %d\n",i,j,k,l);}
#define S77(i,j,k,l) {total++; printf("S77 %d %d %d %d\n",i,j,k,l);}
#define S78(i,j,k,l) {total++; printf("S78 %d %d %d %d\n",i,j,k,l);}
#define S79(i,j,k,l) {total++; printf("S79 %d %d %d %d\n",i,j,k,l);}
#define S80(i,j,k,l) {total++; printf("S80 %d %d %d %d\n",i,j,k,l);}
#define S81(i,j,k,l,m,n) {total++; printf("S81 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S82(i,j,k,l) {total++; printf("S82 %d %d %d %d\n",i,j,k,l);}
#define S83(i,j,k,l) {total++; printf("S83 %d %d %d %d\n",i,j,k,l);}
#define S84(i,j,k,l) {total++; printf("S84 %d %d %d %d\n",i,j,k,l);}
#define S85(i,j,k,l,m,n) {total++; printf("S85 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S86(i,j,k,l) {total++; printf("S86 %d %d %d %d\n",i,j,k,l);}
#define S87(i,j,k,l,m,n,o) {total++; printf("S87 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S88(i,j,k,l) {total++; printf("S88 %d %d %d %d\n",i,j,k,l);}
#define S89(i,j,k,l) {total++; printf("S89 %d %d %d %d\n",i,j,k,l);}
#define S90(i,j,k,l,m,n,o) {total++; printf("S90 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S91(i,j,k,l) {total++; printf("S91 %d %d %d %d\n",i,j,k,l);}
#define S92(i,j,k,l) {total++; printf("S92 %d %d %d %d\n",i,j,k,l);}
#define S93(i,j,k,l) {total++; printf("S93 %d %d %d %d\n",i,j,k,l);}
#define S94(i,j,k,l,m,n,o) {total++; printf("S94 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S95(i,j,k,l) {total++; printf("S95 %d %d %d %d\n",i,j,k,l);}
#define S96(i,j,k,l) {total++; printf("S96 %d %d %d %d\n",i,j,k,l);}
#define S97(i,j,k,l,m,n,o) {total++; printf("S97 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S98(i,j,k,l) {total++; printf("S98 %d %d %d %d\n",i,j,k,l);}
#define S99(i,j,k,l) {total++; printf("S99 %d %d %d %d\n",i,j,k,l);}
#define S100(i,j,k,l) {total++; printf("S100 %d %d %d %d\n",i,j,k,l);}
#define S101(i,j,k,l) {total++; printf("S101 %d %d %d %d\n",i,j,k,l);}
#define S102(i,j,k,l,m,n) {total++; printf("S102 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S103(i,j,k,l) {total++; printf("S103 %d %d %d %d\n",i,j,k,l);}
#define S104(i,j,k,l) {total++; printf("S104 %d %d %d %d\n",i,j,k,l);}
#define S105(i,j,k,l) {total++; printf("S105 %d %d %d %d\n",i,j,k,l);}
#define S106(i,j,k,l) {total++; printf("S106 %d %d %d %d\n",i,j,k,l);}
#define S107(i,j,k,l,m,n) {total++; printf("S107 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S108(i,j,k,l) {total++; printf("S108 %d %d %d %d\n",i,j,k,l);}
#define S109(i,j,k,l) {total++; printf("S109 %d %d %d %d\n",i,j,k,l);}
#define S110(i,j,k,l,m,n,o) {total++; printf("S110 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S111(i,j,k,l) {total++; printf("S111 %d %d %d %d\n",i,j,k,l);}
#define S112(i,j,k,l) {total++; printf("S112 %d %d %d %d\n",i,j,k,l);}
#define S113(i,j,k,l) {total++; printf("S113 %d %d %d %d\n",i,j,k,l);}
#define S114(i,j,k,l,m,n,o) {total++; printf("S114 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S115(i,j,k,l) {total++; printf("S115 %d %d %d %d\n",i,j,k,l);}
#define S116(i,j,k,l) {total++; printf("S116 %d %d %d %d\n",i,j,k,l);}
#define S117(i,j,k,l,m,n,o) {total++; printf("S117 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S118(i,j,k,l) {total++; printf("S118 %d %d %d %d\n",i,j,k,l);}
#define S119(i,j,k,l) {total++; printf("S119 %d %d %d %d\n",i,j,k,l);}
#define S120(i,j,k,l,m,n,o) {total++; printf("S120 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S121(i,j,k,l) {total++; printf("S121 %d %d %d %d\n",i,j,k,l);}
#define S122(i,j,k,l) {total++; printf("S122 %d %d %d %d\n",i,j,k,l);}
#define S123(i,j,k,l) {total++; printf("S123 %d %d %d %d\n",i,j,k,l);}
#define S124(i,j,k,l) {total++; printf("S124 %d %d %d %d\n",i,j,k,l);}
#define S125(i,j,k,l) {total++; printf("S125 %d %d %d %d\n",i,j,k,l);}
#define S126(i,j,k,l,m,n) {total++; printf("S126 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S127(i,j,k,l) {total++; printf("S127 %d %d %d %d\n",i,j,k,l);}
#define S128(i,j,k,l) {total++; printf("S128 %d %d %d %d\n",i,j,k,l);}
#define S129(i,j,k,l) {total++; printf("S129 %d %d %d %d\n",i,j,k,l);}
#define S130(i,j,k,l,m,n) {total++; printf("S130 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S131(i,j,k,l) {total++; printf("S131 %d %d %d %d\n",i,j,k,l);}
#define S132(i,j,k,l,m,n,o) {total++; printf("S132 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S133(i,j,k,l) {total++; printf("S133 %d %d %d %d\n",i,j,k,l);}
#define S134(i,j,k,l) {total++; printf("S134 %d %d %d %d\n",i,j,k,l);}
#define S135(i,j,k,l,m,n,o) {total++; printf("S135 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S136(i,j,k,l) {total++; printf("S136 %d %d %d %d\n",i,j,k,l);}
#define S137(i,j,k,l) {total++; printf("S137 %d %d %d %d\n",i,j,k,l);}
#define S138(i,j,k,l) {total++; printf("S138 %d %d %d %d\n",i,j,k,l);}
#define S139(i,j,k,l,m,n,o) {total++; printf("S139 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S140(i,j,k,l) {total++; printf("S140 %d %d %d %d\n",i,j,k,l);}
#define S141(i,j,k,l) {total++; printf("S141 %d %d %d %d\n",i,j,k,l);}
#define S142(i,j,k,l,m,n,o) {total++; printf("S142 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S143(i,j,k,l) {total++; printf("S143 %d %d %d %d\n",i,j,k,l);}
#define S144(i,j,k,l) {total++; printf("S144 %d %d %d %d\n",i,j,k,l);}
#define S145(i,j,k,l) {total++; printf("S145 %d %d %d %d\n",i,j,k,l);}
#define S146(i,j,k,l) {total++; printf("S146 %d %d %d %d\n",i,j,k,l);}
#define S147(i,j,k,l,m,n) {total++; printf("S147 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S148(i,j,k,l) {total++; printf("S148 %d %d %d %d\n",i,j,k,l);}
#define S149(i,j,k,l) {total++; printf("S149 %d %d %d %d\n",i,j,k,l);}
#define S150(i,j,k,l) {total++; printf("S150 %d %d %d %d\n",i,j,k,l);}
#define S151(i,j,k,l) {total++; printf("S151 %d %d %d %d\n",i,j,k,l);}
#define S152(i,j,k,l,m,n) {total++; printf("S152 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
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
#define S165(i,j,k,l,m,n,o) {total++; printf("S165 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S166(i,j,k,l) {total++; printf("S166 %d %d %d %d\n",i,j,k,l);}
#define S167(i,j,k,l) {total++; printf("S167 %d %d %d %d\n",i,j,k,l);}
#define S168(i,j,k,l) {total++; printf("S168 %d %d %d %d\n",i,j,k,l);}
#define S169(i,j,k,l) {total++; printf("S169 %d %d %d %d\n",i,j,k,l);}
#define S170(i,j,k,l,m,n) {total++; printf("S170 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S171(i,j,k,l) {total++; printf("S171 %d %d %d %d\n",i,j,k,l);}
#define S172(i,j,k,l) {total++; printf("S172 %d %d %d %d\n",i,j,k,l);}
#define S173(i,j,k,l) {total++; printf("S173 %d %d %d %d\n",i,j,k,l);}
#define S174(i,j,k,l,m,n) {total++; printf("S174 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S175(i,j,k,l) {total++; printf("S175 %d %d %d %d\n",i,j,k,l);}
#define S176(i,j,k,l,m,n,o) {total++; printf("S176 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S177(i,j,k,l) {total++; printf("S177 %d %d %d %d\n",i,j,k,l);}
#define S178(i,j,k,l) {total++; printf("S178 %d %d %d %d\n",i,j,k,l);}
#define S179(i,j,k,l,m,n,o) {total++; printf("S179 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S180(i,j,k,l) {total++; printf("S180 %d %d %d %d\n",i,j,k,l);}
#define S181(i,j,k,l) {total++; printf("S181 %d %d %d %d\n",i,j,k,l);}
#define S182(i,j,k,l,m,n,o) {total++; printf("S182 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S183(i,j,k,l) {total++; printf("S183 %d %d %d %d\n",i,j,k,l);}
#define S184(i,j,k,l) {total++; printf("S184 %d %d %d %d\n",i,j,k,l);}
#define S185(i,j,k,l,m,n,o) {total++; printf("S185 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S186(i,j,k,l) {total++; printf("S186 %d %d %d %d\n",i,j,k,l);}
#define S187(i,j,k,l) {total++; printf("S187 %d %d %d %d\n",i,j,k,l);}
#define S188(i,j,k,l) {total++; printf("S188 %d %d %d %d\n",i,j,k,l);}
#define S189(i,j,k,l) {total++; printf("S189 %d %d %d %d\n",i,j,k,l);}
#define S190(i,j,k,l,m,n) {total++; printf("S190 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S191(i,j,k,l) {total++; printf("S191 %d %d %d %d\n",i,j,k,l);}
#define S192(i,j,k,l) {total++; printf("S192 %d %d %d %d\n",i,j,k,l);}
#define S193(i,j,k,l) {total++; printf("S193 %d %d %d %d\n",i,j,k,l);}
#define S194(i,j,k,l,m,n) {total++; printf("S194 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S195(i,j,k,l) {total++; printf("S195 %d %d %d %d\n",i,j,k,l);}
#define S196(i,j,k,l,m,n,o) {total++; printf("S196 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
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
#define S210(i,j,k,l) {total++; printf("S210 %d %d %d %d\n",i,j,k,l);}
#define S211(i,j,k,l,m,n) {total++; printf("S211 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S212(i,j,k,l) {total++; printf("S212 %d %d %d %d\n",i,j,k,l);}
#define S213(i,j,k,l) {total++; printf("S213 %d %d %d %d\n",i,j,k,l);}
#define S214(i,j,k,l) {total++; printf("S214 %d %d %d %d\n",i,j,k,l);}
#define S215(i,j,k,l) {total++; printf("S215 %d %d %d %d\n",i,j,k,l);}
#define S216(i,j,k,l,m,n) {total++; printf("S216 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S217(i,j,k,l) {total++; printf("S217 %d %d %d %d\n",i,j,k,l);}
#define S218(i,j,k,l) {total++; printf("S218 %d %d %d %d\n",i,j,k,l);}
#define S219(i,j,k,l,m,n,o) {total++; printf("S219 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S220(i,j,k,l) {total++; printf("S220 %d %d %d %d\n",i,j,k,l);}
#define S221(i,j,k,l) {total++; printf("S221 %d %d %d %d\n",i,j,k,l);}
#define S222(i,j,k,l) {total++; printf("S222 %d %d %d %d\n",i,j,k,l);}
#define S223(i,j,k,l,m,n,o) {total++; printf("S223 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S224(i,j,k,l) {total++; printf("S224 %d %d %d %d\n",i,j,k,l);}
#define S225(i,j,k,l) {total++; printf("S225 %d %d %d %d\n",i,j,k,l);}
#define S226(i,j,k,l,m,n,o) {total++; printf("S226 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S227(i,j,k,l) {total++; printf("S227 %d %d %d %d\n",i,j,k,l);}
#define S228(i,j,k,l) {total++; printf("S228 %d %d %d %d\n",i,j,k,l);}
#define S229(i,j,k,l,m,n,o) {total++; printf("S229 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S230(i,j,k,l) {total++; printf("S230 %d %d %d %d\n",i,j,k,l);}
#define S231(i,j,k,l) {total++; printf("S231 %d %d %d %d\n",i,j,k,l);}
#define S232(i,j,k,l) {total++; printf("S232 %d %d %d %d\n",i,j,k,l);}
#define S233(i,j,k,l) {total++; printf("S233 %d %d %d %d\n",i,j,k,l);}
#define S234(i,j,k,l,m,n) {total++; printf("S234 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S235(i,j,k,l) {total++; printf("S235 %d %d %d %d\n",i,j,k,l);}
#define S236(i,j,k,l) {total++; printf("S236 %d %d %d %d\n",i,j,k,l);}
#define S237(i,j,k,l) {total++; printf("S237 %d %d %d %d\n",i,j,k,l);}
#define S238(i,j,k,l,m,n) {total++; printf("S238 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S239(i,j,k,l) {total++; printf("S239 %d %d %d %d\n",i,j,k,l);}
#define S240(i,j,k,l,m,n,o) {total++; printf("S240 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S241(i,j,k,l) {total++; printf("S241 %d %d %d %d\n",i,j,k,l);}
#define S242(i,j,k,l) {total++; printf("S242 %d %d %d %d\n",i,j,k,l);}
#define S243(i,j,k,l,m,n,o) {total++; printf("S243 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S244(i,j,k,l) {total++; printf("S244 %d %d %d %d\n",i,j,k,l);}
#define S245(i,j,k,l) {total++; printf("S245 %d %d %d %d\n",i,j,k,l);}
#define S246(i,j,k,l,m,n,o) {total++; printf("S246 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S247(i,j,k,l) {total++; printf("S247 %d %d %d %d\n",i,j,k,l);}
#define S248(i,j,k,l) {total++; printf("S248 %d %d %d %d\n",i,j,k,l);}
#define S249(i,j,k,l,m,n,o) {total++; printf("S249 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S250(i,j,k,l) {total++; printf("S250 %d %d %d %d\n",i,j,k,l);}
#define S251(i,j,k,l) {total++; printf("S251 %d %d %d %d\n",i,j,k,l);}
#define S252(i,j,k,l) {total++; printf("S252 %d %d %d %d\n",i,j,k,l);}
#define S253(i,j,k,l) {total++; printf("S253 %d %d %d %d\n",i,j,k,l);}
#define S254(i,j,k,l) {total++; printf("S254 %d %d %d %d\n",i,j,k,l);}
#define S255(i,j,k,l,m,n) {total++; printf("S255 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S256(i,j,k,l) {total++; printf("S256 %d %d %d %d\n",i,j,k,l);}
#define S257(i,j,k,l) {total++; printf("S257 %d %d %d %d\n",i,j,k,l);}
#define S258(i,j,k,l) {total++; printf("S258 %d %d %d %d\n",i,j,k,l);}
#define S259(i,j,k,l,m,n) {total++; printf("S259 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S260(i,j,k,l) {total++; printf("S260 %d %d %d %d\n",i,j,k,l);}
#define S261(i,j,k,l,m,n,o) {total++; printf("S261 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S262(i,j,k,l) {total++; printf("S262 %d %d %d %d\n",i,j,k,l);}
#define S263(i,j,k,l) {total++; printf("S263 %d %d %d %d\n",i,j,k,l);}
#define S264(i,j,k,l,m,n,o) {total++; printf("S264 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S265(i,j,k,l) {total++; printf("S265 %d %d %d %d\n",i,j,k,l);}
#define S266(i,j,k,l) {total++; printf("S266 %d %d %d %d\n",i,j,k,l);}
#define S267(i,j,k,l) {total++; printf("S267 %d %d %d %d\n",i,j,k,l);}
#define S268(i,j,k,l,m,n,o) {total++; printf("S268 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S269(i,j,k,l) {total++; printf("S269 %d %d %d %d\n",i,j,k,l);}
#define S270(i,j,k,l) {total++; printf("S270 %d %d %d %d\n",i,j,k,l);}
#define S271(i,j,k,l,m,n,o) {total++; printf("S271 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S272(i,j,k,l) {total++; printf("S272 %d %d %d %d\n",i,j,k,l);}
#define S273(i,j,k,l) {total++; printf("S273 %d %d %d %d\n",i,j,k,l);}
#define S274(i,j,k,l) {total++; printf("S274 %d %d %d %d\n",i,j,k,l);}
#define S275(i,j,k,l) {total++; printf("S275 %d %d %d %d\n",i,j,k,l);}
#define S276(i,j,k,l,m,n) {total++; printf("S276 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S277(i,j,k,l) {total++; printf("S277 %d %d %d %d\n",i,j,k,l);}
#define S278(i,j,k,l) {total++; printf("S278 %d %d %d %d\n",i,j,k,l);}
#define S279(i,j,k,l) {total++; printf("S279 %d %d %d %d\n",i,j,k,l);}
#define S280(i,j,k,l) {total++; printf("S280 %d %d %d %d\n",i,j,k,l);}
#define S281(i,j,k,l,m,n) {total++; printf("S281 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S282(i,j,k,l) {total++; printf("S282 %d %d %d %d\n",i,j,k,l);}
#define S283(i,j,k,l) {total++; printf("S283 %d %d %d %d\n",i,j,k,l);}
#define S284(i,j,k,l,m,n,o) {total++; printf("S284 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S285(i,j,k,l) {total++; printf("S285 %d %d %d %d\n",i,j,k,l);}
#define S286(i,j,k,l) {total++; printf("S286 %d %d %d %d\n",i,j,k,l);}
#define S287(i,j,k,l) {total++; printf("S287 %d %d %d %d\n",i,j,k,l);}
#define S288(i,j,k,l,m,n,o) {total++; printf("S288 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S289(i,j,k,l) {total++; printf("S289 %d %d %d %d\n",i,j,k,l);}
#define S290(i,j,k,l) {total++; printf("S290 %d %d %d %d\n",i,j,k,l);}
#define S291(i,j,k,l,m,n,o) {total++; printf("S291 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S292(i,j,k,l) {total++; printf("S292 %d %d %d %d\n",i,j,k,l);}
#define S293(i,j,k,l) {total++; printf("S293 %d %d %d %d\n",i,j,k,l);}
#define S294(i,j,k,l,m,n,o) {total++; printf("S294 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S295(i,j,k,l) {total++; printf("S295 %d %d %d %d\n",i,j,k,l);}
#define S296(i,j,k,l) {total++; printf("S296 %d %d %d %d\n",i,j,k,l);}
#define S297(i,j,k,l) {total++; printf("S297 %d %d %d %d\n",i,j,k,l);}
#define S298(i,j,k,l) {total++; printf("S298 %d %d %d %d\n",i,j,k,l);}
#define S299(i,j,k,l,m,n) {total++; printf("S299 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S300(i,j,k,l) {total++; printf("S300 %d %d %d %d\n",i,j,k,l);}
#define S301(i,j,k,l) {total++; printf("S301 %d %d %d %d\n",i,j,k,l);}
#define S302(i,j,k,l) {total++; printf("S302 %d %d %d %d\n",i,j,k,l);}
#define S303(i,j,k,l,m,n) {total++; printf("S303 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S304(i,j,k,l) {total++; printf("S304 %d %d %d %d\n",i,j,k,l);}
#define S305(i,j,k,l,m,n,o) {total++; printf("S305 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S306(i,j,k,l) {total++; printf("S306 %d %d %d %d\n",i,j,k,l);}
#define S307(i,j,k,l) {total++; printf("S307 %d %d %d %d\n",i,j,k,l);}
#define S308(i,j,k,l,m,n,o) {total++; printf("S308 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S309(i,j,k,l) {total++; printf("S309 %d %d %d %d\n",i,j,k,l);}
#define S310(i,j,k,l) {total++; printf("S310 %d %d %d %d\n",i,j,k,l);}
#define S311(i,j,k,l,m,n,o) {total++; printf("S311 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S312(i,j,k,l) {total++; printf("S312 %d %d %d %d\n",i,j,k,l);}
#define S313(i,j,k,l) {total++; printf("S313 %d %d %d %d\n",i,j,k,l);}
#define S314(i,j,k,l,m,n,o) {total++; printf("S314 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S315(i,j,k,l) {total++; printf("S315 %d %d %d %d\n",i,j,k,l);}
#define S316(i,j,k,l) {total++; printf("S316 %d %d %d %d\n",i,j,k,l);}
#define S317(i,j,k,l) {total++; printf("S317 %d %d %d %d\n",i,j,k,l);}
#define S318(i,j,k,l) {total++; printf("S318 %d %d %d %d\n",i,j,k,l);}
#define S319(i,j,k,l,m,n) {total++; printf("S319 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S320(i,j,k,l) {total++; printf("S320 %d %d %d %d\n",i,j,k,l);}
#define S321(i,j,k,l) {total++; printf("S321 %d %d %d %d\n",i,j,k,l);}
#define S322(i,j,k,l) {total++; printf("S322 %d %d %d %d\n",i,j,k,l);}
#define S323(i,j,k,l,m,n) {total++; printf("S323 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S324(i,j,k,l) {total++; printf("S324 %d %d %d %d\n",i,j,k,l);}
#define S325(i,j,k,l,m,n,o) {total++; printf("S325 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S326(i,j,k,l) {total++; printf("S326 %d %d %d %d\n",i,j,k,l);}
#define S327(i,j,k,l) {total++; printf("S327 %d %d %d %d\n",i,j,k,l);}
#define S328(i,j,k,l,m,n,o) {total++; printf("S328 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S329(i,j,k,l) {total++; printf("S329 %d %d %d %d\n",i,j,k,l);}
#define S330(i,j,k,l) {total++; printf("S330 %d %d %d %d\n",i,j,k,l);}
#define S331(i,j,k,l,m,n,o) {total++; printf("S331 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S332(i,j,k,l) {total++; printf("S332 %d %d %d %d\n",i,j,k,l);}
#define S333(i,j,k,l) {total++; printf("S333 %d %d %d %d\n",i,j,k,l);}
#define S334(i,j,k,l,m,n,o) {total++; printf("S334 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S335(i,j,k,l) {total++; printf("S335 %d %d %d %d\n",i,j,k,l);}
#define S336(i,j,k,l) {total++; printf("S336 %d %d %d %d\n",i,j,k,l);}
#define S337(i,j,k,l) {total++; printf("S337 %d %d %d %d\n",i,j,k,l);}
#define S338(i,j,k,l) {total++; printf("S338 %d %d %d %d\n",i,j,k,l);}
#define S339(i,j,k,l,m,n) {total++; printf("S339 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S340(i,j,k,l) {total++; printf("S340 %d %d %d %d\n",i,j,k,l);}
#define S341(i,j,k,l) {total++; printf("S341 %d %d %d %d\n",i,j,k,l);}
#define S342(i,j,k,l) {total++; printf("S342 %d %d %d %d\n",i,j,k,l);}
#define S343(i,j,k,l,m,n) {total++; printf("S343 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S344(i,j,k,l) {total++; printf("S344 %d %d %d %d\n",i,j,k,l);}
#define S345(i,j,k,l,m,n,o) {total++; printf("S345 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S346(i,j,k,l) {total++; printf("S346 %d %d %d %d\n",i,j,k,l);}
#define S347(i,j,k,l) {total++; printf("S347 %d %d %d %d\n",i,j,k,l);}
#define S348(i,j,k,l,m,n,o) {total++; printf("S348 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S349(i,j,k,l) {total++; printf("S349 %d %d %d %d\n",i,j,k,l);}
#define S350(i,j,k,l) {total++; printf("S350 %d %d %d %d\n",i,j,k,l);}
#define S351(i,j,k,l) {total++; printf("S351 %d %d %d %d\n",i,j,k,l);}
#define S352(i,j,k,l,m,n,o) {total++; printf("S352 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S353(i,j,k,l) {total++; printf("S353 %d %d %d %d\n",i,j,k,l);}
#define S354(i,j,k,l) {total++; printf("S354 %d %d %d %d\n",i,j,k,l);}
#define S355(i,j,k,l,m,n,o) {total++; printf("S355 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S356(i,j,k,l) {total++; printf("S356 %d %d %d %d\n",i,j,k,l);}
#define S357(i,j,k,l) {total++; printf("S357 %d %d %d %d\n",i,j,k,l);}
#define S358(i,j,k,l) {total++; printf("S358 %d %d %d %d\n",i,j,k,l);}
#define S359(i,j,k,l) {total++; printf("S359 %d %d %d %d\n",i,j,k,l);}
#define S360(i,j,k,l,m,n) {total++; printf("S360 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S361(i,j,k,l) {total++; printf("S361 %d %d %d %d\n",i,j,k,l);}
#define S362(i,j) {total++; printf("S362 %d %d\n",i,j);}
#define S363(i,j) {total++; printf("S363 %d %d\n",i,j);}
#define S364(i,j,k) {total++; printf("S364 %d %d %d\n",i,j,k);}
#define S365(i,j) {total++; printf("S365 %d %d\n",i,j);}

int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
  double A324[2000][2000];
  double A319[2000][2000][2000][2000];
  double A322[2000][2000];
  double A320[2000][2000];
  double A316[2000][2000][2000][2000];
  double A313[2000][2000][2000][2000];
  double A314[2000][2000][2000][2000];
  double A312[2000][2000][2000][2000];
  double A311[2000][2000][2000][2000];
  double A309[2000][2000][2000][2000];
  double A306[2000][2000][2000][2000];
  double A303[2000][2000][2000][2000];
  double A302[2000][2000][2000][2000];
  double A299[2000][2000][2000][2000];
  double A298[2000][2000][2000][2000];
  double A297[2000][2000][2000][2000];
  double A291[2000][2000][2000][2000];
  double A286[2000][2000][2000][2000];
  double A284[2000][2000][2000][2000];
  double A282[2000][2000][2000][2000];
  double A283[2000][2000][2000][2000];
  double A280[2000][2000][2000][2000];
  double A277[2000][2000][2000][2000];
  double A275[2000][2000][2000][2000];
  double A274[2000][2000][2000][2000];
  double A272[2000][2000][2000][2000];
  double A273[2000][2000][2000][2000];
  double A270[2000][2000][2000];
  double A268[2000][2000][2000][2000];
  double A269[2000][2000][2000][2000];
  double A267[2000][2000][2000][2000];
  double A263[2000][2000][2000][2000];
  double A264[2000][2000][2000][2000];
  double A234[2000][2000][2000][2000];
  double A271[2000][2000][2000][2000];
  double A125[2000][2000][2000][2000];
  double A257[2000][2000][2000][2000];
  double A119[2000][2000][2000][2000];
  double A116[2000][2000][2000][2000];
  double A42[2000][2000][2000][2000];
  double A252[2000][2000][2000][2000];
  double A108[2000][2000][2000][2000];
  double A94[2000][2000][2000][2000];
  double A136[2000][2000][2000][2000];
  double A106[2000][2000][2000][2000];
  double A222[2000][2000][2000][2000];
  double A93[2000][2000][2000][2000];
  double A104[2000][2000][2000][2000];
  double A315[2000][2000][2000][2000];
  double A96[2000][2000][2000][2000];
  double A16[2000][2000][2000][2000];
  double A91[2000][2000][2000];
  double A90[2000][2000][2000][2000];
  double A227[2000][2000][2000][2000];
  double A71[2000][2000][2000][2000];
  double A87[2000][2000][2000][2000];
  double A204[2000][2000][2000][2000];
  double A86[2000][2000][2000][2000];
  double A216[2000][2000][2000][2000];
  double A84[2000][2000][2000][2000];
  double A321[2000][2000];
  double A300[2000][2000][2000][2000];
  double A81[2000][2000][2000][2000];
  double A317[2000][2000][2000][2000];
  double A78[2000][2000][2000][2000];
  double A175[2000][2000][2000][2000];
  double A111[2000][2000][2000][2000];
  double A156[2000][2000][2000][2000];
  double A295[2000][2000][2000][2000];
  double A76[2000][2000][2000][2000];
  double A39[2000][2000][2000][2000];
  double A40[2000][2000][2000][2000];
  double A73[2000][2000][2000];
  double A63[2000][2000][2000][2000];
  double A301[2000][2000][2000][2000];
  double A132[2000][2000][2000][2000];
  double A83[2000][2000][2000][2000];
  double A238[2000][2000][2000][2000];
  double A201[2000][2000][2000][2000];
  double A210[2000][2000][2000][2000];
  double A310[2000][2000][2000][2000];
  double A33[2000][2000][2000][2000];
  double A129[2000][2000][2000][2000];
  double A174[2000][2000][2000][2000];
  double A189[2000][2000][2000][2000];
  double A65[2000][2000][2000][2000];
  double A112[2000][2000][2000];
  double A145[2000][2000][2000][2000];
  double A43[2000][2000][2000][2000];
  double A296[2000][2000][2000][2000];
  double A266[2000][2000][2000][2000];
  double A22[2000][2000][2000][2000];
  double A37[2000][2000][2000][2000];
  double A85[2000][2000][2000][2000];
  double A120[2000][2000][2000][2000];
  double A193[2000][2000][2000][2000];
  double A117[2000][2000][2000][2000];
  double A293[2000][2000][2000][2000];
  double A49[2000][2000][2000][2000];
  double A18[2000][2000][2000][2000];
  double A121[2000][2000][2000][2000];
  double A88[2000][2000][2000][2000];
  double A21[2000][2000][2000][2000];
  double A19[2000][2000][2000][2000];
  double A10[2000][2000][2000][2000];
  double A153[2000][2000][2000][2000];
  double A114[2000][2000][2000][2000];
  double A318[2000][2000][2000][2000];
  double A205[2000][2000][2000][2000];
  double A126[2000][2000][2000][2000];
  double A28[2000][2000][2000][2000];
  double A54[2000][2000][2000][2000];
  double A82[2000][2000][2000][2000];
  double A242[2000][2000][2000][2000];
  double A25[2000][2000][2000][2000];
  double A98[2000][2000][2000][2000];
  double A226[2000][2000][2000][2000];
  double A59[2000][2000][2000][2000];
  double A254[2000][2000][2000][2000];
  double A26[2000][2000][2000][2000];
  double A8[2000][2000][2000][2000];
  double A235[2000][2000][2000][2000];
  double A69[2000][2000][2000][2000];
  double A58[2000][2000][2000][2000];
  double A124[2000][2000][2000][2000];
  double A198[2000][2000][2000][2000];
  double A3[2000][2000][2000][2000];
  double A5[2000][2000][2000][2000];
  double A105[2000][2000][2000][2000];
  double A169[2000][2000][2000][2000];
  double A113[2000][2000][2000][2000];
  double A188[2000][2000][2000];
  double A9[2000][2000][2000];
  double A173[2000][2000][2000][2000];
  double A247[2000][2000][2000][2000];
  double A77[2000][2000][2000][2000];
  double A151[2000][2000][2000][2000];
  double A230[2000][2000][2000][2000];
  double A194[2000][2000][2000][2000];
  double A72[2000][2000][2000][2000];
  double A251[2000][2000][2000][2000];
  double A14[2000][2000][2000][2000];
  double A237[2000][2000][2000][2000];
  double A89[2000][2000][2000][2000];
  double A289[2000][2000][2000];
  double A101[2000][2000][2000][2000];
  double A75[2000][2000][2000][2000];
  double A24[2000][2000][2000][2000];
  double A249[2000][2000][2000][2000];
  double A15[2000][2000][2000][2000];
  double A207[2000][2000][2000][2000];
  double A294[2000][2000][2000][2000];
  double A2[2000][2000][2000][2000];
  double A74[2000][2000][2000][2000];
  double A60[2000][2000][2000][2000];
  double A46[2000][2000][2000][2000];
  double A305[2000][2000][2000];
  double A30[2000][2000][2000][2000];
  double A99[2000][2000][2000][2000];
  double A57[2000][2000][2000][2000];
  double A148[2000][2000][2000][2000];
  double A209[2000][2000][2000][2000];
  double A128[2000][2000][2000][2000];
  double A160[2000][2000][2000][2000];
  double A70[2000][2000][2000][2000];
  double A223[2000][2000][2000][2000];
  double A176[2000][2000][2000][2000];
  double A47[2000][2000][2000][2000];
  double A186[2000][2000][2000][2000];
  double A304[2000][2000][2000][2000];
  double A32[2000][2000][2000][2000];
  double A23[2000][2000][2000][2000];
  double A183[2000][2000][2000][2000];
  double A31[2000][2000][2000][2000];
  double A130[2000][2000][2000];
  double A102[2000][2000][2000][2000];
  double A34[2000][2000][2000][2000];
  double A97[2000][2000][2000][2000];
  double A56[2000][2000][2000][2000];
  double A50[2000][2000][2000][2000];
  double A55[2000][2000][2000][2000];
  double A141[2000][2000][2000][2000];
  double A288[2000][2000][2000][2000];
  double A279[2000][2000][2000][2000];
  double A255[2000][2000][2000][2000];
  double A262[2000][2000][2000][2000];
  double A192[2000][2000][2000][2000];
  double A38[2000][2000][2000][2000];
  double A95[2000][2000][2000][2000];
  double A45[2000][2000][2000][2000];
  double A218[2000][2000][2000][2000];
  double A246[2000][2000][2000];
  double A62[2000][2000][2000][2000];
  double A103[2000][2000][2000][2000];
  double A41[2000][2000][2000][2000];
  double A139[2000][2000][2000][2000];
  double A48[2000][2000][2000][2000];
  double A36[2000][2000][2000][2000];
  double A281[2000][2000][2000][2000];
  double A51[2000][2000][2000][2000];
  double A122[2000][2000][2000][2000];
  double A53[2000][2000][2000][2000];
  double A79[2000][2000][2000][2000];
  double A265[2000][2000][2000][2000];
  double A165[2000][2000][2000][2000];
  double A123[2000][2000][2000][2000];
  double A1[2000][2000][2000][2000];
  double A64[2000][2000][2000][2000];
  double A68[2000][2000][2000][2000];
  double A131[2000][2000][2000][2000];
  double A261[2000][2000][2000][2000];
  double A109[2000][2000][2000][2000];
  double A127[2000][2000][2000][2000];
  double A134[2000][2000][2000][2000];
  double A168[2000][2000][2000][2000];
  double A137[2000][2000][2000][2000];
  double A142[2000][2000][2000][2000];
  double A140[2000][2000][2000][2000];
  double A143[2000][2000][2000][2000];
  double A115[2000][2000][2000][2000];
  double A233[2000][2000][2000][2000];
  double A144[2000][2000][2000][2000];
  double A110[2000][2000][2000][2000];
  double A146[2000][2000][2000][2000];
  double A276[2000][2000][2000][2000];
  double A147[2000][2000][2000][2000];
  double A259[2000][2000][2000][2000];
  double A66[2000][2000][2000][2000];
  double A149[2000][2000][2000][2000];
  double A92[2000][2000][2000][2000];
  double A244[2000][2000][2000][2000];
  double A150[2000][2000][2000][2000];
  double A4[2000][2000][2000][2000];
  double A152[2000][2000][2000][2000];
  double A243[2000][2000][2000][2000];
  double A154[2000][2000][2000];
  double A155[2000][2000][2000][2000];
  double A13[2000][2000][2000][2000];
  double A138[2000][2000][2000][2000];
  double A157[2000][2000][2000][2000];
  double A307[2000][2000][2000][2000];
  double A158[2000][2000][2000][2000];
  double A159[2000][2000][2000][2000];
  double A308[2000][2000][2000][2000];
  double A80[2000][2000][2000][2000];
  double A260[2000][2000][2000][2000];
  double A161[2000][2000][2000][2000];
  double A162[2000][2000][2000][2000];
  double A323[2000][2000];
  double A118[2000][2000][2000][2000];
  double A163[2000][2000][2000][2000];
  double A196[2000][2000][2000][2000];
  double A278[2000][2000][2000][2000];
  double A12[2000][2000][2000][2000];
  double A167[2000][2000][2000][2000];
  double A6[2000][2000][2000][2000];
  double A170[2000][2000][2000];
  double A171[2000][2000][2000][2000];
  double A135[2000][2000][2000][2000];
  double A133[2000][2000][2000][2000];
  double A44[2000][2000][2000][2000];
  double A11[2000][2000][2000][2000];
  double A172[2000][2000][2000][2000];
  double A236[2000][2000][2000][2000];
  double A177[2000][2000][2000][2000];
  double A287[2000][2000][2000][2000];
  double A178[2000][2000][2000][2000];
  double A181[2000][2000][2000][2000];
  double A292[2000][2000][2000][2000];
  double A180[2000][2000][2000][2000];
  double A179[2000][2000][2000][2000];
  double A182[2000][2000][2000][2000];
  double A61[2000][2000][2000][2000];
  double A67[2000][2000][2000][2000];
  double A200[2000][2000][2000][2000];
  double A184[2000][2000][2000][2000];
  double A206[2000][2000][2000][2000];
  double A164[2000][2000][2000][2000];
  double A187[2000][2000][2000][2000];
  double A185[2000][2000][2000][2000];
  double A107[2000][2000][2000][2000];
  double A190[2000][2000][2000][2000];
  double A197[2000][2000][2000][2000];
  double A17[2000][2000][2000][2000];
  double A212[2000][2000][2000];
  double A202[2000][2000][2000][2000];
  double A29[2000][2000][2000];
  double A203[2000][2000][2000][2000];
  double A7[2000][2000][2000][2000];
  double A208[2000][2000][2000][2000];
  double A191[2000][2000][2000][2000];
  double A211[2000][2000][2000][2000];
  double A224[2000][2000][2000][2000];
  double A213[2000][2000][2000][2000];
  double A20[2000][2000][2000][2000];
  double A35[2000][2000][2000][2000];
  double A215[2000][2000][2000][2000];
  double A214[2000][2000][2000][2000];
  double A231[2000][2000][2000][2000];
  double A219[2000][2000][2000][2000];
  double A220[2000][2000][2000][2000];
  double A285[2000][2000][2000][2000];
  double A27[2000][2000][2000][2000];
  double A225[2000][2000][2000][2000];
  double A166[2000][2000][2000][2000];
  double A228[2000][2000][2000];
  double A229[2000][2000][2000][2000];
  double A248[2000][2000][2000][2000];
  double A232[2000][2000][2000][2000];
  double A290[2000][2000][2000][2000];
  double A195[2000][2000][2000][2000];
  double A199[2000][2000][2000][2000];
  double A239[2000][2000][2000][2000];
  double A240[2000][2000][2000][2000];
  double A241[2000][2000][2000][2000];
  double A245[2000][2000][2000][2000];
  double A52[2000][2000][2000];
  double A250[2000][2000][2000][2000];
  double A217[2000][2000][2000][2000];
  double A221[2000][2000][2000][2000];
  double A253[2000][2000][2000][2000];
  double A100[2000][2000][2000][2000];
  double A258[2000][2000][2000][2000];
  double A256[2000][2000][2000][2000];

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
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A3[c2][c4][c6][c8] = A3[c2][c4][c6][c8] + A1[c2][c10][2*(c6)+c12][2*(c8)+c14] + A4[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A5[c2][c4][c6][c8] = A3[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A6[c2][c4][c6][c8] = A5[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A7[c2][c4][c6][c8] = A6[c2][c4][c6][c8] + A5[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A8[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=31;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A2[c2][c8][c4][c6] = A2[c2][c8][c4][c6] + A8[c2][c8][c4+c10][c6+c12] + A9[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A10[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A7[c2][c4][c6][c8] = A10[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A11[c2][c4][c6][c8] = A7[c2][c4][c6][c8] + A10[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A12[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c10=0;c10<=111;c10++) {
        for (c12=0;c12<=111;c12++) {
          A12[c2][c4][0][0] = A12[c2][c4][0][0] + A11[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A13[c2][c4][0][0] = A12[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      A14[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      for (c10=0;c10<=31;c10++) {
        A14[c2][c4][0][0] = A14[c2][c4][0][0] + A13[c2][c10][0+0][0+0] + A15[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      A16[c2][c4][0][0] = A14[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      A17[c2][c4][0][0] = A16[c2][c4][0][0] + A14[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A18[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c10=0;c10<=7;c10++) {
        A18[c2][c4][0][0] = A18[c2][c4][0][0] + A17[c2][c10][0+0][0+0] + A19[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A13[c2][c4][0][0] = A18[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A7[c2][c4][c6][c8] = A13[c2][c4][0][0] + A11[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A20[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=31;c10++) {
            A20[c2][c4][c6][c8] = A20[c2][c4][c6][c8] + A7[c2][c10][c6+0][c8+0] + A21[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A22[c2][c4][c6][c8] = A20[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A23[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=15;c10++) {
            A23[c2][c4][c6][c8] = A23[c2][c4][c6][c8] + A22[c2][c10][c6+0][c8+0] + A24[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A25[c2][c4][c6][c8] = A23[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A26[c2][c4][c6][c8] = A25[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A23[c2][c4][c6][c8] = A26[c2][c4][c6][c8] + A25[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A27[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A28[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=55;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=95;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A28[c2][c8][c4][c6] = A28[c2][c8][c4][c6] + A27[c2][c8][2*(c4)+c10][2*(c6)+c12] + A29[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A30[c2][c4][c6][c8] = A28[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A28[c2][c4][c6][c8] = A30[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A31[c2][c4][c6][c8] = A28[c2][c4][c6][c8] + A30[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A32[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c10=0;c10<=55;c10++) {
        for (c12=0;c12<=55;c12++) {
          A32[c2][c4][0][0] = A32[c2][c4][0][0] + A31[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A33[c2][c4][0][0] = A32[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=3;c4++) {
      A34[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=3;c4++) {
      for (c10=0;c10<=95;c10++) {
        A34[c2][c4][0][0] = A34[c2][c4][0][0] + A33[c2][c10][0+0][0+0] + A35[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=3;c4++) {
      A36[c2][c4][0][0] = A34[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=3;c4++) {
      A37[c2][c4][0][0] = A36[c2][c4][0][0] + A34[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A38[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c10=0;c10<=3;c10++) {
        A38[c2][c4][0][0] = A38[c2][c4][0][0] + A37[c2][c10][0+0][0+0] + A39[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A33[c2][c4][0][0] = A38[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A28[c2][c4][c6][c8] = A33[c2][c4][0][0] + A31[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A40[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=95;c10++) {
            A41[c2][c4][c6][c8] = A41[c2][c4][c6][c8] + A28[c2][c10][c6+0][c8+0] + A42[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A43[c2][c4][c6][c8] = A41[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A44[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=23;c10++) {
            A45[c2][c4][c6][c8] = A45[c2][c4][c6][c8] + A43[c2][c10][c6+0][c8+0] + A46[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A47[c2][c4][c6][c8] = A45[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A48[c2][c4][c6][c8] = A47[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A49[c2][c4][c6][c8] = A48[c2][c4][c6][c8] + A47[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A50[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=55;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=143;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A51[c2][c8][c4][c6] = A51[c2][c8][c4][c6] + A50[c2][c8][c4+c10][c6+c12] + A52[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A53[c2][c4][c6][c8] = A51[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A49[c2][c4][c6][c8] = A53[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A54[c2][c4][c6][c8] = A49[c2][c4][c6][c8] + A53[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A55[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=55;c10++) {
        for (c12=0;c12<=55;c12++) {
          A56[c2][c4][0][0] = A56[c2][c4][0][0] + A54[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A57[c2][c4][0][0] = A56[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      A58[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      for (c10=0;c10<=143;c10++) {
        A59[c2][c4][0][0] = A59[c2][c4][0][0] + A57[c2][c10][0+0][0+0] + A60[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      A61[c2][c4][0][0] = A59[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      A62[c2][c4][0][0] = A61[c2][c4][0][0] + A59[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A63[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=5;c10++) {
        A64[c2][c4][0][0] = A64[c2][c4][0][0] + A62[c2][c10][0+0][0+0] + A65[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A57[c2][c4][0][0] = A64[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A49[c2][c4][c6][c8] = A57[c2][c4][0][0] + A54[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=143;c10++) {
            A40[c2][c4][c6][c8] = A40[c2][c4][c6][c8] + A49[c2][c10][c6+0][c8+0] + A66[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A67[c2][c4][c6][c8] = A40[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A40[c2][c4][c6][c8] = A67[c2][c4][c6][c8] + A43[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=23;c10++) {
            A44[c2][c4][c6][c8] = A44[c2][c4][c6][c8] + A40[c2][c10][c6+0][c8+0] + A68[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A69[c2][c4][c6][c8] = A44[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A70[c2][c4][c6][c8] = A69[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A49[c2][c4][c6][c8] = A70[c2][c4][c6][c8] + A69[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=59;c6++) {
        for (c8=0;c8<=59;c8++) {
          A71[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A72[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=143;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A72[c2][c8][c4][c6] = A72[c2][c8][c4][c6] + A71[c2][c8][2*(c4)+c10][2*(c6)+c12] + A73[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A74[c2][c4][c6][c8] = A72[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A72[c2][c4][c6][c8] = A74[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A75[c2][c4][c6][c8] = A72[c2][c4][c6][c8] + A74[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=27;c10++) {
        for (c12=0;c12<=27;c12++) {
          A55[c2][c4][0][0] = A55[c2][c4][0][0] + A75[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A57[c2][c4][0][0] = A55[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      for (c10=0;c10<=143;c10++) {
        A58[c2][c4][0][0] = A58[c2][c4][0][0] + A57[c2][c10][0+0][0+0] + A76[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      A77[c2][c4][0][0] = A58[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=5;c4++) {
      A62[c2][c4][0][0] = A77[c2][c4][0][0] + A58[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=5;c10++) {
        A63[c2][c4][0][0] = A63[c2][c4][0][0] + A62[c2][c10][0+0][0+0] + A78[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A57[c2][c4][0][0] = A63[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A72[c2][c4][c6][c8] = A57[c2][c4][0][0] + A75[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A79[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=143;c10++) {
            A80[c2][c4][c6][c8] = A80[c2][c4][c6][c8] + A72[c2][c10][c6+0][c8+0] + A81[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A82[c2][c4][c6][c8] = A80[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A83[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=39;c10++) {
            A84[c2][c4][c6][c8] = A84[c2][c4][c6][c8] + A82[c2][c10][c6+0][c8+0] + A85[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A86[c2][c4][c6][c8] = A84[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A87[c2][c4][c6][c8] = A86[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A88[c2][c4][c6][c8] = A87[c2][c4][c6][c8] + A86[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=31;c6++) {
        for (c8=0;c8<=31;c8++) {
          A89[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=239;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A90[c2][c8][c4][c6] = A90[c2][c8][c4][c6] + A89[c2][c8][c4+c10][c6+c12] + A91[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A92[c2][c4][c6][c8] = A90[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A88[c2][c4][c6][c8] = A92[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A93[c2][c4][c6][c8] = A88[c2][c4][c6][c8] + A92[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A94[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=27;c10++) {
        for (c12=0;c12<=27;c12++) {
          A95[c2][c4][0][0] = A95[c2][c4][0][0] + A93[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A96[c2][c4][0][0] = A95[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      A97[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      for (c10=0;c10<=239;c10++) {
        A98[c2][c4][0][0] = A98[c2][c4][0][0] + A96[c2][c10][0+0][0+0] + A99[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      A100[c2][c4][0][0] = A98[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      A101[c2][c4][0][0] = A100[c2][c4][0][0] + A98[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A102[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=9;c10++) {
        A103[c2][c4][0][0] = A103[c2][c4][0][0] + A101[c2][c10][0+0][0+0] + A104[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A96[c2][c4][0][0] = A103[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A88[c2][c4][c6][c8] = A96[c2][c4][0][0] + A93[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=239;c10++) {
            A79[c2][c4][c6][c8] = A79[c2][c4][c6][c8] + A88[c2][c10][c6+0][c8+0] + A105[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A106[c2][c4][c6][c8] = A79[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A79[c2][c4][c6][c8] = A106[c2][c4][c6][c8] + A82[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=39;c10++) {
            A83[c2][c4][c6][c8] = A83[c2][c4][c6][c8] + A79[c2][c10][c6+0][c8+0] + A107[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A108[c2][c4][c6][c8] = A83[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A109[c2][c4][c6][c8] = A108[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A88[c2][c4][c6][c8] = A109[c2][c4][c6][c8] + A108[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A110[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=239;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A111[c2][c8][c4][c6] = A111[c2][c8][c4][c6] + A110[c2][c8][2*(c4)+c10][2*(c6)+c12] + A112[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A113[c2][c4][c6][c8] = A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A113[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A114[c2][c4][c6][c8] = A111[c2][c4][c6][c8] + A113[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A94[c2][c4][0][0] = A94[c2][c4][0][0] + A114[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A96[c2][c4][0][0] = A94[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      for (c10=0;c10<=239;c10++) {
        A97[c2][c4][0][0] = A97[c2][c4][0][0] + A96[c2][c10][0+0][0+0] + A115[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      A116[c2][c4][0][0] = A97[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=9;c4++) {
      A101[c2][c4][0][0] = A116[c2][c4][0][0] + A97[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=9;c10++) {
        A102[c2][c4][0][0] = A102[c2][c4][0][0] + A101[c2][c10][0+0][0+0] + A117[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A96[c2][c4][0][0] = A102[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A96[c2][c4][0][0] + A114[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A118[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=239;c10++) {
            A119[c2][c4][c6][c8] = A119[c2][c4][c6][c8] + A111[c2][c10][c6+0][c8+0] + A120[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A121[c2][c4][c6][c8] = A119[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A122[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=79;c10++) {
            A123[c2][c4][c6][c8] = A123[c2][c4][c6][c8] + A121[c2][c10][c6+0][c8+0] + A124[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A125[c2][c4][c6][c8] = A123[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A126[c2][c4][c6][c8] = A125[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A126[c2][c4][c6][c8] + A125[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A128[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=479;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A129[c2][c8][c4][c6] = A129[c2][c8][c4][c6] + A128[c2][c8][c4+c10][c6+c12] + A130[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A131[c2][c4][c6][c8] = A129[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A131[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A132[c2][c4][c6][c8] = A127[c2][c4][c6][c8] + A131[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A133[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A134[c2][c4][0][0] = A134[c2][c4][0][0] + A132[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A134[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A136[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      for (c10=0;c10<=479;c10++) {
        A137[c2][c4][0][0] = A137[c2][c4][0][0] + A135[c2][c10][0+0][0+0] + A138[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A139[c2][c4][0][0] = A137[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A140[c2][c4][0][0] = A139[c2][c4][0][0] + A137[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A141[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=19;c10++) {
        A142[c2][c4][0][0] = A142[c2][c4][0][0] + A140[c2][c10][0+0][0+0] + A143[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A142[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A135[c2][c4][0][0] + A132[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=479;c10++) {
            A144[c2][c4][c6][c8] = A144[c2][c4][c6][c8] + A127[c2][c10][c6+0][c8+0] + A145[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A146[c2][c4][c6][c8] = A144[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A147[c2][c4][c6][c8] = A146[c2][c4][c6][c8] + A121[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=79;c10++) {
            A148[c2][c4][c6][c8] = A148[c2][c4][c6][c8] + A147[c2][c10][c6+0][c8+0] + A149[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] = A148[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A151[c2][c4][c6][c8] = A150[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A151[c2][c4][c6][c8] + A150[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A152[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=479;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A153[c2][c8][c4][c6] = A153[c2][c8][c4][c6] + A152[c2][c8][c4+c10][c6+c12] + A154[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A153[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A156[c2][c4][c6][c8] = A127[c2][c4][c6][c8] + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A157[c2][c4][0][0] = A157[c2][c4][0][0] + A156[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A157[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      for (c10=0;c10<=479;c10++) {
        A158[c2][c4][0][0] = A158[c2][c4][0][0] + A135[c2][c10][0+0][0+0] + A159[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A160[c2][c4][0][0] = A158[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A140[c2][c4][0][0] = A160[c2][c4][0][0] + A158[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=19;c10++) {
        A161[c2][c4][0][0] = A161[c2][c4][0][0] + A140[c2][c10][0+0][0+0] + A162[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A161[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A135[c2][c4][0][0] + A156[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=479;c10++) {
            A118[c2][c4][c6][c8] = A118[c2][c4][c6][c8] + A127[c2][c10][c6+0][c8+0] + A163[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A164[c2][c4][c6][c8] = A118[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=79;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A118[c2][c4][c6][c8] = A164[c2][c4][c6][c8] + A147[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=79;c10++) {
            A165[c2][c4][c6][c8] = A165[c2][c4][c6][c8] + A118[c2][c10][c6+0][c8+0] + A166[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A167[c2][c4][c6][c8] = A165[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A168[c2][c4][c6][c8] = A167[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A168[c2][c4][c6][c8] + A167[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A169[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=479;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A122[c2][c8][c4][c6] = A122[c2][c8][c4][c6] + A169[c2][c8][c4+c10][c6+c12] + A170[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A171[c2][c4][c6][c8] = A122[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A171[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A172[c2][c4][c6][c8] = A127[c2][c4][c6][c8] + A171[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A133[c2][c4][0][0] = A133[c2][c4][0][0] + A172[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A133[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      for (c10=0;c10<=479;c10++) {
        A136[c2][c4][0][0] = A136[c2][c4][0][0] + A135[c2][c10][0+0][0+0] + A173[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A174[c2][c4][0][0] = A136[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=19;c4++) {
      A140[c2][c4][0][0] = A174[c2][c4][0][0] + A136[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c10=0;c10<=19;c10++) {
        A141[c2][c4][0][0] = A141[c2][c4][0][0] + A140[c2][c10][0+0][0+0] + A175[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      A135[c2][c4][0][0] = A141[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=479;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A127[c2][c4][c6][c8] = A135[c2][c4][0][0] + A172[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A176[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=479;c10++) {
            A177[c2][c4][c6][c8] = A177[c2][c4][c6][c8] + A127[c2][c10][c6+0][c8+0] + A178[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A179[c2][c4][c6][c8] = A177[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=111;c10++) {
            A181[c2][c4][c6][c8] = A181[c2][c4][c6][c8] + A179[c2][c10][c6+0][c8+0] + A182[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A183[c2][c4][c6][c8] = A181[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A184[c2][c4][c6][c8] = A183[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A184[c2][c4][c6][c8] + A183[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A186[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=671;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A187[c2][c8][c4][c6] = A187[c2][c8][c4][c6] + A186[c2][c8][c4+c10][c6+c12] + A188[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A189[c2][c4][c6][c8] = A187[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A189[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A190[c2][c4][c6][c8] = A185[c2][c4][c6][c8] + A189[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A191[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A192[c2][c4][0][0] = A192[c2][c4][0][0] + A190[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A192[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A194[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c10=0;c10<=671;c10++) {
        A195[c2][c4][0][0] = A195[c2][c4][0][0] + A193[c2][c10][0+0][0+0] + A196[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A197[c2][c4][0][0] = A195[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A198[c2][c4][0][0] = A197[c2][c4][0][0] + A195[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A199[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=27;c10++) {
        A200[c2][c4][0][0] = A200[c2][c4][0][0] + A198[c2][c10][0+0][0+0] + A201[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A200[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A193[c2][c4][0][0] + A190[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=671;c10++) {
            A202[c2][c4][c6][c8] = A202[c2][c4][c6][c8] + A185[c2][c10][c6+0][c8+0] + A203[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A204[c2][c4][c6][c8] = A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A205[c2][c4][c6][c8] = A204[c2][c4][c6][c8] + A179[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=111;c10++) {
            A206[c2][c4][c6][c8] = A206[c2][c4][c6][c8] + A205[c2][c10][c6+0][c8+0] + A207[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A208[c2][c4][c6][c8] = A206[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A209[c2][c4][c6][c8] = A208[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A209[c2][c4][c6][c8] + A208[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A210[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=671;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A211[c2][c8][c4][c6] = A211[c2][c8][c4][c6] + A210[c2][c8][c4+c10][c6+c12] + A212[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A213[c2][c4][c6][c8] = A211[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A213[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A214[c2][c4][c6][c8] = A185[c2][c4][c6][c8] + A213[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A215[c2][c4][0][0] = A215[c2][c4][0][0] + A214[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A215[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c10=0;c10<=671;c10++) {
        A216[c2][c4][0][0] = A216[c2][c4][0][0] + A193[c2][c10][0+0][0+0] + A217[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A218[c2][c4][0][0] = A216[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A198[c2][c4][0][0] = A218[c2][c4][0][0] + A216[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=27;c10++) {
        A219[c2][c4][0][0] = A219[c2][c4][0][0] + A198[c2][c10][0+0][0+0] + A220[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A219[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A193[c2][c4][0][0] + A214[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=671;c10++) {
            A176[c2][c4][c6][c8] = A176[c2][c4][c6][c8] + A185[c2][c10][c6+0][c8+0] + A221[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A222[c2][c4][c6][c8] = A176[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=111;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A176[c2][c4][c6][c8] = A222[c2][c4][c6][c8] + A205[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=111;c10++) {
            A180[c2][c4][c6][c8] = A180[c2][c4][c6][c8] + A176[c2][c10][c6+0][c8+0] + A223[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A224[c2][c4][c6][c8] = A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A225[c2][c4][c6][c8] = A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A185[c2][c4][c6][c8] = A225[c2][c4][c6][c8] + A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A226[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A227[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=671;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A227[c2][c8][c4][c6] = A227[c2][c8][c4][c6] + A226[c2][c8][2*(c4)+c10][2*(c6)+c12] + A228[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A229[c2][c4][c6][c8] = A227[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A227[c2][c4][c6][c8] = A229[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A230[c2][c4][c6][c8] = A227[c2][c4][c6][c8] + A229[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A191[c2][c4][0][0] = A191[c2][c4][0][0] + A230[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A191[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c10=0;c10<=671;c10++) {
        A194[c2][c4][0][0] = A194[c2][c4][0][0] + A193[c2][c10][0+0][0+0] + A231[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A232[c2][c4][0][0] = A194[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      A198[c2][c4][0][0] = A232[c2][c4][0][0] + A194[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c10=0;c10<=27;c10++) {
        A199[c2][c4][0][0] = A199[c2][c4][0][0] + A198[c2][c10][0+0][0+0] + A233[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      A193[c2][c4][0][0] = A199[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=671;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A227[c2][c4][c6][c8] = A193[c2][c4][0][0] + A230[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A234[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=671;c10++) {
            A235[c2][c4][c6][c8] = A235[c2][c4][c6][c8] + A227[c2][c10][c6+0][c8+0] + A236[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A237[c2][c4][c6][c8] = A235[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A238[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=191;c10++) {
            A239[c2][c4][c6][c8] = A239[c2][c4][c6][c8] + A237[c2][c10][c6+0][c8+0] + A240[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A241[c2][c4][c6][c8] = A239[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A242[c2][c4][c6][c8] = A241[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A242[c2][c4][c6][c8] + A241[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=10;c6++) {
        for (c8=0;c8<=10;c8++) {
          A244[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=1151;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A245[c2][c8][c4][c6] = A245[c2][c8][c4][c6] + A244[c2][c8][c4+c10][c6+c12] + A246[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A247[c2][c4][c6][c8] = A245[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A247[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A248[c2][c4][c6][c8] = A243[c2][c4][c6][c8] + A247[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A249[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A250[c2][c4][0][0] = A250[c2][c4][0][0] + A248[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A250[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A252[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c10=0;c10<=1151;c10++) {
        A253[c2][c4][0][0] = A253[c2][c4][0][0] + A251[c2][c10][0+0][0+0] + A254[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A255[c2][c4][0][0] = A253[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A256[c2][c4][0][0] = A255[c2][c4][0][0] + A253[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A257[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=47;c10++) {
        A258[c2][c4][0][0] = A258[c2][c4][0][0] + A256[c2][c10][0+0][0+0] + A259[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A258[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A251[c2][c4][0][0] + A248[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1151;c10++) {
            A260[c2][c4][c6][c8] = A260[c2][c4][c6][c8] + A243[c2][c10][c6+0][c8+0] + A261[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A262[c2][c4][c6][c8] = A260[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A263[c2][c4][c6][c8] = A262[c2][c4][c6][c8] + A237[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=191;c10++) {
            A264[c2][c4][c6][c8] = A264[c2][c4][c6][c8] + A263[c2][c10][c6+0][c8+0] + A265[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A266[c2][c4][c6][c8] = A264[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A267[c2][c4][c6][c8] = A266[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A267[c2][c4][c6][c8] + A266[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=10;c6++) {
        for (c8=0;c8<=10;c8++) {
          A268[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=1151;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A269[c2][c8][c4][c6] = A269[c2][c8][c4][c6] + A268[c2][c8][c4+c10][c6+c12] + A270[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A271[c2][c4][c6][c8] = A269[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A271[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A272[c2][c4][c6][c8] = A243[c2][c4][c6][c8] + A271[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A273[c2][c4][0][0] = A273[c2][c4][0][0] + A272[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A273[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c10=0;c10<=1151;c10++) {
        A274[c2][c4][0][0] = A274[c2][c4][0][0] + A251[c2][c10][0+0][0+0] + A275[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A276[c2][c4][0][0] = A274[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A256[c2][c4][0][0] = A276[c2][c4][0][0] + A274[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=47;c10++) {
        A277[c2][c4][0][0] = A277[c2][c4][0][0] + A256[c2][c10][0+0][0+0] + A278[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A277[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A251[c2][c4][0][0] + A272[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1151;c10++) {
            A279[c2][c4][c6][c8] = A279[c2][c4][c6][c8] + A243[c2][c10][c6+0][c8+0] + A280[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A281[c2][c4][c6][c8] = A279[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A282[c2][c4][c6][c8] = A281[c2][c4][c6][c8] + A263[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=191;c10++) {
            A283[c2][c4][c6][c8] = A283[c2][c4][c6][c8] + A282[c2][c10][c6+0][c8+0] + A284[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A285[c2][c4][c6][c8] = A283[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A286[c2][c4][c6][c8] = A285[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A286[c2][c4][c6][c8] + A285[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=10;c6++) {
        for (c8=0;c8<=10;c8++) {
          A287[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=1151;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A288[c2][c8][c4][c6] = A288[c2][c8][c4][c6] + A287[c2][c8][c4+c10][c6+c12] + A289[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A290[c2][c4][c6][c8] = A288[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A290[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A291[c2][c4][c6][c8] = A243[c2][c4][c6][c8] + A290[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A292[c2][c4][0][0] = A292[c2][c4][0][0] + A291[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A292[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c10=0;c10<=1151;c10++) {
        A293[c2][c4][0][0] = A293[c2][c4][0][0] + A251[c2][c10][0+0][0+0] + A294[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A295[c2][c4][0][0] = A293[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A256[c2][c4][0][0] = A295[c2][c4][0][0] + A293[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=47;c10++) {
        A296[c2][c4][0][0] = A296[c2][c4][0][0] + A256[c2][c10][0+0][0+0] + A297[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A296[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A251[c2][c4][0][0] + A291[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1151;c10++) {
            A234[c2][c4][c6][c8] = A234[c2][c4][c6][c8] + A243[c2][c10][c6+0][c8+0] + A298[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A299[c2][c4][c6][c8] = A234[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A263[c2][c4][c6][c8] = A299[c2][c4][c6][c8] + A282[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=191;c10++) {
            A300[c2][c4][c6][c8] = A300[c2][c4][c6][c8] + A263[c2][c10][c6+0][c8+0] + A301[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A302[c2][c4][c6][c8] = A300[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A303[c2][c4][c6][c8] = A302[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A303[c2][c4][c6][c8] + A302[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A304[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=1151;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A238[c2][c8][c4][c6] = A238[c2][c8][c4][c6] + A304[c2][c8][c4+c10][c6+c12] + A305[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A306[c2][c4][c6][c8] = A238[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A306[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A307[c2][c4][c6][c8] = A243[c2][c4][c6][c8] + A306[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A249[c2][c4][0][0] = A249[c2][c4][0][0] + A307[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A249[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c10=0;c10<=1151;c10++) {
        A252[c2][c4][0][0] = A252[c2][c4][0][0] + A251[c2][c10][0+0][0+0] + A308[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A309[c2][c4][0][0] = A252[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      A256[c2][c4][0][0] = A309[c2][c4][0][0] + A252[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c10=0;c10<=47;c10++) {
        A257[c2][c4][0][0] = A257[c2][c4][0][0] + A256[c2][c10][0+0][0+0] + A310[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      A251[c2][c4][0][0] = A257[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1151;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A251[c2][c4][0][0] + A307[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A311[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=1151;c10++) {
            A311[c2][c4][c6][c8] = A311[c2][c4][c6][c8] + A243[c2][c10][c6+0][c8+0] + A312[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A313[c2][c4][c6][c8] = A311[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A314[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=319;c10++) {
            A314[c2][c4][c6][c8] = A314[c2][c4][c6][c8] + A313[c2][c10][c6+0][c8+0] + A315[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A316[c2][c4][c6][c8] = A314[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A317[c2][c4][c6][c8] = A316[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A314[c2][c4][c6][c8] = A317[c2][c4][c6][c8] + A316[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A318[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A318[c2][c4][0][0] = A318[c2][c4][0][0] + A314[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A319[c2][c4][0][0] = A318[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A321[c4][c2] = A320[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A322[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=1279;c6++) {
        A322[c2][c4] = A322[c2][c4] + A323[c2][c6] + A321[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A324[c2][c4] = A322[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
