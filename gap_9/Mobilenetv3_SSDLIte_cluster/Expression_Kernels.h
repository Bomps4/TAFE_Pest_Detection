#ifndef MOBV3SSDLITE_BASIC_KERNELS_H
#define MOBV3SSDLITE_BASIC_KERNELS_H
#include "Gap.h"
#include "math_funcs.h"
#include "math_funcs.h"
#include "Gap.h"

typedef struct {
    unsigned int I0;
    signed char *__restrict__  expr_0_in_0;
    signed char *__restrict__  expr_0_in_1;
    signed char *__restrict__  expr_0_in_2;
    signed char *__restrict__  expr_0_in_3;
    signed char *__restrict__  expr_0_in_4;
    signed char *__restrict__  expr_0_out_0;
    signed char *__restrict__  expr_0_out_1;
} s372_kernel_args_t;

typedef struct {
    unsigned int I0;
    signed char *__restrict__  expr_1_in_0;
    signed char *__restrict__  expr_1_in_1;
    signed char *__restrict__  expr_1_in_2;
    signed char *__restrict__  expr_1_in_3;
    signed char *__restrict__  expr_1_in_4;
    signed char *__restrict__  expr_1_out_0;
    signed char *__restrict__  expr_1_out_1;
} s366_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_11_in_0;
    signed char *__restrict__  expr_11_in_1;
    signed char *__restrict__  expr_11_out_0;
} s144_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_14_in_0;
    signed char *__restrict__  expr_14_in_1;
    signed char *__restrict__  expr_14_out_0;
} s164_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_16_in_0;
    signed char *__restrict__  expr_16_in_1;
    signed char *__restrict__  expr_16_out_0;
} s45_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_17_in_0;
    signed char *__restrict__  expr_17_in_1;
    signed char *__restrict__  expr_17_out_0;
} s64_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_18_in_0;
    signed char *__restrict__  expr_18_in_1;
    signed char *__restrict__  expr_18_out_0;
} s84_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_26_in_0;
    signed char *__restrict__  expr_26_in_1;
    signed char *__restrict__  expr_26_out_0;
} s184_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_29_in_0;
    signed char *__restrict__  expr_29_in_1;
    signed char *__restrict__  expr_29_out_0;
} s204_kernel_args_t;

typedef struct {
    unsigned int I0;
    unsigned int I1;
    signed char *__restrict__  expr_32_in_0;
    signed char *__restrict__  expr_32_in_1;
    signed char *__restrict__  expr_32_out_0;
} s224_kernel_args_t;

typedef struct {
    signed char *__restrict__  expr_6_in_0;
    signed char *__restrict__  expr_6_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_6_args_t;

typedef struct {
    signed char *__restrict__  expr_19_in_0;
    signed char *__restrict__  expr_19_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_19_args_t;

typedef struct {
    signed char *__restrict__  expr_20_in_0;
    signed char *__restrict__  expr_20_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_20_args_t;

typedef struct {
    signed char *__restrict__  expr_21_in_0;
    signed char *__restrict__  expr_21_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_21_args_t;

typedef struct {
    signed char *__restrict__  expr_22_in_0;
    signed char *__restrict__  expr_22_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_22_args_t;

typedef struct {
    signed char *__restrict__  expr_23_in_0;
    signed char *__restrict__  expr_23_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_23_args_t;

typedef struct {
    signed char *__restrict__  expr_24_in_0;
    signed char *__restrict__  expr_24_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_24_args_t;

typedef struct {
    signed char *__restrict__  expr_7_in_0;
    signed char *__restrict__  expr_7_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_7_args_t;

typedef struct {
    signed char *__restrict__  expr_8_in_0;
    signed char *__restrict__  expr_8_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_8_args_t;

typedef struct {
    signed char *__restrict__  expr_9_in_0;
    signed char *__restrict__  expr_9_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_9_args_t;

typedef struct {
    signed char *__restrict__  expr_10_in_0;
    signed char *__restrict__  expr_10_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_10_args_t;

typedef struct {
    signed char *__restrict__  expr_12_in_0;
    signed char *__restrict__  expr_12_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_12_args_t;

typedef struct {
    signed char *__restrict__  expr_13_in_0;
    signed char *__restrict__  expr_13_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_13_args_t;

typedef struct {
    signed char *__restrict__  expr_15_in_0;
    signed char *__restrict__  expr_15_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_15_args_t;

typedef struct {
    signed char *__restrict__  expr_25_in_0;
    signed char *__restrict__  expr_25_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_25_args_t;

typedef struct {
    signed char *__restrict__  expr_27_in_0;
    signed char *__restrict__  expr_27_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_27_args_t;

typedef struct {
    signed char *__restrict__  expr_28_in_0;
    signed char *__restrict__  expr_28_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_28_args_t;

typedef struct {
    signed char *__restrict__  expr_30_in_0;
    signed char *__restrict__  expr_30_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_30_args_t;

typedef struct {
    signed char *__restrict__  expr_31_in_0;
    signed char *__restrict__  expr_31_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_31_args_t;

typedef struct {
    signed char *__restrict__  expr_33_in_0;
    signed char *__restrict__  expr_33_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_33_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_1_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_2_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_3_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_4_args_t;

typedef struct {
    signed char *__restrict__  expr_2_in_0;
    signed char *__restrict__  expr_2_out_0;
    unsigned short int W;
    unsigned short int H;
    unsigned short int Feat;
} expr_2_5_args_t;


void s372_kernel(s372_kernel_args_t *Args);

void s366_kernel(s366_kernel_args_t *Args);

void s144_kernel(s144_kernel_args_t *Args);

void s164_kernel(s164_kernel_args_t *Args);

void s45_kernel(s45_kernel_args_t *Args);

void s64_kernel(s64_kernel_args_t *Args);

void s84_kernel(s84_kernel_args_t *Args);

void s184_kernel(s184_kernel_args_t *Args);

void s204_kernel(s204_kernel_args_t *Args);

void s224_kernel(s224_kernel_args_t *Args);

void expr_6(expr_6_args_t *Args);

void expr_19(expr_19_args_t *Args);

void expr_20(expr_20_args_t *Args);

void expr_21(expr_21_args_t *Args);

void expr_22(expr_22_args_t *Args);

void expr_23(expr_23_args_t *Args);

void expr_24(expr_24_args_t *Args);

void expr_7(expr_7_args_t *Args);

void expr_8(expr_8_args_t *Args);

void expr_9(expr_9_args_t *Args);

void expr_10(expr_10_args_t *Args);

void expr_12(expr_12_args_t *Args);

void expr_13(expr_13_args_t *Args);

void expr_15(expr_15_args_t *Args);

void expr_25(expr_25_args_t *Args);

void expr_27(expr_27_args_t *Args);

void expr_28(expr_28_args_t *Args);

void expr_30(expr_30_args_t *Args);

void expr_31(expr_31_args_t *Args);

void expr_33(expr_33_args_t *Args);

void expr_2(expr_2_args_t *Args);

void expr_2_1(expr_2_1_args_t *Args);

void expr_2_2(expr_2_2_args_t *Args);

void expr_2_3(expr_2_3_args_t *Args);

void expr_2_4(expr_2_4_args_t *Args);

void expr_2_5(expr_2_5_args_t *Args);


#endif // MOBV3SSDLITE_BASIC_KERNELS_H