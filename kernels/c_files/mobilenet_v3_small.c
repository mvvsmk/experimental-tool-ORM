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
#define S7() {total++;}
#define S8() {total++;}
#define S9(i,j,k,l) {total++; printf("S9 %d %d %d %d\n",i,j,k,l);}
#define S10(i,j,k,l) {total++; printf("S10 %d %d %d %d\n",i,j,k,l);}
#define S11(i,j,k,l) {total++; printf("S11 %d %d %d %d\n",i,j,k,l);}
#define S12(i,j,k,l) {total++; printf("S12 %d %d %d %d\n",i,j,k,l);}
#define S13(i,j,k,l) {total++; printf("S13 %d %d %d %d\n",i,j,k,l);}
#define S14(i,j,k,l,m,n) {total++; printf("S14 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S15(i,j,k,l) {total++; printf("S15 %d %d %d %d\n",i,j,k,l);}
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
#define S27() {total++;}
#define S28() {total++;}
#define S29(i,j,k,l) {total++; printf("S29 %d %d %d %d\n",i,j,k,l);}
#define S30() {total++;}
#define S31() {total++;}
#define S32(i,j,k,l) {total++; printf("S32 %d %d %d %d\n",i,j,k,l);}
#define S33(i,j,k,l) {total++; printf("S33 %d %d %d %d\n",i,j,k,l);}
#define S34(i,j,k,l,m,n,o) {total++; printf("S34 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S35(i,j,k,l) {total++; printf("S35 %d %d %d %d\n",i,j,k,l);}
#define S36(i,j,k,l) {total++; printf("S36 %d %d %d %d\n",i,j,k,l);}
#define S37(i,j,k,l,m,n,o) {total++; printf("S37 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S38(i,j,k,l) {total++; printf("S38 %d %d %d %d\n",i,j,k,l);}
#define S39(i,j,k,l) {total++; printf("S39 %d %d %d %d\n",i,j,k,l);}
#define S40(i,j,k,l) {total++; printf("S40 %d %d %d %d\n",i,j,k,l);}
#define S41(i,j,k,l) {total++; printf("S41 %d %d %d %d\n",i,j,k,l);}
#define S42(i,j,k,l,m,n) {total++; printf("S42 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S43(i,j,k,l) {total++; printf("S43 %d %d %d %d\n",i,j,k,l);}
#define S44(i,j,k,l) {total++; printf("S44 %d %d %d %d\n",i,j,k,l);}
#define S45(i,j,k,l) {total++; printf("S45 %d %d %d %d\n",i,j,k,l);}
#define S46(i,j,k,l,m,n,o) {total++; printf("S46 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S47(i,j,k,l) {total++; printf("S47 %d %d %d %d\n",i,j,k,l);}
#define S48(i,j,k,l) {total++; printf("S48 %d %d %d %d\n",i,j,k,l);}
#define S49(i,j,k,l,m,n,o) {total++; printf("S49 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S50(i,j,k,l) {total++; printf("S50 %d %d %d %d\n",i,j,k,l);}
#define S51(i,j,k,l) {total++; printf("S51 %d %d %d %d\n",i,j,k,l);}
#define S52(i,j,k,l) {total++; printf("S52 %d %d %d %d\n",i,j,k,l);}
#define S53(i,j,k,l,m,n) {total++; printf("S53 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S54(i,j,k,l) {total++; printf("S54 %d %d %d %d\n",i,j,k,l);}
#define S55(i,j,k,l) {total++; printf("S55 %d %d %d %d\n",i,j,k,l);}
#define S56(i,j,k,l,m,n,o) {total++; printf("S56 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S57(i,j,k,l) {total++; printf("S57 %d %d %d %d\n",i,j,k,l);}
#define S58(i,j,k,l) {total++; printf("S58 %d %d %d %d\n",i,j,k,l);}
#define S59(i,j,k,l) {total++; printf("S59 %d %d %d %d\n",i,j,k,l);}
#define S60(i,j,k,l,m,n,o) {total++; printf("S60 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S61(i,j,k,l) {total++; printf("S61 %d %d %d %d\n",i,j,k,l);}
#define S62(i,j,k,l) {total++; printf("S62 %d %d %d %d\n",i,j,k,l);}
#define S63(i,j,k,l) {total++; printf("S63 %d %d %d %d\n",i,j,k,l);}
#define S64(i,j,k,l) {total++; printf("S64 %d %d %d %d\n",i,j,k,l);}
#define S65(i,j,k,l) {total++; printf("S65 %d %d %d %d\n",i,j,k,l);}
#define S66(i,j,k,l) {total++; printf("S66 %d %d %d %d\n",i,j,k,l);}
#define S67(i,j,k,l) {total++; printf("S67 %d %d %d %d\n",i,j,k,l);}
#define S68(i,j,k,l) {total++; printf("S68 %d %d %d %d\n",i,j,k,l);}
#define S69(i,j,k,l,m,n) {total++; printf("S69 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S70(i,j,k,l) {total++; printf("S70 %d %d %d %d\n",i,j,k,l);}
#define S71(i,j,k,l) {total++; printf("S71 %d %d %d %d\n",i,j,k,l);}
#define S72(i,j,k,l) {total++; printf("S72 %d %d %d %d\n",i,j,k,l);}
#define S73(i,j,k,l) {total++; printf("S73 %d %d %d %d\n",i,j,k,l);}
#define S74(i,j,k,l) {total++; printf("S74 %d %d %d %d\n",i,j,k,l);}
#define S75(i,j,k,l) {total++; printf("S75 %d %d %d %d\n",i,j,k,l);}
#define S76(i,j,k,l) {total++; printf("S76 %d %d %d %d\n",i,j,k,l);}
#define S77(i,j,k,l,m,n) {total++; printf("S77 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S78(i,j,k,l) {total++; printf("S78 %d %d %d %d\n",i,j,k,l);}
#define S79(i,j,k,l) {total++; printf("S79 %d %d %d %d\n",i,j,k,l);}
#define S80(i,j,k,l,m,n,o) {total++; printf("S80 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S81(i,j,k,l) {total++; printf("S81 %d %d %d %d\n",i,j,k,l);}
#define S82(i,j,k,l) {total++; printf("S82 %d %d %d %d\n",i,j,k,l);}
#define S83(i,j,k,l,m,n,o) {total++; printf("S83 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S84(i,j,k,l) {total++; printf("S84 %d %d %d %d\n",i,j,k,l);}
#define S85(i,j,k,l) {total++; printf("S85 %d %d %d %d\n",i,j,k,l);}
#define S86(i,j,k,l) {total++; printf("S86 %d %d %d %d\n",i,j,k,l);}
#define S87(i,j,k,l) {total++; printf("S87 %d %d %d %d\n",i,j,k,l);}
#define S88(i,j,k,l) {total++; printf("S88 %d %d %d %d\n",i,j,k,l);}
#define S89(i,j,k,l) {total++; printf("S89 %d %d %d %d\n",i,j,k,l);}
#define S90(i,j,k,l,m,n,o) {total++; printf("S90 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S91(i,j,k,l) {total++; printf("S91 %d %d %d %d\n",i,j,k,l);}
#define S92(i,j,k,l) {total++; printf("S92 %d %d %d %d\n",i,j,k,l);}
#define S93(i,j,k,l,m,n,o) {total++; printf("S93 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S94(i,j,k,l) {total++; printf("S94 %d %d %d %d\n",i,j,k,l);}
#define S95(i,j,k,l) {total++; printf("S95 %d %d %d %d\n",i,j,k,l);}
#define S96(i,j,k,l) {total++; printf("S96 %d %d %d %d\n",i,j,k,l);}
#define S97(i,j,k,l) {total++; printf("S97 %d %d %d %d\n",i,j,k,l);}
#define S98(i,j,k,l) {total++; printf("S98 %d %d %d %d\n",i,j,k,l);}
#define S99(i,j,k,l) {total++; printf("S99 %d %d %d %d\n",i,j,k,l);}
#define S100(i,j,k,l) {total++; printf("S100 %d %d %d %d\n",i,j,k,l);}
#define S101(i,j,k,l,m,n) {total++; printf("S101 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S102(i,j,k,l) {total++; printf("S102 %d %d %d %d\n",i,j,k,l);}
#define S103(i,j,k,l) {total++; printf("S103 %d %d %d %d\n",i,j,k,l);}
#define S104(i,j,k,l) {total++; printf("S104 %d %d %d %d\n",i,j,k,l);}
#define S105(i,j,k,l) {total++; printf("S105 %d %d %d %d\n",i,j,k,l);}
#define S106(i,j,k,l) {total++; printf("S106 %d %d %d %d\n",i,j,k,l);}
#define S107(i,j,k,l) {total++; printf("S107 %d %d %d %d\n",i,j,k,l);}
#define S108(i,j,k,l) {total++; printf("S108 %d %d %d %d\n",i,j,k,l);}
#define S109(i,j,k,l,m,n) {total++; printf("S109 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S110(i,j,k,l) {total++; printf("S110 %d %d %d %d\n",i,j,k,l);}
#define S111(i,j,k,l) {total++; printf("S111 %d %d %d %d\n",i,j,k,l);}
#define S112(i,j,k,l,m,n,o) {total++; printf("S112 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S113(i,j,k,l) {total++; printf("S113 %d %d %d %d\n",i,j,k,l);}
#define S114(i,j,k,l) {total++; printf("S114 %d %d %d %d\n",i,j,k,l);}
#define S115(i,j,k,l,m,n,o) {total++; printf("S115 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S116(i,j,k,l) {total++; printf("S116 %d %d %d %d\n",i,j,k,l);}
#define S117(i,j,k,l) {total++; printf("S117 %d %d %d %d\n",i,j,k,l);}
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
#define S128(i,j,k,l) {total++; printf("S128 %d %d %d %d\n",i,j,k,l);}
#define S129(i,j,k,l) {total++; printf("S129 %d %d %d %d\n",i,j,k,l);}
#define S130(i,j,k,l) {total++; printf("S130 %d %d %d %d\n",i,j,k,l);}
#define S131(i,j,k,l) {total++; printf("S131 %d %d %d %d\n",i,j,k,l);}
#define S132(i,j,k,l,m,n) {total++; printf("S132 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S133(i,j,k,l) {total++; printf("S133 %d %d %d %d\n",i,j,k,l);}
#define S134(i,j,k,l) {total++; printf("S134 %d %d %d %d\n",i,j,k,l);}
#define S135(i,j,k,l) {total++; printf("S135 %d %d %d %d\n",i,j,k,l);}
#define S136(i,j,k,l) {total++; printf("S136 %d %d %d %d\n",i,j,k,l);}
#define S137(i,j,k,l) {total++; printf("S137 %d %d %d %d\n",i,j,k,l);}
#define S138(i,j,k,l) {total++; printf("S138 %d %d %d %d\n",i,j,k,l);}
#define S139(i,j,k,l,m,n) {total++; printf("S139 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S140(i,j,k,l) {total++; printf("S140 %d %d %d %d\n",i,j,k,l);}
#define S141(i,j,k,l,m,n,o) {total++; printf("S141 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S142(i,j,k,l) {total++; printf("S142 %d %d %d %d\n",i,j,k,l);}
#define S143(i,j,k,l,m,n,o) {total++; printf("S143 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S144(i,j,k,l) {total++; printf("S144 %d %d %d %d\n",i,j,k,l);}
#define S145(i,j,k,l) {total++; printf("S145 %d %d %d %d\n",i,j,k,l);}
#define S146(i,j,k,l) {total++; printf("S146 %d %d %d %d\n",i,j,k,l);}
#define S147(i,j,k,l) {total++; printf("S147 %d %d %d %d\n",i,j,k,l);}
#define S148(i,j,k,l) {total++; printf("S148 %d %d %d %d\n",i,j,k,l);}
#define S149(i,j,k,l,m,n,o) {total++; printf("S149 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S150(i,j,k,l) {total++; printf("S150 %d %d %d %d\n",i,j,k,l);}
#define S151(i,j,k,l) {total++; printf("S151 %d %d %d %d\n",i,j,k,l);}
#define S152(i,j,k,l) {total++; printf("S152 %d %d %d %d\n",i,j,k,l);}
#define S153(i,j,k,l,m,n,o) {total++; printf("S153 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S154(i,j,k,l) {total++; printf("S154 %d %d %d %d\n",i,j,k,l);}
#define S155(i,j,k,l) {total++; printf("S155 %d %d %d %d\n",i,j,k,l);}
#define S156(i,j,k,l) {total++; printf("S156 %d %d %d %d\n",i,j,k,l);}
#define S157(i,j,k,l) {total++; printf("S157 %d %d %d %d\n",i,j,k,l);}
#define S158(i,j,k,l) {total++; printf("S158 %d %d %d %d\n",i,j,k,l);}
#define S159(i,j,k,l) {total++; printf("S159 %d %d %d %d\n",i,j,k,l);}
#define S160(i,j,k,l) {total++; printf("S160 %d %d %d %d\n",i,j,k,l);}
#define S161(i,j,k,l,m,n) {total++; printf("S161 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S162(i,j,k,l) {total++; printf("S162 %d %d %d %d\n",i,j,k,l);}
#define S163(i,j,k,l) {total++; printf("S163 %d %d %d %d\n",i,j,k,l);}
#define S164(i,j,k,l) {total++; printf("S164 %d %d %d %d\n",i,j,k,l);}
#define S165(i,j,k,l) {total++; printf("S165 %d %d %d %d\n",i,j,k,l);}
#define S166(i,j,k,l) {total++; printf("S166 %d %d %d %d\n",i,j,k,l);}
#define S167(i,j,k,l) {total++; printf("S167 %d %d %d %d\n",i,j,k,l);}
#define S168(i,j,k,l) {total++; printf("S168 %d %d %d %d\n",i,j,k,l);}
#define S169(i,j,k,l,m,n) {total++; printf("S169 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S170(i,j,k,l) {total++; printf("S170 %d %d %d %d\n",i,j,k,l);}
#define S171(i,j,k,l) {total++; printf("S171 %d %d %d %d\n",i,j,k,l);}
#define S172(i,j,k,l,m,n,o) {total++; printf("S172 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S173(i,j,k,l) {total++; printf("S173 %d %d %d %d\n",i,j,k,l);}
#define S174(i,j,k,l) {total++; printf("S174 %d %d %d %d\n",i,j,k,l);}
#define S175(i,j,k,l,m,n,o) {total++; printf("S175 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S176(i,j,k,l) {total++; printf("S176 %d %d %d %d\n",i,j,k,l);}
#define S177(i,j,k,l) {total++; printf("S177 %d %d %d %d\n",i,j,k,l);}
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
#define S190(i,j,k,l) {total++; printf("S190 %d %d %d %d\n",i,j,k,l);}
#define S191(i,j,k,l) {total++; printf("S191 %d %d %d %d\n",i,j,k,l);}
#define S192(i,j,k,l) {total++; printf("S192 %d %d %d %d\n",i,j,k,l);}
#define S193(i,j,k,l,m,n) {total++; printf("S193 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S194(i,j,k,l) {total++; printf("S194 %d %d %d %d\n",i,j,k,l);}
#define S195(i,j,k,l) {total++; printf("S195 %d %d %d %d\n",i,j,k,l);}
#define S196(i,j,k,l) {total++; printf("S196 %d %d %d %d\n",i,j,k,l);}
#define S197(i,j,k,l) {total++; printf("S197 %d %d %d %d\n",i,j,k,l);}
#define S198(i,j,k,l) {total++; printf("S198 %d %d %d %d\n",i,j,k,l);}
#define S199(i,j,k,l) {total++; printf("S199 %d %d %d %d\n",i,j,k,l);}
#define S200(i,j,k,l) {total++; printf("S200 %d %d %d %d\n",i,j,k,l);}
#define S201(i,j,k,l,m,n) {total++; printf("S201 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S202(i,j,k,l) {total++; printf("S202 %d %d %d %d\n",i,j,k,l);}
#define S203(i,j,k,l) {total++; printf("S203 %d %d %d %d\n",i,j,k,l);}
#define S204(i,j,k,l,m,n,o) {total++; printf("S204 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S205(i,j,k,l) {total++; printf("S205 %d %d %d %d\n",i,j,k,l);}
#define S206(i,j,k,l) {total++; printf("S206 %d %d %d %d\n",i,j,k,l);}
#define S207(i,j,k,l,m,n,o) {total++; printf("S207 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S208(i,j,k,l) {total++; printf("S208 %d %d %d %d\n",i,j,k,l);}
#define S209(i,j,k,l) {total++; printf("S209 %d %d %d %d\n",i,j,k,l);}
#define S210(i,j,k,l) {total++; printf("S210 %d %d %d %d\n",i,j,k,l);}
#define S211(i,j,k,l) {total++; printf("S211 %d %d %d %d\n",i,j,k,l);}
#define S212(i,j,k,l) {total++; printf("S212 %d %d %d %d\n",i,j,k,l);}
#define S213(i,j,k,l,m,n,o) {total++; printf("S213 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S214(i,j,k,l) {total++; printf("S214 %d %d %d %d\n",i,j,k,l);}
#define S215(i,j,k,l) {total++; printf("S215 %d %d %d %d\n",i,j,k,l);}
#define S216(i,j,k,l) {total++; printf("S216 %d %d %d %d\n",i,j,k,l);}
#define S217(i,j,k,l,m,n,o) {total++; printf("S217 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S218(i,j,k,l) {total++; printf("S218 %d %d %d %d\n",i,j,k,l);}
#define S219(i,j,k,l) {total++; printf("S219 %d %d %d %d\n",i,j,k,l);}
#define S220(i,j,k,l) {total++; printf("S220 %d %d %d %d\n",i,j,k,l);}
#define S221(i,j,k,l) {total++; printf("S221 %d %d %d %d\n",i,j,k,l);}
#define S222(i,j,k,l) {total++; printf("S222 %d %d %d %d\n",i,j,k,l);}
#define S223(i,j,k,l) {total++; printf("S223 %d %d %d %d\n",i,j,k,l);}
#define S224(i,j,k,l) {total++; printf("S224 %d %d %d %d\n",i,j,k,l);}
#define S225(i,j,k,l) {total++; printf("S225 %d %d %d %d\n",i,j,k,l);}
#define S226(i,j,k,l,m,n) {total++; printf("S226 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S227(i,j,k,l) {total++; printf("S227 %d %d %d %d\n",i,j,k,l);}
#define S228(i,j,k,l) {total++; printf("S228 %d %d %d %d\n",i,j,k,l);}
#define S229(i,j,k,l) {total++; printf("S229 %d %d %d %d\n",i,j,k,l);}
#define S230(i,j,k,l) {total++; printf("S230 %d %d %d %d\n",i,j,k,l);}
#define S231(i,j,k,l) {total++; printf("S231 %d %d %d %d\n",i,j,k,l);}
#define S232(i,j,k,l) {total++; printf("S232 %d %d %d %d\n",i,j,k,l);}
#define S233(i,j,k,l) {total++; printf("S233 %d %d %d %d\n",i,j,k,l);}
#define S234(i,j,k,l,m,n) {total++; printf("S234 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S235(i,j,k,l) {total++; printf("S235 %d %d %d %d\n",i,j,k,l);}
#define S236(i,j,k,l) {total++; printf("S236 %d %d %d %d\n",i,j,k,l);}
#define S237(i,j,k,l,m,n,o) {total++; printf("S237 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S238(i,j,k,l) {total++; printf("S238 %d %d %d %d\n",i,j,k,l);}
#define S239(i,j,k,l) {total++; printf("S239 %d %d %d %d\n",i,j,k,l);}
#define S240(i,j,k,l,m,n,o) {total++; printf("S240 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S241(i,j,k,l) {total++; printf("S241 %d %d %d %d\n",i,j,k,l);}
#define S242(i,j,k,l) {total++; printf("S242 %d %d %d %d\n",i,j,k,l);}
#define S243(i,j,k,l) {total++; printf("S243 %d %d %d %d\n",i,j,k,l);}
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
#define S254(i,j,k,l) {total++; printf("S254 %d %d %d %d\n",i,j,k,l);}
#define S255(i,j,k,l) {total++; printf("S255 %d %d %d %d\n",i,j,k,l);}
#define S256(i,j,k,l) {total++; printf("S256 %d %d %d %d\n",i,j,k,l);}
#define S257(i,j,k,l) {total++; printf("S257 %d %d %d %d\n",i,j,k,l);}
#define S258(i,j,k,l,m,n) {total++; printf("S258 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S259(i,j,k,l) {total++; printf("S259 %d %d %d %d\n",i,j,k,l);}
#define S260(i,j,k,l) {total++; printf("S260 %d %d %d %d\n",i,j,k,l);}
#define S261(i,j,k,l) {total++; printf("S261 %d %d %d %d\n",i,j,k,l);}
#define S262(i,j,k,l) {total++; printf("S262 %d %d %d %d\n",i,j,k,l);}
#define S263(i,j,k,l) {total++; printf("S263 %d %d %d %d\n",i,j,k,l);}
#define S264(i,j,k,l) {total++; printf("S264 %d %d %d %d\n",i,j,k,l);}
#define S265(i,j,k,l) {total++; printf("S265 %d %d %d %d\n",i,j,k,l);}
#define S266(i,j,k,l,m,n) {total++; printf("S266 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S267(i,j,k,l) {total++; printf("S267 %d %d %d %d\n",i,j,k,l);}
#define S268(i,j,k,l,m,n,o) {total++; printf("S268 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S269(i,j,k,l) {total++; printf("S269 %d %d %d %d\n",i,j,k,l);}
#define S270(i,j,k,l) {total++; printf("S270 %d %d %d %d\n",i,j,k,l);}
#define S271(i,j,k,l,m,n,o) {total++; printf("S271 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S272(i,j,k,l) {total++; printf("S272 %d %d %d %d\n",i,j,k,l);}
#define S273(i,j,k,l) {total++; printf("S273 %d %d %d %d\n",i,j,k,l);}
#define S274(i,j,k,l) {total++; printf("S274 %d %d %d %d\n",i,j,k,l);}
#define S275(i,j,k,l) {total++; printf("S275 %d %d %d %d\n",i,j,k,l);}
#define S276(i,j,k,l) {total++; printf("S276 %d %d %d %d\n",i,j,k,l);}
#define S277(i,j,k,l,m,n,o) {total++; printf("S277 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S278(i,j,k,l) {total++; printf("S278 %d %d %d %d\n",i,j,k,l);}
#define S279(i,j,k,l) {total++; printf("S279 %d %d %d %d\n",i,j,k,l);}
#define S280(i,j,k,l,m,n,o) {total++; printf("S280 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S281(i,j,k,l) {total++; printf("S281 %d %d %d %d\n",i,j,k,l);}
#define S282(i,j,k,l) {total++; printf("S282 %d %d %d %d\n",i,j,k,l);}
#define S283(i,j,k,l) {total++; printf("S283 %d %d %d %d\n",i,j,k,l);}
#define S284(i,j,k,l) {total++; printf("S284 %d %d %d %d\n",i,j,k,l);}
#define S285(i,j,k,l) {total++; printf("S285 %d %d %d %d\n",i,j,k,l);}
#define S286(i,j,k,l) {total++; printf("S286 %d %d %d %d\n",i,j,k,l);}
#define S287(i,j,k,l) {total++; printf("S287 %d %d %d %d\n",i,j,k,l);}
#define S288(i,j,k,l,m,n) {total++; printf("S288 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S289(i,j,k,l) {total++; printf("S289 %d %d %d %d\n",i,j,k,l);}
#define S290(i,j,k,l) {total++; printf("S290 %d %d %d %d\n",i,j,k,l);}
#define S291(i,j,k,l) {total++; printf("S291 %d %d %d %d\n",i,j,k,l);}
#define S292(i,j,k,l) {total++; printf("S292 %d %d %d %d\n",i,j,k,l);}
#define S293(i,j,k,l) {total++; printf("S293 %d %d %d %d\n",i,j,k,l);}
#define S294(i,j,k,l) {total++; printf("S294 %d %d %d %d\n",i,j,k,l);}
#define S295(i,j,k,l,m,n) {total++; printf("S295 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S296(i,j,k,l) {total++; printf("S296 %d %d %d %d\n",i,j,k,l);}
#define S297(i,j,k,l,m,n,o) {total++; printf("S297 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S298(i,j,k,l) {total++; printf("S298 %d %d %d %d\n",i,j,k,l);}
#define S299(i,j,k,l,m,n,o) {total++; printf("S299 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S300(i,j,k,l) {total++; printf("S300 %d %d %d %d\n",i,j,k,l);}
#define S301(i,j,k,l) {total++; printf("S301 %d %d %d %d\n",i,j,k,l);}
#define S302(i,j,k,l) {total++; printf("S302 %d %d %d %d\n",i,j,k,l);}
#define S303(i,j,k,l) {total++; printf("S303 %d %d %d %d\n",i,j,k,l);}
#define S304(i,j,k,l) {total++; printf("S304 %d %d %d %d\n",i,j,k,l);}
#define S305(i,j,k,l,m,n,o) {total++; printf("S305 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S306(i,j,k,l) {total++; printf("S306 %d %d %d %d\n",i,j,k,l);}
#define S307(i,j,k,l) {total++; printf("S307 %d %d %d %d\n",i,j,k,l);}
#define S308(i,j,k,l,m,n,o) {total++; printf("S308 %d %d %d %d %d %d %d\n",i,j,k,l,m,n,o);}
#define S309(i,j,k,l) {total++; printf("S309 %d %d %d %d\n",i,j,k,l);}
#define S310(i,j,k,l) {total++; printf("S310 %d %d %d %d\n",i,j,k,l);}
#define S311(i,j,k,l) {total++; printf("S311 %d %d %d %d\n",i,j,k,l);}
#define S312(i,j,k,l) {total++; printf("S312 %d %d %d %d\n",i,j,k,l);}
#define S313(i,j,k,l) {total++; printf("S313 %d %d %d %d\n",i,j,k,l);}
#define S314(i,j,k,l) {total++; printf("S314 %d %d %d %d\n",i,j,k,l);}
#define S315(i,j,k,l,m,n) {total++; printf("S315 %d %d %d %d %d %d\n",i,j,k,l,m,n);}
#define S316(i,j,k,l) {total++; printf("S316 %d %d %d %d\n",i,j,k,l);}
#define S317(i,j) {total++; printf("S317 %d %d\n",i,j);}
#define S318(i,j) {total++; printf("S318 %d %d\n",i,j);}
#define S319(i,j,k) {total++; printf("S319 %d %d %d\n",i,j,k);}
#define S320(i,j) {total++; printf("S320 %d %d\n",i,j);}
#define S321(i,j) {total++; printf("S321 %d %d\n",i,j);}
#define S322(i,j) {total++; printf("S322 %d %d\n",i,j);}
#define S323(i,j) {total++; printf("S323 %d %d\n",i,j);}
#define S324(i,j) {total++; printf("S324 %d %d\n",i,j);}
#define S325(i,j) {total++; printf("S325 %d %d\n",i,j);}
#define S326(i,j) {total++; printf("S326 %d %d\n",i,j);}
#define S327(i,j) {total++; printf("S327 %d %d\n",i,j);}
#define S328(i,j,k) {total++; printf("S328 %d %d %d\n",i,j,k);}
#define S329(i,j) {total++; printf("S329 %d %d\n",i,j);}
  volatile float A1[64][3][226][226];
  volatile float A10[64][16][56][56];
  volatile float A100[40][240][1][1];
  volatile float A101[64][40][14][14];
  volatile float A102[64][40][14][14];
  volatile float A103[64][240][14][14];
  volatile float A104[240][40][1][1];
  volatile float A105[64][240][14][14];
  volatile float A106[64][240][14][14];
  volatile float A107[64][240][14][14];
  volatile float A108[64][240][18][18];
  volatile float A109[240][5][5];
  volatile float A11[64][16][56][56];
  volatile float A110[64][240][14][14];
  volatile float A111[64][240][14][14];
  volatile float A112[64][240][14][14];
  volatile float A113[64][240][14][14];
  volatile float A114[64][240][1][1];
  volatile float A115[240][64][1][1];
  volatile float A116[64][240][1][1];
  volatile float A117[64][240][1][1];
  volatile float A118[40][240][1][1];
  volatile float A119[64][40][14][14];
  volatile float A12[16][3][3];
  volatile float A120[64][120][14][14];
  volatile float A121[64][120][14][14];
  volatile float A122[120][40][1][1];
  volatile float A123[64][120][14][14];
  volatile float A124[64][120][14][14];
  volatile float A125[64][120][14][14];
  volatile float A126[64][120][14][14];
  volatile float A127[64][120][18][18];
  volatile float A128[120][5][5];
  volatile float A129[64][120][14][14];
  volatile float A13[64][16][56][56];
  volatile float A130[64][120][14][14];
  volatile float A131[64][120][14][14];
  volatile float A132[64][120][14][14];
  volatile float A133[64][120][1][1];
  volatile float A134[64][120][1][1];
  volatile float A135[64][32][1][1];
  volatile float A136[32][120][1][1];
  volatile float A137[64][32][1][1];
  volatile float A138[120][32][1][1];
  volatile float A139[64][120][1][1];
  volatile float A14[64][16][56][56];
  volatile float A140[64][120][1][1];
  volatile float A141[64][48][14][14];
  volatile float A142[64][48][14][14];
  volatile float A143[48][120][1][1];
  volatile float A144[64][48][14][14];
  volatile float A145[64][144][14][14];
  volatile float A146[64][144][14][14];
  volatile float A147[144][48][1][1];
  volatile float A148[64][144][14][14];
  volatile float A149[64][144][14][14];
  volatile float A15[64][16][1][1];
  volatile float A150[64][144][14][14];
  volatile float A151[64][144][14][14];
  volatile float A152[64][144][18][18];
  volatile float A153[144][5][5];
  volatile float A154[64][144][14][14];
  volatile float A155[64][144][14][14];
  volatile float A156[64][144][14][14];
  volatile float A157[64][144][14][14];
  volatile float A158[64][144][1][1];
  volatile float A159[64][144][1][1];
  volatile float A16[64][16][1][1];
  volatile float A160[64][40][1][1];
  volatile float A161[40][144][1][1];
  volatile float A162[64][40][1][1];
  volatile float A163[64][144][1][1];
  volatile float A164[64][144][1][1];
  volatile float A165[144][40][1][1];
  volatile float A166[64][144][1][1];
  volatile float A167[64][144][1][1];
  volatile float A168[48][144][1][1];
  volatile float A169[64][48][14][14];
  volatile float A17[64][8][1][1];
  volatile float A170[64][288][14][14];
  volatile float A171[288][48][1][1];
  volatile float A172[64][288][14][14];
  volatile float A173[64][288][14][14];
  volatile float A174[64][288][14][14];
  volatile float A175[64][288][18][18];
  volatile float A176[64][288][7][7];
  volatile float A177[288][5][5];
  volatile float A178[64][288][7][7];
  volatile float A179[64][288][7][7];
  volatile float A18[8][16][1][1];
  volatile float A180[64][288][7][7];
  volatile float A181[64][288][7][7];
  volatile float A182[64][288][1][1];
  volatile float A183[64][288][1][1];
  volatile float A184[64][72][1][1];
  volatile float A185[72][288][1][1];
  volatile float A186[64][72][1][1];
  volatile float A187[288][72][1][1];
  volatile float A188[64][288][1][1];
  volatile float A189[64][288][1][1];
  volatile float A19[64][8][1][1];
  volatile float A190[64][96][7][7];
  volatile float A191[64][96][7][7];
  volatile float A192[96][288][1][1];
  volatile float A193[64][96][7][7];
  volatile float A194[64][576][7][7];
  volatile float A195[64][576][7][7];
  volatile float A196[576][96][1][1];
  volatile float A197[64][576][7][7];
  volatile float A198[64][576][7][7];
  volatile float A199[64][576][7][7];
  volatile float A2[64][16][112][112];
  volatile float A20[16][8][1][1];
  volatile float A200[64][576][7][7];
  volatile float A201[64][576][11][11];
  volatile float A202[64][576][7][7];
  volatile float A203[576][5][5];
  volatile float A204[64][576][7][7];
  volatile float A205[64][576][7][7];
  volatile float A206[64][576][7][7];
  volatile float A207[64][576][7][7];
  volatile float A208[64][576][1][1];
  volatile float A209[64][576][1][1];
  volatile float A21[64][16][1][1];
  volatile float A210[64][576][1][1];
  volatile float A211[64][144][1][1];
  volatile float A212[144][576][1][1];
  volatile float A213[64][576][1][1];
  volatile float A214[64][576][1][1];
  volatile float A215[576][144][1][1];
  volatile float A216[64][576][1][1];
  volatile float A217[64][576][1][1];
  volatile float A218[64][96][7][7];
  volatile float A219[96][576][1][1];
  volatile float A22;
  volatile float A220[64][96][7][7];
  volatile float A221[64][96][7][7];
  volatile float A222[64][576][7][7];
  volatile float A223[576][96][1][1];
  volatile float A224[64][576][7][7];
  volatile float A225[64][576][7][7];
  volatile float A226[64][576][7][7];
  volatile float A227[64][576][11][11];
  volatile float A228[64][576][7][7];
  volatile float A229[576][5][5];
  volatile float A23[64][16][1][1];
  volatile float A230[64][576][7][7];
  volatile float A231[64][576][7][7];
  volatile float A232[64][576][7][7];
  volatile float A233[64][576][7][7];
  volatile float A234[64][576][1][1];
  volatile float A235[144][576][1][1];
  volatile float A236[576][144][1][1];
  volatile float A237[64][576][1][1];
  volatile float A238[64][576][1][1];
  volatile float A239[96][576][1][1];
  volatile float A24;
  volatile float A240[64][96][7][7];
  volatile float A241[576][96][1][1];
  volatile float A242[64][576][7][7];
  volatile float A243[64][576][7][7];
  volatile float A244[64][576][7][7];
  volatile float A245[1024][576];
  volatile float A246[576][1024];
  volatile float A247[64][1024];
  volatile float A248[64][576];
  volatile float A249[64][1024];
  volatile float A25[64][16][56][56];
  volatile float A250[64][1024];
  volatile float A251[64][1024];
  volatile float A252[1000][1024];
  volatile float A253[1024][1000];
  volatile float A254[64][1000];
  volatile float A255[64][1000];
  volatile float A26[16][16][1][1];
  volatile float A27[64][16][56][56];
  volatile float A28[64][72][56][56];
  volatile float A29[72][16][1][1];
  volatile float A3[16][3][3][3];
  volatile float A30[64][72][56][56];
  volatile float A31[64][72][58][58];
  volatile float A32[64][72][28][28];
  volatile float A33[72][3][3];
  volatile float A34[64][72][28][28];
  volatile float A35[64][24][28][28];
  volatile float A36[64][24][28][28];
  volatile float A37[24][72][1][1];
  volatile float A38[64][24][28][28];
  volatile float A39[64][88][28][28];
  volatile float A4[64][16][112][112];
  volatile float A40[64][88][28][28];
  volatile float A41[88][24][1][1];
  volatile float A42[64][88][28][28];
  volatile float A43[64][88][28][28];
  volatile float A44[64][88][30][30];
  volatile float A45[88][3][3];
  volatile float A46[64][88][28][28];
  volatile float A47[24][88][1][1];
  volatile float A48[64][24][28][28];
  volatile float A49[64][96][28][28];
  volatile float A5[64][16][112][112];
  volatile float A50[96][24][1][1];
  volatile float A51[64][96][28][28];
  volatile float A52[64][96][28][28];
  volatile float A53[64][96][28][28];
  volatile float A54[64][96][32][32];
  volatile float A55[64][96][14][14];
  volatile float A56[96][5][5];
  volatile float A57[64][96][14][14];
  volatile float A58[64][96][14][14];
  volatile float A59[64][96][14][14];
  volatile double A6;
  volatile float A60[64][96][14][14];
  volatile float A61[64][96][1][1];
  volatile float A62[64][96][1][1];
  volatile float A63[64][24][1][1];
  volatile float A64[24][96][1][1];
  volatile float A65[64][24][1][1];
  volatile float A66[96][24][1][1];
  volatile float A67[64][96][1][1];
  volatile float A68[64][96][1][1];
  volatile float A69[64][40][14][14];
  volatile float A7;
  volatile float A70[64][40][14][14];
  volatile float A71[40][96][1][1];
  volatile float A72[64][40][14][14];
  volatile float A73[64][240][14][14];
  volatile float A74[64][240][14][14];
  volatile float A75[240][40][1][1];
  volatile float A76[64][240][14][14];
  volatile float A77[64][240][14][14];
  volatile float A78[64][240][14][14];
  volatile float A79[64][240][14][14];
  volatile float A8[64][16][112][112];
  volatile float A80[64][240][18][18];
  volatile float A81[64][240][14][14];
  volatile float A82[240][5][5];
  volatile float A83[64][240][14][14];
  volatile float A84[64][240][14][14];
  volatile float A85[64][240][14][14];
  volatile float A86[64][240][14][14];
  volatile float A87[64][240][1][1];
  volatile float A88[64][240][1][1];
  volatile float A89[64][240][1][1];
  volatile float A9[64][16][114][114];
  volatile float A90[64][64][1][1];
  volatile float A91[64][64][1][1];
  volatile float A92[64][240][1][1];
  volatile float A93[64][64][1][1];
  volatile float A94[64][240][1][1];
  volatile float A95[64][240][1][1];
  volatile float A96[240][64][1][1];
  volatile float A97[64][240][1][1];
  volatile float A98[64][240][1][1];
  volatile float A99[64][40][14][14];


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
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              for (c14=0;c14<=2;c14++) {
                A2[c2][c4][c6][c8] = A2[c2][c4][c6][c8] + A1[c2][c10][2*(c6)+c12][2*(c8)+c14] + A3[c4][c10][c12][c14];
              }
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A4[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8] = A4[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A5[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  A6=0;
  A7 = A6;
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8] = A5[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A8[c2][c4][c6][c8] = A2[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=111;c6++) {
        for (c8=0;c8<=111;c8++) {
          A2[c2][c4][c6][c8] = A8[c2][c4][c6][c8] + A4[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=113;c6++) {
        for (c8=0;c8<=113;c8++) {
          A9[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A10[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=55;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=15;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A11[c2][c8][c4][c6] = A11[c2][c8][c4][c6] + A9[c2][c8][2*(c4)+c10][2*(c6)+c12] + A12[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A13[c2][c4][c6][c8] = A11[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A14[c2][c4][c6][c8] = A13[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A15[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c10=0;c10<=55;c10++) {
        for (c12=0;c12<=55;c12++) {
          A15[c2][c4][0][0] = A15[c2][c4][0][0] + A14[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A16[c2][c4][0][0] = A15[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      A17[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      for (c10=0;c10<=15;c10++) {
        A17[c2][c4][0][0] = A17[c2][c4][0][0] + A16[c2][c10][0+0][0+0] + A18[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=7;c4++) {
      A19[c2][c4][0][0] = A17[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A16[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c10=0;c10<=7;c10++) {
        A16[c2][c4][0][0] = A16[c2][c4][0][0] + A19[c2][c10][0+0][0+0] + A20[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A21[c2][c4][0][0] = A16[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A16[c2][c4][0][0] = A21[c2][c4][0][0];
    }
  }
  A6=0;
  A22 = A6;
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A23[c2][c4][0][0] = A22 + A16[c2][c4][0][0];
    }
  }
  A6=0;
  A24 = A6;
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      A16[c2][c4][0][0] = A24 + A23[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A25[c2][c4][c6][c8] = A16[c2][c4][0][0] + A14[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=15;c10++) {
            A10[c2][c4][c6][c8] = A10[c2][c4][c6][c8] + A25[c2][c10][c6+0][c8+0] + A26[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=15;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A27[c2][c4][c6][c8] = A10[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A28[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          for (c10=0;c10<=15;c10++) {
            A28[c2][c4][c6][c8] = A28[c2][c4][c6][c8] + A27[c2][c10][c6+0][c8+0] + A29[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A30[c2][c4][c6][c8] = A28[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=55;c6++) {
        for (c8=0;c8<=55;c8++) {
          A28[c2][c4][c6][c8] = A30[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=57;c6++) {
        for (c8=0;c8<=57;c8++) {
          A31[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A32[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=71;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A32[c2][c8][c4][c6] = A32[c2][c8][c4][c6] + A31[c2][c8][2*(c4)+c10][2*(c6)+c12] + A33[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A34[c2][c4][c6][c8] = A32[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A32[c2][c4][c6][c8] = A34[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A35[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=71;c10++) {
            A36[c2][c4][c6][c8] = A36[c2][c4][c6][c8] + A32[c2][c10][c6+0][c8+0] + A37[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A38[c2][c4][c6][c8] = A36[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A39[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=23;c10++) {
            A40[c2][c4][c6][c8] = A40[c2][c4][c6][c8] + A38[c2][c10][c6+0][c8+0] + A41[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A42[c2][c4][c6][c8] = A40[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A43[c2][c4][c6][c8] = A42[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=29;c6++) {
        for (c8=0;c8<=29;c8++) {
          A44[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=27;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=87;c8++) {
          for (c10=0;c10<=2;c10++) {
            for (c12=0;c12<=2;c12++) {
              A39[c2][c8][c4][c6] = A39[c2][c8][c4][c6] + A44[c2][c8][c4+c10][c6+c12] + A45[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A46[c2][c4][c6][c8] = A39[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=87;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A43[c2][c4][c6][c8] = A46[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=87;c10++) {
            A35[c2][c4][c6][c8] = A35[c2][c4][c6][c8] + A43[c2][c10][c6+0][c8+0] + A47[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A48[c2][c4][c6][c8] = A35[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A35[c2][c4][c6][c8] = A48[c2][c4][c6][c8] + A38[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          for (c10=0;c10<=23;c10++) {
            A49[c2][c4][c6][c8] = A49[c2][c4][c6][c8] + A35[c2][c10][c6+0][c8+0] + A50[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A51[c2][c4][c6][c8] = A49[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8] = A51[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A52[c2][c4][c6][c8] = A49[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8] = A52[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A53[c2][c4][c6][c8] = A49[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=27;c6++) {
        for (c8=0;c8<=27;c8++) {
          A49[c2][c4][c6][c8] = A53[c2][c4][c6][c8] + A51[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=31;c6++) {
        for (c8=0;c8<=31;c8++) {
          A54[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A55[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=95;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A55[c2][c8][c4][c6] = A55[c2][c8][c4][c6] + A54[c2][c8][2*(c4)+c10][2*(c6)+c12] + A56[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A57[c2][c4][c6][c8] = A55[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A58[c2][c4][c6][c8] = A57[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A55[c2][c4][c6][c8] = A58[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A59[c2][c4][c6][c8] = A55[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A55[c2][c4][c6][c8] = A59[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A60[c2][c4][c6][c8] = A55[c2][c4][c6][c8] + A57[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A61[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A61[c2][c4][0][0] = A61[c2][c4][0][0] + A60[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A62[c2][c4][0][0] = A61[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      A63[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      for (c10=0;c10<=95;c10++) {
        A63[c2][c4][0][0] = A63[c2][c4][0][0] + A62[c2][c10][0+0][0+0] + A64[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=23;c4++) {
      A65[c2][c4][0][0] = A63[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A62[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c10=0;c10<=23;c10++) {
        A62[c2][c4][0][0] = A62[c2][c4][0][0] + A65[c2][c10][0+0][0+0] + A66[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A67[c2][c4][0][0] = A62[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A62[c2][c4][0][0] = A67[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A68[c2][c4][0][0] = A22 + A62[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      A62[c2][c4][0][0] = A24 + A68[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A55[c2][c4][c6][c8] = A62[c2][c4][0][0] + A60[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A69[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=95;c10++) {
            A70[c2][c4][c6][c8] = A70[c2][c4][c6][c8] + A55[c2][c10][c6+0][c8+0] + A71[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A72[c2][c4][c6][c8] = A70[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A73[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=39;c10++) {
            A74[c2][c4][c6][c8] = A74[c2][c4][c6][c8] + A72[c2][c10][c6+0][c8+0] + A75[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A76[c2][c4][c6][c8] = A74[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A76[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A78[c2][c4][c6][c8] = A77[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A78[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A79[c2][c4][c6][c8] = A77[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A79[c2][c4][c6][c8] + A76[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A80[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=239;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A81[c2][c8][c4][c6] = A81[c2][c8][c4][c6] + A80[c2][c8][c4+c10][c6+c12] + A82[c8][c10][c12];
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
          A83[c2][c4][c6][c8] = A81[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A84[c2][c4][c6][c8] = A83[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A84[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A85[c2][c4][c6][c8] = A77[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A85[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A86[c2][c4][c6][c8] = A77[c2][c4][c6][c8] + A83[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A87[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A88[c2][c4][0][0] = A88[c2][c4][0][0] + A86[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A88[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      A90[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c10=0;c10<=239;c10++) {
        A91[c2][c4][0][0] = A91[c2][c4][0][0] + A89[c2][c10][0+0][0+0] + A92[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      A93[c2][c4][0][0] = A91[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A94[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=63;c10++) {
        A95[c2][c4][0][0] = A95[c2][c4][0][0] + A93[c2][c10][0+0][0+0] + A96[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A97[c2][c4][0][0] = A95[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A97[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A98[c2][c4][0][0] = A22 + A89[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A24 + A98[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A89[c2][c4][0][0] + A86[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=239;c10++) {
            A99[c2][c4][c6][c8] = A99[c2][c4][c6][c8] + A77[c2][c10][c6+0][c8+0] + A100[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A101[c2][c4][c6][c8] = A99[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A102[c2][c4][c6][c8] = A101[c2][c4][c6][c8] + A72[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=39;c10++) {
            A103[c2][c4][c6][c8] = A103[c2][c4][c6][c8] + A102[c2][c10][c6+0][c8+0] + A104[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A105[c2][c4][c6][c8] = A103[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A105[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A106[c2][c4][c6][c8] = A77[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A106[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A107[c2][c4][c6][c8] = A77[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A107[c2][c4][c6][c8] + A105[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A108[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=239;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A73[c2][c8][c4][c6] = A73[c2][c8][c4][c6] + A108[c2][c8][c4+c10][c6+c12] + A109[c8][c10][c12];
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
          A110[c2][c4][c6][c8] = A73[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A111[c2][c4][c6][c8] = A110[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A111[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A112[c2][c4][c6][c8] = A77[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A112[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A113[c2][c4][c6][c8] = A77[c2][c4][c6][c8] + A110[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A87[c2][c4][0][0] = A87[c2][c4][0][0] + A113[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A87[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      for (c10=0;c10<=239;c10++) {
        A90[c2][c4][0][0] = A90[c2][c4][0][0] + A89[c2][c10][0+0][0+0] + A114[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=63;c4++) {
      A93[c2][c4][0][0] = A90[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c10=0;c10<=63;c10++) {
        A94[c2][c4][0][0] = A94[c2][c4][0][0] + A93[c2][c10][0+0][0+0] + A115[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A116[c2][c4][0][0] = A94[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A116[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A117[c2][c4][0][0] = A22 + A89[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      A89[c2][c4][0][0] = A24 + A117[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=239;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A77[c2][c4][c6][c8] = A89[c2][c4][0][0] + A113[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=239;c10++) {
            A69[c2][c4][c6][c8] = A69[c2][c4][c6][c8] + A77[c2][c10][c6+0][c8+0] + A118[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A119[c2][c4][c6][c8] = A69[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A69[c2][c4][c6][c8] = A119[c2][c4][c6][c8] + A102[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A120[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=39;c10++) {
            A121[c2][c4][c6][c8] = A121[c2][c4][c6][c8] + A69[c2][c10][c6+0][c8+0] + A122[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A123[c2][c4][c6][c8] = A121[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A123[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A125[c2][c4][c6][c8] = A124[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A125[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A126[c2][c4][c6][c8] = A124[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A126[c2][c4][c6][c8] + A123[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A127[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=119;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A120[c2][c8][c4][c6] = A120[c2][c8][c4][c6] + A127[c2][c8][c4+c10][c6+c12] + A128[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A129[c2][c4][c6][c8] = A120[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A130[c2][c4][c6][c8] = A129[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A130[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A131[c2][c4][c6][c8] = A124[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A131[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A132[c2][c4][c6][c8] = A124[c2][c4][c6][c8] + A129[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A133[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A133[c2][c4][0][0] = A133[c2][c4][0][0] + A132[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A134[c2][c4][0][0] = A133[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A135[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      for (c10=0;c10<=119;c10++) {
        A135[c2][c4][0][0] = A135[c2][c4][0][0] + A134[c2][c10][0+0][0+0] + A136[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=31;c4++) {
      A137[c2][c4][0][0] = A135[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A134[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c10=0;c10<=31;c10++) {
        A134[c2][c4][0][0] = A134[c2][c4][0][0] + A137[c2][c10][0+0][0+0] + A138[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A139[c2][c4][0][0] = A134[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A134[c2][c4][0][0] = A139[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A140[c2][c4][0][0] = A22 + A134[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      A134[c2][c4][0][0] = A24 + A140[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=119;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A124[c2][c4][c6][c8] = A134[c2][c4][0][0] + A132[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A141[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=119;c10++) {
            A142[c2][c4][c6][c8] = A142[c2][c4][c6][c8] + A124[c2][c10][c6+0][c8+0] + A143[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A144[c2][c4][c6][c8] = A142[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A145[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=47;c10++) {
            A146[c2][c4][c6][c8] = A146[c2][c4][c6][c8] + A144[c2][c10][c6+0][c8+0] + A147[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A148[c2][c4][c6][c8] = A146[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A148[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A150[c2][c4][c6][c8] = A149[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A150[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A151[c2][c4][c6][c8] = A149[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A151[c2][c4][c6][c8] + A148[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A152[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=13;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=143;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A145[c2][c8][c4][c6] = A145[c2][c8][c4][c6] + A152[c2][c8][c4+c10][c6+c12] + A153[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A154[c2][c4][c6][c8] = A145[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A155[c2][c4][c6][c8] = A154[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A155[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A156[c2][c4][c6][c8] = A149[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A156[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A157[c2][c4][c6][c8] = A149[c2][c4][c6][c8] + A154[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A158[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=13;c10++) {
        for (c12=0;c12<=13;c12++) {
          A158[c2][c4][0][0] = A158[c2][c4][0][0] + A157[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A159[c2][c4][0][0] = A158[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      A160[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      for (c10=0;c10<=143;c10++) {
        A160[c2][c4][0][0] = A160[c2][c4][0][0] + A159[c2][c10][0+0][0+0] + A161[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=39;c4++) {
      A162[c2][c4][0][0] = A160[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A163[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=39;c10++) {
        A164[c2][c4][0][0] = A164[c2][c4][0][0] + A162[c2][c10][0+0][0+0] + A165[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A166[c2][c4][0][0] = A164[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A159[c2][c4][0][0] = A166[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A167[c2][c4][0][0] = A22 + A159[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A159[c2][c4][0][0] = A24 + A167[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A149[c2][c4][c6][c8] = A159[c2][c4][0][0] + A157[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=143;c10++) {
            A141[c2][c4][c6][c8] = A141[c2][c4][c6][c8] + A149[c2][c10][c6+0][c8+0] + A168[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A169[c2][c4][c6][c8] = A141[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=47;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A141[c2][c4][c6][c8] = A169[c2][c4][c6][c8] + A144[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A170[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          for (c10=0;c10<=47;c10++) {
            A170[c2][c4][c6][c8] = A170[c2][c4][c6][c8] + A141[c2][c10][c6+0][c8+0] + A171[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A172[c2][c4][c6][c8] = A170[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A170[c2][c4][c6][c8] = A172[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A173[c2][c4][c6][c8] = A170[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A170[c2][c4][c6][c8] = A173[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A174[c2][c4][c6][c8] = A170[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=13;c6++) {
        for (c8=0;c8<=13;c8++) {
          A170[c2][c4][c6][c8] = A174[c2][c4][c6][c8] + A172[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=17;c6++) {
        for (c8=0;c8<=17;c8++) {
          A175[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A176[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=287;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A176[c2][c8][c4][c6] = A176[c2][c8][c4][c6] + A175[c2][c8][2*(c4)+c10][2*(c6)+c12] + A177[c8][c10][c12];
            }
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A178[c2][c4][c6][c8] = A176[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A179[c2][c4][c6][c8] = A178[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A176[c2][c4][c6][c8] = A179[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A180[c2][c4][c6][c8] = A176[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A176[c2][c4][c6][c8] = A180[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A181[c2][c4][c6][c8] = A176[c2][c4][c6][c8] + A178[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A182[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A182[c2][c4][0][0] = A182[c2][c4][0][0] + A181[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A183[c2][c4][0][0] = A182[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      A184[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      for (c10=0;c10<=287;c10++) {
        A184[c2][c4][0][0] = A184[c2][c4][0][0] + A183[c2][c10][0+0][0+0] + A185[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=71;c4++) {
      A186[c2][c4][0][0] = A184[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A183[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c10=0;c10<=71;c10++) {
        A183[c2][c4][0][0] = A183[c2][c4][0][0] + A186[c2][c10][0+0][0+0] + A187[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A188[c2][c4][0][0] = A183[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A183[c2][c4][0][0] = A188[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A189[c2][c4][0][0] = A22 + A183[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      A183[c2][c4][0][0] = A24 + A189[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=287;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A176[c2][c4][c6][c8] = A183[c2][c4][0][0] + A181[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A190[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=287;c10++) {
            A191[c2][c4][c6][c8] = A191[c2][c4][c6][c8] + A176[c2][c10][c6+0][c8+0] + A192[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A193[c2][c4][c6][c8] = A191[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A194[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=95;c10++) {
            A195[c2][c4][c6][c8] = A195[c2][c4][c6][c8] + A193[c2][c10][c6+0][c8+0] + A196[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A197[c2][c4][c6][c8] = A195[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A197[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A199[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A199[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A200[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A200[c2][c4][c6][c8] + A197[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=10;c6++) {
        for (c8=0;c8<=10;c8++) {
          A201[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=575;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A202[c2][c8][c4][c6] = A202[c2][c8][c4][c6] + A201[c2][c8][c4+c10][c6+c12] + A203[c8][c10][c12];
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
          A204[c2][c4][c6][c8] = A202[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A205[c2][c4][c6][c8] = A204[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A205[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A206[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A206[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A207[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A204[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A208[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A209[c2][c4][0][0] = A209[c2][c4][0][0] + A207[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A209[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=575;c10++) {
        A211[c2][c4][0][0] = A211[c2][c4][0][0] + A210[c2][c10][0+0][0+0] + A212[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A159[c2][c4][0][0] = A211[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A213[c2][c4][0][0]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c10=0;c10<=143;c10++) {
        A214[c2][c4][0][0] = A214[c2][c4][0][0] + A159[c2][c10][0+0][0+0] + A215[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A216[c2][c4][0][0] = A214[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A216[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A217[c2][c4][0][0] = A22 + A210[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A24 + A217[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A210[c2][c4][0][0] + A207[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=575;c10++) {
            A218[c2][c4][c6][c8] = A218[c2][c4][c6][c8] + A198[c2][c10][c6+0][c8+0] + A219[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A220[c2][c4][c6][c8] = A218[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A221[c2][c4][c6][c8] = A220[c2][c4][c6][c8] + A193[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=95;c10++) {
            A222[c2][c4][c6][c8] = A222[c2][c4][c6][c8] + A221[c2][c10][c6+0][c8+0] + A223[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A224[c2][c4][c6][c8] = A222[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A225[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A225[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A226[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A226[c2][c4][c6][c8] + A224[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=10;c6++) {
        for (c8=0;c8<=10;c8++) {
          A227[c2][c4][c6][c8]=0;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=6;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=575;c8++) {
          for (c10=0;c10<=4;c10++) {
            for (c12=0;c12<=4;c12++) {
              A228[c2][c8][c4][c6] = A228[c2][c8][c4][c6] + A227[c2][c8][c4+c10][c6+c12] + A229[c8][c10][c12];
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
          A230[c2][c4][c6][c8] = A228[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A231[c2][c4][c6][c8] = A230[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A231[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A232[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A232[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A233[c2][c4][c6][c8] = A198[c2][c4][c6][c8] + A230[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A234[c2][c4][0][0] = A234[c2][c4][0][0] + A233[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A234[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      for (c10=0;c10<=575;c10++) {
        A163[c2][c4][0][0] = A163[c2][c4][0][0] + A210[c2][c10][0+0][0+0] + A235[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=143;c4++) {
      A159[c2][c4][0][0] = A163[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c10=0;c10<=143;c10++) {
        A213[c2][c4][0][0] = A213[c2][c4][0][0] + A159[c2][c10][0+0][0+0] + A236[c4][c10][0][0];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A237[c2][c4][0][0] = A213[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A237[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A238[c2][c4][0][0] = A22 + A210[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A24 + A238[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A210[c2][c4][0][0] + A233[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=575;c10++) {
            A190[c2][c4][c6][c8] = A190[c2][c4][c6][c8] + A198[c2][c10][c6+0][c8+0] + A239[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A240[c2][c4][c6][c8] = A190[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=95;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A190[c2][c4][c6][c8] = A240[c2][c4][c6][c8] + A221[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          for (c10=0;c10<=95;c10++) {
            A194[c2][c4][c6][c8] = A194[c2][c4][c6][c8] + A190[c2][c10][c6+0][c8+0] + A241[c4][c10][0][0];
          }
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A242[c2][c4][c6][c8] = A194[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A242[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A243[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A243[c2][c4][c6][c8] + A7;
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A244[c2][c4][c6][c8] = A198[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c6=0;c6<=6;c6++) {
        for (c8=0;c8<=6;c8++) {
          A198[c2][c4][c6][c8] = A244[c2][c4][c6][c8] + A242[c2][c4][c6][c8];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      for (c10=0;c10<=6;c10++) {
        for (c12=0;c12<=6;c12++) {
          A208[c2][c4][0][0] = A208[c2][c4][0][0] + A198[c2][c4][0+c10][0+c12];
        }
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=575;c4++) {
      A210[c2][c4][0][0] = A208[c2][c4][0][0];
    }
  }
  for (c2=0;c2<=1023;c2++) {
    for (c4=0;c4<=575;c4++) {
      A246[c4][c2] = A245[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A247[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      for (c6=0;c6<=575;c6++) {
        A247[c2][c4] = A247[c2][c4] + A248[c2][c6] + A246[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A249[c2][c4] = A247[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A247[c2][c4] = A249[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A250[c2][c4] = A247[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A247[c2][c4] = A250[c2][c4] + A7;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A251[c2][c4] = A247[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A247[c2][c4] = A251[c2][c4] + A249[c2][c4];
    }
  }
  for (c2=0;c2<=999;c2++) {
    for (c4=0;c4<=1023;c4++) {
      A253[c4][c2] = A252[c2][c4];
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A254[c2][c4]=0;
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      for (c6=0;c6<=1023;c6++) {
        A254[c2][c4] = A254[c2][c4] + A247[c2][c6] + A253[c6][c4];
      }
    }
  }
  for (c2=0;c2<=63;c2++) {
    for (c4=0;c4<=999;c4++) {
      A255[c2][c4] = A254[c2][c4];
    }
  }
#pragma endscop

  printf("Number of integral points: %d.\n",total);
  return 0;
}
