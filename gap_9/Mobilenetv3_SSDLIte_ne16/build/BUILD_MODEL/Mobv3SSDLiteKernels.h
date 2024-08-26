#ifndef __MOBV3SSDLITEKERNEL_H__
#define __MOBV3SSDLITEKERNEL_H__

#include "AutoTilerLibTypes.h"
#include "Gap.h"
#include "Mobv3SSDLite.h"
#include "CNN_BasicKernels_SQ8.h"
#include "CNN_BasicKernels_NE16.h"
#include "Expression_Kernels.h"
#define _Mobv3SSDLite_L1_Memory_SIZE 115696
#define _Mobv3SSDLite_L2_Memory_SIZE 289836
#define _Mobv3SSDLite_L2_Memory_Dyn_SIZE 860160
extern char *Mobv3SSDLite_L1_Memory; /* Size given for generation: 115712 bytes, used: 115696 bytes */
extern char *Mobv3SSDLite_L2_Memory; /* Size used for generation (static): 289836 bytes */
extern char *Mobv3SSDLite_L2_Memory_Dyn; /* Size used for generation (dynamic): 860160 bytes */
extern void S3_Conv2d_16x3x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S6_Conv2d_16x1x3x3_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S9_Conv2d_16x16x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S10_MatAdd_128x160x16(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S13_Conv2d_64x16x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S16_Conv2d_64x1x3x3_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S19_Conv2d_24x64x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S22_Conv2d_72x24x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S25_Conv2d_72x1x3x3_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S28_Conv2d_24x72x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S29_MatAdd_64x80x24(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S32_Conv2d_72x24x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S33_Op__backbone_features_0_features_0_4_block_block_1_block_1_0_Conv_fusion_qin0(
		unsigned char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S36_Conv2d_72x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S37_Op__backbone_features_0_features_0_4_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S38_Op__backbone_features_0_features_0_4_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S40_Op__backbone_features_0_features_0_4_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S43_Conv2d_24x72x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S46_Conv2d_72x24x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S47_Op_expr_16(
		signed char * __restrict__ expr_16_in_0,
		signed char * __restrict__ expr_16_in_1,
		unsigned char * __restrict__ expr_16_out_0);
extern void S50_Conv2d_40x72x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S53_Conv2d_120x40x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S54_Op__backbone_features_0_features_0_5_block_block_1_block_1_0_Conv_fusion_qin0(
		unsigned char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S57_Conv2d_120x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S58_Op__backbone_features_0_features_0_5_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S59_Op__backbone_features_0_features_0_5_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S61_Op__backbone_features_0_features_0_5_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S64_Conv2d_32x120x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S67_Conv2d_120x32x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S68_Op_expr_17(
		signed char * __restrict__ expr_17_in_0,
		signed char * __restrict__ expr_17_in_1,
		unsigned char * __restrict__ expr_17_out_0);
extern void S71_Conv2d_40x120x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S72_MatAdd_32x40x40(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S75_Conv2d_120x40x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S76_Op__backbone_features_0_features_0_6_block_block_1_block_1_0_Conv_fusion_qin0(
		unsigned char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S79_Conv2d_120x5x5x1_Relu(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S80_Op__backbone_features_0_features_0_6_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S81_Op__backbone_features_0_features_0_6_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S83_Op__backbone_features_0_features_0_6_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S86_Conv2d_32x120x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S89_Conv2d_120x32x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S90_Op_expr_18(
		signed char * __restrict__ expr_18_in_0,
		signed char * __restrict__ expr_18_in_1,
		unsigned char * __restrict__ expr_18_out_0);
extern void S93_Conv2d_40x120x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S94_MatAdd_32x40x40(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S97_Conv2d_240x40x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S100_Conv2d_240x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S103_Conv2d_80x240x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S106_Conv2d_200x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S109_Conv2d_200x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S112_Conv2d_80x200x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S113_MatAdd_16x20x80(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S116_Conv2d_184x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S119_Conv2d_184x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S122_Conv2d_80x184x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S123_MatAdd_16x20x80(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S126_Conv2d_184x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S129_Conv2d_184x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S132_Conv2d_80x184x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S133_MatAdd_16x20x80(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S136_Conv2d_480x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S139_Conv2d_480x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S140_Op__backbone_features_0_features_0_11_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S141_Op__backbone_features_0_features_0_11_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S143_Op__backbone_features_0_features_0_11_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S146_Conv2d_120x480x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S149_Conv2d_480x120x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S150_Op_expr_11(
		signed char * __restrict__ expr_11_in_0,
		signed char * __restrict__ expr_11_in_1,
		unsigned char * __restrict__ expr_11_out_0);
extern void S153_Conv2d_112x480x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S156_Conv2d_672x112x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S159_Conv2d_672x1x3x3_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S160_Op__backbone_features_0_features_0_12_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S161_Op__backbone_features_0_features_0_12_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S163_Op__backbone_features_0_features_0_12_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S166_Conv2d_168x672x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S169_Conv2d_672x168x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S170_Op_expr_14(
		signed char * __restrict__ expr_14_in_0,
		signed char * __restrict__ expr_14_in_1,
		unsigned char * __restrict__ expr_14_out_0);
extern void S173_Conv2d_112x672x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S174_MatAdd_16x20x112(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S177_Conv2d_672x112x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S178_Op__head_regression_head_module_list_0_module_list_0_0_module_list_0_0_0_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S179_Op__head_classification_head_module_list_0_module_list_0_0_module_list_0_0_0_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S182_Conv2d_672x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S183_Op__backbone_features_1_features_1_0_features_1_0_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S184_Op__backbone_features_1_features_1_0_features_1_0_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S186_Op__backbone_features_1_features_1_0_features_1_0_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S189_Conv2d_168x672x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S192_Conv2d_672x168x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S193_Op_expr_26(
		signed char * __restrict__ expr_26_in_0,
		signed char * __restrict__ expr_26_in_1,
		unsigned char * __restrict__ expr_26_out_0);
extern void S196_Conv2d_80x672x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S199_Conv2d_480x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S202_Conv2d_480x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S203_Op__backbone_features_1_features_1_1_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S204_Op__backbone_features_1_features_1_1_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S206_Op__backbone_features_1_features_1_1_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S209_Conv2d_120x480x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S212_Conv2d_480x120x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S213_Op_expr_29(
		signed char * __restrict__ expr_29_in_0,
		signed char * __restrict__ expr_29_in_1,
		unsigned char * __restrict__ expr_29_out_0);
extern void S216_Conv2d_80x480x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S217_MatAdd_8x10x80(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S220_Conv2d_480x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S223_Conv2d_480x5x5x1_Custom(
		signed char * __restrict__ In,
		signed char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S224_Op__backbone_features_1_features_1_2_block_block_2_avgpool_GlobalAveragePool_trans(
		signed char * __restrict__ In,
		signed char * __restrict__ Out);
extern void S225_Op__backbone_features_1_features_1_2_block_block_2_avgpool_GlobalAveragePool(
		signed char * __restrict__ In,
		signed char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S227_Op__backbone_features_1_features_1_2_block_block_2_fc1_Conv_fusion_qin0(
		signed char * __restrict__ In,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S230_Conv2d_120x480x1x1_Relu(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S233_Conv2d_480x120x1x1_Hsigmoid(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S234_Op_expr_32(
		signed char * __restrict__ expr_32_in_0,
		signed char * __restrict__ expr_32_in_1,
		unsigned char * __restrict__ expr_32_out_0);
extern void S237_Conv2d_80x480x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S238_MatAdd_8x10x80(
		unsigned char * __restrict__ In1,
		unsigned char * __restrict__ In2,
		unsigned char * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S241_Conv2d_480x80x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S244_Conv2d_256x480x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S247_Conv2d_256x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S250_Conv2d_512x256x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S253_Conv2d_128x512x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S256_Conv2d_128x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S259_Conv2d_256x128x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S262_Conv2d_128x256x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S265_Conv2d_128x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S268_Conv2d_256x128x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S271_Conv2d_64x256x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S274_Conv2d_64x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S277_Conv2d_128x64x1x1_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S280_Conv2d_672x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S283_Conv2d_24x672x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S287_Conv2d_480x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S291_Conv2d_512x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S295_Conv2d_256x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S301_Conv2d_128x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S321_Conv2d_672x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S322_Conv2d_186x672x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S325_Conv2d_24x480x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S328_Conv2d_24x512x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S331_Conv2d_24x256x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S335_Conv2d_24x128x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S338_Conv2d_480x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S340_Conv2d_512x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S342_Conv2d_256x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S343_Conv2d_24x256x1x1_Custom(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S346_Op__Split(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Out1,
		unsigned char * __restrict__ Out2,
		unsigned char * __restrict__ Out3,
		unsigned char * __restrict__ Out4);
extern void S352_Conv2d_256x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S354_Conv2d_256x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S356_Conv2d_128x1x3x3_Relu6(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		unsigned char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S358_Conv2d_186x480x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S361_Conv2d_186x512x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S364_Conv2d_186x256x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S367_Conv2d_186x256x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S370_Conv2d_186x128x1x1(
		unsigned char * __restrict__ In,
		unsigned char * __restrict__ Filter,
		int * __restrict__ Bias,
		signed char * __restrict__ Out,
		unsigned char * __restrict__ Scale,
		signed char * __restrict__ ScaleN,
		signed char * __restrict__ Infos);
extern void S373_SoftMax(
		signed char * __restrict__ In,
		short int * __restrict__ Out,
		signed char * __restrict__ Infos);
extern void S376_Op_expr_1(
		unsigned char * __restrict__ expr_1_in_0,
		signed char * __restrict__ expr_1_in_1,
		signed char * __restrict__ expr_1_in_2,
		signed char * __restrict__ expr_1_in_3,
		unsigned char * __restrict__ expr_1_in_4,
		unsigned char * __restrict__ expr_1_out_0,
		unsigned char * __restrict__ expr_1_out_1);
extern void S382_Op_expr_0(
		unsigned char * __restrict__ expr_0_in_0,
		signed char * __restrict__ expr_0_in_1,
		signed char * __restrict__ expr_0_in_2,
		signed char * __restrict__ expr_0_in_3,
		unsigned char * __restrict__ expr_0_in_4,
		unsigned char * __restrict__ expr_0_out_0,
		unsigned char * __restrict__ expr_0_out_1);
extern int Mobv3SSDLiteCNN_Construct();
extern int Mobv3SSDLiteCNN_Destruct();
extern int Mobv3SSDLiteCNN_Memory(AT_MEM_TYPE Which);
extern unsigned char * __restrict__ Input_1;
extern unsigned char * __restrict__ Output_1;
extern unsigned char * __restrict__ Output_2;
extern unsigned char * __restrict__ Output_3;
extern unsigned char * __restrict__ Output_4;
extern signed short * __restrict__ Output_5;
extern int Mobv3SSDLiteCNN(
);
extern unsigned int AT_GraphPerf[150];
extern unsigned int AT_GraphPerf_CNN_Total;
extern char * AT_GraphNodeNames[150];
extern unsigned int AT_GraphOperInfosNames[150];
#endif
