 /* Copyright (C) 2023-2024 University of Bologna, Italy.
 *  Created on: Apr 21, 2022
 *      Author: olmo baldoni
 *      email:  olmo.baldoni@studio.unibo.it
 *  Modified by 
 *          Carlo Montanari calo.montanari4@studio.unibo.it
*/


#ifndef INC_CLUSTER_H_
#define INC_CLUSTER_H_

#include "pmsis.h"
#include "haar.h"
#include "image.h"
#define STACK_SIZE      1024


typedef struct {
    MyImage *image;
    MyImage *nneighbor;
    MyImage *current_tile;
    MyIntImage *intimage;
    MyIntImage *intimagesq;
    MySize minSize;
    MySize maxSize;
    MyCascade *cascade;
    float scaleFactor;
} ClusterParams;

typedef struct {
    MyCascade *cascade;
    int y2;
    int x2;
    float factor;
    MyPoint *final_offset;
} PCS_Params;


//perf counters
uint32_t instr_cnt;
uint32_t cycles_cnt;
uint32_t load_ext;
uint32_t cache_miss;


extern PI_L1 MyIntImage l1_intimage;
extern PI_L1 MySize l1_minSize;
extern PI_L1 MySize l1_maxSize;


MyImage* load_cl_l1_image(void);
void cluster_entry(void *arg);
void PCS_cluster(void *arg);
    





#endif 