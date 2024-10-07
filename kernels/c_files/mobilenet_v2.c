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
#define S5() {total++;}
#define S6() {total++;}
#define S7(i,j,k,l) {total++; printf("S7 %d %d %d %d\n",i,j,k,l);}
#define S8() {total++;}
#define S9() {total++;}
#define S10(i,j,k,l) {total++; printf("S10 %d %d %d %d\n",i,j,k,l);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l,m,n) {total++; printf("S12 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S13(i,j,k,l) {total++; printf("S13 %d %d %d %d\n",i,j,k,l);}
#define S14(i,j,k,l) {total++; printf("S14 %d %d %d %d\n",i,j,k,l);}
#define S15(i,j,k,l) {total++; printf("S15 %d %d %d %d\n",i,j,k,l);}
#define S16(i,j,k,l) {total++; printf("S16 %d %d %d %d\n",i,j,k,l);}
#define S17(i,j,k,l,m,n,o) {total++; printf("S17 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S18(i,j,k,l) {total++; printf("S18 %d %d %d %d\n",i,j,k,l);}
#define S19(i,j,k,l) {total++; printf("S19 %d %d %d %d\n",i,j,k,l);}
#define S20(i,j,k,l,m,n,o) {total++; printf("S20 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S21(i,j,k,l) {total++; printf("S21 %d %d %d %d\n",i,j,k,l);}
#define S22(i,j,k,l) {total++; printf("S22 %d %d %d %d\n",i,j,k,l);}
#define S23(i,j,k,l) {total++; printf("S23 %d %d %d %d\n",i,j,k,l);}
#define S24(i,j,k,l) {total++; printf("S24 %d %d %d %d\n",i,j,k,l);}
#define S25(i,j,k,l) {total++; printf("S25 %d %d %d %d\n",i,j,k,l);}
#define S26(i,j,k,l,m,n) {total++; printf("S26 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S27(i,j,k,l) {total++; printf("S27 %d %d %d %d\n",i,j,k,l);}
#define S28(i,j,k,l) {total++; printf("S28 %d %d %d %d\n",i,j,k,l);}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30(i,j,k,l) {total++; printf("S30 %d %d %d %d\n",i,j,k,l);}
#define S31(i,j,k,l,m,n,o) {total++; printf("S31 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l) {total++; printf("S33 %d %d %d %d\n",i,j,k,l);}
#define S34(i,j,k,l,m,n,o) {total++; printf("S34 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l) {total++; printf("S36 %d %d %d %d\n",i,j,k,l);}
#define S37(i,j,k,l) {total++; printf("S37 %d %d %d %d\n",i,j,k,l);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l,m,n) {total++; printf("S39 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l) {total++; printf("S41 %d %d %d %d\n",i,j,k,l);}
#define S42(i,j,k,l) {total++; printf("S42 %d %d %d %d\n",i,j,k,l);}
#define S43(i,j,k,l,m,n,o) {total++; printf("S43 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l) {total++; printf("S45 %d %d %d %d\n",i,j,k,l);}
#define S46(i,j,k,l,m,n,o) {total++; printf("S46 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S47(i,j,k,l) {total++; printf("S47 %d %d %d %d\n",i,j,k,l);}
#define S48(i,j,k,l) {total++; printf("S48 %d %d %d %d\n",i,j,k,l);}
#define S49(i,j,k,l) {total++; printf("S49 %d %d %d %d\n",i,j,k,l);}
#define S50(i,j,k,l) {total++; printf("S50 %d %d %d %d\n",i,j,k,l);}
#define S51(i,j,k,l) {total++; printf("S51 %d %d %d %d\n",i,j,k,l);}
#define S52(i,j,k,l,m,n) {total++; printf("S52 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S53(i,j,k,l) {total++; printf("S53 %d %d %d %d\n",i,j,k,l);}
#define S54(i,j,k,l) {total++; printf("S54 %d %d %d %d\n",i,j,k,l);}
#define S55(i,j,k,l) {total++; printf("S55 %d %d %d %d\n",i,j,k,l);}
#define S56(i,j,k,l) {total++; printf("S56 %d %d %d %d\n",i,j,k,l);}
#define S57(i,j,k,l,m,n,o) {total++; printf("S57 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S58(i,j,k,l) {total++; printf("S58 %d %d %d %d\n",i,j,k,l);}
#define S59(i,j,k,l) {total++; printf("S59 %d %d %d %d\n",i,j,k,l);}
#define S60(i,j,k,l,m,n,o) {total++; printf("S60 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S61(i,j,k,l) {total++; printf("S61 %d %d %d %d\n",i,j,k,l);}
#define S62(i,j,k,l) {total++; printf("S62 %d %d %d %d\n",i,j,k,l);}
#define S63(i,j,k,l) {total++; printf("S63 %d %d %d %d\n",i,j,k,l);}
#define S64(i,j,k,l) {total++; printf("S64 %d %d %d %d\n",i,j,k,l);}
#define S65(i,j,k,l,m,n) {total++; printf("S65 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S66(i,j,k,l) {total++; printf("S66 %d %d %d %d\n",i,j,k,l);}
#define S67(i,j,k,l) {total++; printf("S67 %d %d %d %d\n",i,j,k,l);}
#define S68(i,j,k,l) {total++; printf("S68 %d %d %d %d\n",i,j,k,l);}
#define S69(i,j,k,l,m,n,o) {total++; printf("S69 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S70(i,j,k,l) {total++; printf("S70 %d %d %d %d\n",i,j,k,l);}
#define S71(i,j,k,l) {total++; printf("S71 %d %d %d %d\n",i,j,k,l);}
#define S72(i,j,k,l,m,n,o) {total++; printf("S72 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S73(i,j,k,l) {total++; printf("S73 %d %d %d %d\n",i,j,k,l);}
#define S74(i,j,k,l) {total++; printf("S74 %d %d %d %d\n",i,j,k,l);}
#define S75(i,j,k,l) {total++; printf("S75 %d %d %d %d\n",i,j,k,l);}
#define S76(i,j,k,l) {total++; printf("S76 %d %d %d %d\n",i,j,k,l);}
#define S77(i,j,k,l,m,n) {total++; printf("S77 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S78(i,j,k,l) {total++; printf("S78 %d %d %d %d\n",i,j,k,l);}
#define S79(i,j,k,l) {total++; printf("S79 %d %d %d %d\n",i,j,k,l);}
#define S80(i,j,k,l) {total++; printf("S80 %d %d %d %d\n",i,j,k,l);}
#define S81(i,j,k,l,m,n,o) {total++; printf("S81 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S82(i,j,k,l) {total++; printf("S82 %d %d %d %d\n",i,j,k,l);}
#define S83(i,j,k,l) {total++; printf("S83 %d %d %d %d\n",i,j,k,l);}
#define S84(i,j,k,l,m,n,o) {total++; printf("S84 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S85(i,j,k,l) {total++; printf("S85 %d %d %d %d\n",i,j,k,l);}
#define S86(i,j,k,l) {total++; printf("S86 %d %d %d %d\n",i,j,k,l);}
#define S87(i,j,k,l) {total++; printf("S87 %d %d %d %d\n",i,j,k,l);}
#define S88(i,j,k,l) {total++; printf("S88 %d %d %d %d\n",i,j,k,l);}
#define S89(i,j,k,l) {total++; printf("S89 %d %d %d %d\n",i,j,k,l);}
#define S90(i,j,k,l,m,n) {total++; printf("S90 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S91(i,j,k,l) {total++; printf("S91 %d %d %d %d\n",i,j,k,l);}
#define S92(i,j,k,l) {total++; printf("S92 %d %d %d %d\n",i,j,k,l);}
#define S93(i,j,k,l) {total++; printf("S93 %d %d %d %d\n",i,j,k,l);}
#define S94(i,j,k,l) {total++; printf("S94 %d %d %d %d\n",i,j,k,l);}
#define S95(i,j,k,l,m,n,o) {total++; printf("S95 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S96(i,j,k,l) {total++; printf("S96 %d %d %d %d\n",i,j,k,l);}
#define S97(i,j,k,l) {total++; printf("S97 %d %d %d %d\n",i,j,k,l);}
#define S98(i,j,k,l,m,n,o) {total++; printf("S98 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S99(i,j,k,l) {total++; printf("S99 %d %d %d %d\n",i,j,k,l);}
#define S100(i,j,k,l) {total++; printf("S100 %d %d %d %d\n",i,j,k,l);}
#define S101(i,j,k,l) {total++; printf("S101 %d %d %d %d\n",i,j,k,l);}
#define S102(i,j,k,l) {total++; printf("S102 %d %d %d %d\n",i,j,k,l);}
#define S103(i,j,k,l,m,n) {total++; printf("S103 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S104(i,j,k,l) {total++; printf("S104 %d %d %d %d\n",i,j,k,l);}
#define S105(i,j,k,l) {total++; printf("S105 %d %d %d %d\n",i,j,k,l);}
#define S106(i,j,k,l) {total++; printf("S106 %d %d %d %d\n",i,j,k,l);}
#define S107(i,j,k,l,m,n,o) {total++; printf("S107 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S108(i,j,k,l) {total++; printf("S108 %d %d %d %d\n",i,j,k,l);}
#define S109(i,j,k,l) {total++; printf("S109 %d %d %d %d\n",i,j,k,l);}
#define S110(i,j,k,l,m,n,o) {total++; printf("S110 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S111(i,j,k,l) {total++; printf("S111 %d %d %d %d\n",i,j,k,l);}
#define S112(i,j,k,l) {total++; printf("S112 %d %d %d %d\n",i,j,k,l);}
#define S113(i,j,k,l) {total++; printf("S113 %d %d %d %d\n",i,j,k,l);}
#define S114(i,j,k,l) {total++; printf("S114 %d %d %d %d\n",i,j,k,l);}
#define S115(i,j,k,l,m,n) {total++; printf("S115 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S116(i,j,k,l) {total++; printf("S116 %d %d %d %d\n",i,j,k,l);}
#define S117(i,j,k,l) {total++; printf("S117 %d %d %d %d\n",i,j,k,l);}
#define S118(i,j,k,l) {total++; printf("S118 %d %d %d %d\n",i,j,k,l);}
#define S119(i,j,k,l,m,n,o) {total++; printf("S119 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S120(i,j,k,l) {total++; printf("S120 %d %d %d %d\n",i,j,k,l);}
#define S121(i,j,k,l) {total++; printf("S121 %d %d %d %d\n",i,j,k,l);}
#define S122(i,j,k,l,m,n,o) {total++; printf("S122 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S123(i,j,k,l) {total++; printf("S123 %d %d %d %d\n",i,j,k,l);}
#define S124(i,j,k,l) {total++; printf("S124 %d %d %d %d\n",i,j,k,l);}
#define S125(i,j,k,l) {total++; printf("S125 %d %d %d %d\n",i,j,k,l);}
#define S126(i,j,k,l) {total++; printf("S126 %d %d %d %d\n",i,j,k,l);}
#define S127(i,j,k,l,m,n) {total++; printf("S127 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S128(i,j,k,l) {total++; printf("S128 %d %d %d %d\n",i,j,k,l);}
#define S129(i,j,k,l) {total++; printf("S129 %d %d %d %d\n",i,j,k,l);}
#define S130(i,j,k,l) {total++; printf("S130 %d %d %d %d\n",i,j,k,l);}
#define S131(i,j,k,l,m,n,o) {total++; printf("S131 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S132(i,j,k,l) {total++; printf("S132 %d %d %d %d\n",i,j,k,l);}
#define S133(i,j,k,l) {total++; printf("S133 %d %d %d %d\n",i,j,k,l);}
#define S134(i,j,k,l,m,n,o) {total++; printf("S134 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S135(i,j,k,l) {total++; printf("S135 %d %d %d %d\n",i,j,k,l);}
#define S136(i,j,k,l) {total++; printf("S136 %d %d %d %d\n",i,j,k,l);}
#define S137(i,j,k,l) {total++; printf("S137 %d %d %d %d\n",i,j,k,l);}
#define S138(i,j,k,l) {total++; printf("S138 %d %d %d %d\n",i,j,k,l);}
#define S139(i,j,k,l,m,n) {total++; printf("S139 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S140(i,j,k,l) {total++; printf("S140 %d %d %d %d\n",i,j,k,l);}
#define S141(i,j,k,l) {total++; printf("S141 %d %d %d %d\n",i,j,k,l);}
#define S142(i,j,k,l) {total++; printf("S142 %d %d %d %d\n",i,j,k,l);}
#define S143(i,j,k,l) {total++; printf("S143 %d %d %d %d\n",i,j,k,l);}
#define S144(i,j,k,l,m,n,o) {total++; printf("S144 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S145(i,j,k,l) {total++; printf("S145 %d %d %d %d\n",i,j,k,l);}
#define S146(i,j,k,l) {total++; printf("S146 %d %d %d %d\n",i,j,k,l);}
#define S147(i,j,k,l,m,n,o) {total++; printf("S147 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S148(i,j,k,l) {total++; printf("S148 %d %d %d %d\n",i,j,k,l);}
#define S149(i,j,k,l) {total++; printf("S149 %d %d %d %d\n",i,j,k,l);}
#define S150(i,j,k,l) {total++; printf("S150 %d %d %d %d\n",i,j,k,l);}
#define S151(i,j,k,l) {total++; printf("S151 %d %d %d %d\n",i,j,k,l);}
#define S152(i,j,k,l,m,n) {total++; printf("S152 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S153(i,j,k,l) {total++; printf("S153 %d %d %d %d\n",i,j,k,l);}
#define S154(i,j,k,l) {total++; printf("S154 %d %d %d %d\n",i,j,k,l);}
#define S155(i,j,k,l) {total++; printf("S155 %d %d %d %d\n",i,j,k,l);}
#define S156(i,j,k,l,m,n,o) {total++; printf("S156 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S157(i,j,k,l) {total++; printf("S157 %d %d %d %d\n",i,j,k,l);}
#define S158(i,j,k,l) {total++; printf("S158 %d %d %d %d\n",i,j,k,l);}
#define S159(i,j,k,l,m,n,o) {total++; printf("S159 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S160(i,j,k,l) {total++; printf("S160 %d %d %d %d\n",i,j,k,l);}
#define S161(i,j,k,l) {total++; printf("S161 %d %d %d %d\n",i,j,k,l);}
#define S162(i,j,k,l) {total++; printf("S162 %d %d %d %d\n",i,j,k,l);}
#define S163(i,j,k,l) {total++; printf("S163 %d %d %d %d\n",i,j,k,l);}
#define S164(i,j,k,l,m,n) {total++; printf("S164 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S165(i,j,k,l) {total++; printf("S165 %d %d %d %d\n",i,j,k,l);}
#define S166(i,j,k,l) {total++; printf("S166 %d %d %d %d\n",i,j,k,l);}
#define S167(i,j,k,l) {total++; printf("S167 %d %d %d %d\n",i,j,k,l);}
#define S168(i,j,k,l,m,n,o) {total++; printf("S168 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S169(i,j,k,l) {total++; printf("S169 %d %d %d %d\n",i,j,k,l);}
#define S170(i,j,k,l) {total++; printf("S170 %d %d %d %d\n",i,j,k,l);}
#define S171(i,j,k,l,m,n,o) {total++; printf("S171 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S172(i,j,k,l) {total++; printf("S172 %d %d %d %d\n",i,j,k,l);}
#define S173(i,j,k,l) {total++; printf("S173 %d %d %d %d\n",i,j,k,l);}
#define S174(i,j,k,l) {total++; printf("S174 %d %d %d %d\n",i,j,k,l);}
#define S175(i,j,k,l) {total++; printf("S175 %d %d %d %d\n",i,j,k,l);}
#define S176(i,j,k,l) {total++; printf("S176 %d %d %d %d\n",i,j,k,l);}
#define S177(i,j,k,l,m,n) {total++; printf("S177 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S178(i,j,k,l) {total++; printf("S178 %d %d %d %d\n",i,j,k,l);}
#define S179(i,j,k,l) {total++; printf("S179 %d %d %d %d\n",i,j,k,l);}
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
#define S194(i,j,k,l,m,n,o) {total++; printf("S194 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S195(i,j,k,l) {total++; printf("S195 %d %d %d %d\n",i,j,k,l);}
#define S196(i,j,k,l) {total++; printf("S196 %d %d %d %d\n",i,j,k,l);}
#define S197(i,j,k,l,m,n,o) {total++; printf("S197 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S198(i,j,k,l) {total++; printf("S198 %d %d %d %d\n",i,j,k,l);}
#define S199(i,j,k,l) {total++; printf("S199 %d %d %d %d\n",i,j,k,l);}
#define S200(i,j,k,l) {total++; printf("S200 %d %d %d %d\n",i,j,k,l);}
#define S201(i,j,k,l) {total++; printf("S201 %d %d %d %d\n",i,j,k,l);}
#define S202(i,j,k,l,m,n) {total++; printf("S202 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S203(i,j,k,l) {total++; printf("S203 %d %d %d %d\n",i,j,k,l);}
#define S204(i,j,k,l) {total++; printf("S204 %d %d %d %d\n",i,j,k,l);}
#define S205(i,j,k,l) {total++; printf("S205 %d %d %d %d\n",i,j,k,l);}
#define S206(i,j,k,l,m,n,o) {total++; printf("S206 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S207(i,j,k,l) {total++; printf("S207 %d %d %d %d\n",i,j,k,l);}
#define S208(i,j,k,l) {total++; printf("S208 %d %d %d %d\n",i,j,k,l);}
#define S209(i,j,k,l,m,n,o) {total++; printf("S209 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S210(i,j,k,l) {total++; printf("S210 %d %d %d %d\n",i,j,k,l);}
#define S211(i,j,k,l) {total++; printf("S211 %d %d %d %d\n",i,j,k,l);}
#define S212(i,j,k,l) {total++; printf("S212 %d %d %d %d\n",i,j,k,l);}
#define S213(i,j,k,l) {total++; printf("S213 %d %d %d %d\n",i,j,k,l);}
#define S214(i,j,k,l,m,n) {total++; printf("S214 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S215(i,j,k,l) {total++; printf("S215 %d %d %d %d\n",i,j,k,l);}
#define S216(i,j,k,l) {total++; printf("S216 %d %d %d %d\n",i,j,k,l);}
#define S217(i,j,k,l) {total++; printf("S217 %d %d %d %d\n",i,j,k,l);}
#define S218(i,j,k,l) {total++; printf("S218 %d %d %d %d\n",i,j,k,l);}
#define S219(i,j,k,l,m,n,o) {total++; printf("S219 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S220(i,j,k,l) {total++; printf("S220 %d %d %d %d\n",i,j,k,l);}
#define S221(i,j,k,l) {total++; printf("S221 %d %d %d %d\n",i,j,k,l);}
#define S222(i,j,k,l,m,n,o) {total++; printf("S222 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S223(i,j,k,l) {total++; printf("S223 %d %d %d %d\n",i,j,k,l);}
#define S224(i,j,k,l) {total++; printf("S224 %d %d %d %d\n",i,j,k,l);}
#define S225(i,j,k,l) {total++; printf("S225 %d %d %d %d\n",i,j,k,l);}
#define S226(i,j,k,l) {total++; printf("S226 %d %d %d %d\n",i,j,k,l);}
#define S227(i,j,k,l,m,n) {total++; printf("S227 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S228(i,j,k,l) {total++; printf("S228 %d %d %d %d\n",i,j,k,l);}
#define S229(i,j) {total++; printf("S229 %d %d\n",i,j);}
#define S230(i,j) {total++; printf("S230 %d %d\n",i,j);}
#define S231(i,j,k) {total++; printf("S231 %d %d %d\n",i,j,k);}
#define S232(i,j) {total++; printf("S232 %d %d\n",i,j);}

int main() {
  /* Scattering iterators. */
  int c2, c4, c6, c8, c10, c12, c14;
  /* Original iterators. */
  int i, j, k, l, m, n, o;
  int total=0;
  double A225[2000][2000][2000][2000];
  double A229[2000][2000];
  double A228[2000][2000];
  double A219[2000][2000][2000][2000];
  double A220[2000][2000][2000][2000];
  double A215[2000][2000][2000][2000];
  double A214[2000][2000][2000];
  double A213[2000][2000][2000][2000];
  double A224[2000][2000][2000][2000];
  double A211[2000][2000][2000][2000];
  double A209[2000][2000][2000][2000];
  double A208[2000][2000][2000][2000];
  double A179[2000][2000][2000][2000];
  double A202[2000][2000][2000][2000];
  double A203[2000][2000][2000][2000];
  double A199[2000][2000][2000][2000];
  double A212[2000][2000][2000][2000];
  double A197[2000][2000][2000][2000];
  double A221[2000][2000][2000][2000];
  double A190[2000][2000][2000][2000];
  double A187[2000][2000][2000][2000];
  double A185[2000][2000][2000][2000];
  double A200[2000][2000][2000][2000];
  double A182[2000][2000][2000][2000];
  double A184[2000][2000][2000][2000];
  double A181[2000][2000][2000][2000];
  double A180[2000][2000][2000][2000];
  double A178[2000][2000][2000][2000];
  double A177[2000][2000][2000][2000];
  double A172[2000][2000][2000][2000];
  double A171[2000][2000][2000][2000];
  double A170[2000][2000][2000][2000];
  double A167[2000][2000][2000][2000];
  double A164[2000][2000][2000][2000];
  double A196[2000][2000][2000][2000];
  double A163[2000][2000][2000][2000];
  double A162[2000][2000][2000][2000];
  double A161[2000][2000][2000][2000];
  double A159[2000][2000][2000][2000];
  double A158[2000][2000][2000][2000];
  double A157[2000][2000][2000][2000];
  double A150[2000][2000][2000][2000];
  double A155[2000][2000][2000][2000];
  double A154[2000][2000][2000][2000];
  double A152[2000][2000][2000][2000];
  double A149[2000][2000][2000][2000];
  double A147[2000][2000][2000][2000];
  double A144[2000][2000][2000][2000];
  double A146[2000][2000][2000][2000];
  double A143[2000][2000][2000][2000];
  double A142[2000][2000][2000][2000];
  double A140[2000][2000][2000][2000];
  double A217[2000][2000][2000][2000];
  double A138[2000][2000][2000];
  double A137[2000][2000][2000][2000];
  double A168[2000][2000][2000][2000];
  double A134[2000][2000][2000][2000];
  double A133[2000][2000][2000][2000];
  double A166[2000][2000][2000];
  double A131[2000][2000][2000][2000];
  double A64[2000][2000][2000];
  double A123[2000][2000][2000][2000];
  double A132[2000][2000][2000][2000];
  double A63[2000][2000][2000][2000];
  double A53[2000][2000][2000][2000];
  double A51[2000][2000][2000][2000];
  double A230[2000][2000];
  double A194[2000][2000][2000][2000];
  double A27[2000][2000][2000][2000];
  double A151[2000][2000][2000][2000];
  double A77[2000][2000][2000];
  double A139[2000][2000][2000][2000];
  double A41[2000][2000][2000][2000];
  double A83[2000][2000][2000][2000];
  double A19[2000][2000][2000][2000];
  double A100[2000][2000][2000][2000];
  double A218[2000][2000][2000][2000];
  double A45[2000][2000][2000][2000];
  double A95[2000][2000][2000][2000];
  double A165[2000][2000][2000][2000];
  double A79[2000][2000][2000][2000];
  double A127[2000][2000][2000][2000];
  double A206[2000][2000][2000][2000];
  double A38[2000][2000][2000][2000];
  double A40[2000][2000][2000][2000];
  double A55[2000][2000][2000][2000];
  double A141[2000][2000][2000][2000];
  double A35[2000][2000][2000][2000];
  double A50[2000][2000][2000][2000];
  double A56[2000][2000][2000][2000];
  double A97[2000][2000][2000][2000];
  double A31[2000][2000][2000][2000];
  double A20[2000][2000][2000][2000];
  double A183[2000][2000][2000][2000];
  double A23[2000][2000][2000][2000];
  double A34[2000][2000][2000][2000];
  double A130[2000][2000][2000][2000];
  double A54[2000][2000][2000][2000];
  double A28[2000][2000][2000][2000];
  double A126[2000][2000][2000][2000];
  double A205[2000][2000][2000][2000];
  double A15[2000][2000][2000][2000];
  double A114[2000][2000][2000][2000];
  double A98[2000][2000][2000][2000];
  double A25[2000][2000][2000][2000];
  double A82[2000][2000][2000][2000];
  double A46[2000][2000][2000][2000];
  double A226[2000][2000];
  double A13[2000][2000][2000][2000];
  double A118[2000][2000][2000][2000];
  double A192[2000][2000][2000][2000];
  double A8[2000][2000][2000][2000];
  double A186[2000][2000][2000][2000];
  double A47[2000][2000][2000][2000];
  double A32[2000][2000][2000][2000];
  double A223[2000][2000][2000][2000];
  double A160[2000][2000][2000][2000];
  double A128[2000][2000][2000];
  double A62[2000][2000][2000][2000];
  double A2[2000][2000][2000][2000];
  double A74[2000][2000][2000][2000];
  double A109[2000][2000][2000][2000];
  double ;
  double A14[2000][2000][2000][2000];
  double A72[2000][2000][2000][2000];
  double A188[2000][2000][2000][2000];
  double A113[2000][2000][2000][2000];
  double A11[2000][2000][2000][2000];
  double A48[2000][2000][2000][2000];
  double A36[2000][2000][2000][2000];
  double A44[2000][2000][2000][2000];
  double A33[2000][2000][2000][2000];
  double A122[2000][2000][2000][2000];
  double A52[2000][2000][2000][2000];
  double A169[2000][2000][2000][2000];
  double A4[2000][2000][2000][2000];
  double A105[2000][2000][2000][2000];
  double A5[2000][2000][2000][2000];
  double A3[2000][2000][2000][2000];
  double A198[2000][2000][2000][2000];
  double A195[2000][2000][2000][2000];
  double A58[2000][2000][2000][2000];
  double A69[2000][2000][2000][2000];
  double A17[2000][2000][2000][2000];
  double A153[2000][2000][2000];
  double A10[2000][2000][2000][2000];
  double A21[2000][2000][2000][2000];
  double A88[2000][2000][2000][2000];
  double A121[2000][2000][2000][2000];
  double A29[2000][2000][2000][2000];
  double A12[2000][2000][2000];
  double A18[2000][2000][2000][2000];
  double A49[2000][2000][2000];
  double A135[2000][2000][2000][2000];
  double A117[2000][2000][2000][2000];
  double A193[2000][2000][2000][2000];
  double A1[2000][2000][2000][2000];
  double A120[2000][2000][2000][2000];
  double A176[2000][2000][2000];
  double A37[2000][2000][2000][2000];
  double A22[2000][2000][2000][2000];
  double A207[2000][2000][2000][2000];
  double A24[2000][2000][2000];
  double A66[2000][2000][2000][2000];
  double A75[2000][2000][2000][2000];
  double A89[2000][2000][2000][2000];
  double A43[2000][2000][2000][2000];
  double A145[2000][2000][2000][2000];
  double A112[2000][2000][2000][2000];
  double A26[2000][2000][2000][2000];
  double A60[2000][2000][2000][2000];
  double A148[2000][2000][2000][2000];
  double A92[2000][2000][2000][2000];
  double A57[2000][2000][2000][2000];
  double A99[2000][2000][2000][2000];
  double A30[2000][2000][2000][2000];
  double A65[2000][2000][2000][2000];
  double A189[2000][2000][2000][2000];
  double A174[2000][2000][2000][2000];
  double A129[2000][2000][2000][2000];
  double A67[2000][2000][2000][2000];
  double A210[2000][2000][2000][2000];
  double A201[2000][2000][2000][2000];
  double A68[2000][2000][2000][2000];
  double A61[2000][2000][2000][2000];
  double A73[2000][2000][2000][2000];
  double A39[2000][2000][2000];
  double A76[2000][2000][2000][2000];
  double A156[2000][2000][2000][2000];
  double A111[2000][2000][2000][2000];
  double A115[2000][2000][2000];
  double A175[2000][2000][2000][2000];
  double A78[2000][2000][2000][2000];
  double A80[2000][2000][2000][2000];
  double A81[2000][2000][2000][2000];
  double A173[2000][2000][2000][2000];
  double A84[2000][2000][2000][2000];
  double A86[2000][2000][2000][2000];
  double A204[2000][2000][2000];
  double A101[2000][2000][2000][2000];
  double A216[2000][2000][2000][2000];
  double A85[2000][2000][2000][2000];
  double A87[2000][2000][2000];
  double A91[2000][2000][2000][2000];
  double A191[2000][2000][2000];
  double A16[2000][2000][2000][2000];
  double A96[2000][2000][2000][2000];
  double A104[2000][2000][2000][2000];
  double A93[2000][2000][2000][2000];
  double A70[2000][2000][2000][2000];
  double A102[2000][2000][2000];
  double A103[2000][2000][2000][2000];
  double A222[2000][2000][2000][2000];
  double A106[2000][2000][2000][2000];
  double A94[2000][2000][2000][2000];
  double A136[2000][2000][2000][2000];
  double A107[2000][2000][2000][2000];
  double A108[2000][2000][2000][2000];
  double A110[2000][2000][2000][2000];
  double A42[2000][2000][2000][2000];
  double A59[2000][2000][2000][2000];
  double A116[2000][2000][2000][2000];
  double A71[2000][2000][2000][2000];
  double A124[2000][2000][2000][2000];
  double A119[2000][2000][2000][2000];
  double A125[2000][2000][2000][2000];
  double A227[2000][2000];
  double A90[2000][2000][2000][2000];

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
          A8[c2][c4][c6][c8] = A5[c2][c4][c6][c8] ;
        }
      }
    }
  }
  
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A10[c2][c4][c6][c8] =  + A8[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A11[c2][c4][c6][c8];
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
              A2[c2][c8][c4][c6] = A2[c2][c8][c4][c6] + A11[c2][c8][c4+c10][c6+c12] + A12[c8][c10][c12];
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
          A13[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A14[c2][c4][c6][c8] = A13[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A10[c2][c4][c6][c8] =  + A14[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A15[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=31;c10++) {
            A15[c2][c4][c6][c8] = A15[c2][c4][c6][c8] + A10[c2][c10][c6+0][c8+0] + A16[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A17[c2][c4][c6][c8] = A15[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A18[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=15;c10++) {
            A18[c2][c4][c6][c8] = A18[c2][c4][c6][c8] + A17[c2][c10][c6+0][c8+0] + A19[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A20[c2][c4][c6][c8] = A18[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A21[c2][c4][c6][c8] = A20[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A18[c2][c4][c6][c8] =  + A21[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A22[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A23[c2][c4][c6][c8];
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
              A23[c2][c8][c4][c6] = A23[c2][c8][c4][c6] + A22[c2][c8][2*(c4)+c10][2*(c6)+c12] + A24[c8][c10][c12];
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
          A25[c2][c4][c6][c8] = A23[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A26[c2][c4][c6][c8] = A25[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A23[c2][c4][c6][c8] =  + A26[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A27[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=95;c10++) {
            A28[c2][c4][c6][c8] = A28[c2][c4][c6][c8] + A23[c2][c10][c6+0][c8+0] + A29[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A30[c2][c4][c6][c8] = A28[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A31[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=23;c10++) {
            A32[c2][c4][c6][c8] = A32[c2][c4][c6][c8] + A30[c2][c10][c6+0][c8+0] + A33[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A34[c2][c4][c6][c8] = A32[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A35[c2][c4][c6][c8] = A34[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A36[c2][c4][c6][c8] =  + A35[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A37[c2][c4][c6][c8];
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
              A38[c2][c8][c4][c6] = A38[c2][c8][c4][c6] + A37[c2][c8][c4+c10][c6+c12] + A39[c8][c10][c12];
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
          A40[c2][c4][c6][c8] = A38[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A41[c2][c4][c6][c8] = A40[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A36[c2][c4][c6][c8] =  + A41[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=143;c10++) {
            A27[c2][c4][c6][c8] = A27[c2][c4][c6][c8] + A36[c2][c10][c6+0][c8+0] + A42[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A43[c2][c4][c6][c8] = A27[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A27[c2][c4][c6][c8] = A30[c2][c4][c6][c8] + A43[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=23;c10++) {
            A31[c2][c4][c6][c8] = A31[c2][c4][c6][c8] + A27[c2][c10][c6+0][c8+0] + A44[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A45[c2][c4][c6][c8] = A31[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A46[c2][c4][c6][c8] = A45[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A36[c2][c4][c6][c8] =  + A46[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A47[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A48[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=143;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A48[c2][c8][c4][c6] = A48[c2][c8][c4][c6] + A47[c2][c8][2*(c4)+c10][2*(c6)+c12] + A49[c8][c10][c12];
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
          A50[c2][c4][c6][c8] = A48[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A51[c2][c4][c6][c8] = A50[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A48[c2][c4][c6][c8] =  + A51[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A52[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=143;c10++) {
            A53[c2][c4][c6][c8] = A53[c2][c4][c6][c8] + A48[c2][c10][c6+0][c8+0] + A54[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A55[c2][c4][c6][c8] = A53[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A56[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=31;c10++) {
            A57[c2][c4][c6][c8] = A57[c2][c4][c6][c8] + A55[c2][c10][c6+0][c8+0] + A58[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A59[c2][c4][c6][c8] = A57[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A60[c2][c4][c6][c8] = A59[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] =  + A60[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A62[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=191;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A63[c2][c8][c4][c6] = A63[c2][c8][c4][c6] + A62[c2][c8][c4+c10][c6+c12] + A64[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A65[c2][c4][c6][c8] = A63[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A66[c2][c4][c6][c8] = A65[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] =  + A66[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=191;c10++) {
            A67[c2][c4][c6][c8] = A67[c2][c4][c6][c8] + A61[c2][c10][c6+0][c8+0] + A68[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A69[c2][c4][c6][c8] = A67[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A70[c2][c4][c6][c8] = A55[c2][c4][c6][c8] + A69[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=31;c10++) {
            A71[c2][c4][c6][c8] = A71[c2][c4][c6][c8] + A70[c2][c10][c6+0][c8+0] + A72[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A73[c2][c4][c6][c8] = A71[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A74[c2][c4][c6][c8] = A73[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] =  + A74[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A75[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=191;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A76[c2][c8][c4][c6] = A76[c2][c8][c4][c6] + A75[c2][c8][c4+c10][c6+c12] + A77[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A78[c2][c4][c6][c8] = A76[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A79[c2][c4][c6][c8] = A78[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] =  + A79[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=191;c10++) {
            A52[c2][c4][c6][c8] = A52[c2][c4][c6][c8] + A61[c2][c10][c6+0][c8+0] + A80[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A81[c2][c4][c6][c8] = A52[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A52[c2][c4][c6][c8] = A70[c2][c4][c6][c8] + A81[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=31;c10++) {
            A56[c2][c4][c6][c8] = A56[c2][c4][c6][c8] + A52[c2][c10][c6+0][c8+0] + A82[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A83[c2][c4][c6][c8] = A56[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A84[c2][c4][c6][c8] = A83[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A61[c2][c4][c6][c8] =  + A84[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A85[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A86[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=191;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A86[c2][c8][c4][c6] = A86[c2][c8][c4][c6] + A85[c2][c8][2*(c4)+c10][2*(c6)+c12] + A87[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A88[c2][c4][c6][c8] = A86[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A89[c2][c4][c6][c8] = A88[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=191;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A86[c2][c4][c6][c8] =  + A89[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A90[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=191;c10++) {
            A91[c2][c4][c6][c8] = A91[c2][c4][c6][c8] + A86[c2][c10][c6+0][c8+0] + A92[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A93[c2][c4][c6][c8] = A91[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A94[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=63;c10++) {
            A95[c2][c4][c6][c8] = A95[c2][c4][c6][c8] + A93[c2][c10][c6+0][c8+0] + A96[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A97[c2][c4][c6][c8] = A95[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A98[c2][c4][c6][c8] = A97[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A98[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A100[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=383;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A101[c2][c8][c4][c6] = A101[c2][c8][c4][c6] + A100[c2][c8][c4+c10][c6+c12] + A102[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A103[c2][c4][c6][c8] = A101[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A104[c2][c4][c6][c8] = A103[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A104[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=383;c10++) {
            A105[c2][c4][c6][c8] = A105[c2][c4][c6][c8] + A99[c2][c10][c6+0][c8+0] + A106[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A107[c2][c4][c6][c8] = A105[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A108[c2][c4][c6][c8] = A93[c2][c4][c6][c8] + A107[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=63;c10++) {
            A109[c2][c4][c6][c8] = A109[c2][c4][c6][c8] + A108[c2][c10][c6+0][c8+0] + A110[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A109[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A112[c2][c4][c6][c8] = A111[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A112[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A113[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=383;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A114[c2][c8][c4][c6] = A114[c2][c8][c4][c6] + A113[c2][c8][c4+c10][c6+c12] + A115[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A116[c2][c4][c6][c8] = A114[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A117[c2][c4][c6][c8] = A116[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A117[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=383;c10++) {
            A118[c2][c4][c6][c8] = A118[c2][c4][c6][c8] + A99[c2][c10][c6+0][c8+0] + A119[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A120[c2][c4][c6][c8] = A118[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A121[c2][c4][c6][c8] = A108[c2][c4][c6][c8] + A120[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=63;c10++) {
            A122[c2][c4][c6][c8] = A122[c2][c4][c6][c8] + A121[c2][c10][c6+0][c8+0] + A123[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A122[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A125[c2][c4][c6][c8] = A124[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A125[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A126[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=383;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A127[c2][c8][c4][c6] = A127[c2][c8][c4][c6] + A126[c2][c8][c4+c10][c6+c12] + A128[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A129[c2][c4][c6][c8] = A127[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A130[c2][c4][c6][c8] = A129[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A130[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=383;c10++) {
            A90[c2][c4][c6][c8] = A90[c2][c4][c6][c8] + A99[c2][c10][c6+0][c8+0] + A131[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A132[c2][c4][c6][c8] = A90[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A108[c2][c4][c6][c8] = A121[c2][c4][c6][c8] + A132[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=63;c10++) {
            A133[c2][c4][c6][c8] = A133[c2][c4][c6][c8] + A108[c2][c10][c6+0][c8+0] + A134[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A135[c2][c4][c6][c8] = A133[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A136[c2][c4][c6][c8] = A135[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A136[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A137[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=383;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A94[c2][c8][c4][c6] = A94[c2][c8][c4][c6] + A137[c2][c8][c4+c10][c6+c12] + A138[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A139[c2][c4][c6][c8] = A94[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A140[c2][c4][c6][c8] = A139[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=383;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A99[c2][c4][c6][c8] =  + A140[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A141[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=383;c10++) {
            A142[c2][c4][c6][c8] = A142[c2][c4][c6][c8] + A99[c2][c10][c6+0][c8+0] + A143[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A144[c2][c4][c6][c8] = A142[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A145[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=95;c10++) {
            A146[c2][c4][c6][c8] = A146[c2][c4][c6][c8] + A144[c2][c10][c6+0][c8+0] + A147[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A148[c2][c4][c6][c8] = A146[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A148[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] =  + A149[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A151[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=575;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A152[c2][c8][c4][c6] = A152[c2][c8][c4][c6] + A151[c2][c8][c4+c10][c6+c12] + A153[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A154[c2][c4][c6][c8] = A152[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A154[c2][c4][c6][c8] ;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] =  + A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=575;c10++) {
            A156[c2][c4][c6][c8] = A156[c2][c4][c6][c8] + A150[c2][c10][c6+0][c8+0] + A157[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A158[c2][c4][c6][c8] = A156[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A159[c2][c4][c6][c8] = A144[c2][c4][c6][c8] + A158[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=95;c10++) {
            A160[c2][c4][c6][c8] = A160[c2][c4][c6][c8] + A159[c2][c10][c6+0][c8+0] + A161[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A162[c2][c4][c6][c8] = A160[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A163[c2][c4][c6][c8] = A162[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] =  + A163[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A164[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=575;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A165[c2][c8][c4][c6] = A165[c2][c8][c4][c6] + A164[c2][c8][c4+c10][c6+c12] + A166[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A167[c2][c4][c6][c8] = A165[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A168[c2][c4][c6][c8] = A167[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] =  + A168[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=575;c10++) {
            A141[c2][c4][c6][c8] = A141[c2][c4][c6][c8] + A150[c2][c10][c6+0][c8+0] + A169[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A170[c2][c4][c6][c8] = A141[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A141[c2][c4][c6][c8] = A159[c2][c4][c6][c8] + A170[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=95;c10++) {
            A145[c2][c4][c6][c8] = A145[c2][c4][c6][c8] + A141[c2][c10][c6+0][c8+0] + A171[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A172[c2][c4][c6][c8] = A145[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A173[c2][c4][c6][c8] = A172[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] =  + A173[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=15;c6++) {
        for (c8=0;c8<=15;c8++) {
          A174[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A175[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=575;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A175[c2][c8][c4][c6] = A175[c2][c8][c4][c6] + A174[c2][c8][2*(c4)+c10][2*(c6)+c12] + A176[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A177[c2][c4][c6][c8] = A175[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A178[c2][c4][c6][c8] = A177[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A175[c2][c4][c6][c8] =  + A178[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A179[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=575;c10++) {
            A180[c2][c4][c6][c8] = A180[c2][c4][c6][c8] + A175[c2][c10][c6+0][c8+0] + A181[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A182[c2][c4][c6][c8] = A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A183[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=159;c10++) {
            A184[c2][c4][c6][c8] = A184[c2][c4][c6][c8] + A182[c2][c10][c6+0][c8+0] + A185[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A186[c2][c4][c6][c8] = A184[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A187[c2][c4][c6][c8] = A186[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A187[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A189[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=959;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A190[c2][c8][c4][c6] = A190[c2][c8][c4][c6] + A189[c2][c8][c4+c10][c6+c12] + A191[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A192[c2][c4][c6][c8] = A190[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A193[c2][c4][c6][c8] = A192[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A193[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=959;c10++) {
            A194[c2][c4][c6][c8] = A194[c2][c4][c6][c8] + A188[c2][c10][c6+0][c8+0] + A195[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A196[c2][c4][c6][c8] = A194[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A197[c2][c4][c6][c8] = A182[c2][c4][c6][c8] + A196[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=159;c10++) {
            A198[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A197[c2][c10][c6+0][c8+0] + A199[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A200[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A201[c2][c4][c6][c8] = A200[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A201[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=959;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A203[c2][c8][c4][c6] = A203[c2][c8][c4][c6] + A202[c2][c8][c4+c10][c6+c12] + A204[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A205[c2][c4][c6][c8] = A203[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A206[c2][c4][c6][c8] = A205[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A206[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=959;c10++) {
            A179[c2][c4][c6][c8] = A179[c2][c4][c6][c8] + A188[c2][c10][c6+0][c8+0] + A207[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A208[c2][c4][c6][c8] = A179[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=159;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A179[c2][c4][c6][c8] = A197[c2][c4][c6][c8] + A208[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=159;c10++) {
            A209[c2][c4][c6][c8] = A209[c2][c4][c6][c8] + A179[c2][c10][c6+0][c8+0] + A210[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A211[c2][c4][c6][c8] = A209[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A212[c2][c4][c6][c8] = A211[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A212[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=8;c6++) {
        for (c8=0;c8<=8;c8++) {
          A213[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=959;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A183[c2][c8][c4][c6] = A183[c2][c8][c4][c6] + A213[c2][c8][c4+c10][c6+c12] + A214[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A215[c2][c4][c6][c8] = A183[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A216[c2][c4][c6][c8] = A215[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=959;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A188[c2][c4][c6][c8] =  + A216[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A217[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=959;c10++) {
            A217[c2][c4][c6][c8] = A217[c2][c4][c6][c8] + A188[c2][c10][c6+0][c8+0] + A218[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=319;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A219[c2][c4][c6][c8] = A217[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A220[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=319;c10++) {
            A220[c2][c4][c6][c8] = A220[c2][c4][c6][c8] + A219[c2][c10][c6+0][c8+0] + A221[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A222[c2][c4][c6][c8] = A220[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A223[c2][c4][c6][c8] = A222[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A220[c2][c4][c6][c8] =  + A223[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A224[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A224[c2][c4][0][0] = A224[c2][c4][0][0] + A220[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A225[c2][c4][0][0] = A224[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=1279;c4++) {
      A227[c4][c2] = A226[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A228[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=1279;c6++) {
        A228[c2][c4] = A228[c2][c4] + A229[c2][c6] + A227[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A230[c2][c4] = A228[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
