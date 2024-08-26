#ifndef __MOBV3SSDLITEKERNEL_H__
#define __MOBV3SSDLITEKERNEL_H__

#include "AutoTilerLibTypes.h"
#include "Gap.h"
#include "Mobv3SSDLite.h"
#include "CNN_BasicKernels_SQ8.h"
#include "Expression_Kernels.h"
#define _Mobv3SSDLite_L1_Memory_SIZE 115696
#define _Mobv3SSDLite_L2_Memory_SIZE 288744
#define _Mobv3SSDLite_L2_Memory_Dyn_SIZE 861256
extern char *Mobv3SSDLite_L1_Memory; /* Size given for generation: 115712 bytes, used: 115696 bytes */
extern char *Mobv3SSDLite_L2_Memory; /* Size used for generation (static): 288744 bytes */
extern char *Mobv3SSDLite_L2_Memory_Dyn; /* Size used for generation (dynamic): 861256 bytes */
extern void S3_Conv2d_16x3x3x3_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S6_Conv2d_16x3x3x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S9_Conv2d_16x1x1x16(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S10_MatAdd_128x160x16(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S13_Conv2d_64x1x1x16_Relu(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S16_Conv2d_64x3x3x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S19_Conv2d_24x1x1x64(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S22_Conv2d_72x1x1x24_Relu(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S25_Conv2d_72x3x3x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S28_Conv2d_24x1x1x72(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S29_MatAdd_64x80x24(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S32_Conv2d_72x1x1x24_Relu(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S35_Conv2d_72x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S36_Op__backbone_features_0_features_0_4_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S37_Op__backbone_features_0_features_0_4_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S41_Conv2d_24x1x1x72_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S44_Conv2d_72x1x1x24_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S45_Op_expr_16(
		signed char * __restrict__ expr_16_in_0,
		signed char * __restrict__ expr_16_in_1,
		signed char * __restrict__ expr_16_out_0);
extern void S48_Conv2d_40x1x1x72(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S51_Conv2d_120x1x1x40_Relu(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S54_Conv2d_120x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S55_Op__backbone_features_0_features_0_5_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S56_Op__backbone_features_0_features_0_5_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S60_Conv2d_32x1x1x120_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S63_Conv2d_120x1x1x32_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S64_Op_expr_17(
		signed char * __restrict__ expr_17_in_0,
		signed char * __restrict__ expr_17_in_1,
		signed char * __restrict__ expr_17_out_0);
extern void S67_Conv2d_40x1x1x120(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S68_MatAdd_32x40x40(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S71_Conv2d_120x1x1x40_Relu(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S74_Conv2d_120x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S75_Op__backbone_features_0_features_0_6_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S76_Op__backbone_features_0_features_0_6_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S80_Conv2d_32x1x1x120_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S83_Conv2d_120x1x1x32_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S84_Op_expr_18(
		signed char * __restrict__ expr_18_in_0,
		signed char * __restrict__ expr_18_in_1,
		signed char * __restrict__ expr_18_out_0);
extern void S87_Conv2d_40x1x1x120(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S88_MatAdd_32x40x40(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S91_Conv2d_240x1x1x40_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S94_Conv2d_240x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S97_Conv2d_80x1x1x240(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S98_Op__backbone_features_0_features_0_8_block_block_0_block_0_0_Conv_fusion_qin0(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S101_Conv2d_200x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S104_Conv2d_200x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S107_Conv2d_80x1x1x200(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S108_MatAdd_16x20x80(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S111_Conv2d_184x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S114_Conv2d_184x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S117_Conv2d_80x1x1x184(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S118_MatAdd_16x20x80(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S121_Conv2d_184x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S124_Conv2d_184x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S127_Conv2d_80x1x1x184(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S128_MatAdd_16x20x80(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S131_Conv2d_480x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S134_Conv2d_480x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S135_Op__backbone_features_0_features_0_11_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S136_Op__backbone_features_0_features_0_11_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S140_Conv2d_120x1x1x480_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S143_Conv2d_480x1x1x120_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S144_Op_expr_11(
		signed char * __restrict__ expr_11_in_0,
		signed char * __restrict__ expr_11_in_1,
		signed char * __restrict__ expr_11_out_0);
extern void S147_Conv2d_112x1x1x480(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S148_Op__backbone_features_0_features_0_12_block_block_0_block_0_0_Conv_fusion_qin0(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S151_Conv2d_672x1x1x112_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S154_Conv2d_672x3x3x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S155_Op__backbone_features_0_features_0_12_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S156_Op__backbone_features_0_features_0_12_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S160_Conv2d_168x1x1x672_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S163_Conv2d_672x1x1x168_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S164_Op_expr_14(
		signed char * __restrict__ expr_14_in_0,
		signed char * __restrict__ expr_14_in_1,
		signed char * __restrict__ expr_14_out_0);
extern void S167_Conv2d_112x1x1x672(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S168_MatAdd_16x20x112(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S171_Conv2d_672x1x1x112_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S174_Conv2d_672x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S175_Op__backbone_features_1_features_1_0_features_1_0_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S176_Op__backbone_features_1_features_1_0_features_1_0_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S180_Conv2d_168x1x1x672_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S183_Conv2d_672x1x1x168_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S184_Op_expr_26(
		signed char * __restrict__ expr_26_in_0,
		signed char * __restrict__ expr_26_in_1,
		signed char * __restrict__ expr_26_out_0);
extern void S187_Conv2d_80x1x1x672(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S188_Op__backbone_features_1_features_1_1_block_block_0_block_0_0_Conv_fusion_qin0(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S191_Conv2d_480x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S194_Conv2d_480x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S195_Op__backbone_features_1_features_1_1_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S196_Op__backbone_features_1_features_1_1_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S200_Conv2d_120x1x1x480_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S203_Conv2d_480x1x1x120_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S204_Op_expr_29(
		signed char * __restrict__ expr_29_in_0,
		signed char * __restrict__ expr_29_in_1,
		signed char * __restrict__ expr_29_out_0);
extern void S207_Conv2d_80x1x1x480(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S208_MatAdd_8x10x80(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S211_Conv2d_480x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S214_Conv2d_480x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S215_Op__backbone_features_1_features_1_2_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S216_Op__backbone_features_1_features_1_2_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S220_Conv2d_120x1x1x480_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S223_Conv2d_480x1x1x120_Hsigmoid(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S224_Op_expr_32(
		signed char * __restrict__ expr_32_in_0,
		signed char * __restrict__ expr_32_in_1,
		signed char * __restrict__ expr_32_out_0);
extern void S227_Conv2d_80x1x1x480(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S228_MatAdd_8x10x80(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S231_Conv2d_480x1x1x80_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S234_Conv2d_256x1x1x480_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S237_Conv2d_256x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S240_Conv2d_512x1x1x256_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S243_Conv2d_128x1x1x512_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S246_Conv2d_128x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S249_Conv2d_256x1x1x128_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S252_Conv2d_128x1x1x256_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S255_Conv2d_128x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S258_Conv2d_256x1x1x128_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S261_Conv2d_64x1x1x256_Relu6(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S264_Conv2d_64x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S267_Conv2d_128x1x1x64_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S270_Conv2d_672x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S273_Conv2d_24x1x1x672_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S277_Conv2d_480x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S281_Conv2d_512x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S285_Conv2d_256x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S291_Conv2d_128x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S311_Conv2d_672x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S312_Conv2d_186x1x1x672(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S315_Conv2d_24x1x1x480_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S318_Conv2d_24x1x1x512_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S321_Conv2d_24x1x1x256_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S325_Conv2d_24x1x1x128_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S328_Conv2d_480x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S330_Conv2d_512x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S332_Conv2d_256x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S333_Conv2d_24x1x1x256_Custom(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S336_Op__Split(
		signed char * __restrict__ In,
		signed char * __restrict__ Out1,
		signed char * __restrict__ Out2,
		signed char * __restrict__ Out3,
		signed char * __restrict__ Out4);
extern void S342_Conv2d_256x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S344_Conv2d_256x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S346_Conv2d_128x3x3x1_Relu6(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S348_Conv2d_186x1x1x480(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S351_Conv2d_186x1x1x512(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S354_Conv2d_186x1x1x256(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S357_Conv2d_186x1x1x256(
		signed char * __restrict__ In1,
		signed char * __restrict__ In2,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S360_Conv2d_186x1x1x128(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S363_SoftMax(
		signed char * __restrict__ In,
		short int * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S366_Op_expr_1(
		signed char * __restrict__ expr_1_in_0,
		signed char * __restrict__ expr_1_in_1,
		signed char * __restrict__ expr_1_in_2,
		signed char * __restrict__ expr_1_in_3,
		signed char * __restrict__ expr_1_in_4,
		signed char * __restrict__ expr_1_out_0,
		signed char * __restrict__ expr_1_out_1);
extern void S372_Op_expr_0(
		signed char * __restrict__ expr_0_in_0,
		signed char * __restrict__ expr_0_in_1,
		signed char * __restrict__ expr_0_in_2,
		signed char * __restrict__ expr_0_in_3,
		signed char * __restrict__ expr_0_in_4,
		signed char * __restrict__ expr_0_out_0,
		signed char * __restrict__ expr_0_out_1);
extern int Mobv3SSDLiteCNN_Construct();
extern int Mobv3SSDLiteCNN_Destruct();
extern int Mobv3SSDLiteCNN_Memory(AT_MEM_TYPE Which);
extern signed char * __restrict__ Input_1;
extern signed char * __restrict__ Output_1;
extern signed char * __restrict__ Output_2;
extern signed char * __restrict__ Output_3;
extern signed char * __restrict__ Output_4;
extern signed short * __restrict__ Output_5;
extern int Mobv3SSDLiteCNN(
);
extern unsigned int AT_GraphPerf[140];
extern unsigned int AT_GraphPerf_CNN_Total;
extern char * AT_GraphNodeNames[140];
extern unsigned int AT_GraphOperInfosNames[140];
#endif
