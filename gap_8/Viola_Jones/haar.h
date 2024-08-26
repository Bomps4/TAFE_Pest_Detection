 /* Copyright (C) 2023-2024 University of Bologna, Italy.
 *  Created on: Apr 21, 2022
 *      Author: olmo baldoni
 *      email:  olmo.baldoni@studio.unibo.it
 *  Modified by 
 *          Carlo Montanari calo.montanari4@studio.unibo.it
*/

#ifndef INC_HAAR_H_
#define INC_HAAR_H_
/***************************Begin User Header*******************************/
#include <stdint.h>
#include "image.h"
#include "pmsis.h"



/***************************End User Header*********************************/
/***************************Begin Private define****************************/

/*
 * detections buffer size
 */

#define maxsize 100


typedef struct{
int area;
int variance_area2;
} THR_Data;


typedef struct {
	int n_stages;						//number of stages in the cascade
	int total_nodes;					//total number of features
	int total_rectangles;				//total number of rectangles making up the features
	float scale;
	MySize orig_window_size;			//detector size

	MyIntImage	*sum;					//integral image
	MyIntImage	*sqsum;					//square integral image

	uint8_t *stages_array;				//number of features per stage
	int16_t *stages_thresh_array;		//stages thresholds
	int16_t *tree_tresh_array;			//features threshold (1 per feature)
	int16_t *alpha1_array;				//alpha1 array (1 per feature)
	int16_t *alpha2_array;				//alpha2 array (1 per feature)
	int8_t *num_rectangles_array;		//number of rectangles per features (1 per feature)
	int8_t *weights_array;				//rectangles weights (1 per rectangle)
	int8_t *rectangles_array;			//array containing the coordinates of each rectangle that makes the features (4 per rectangle)
	} MyCascade;

/***************************End User Struct*********************************/
/***************************Begin Exported*********************************/

extern int top;
extern int count;
extern PI_L1 MyCascade l1_cascade;
extern MyRect detections[];
extern PI_L1 uint8_t l1_insect_stages_array[];
extern PI_L1 int16_t l1_insect_stages_thresh_array[];
extern PI_L1 int16_t l1_insect_node_thresh_array[];
extern PI_L1 int16_t l1_insect_alpha1_array[];
extern PI_L1 int16_t l1_insect_alpha2_array[];
extern PI_L1 int8_t  l1_insect_num_rectangles_array[];
extern PI_L1 int8_t  l1_insect_weights_array[];
extern PI_L1 int8_t  l1_insect_rectangles_array[];
/***************************End Exported*********************************/
/***************************Begin User Function*****************************/
void loadCascade(MyCascade *cascade);
void detectInsects (MyImage *_nneighbor, MyIntImage *_intimage,MyIntImage *_intimagesq, MyCascade *cascade, float scaleFactor, MyPoint *final_offset);
void nearestNeighbor(MyImage *src, MyImage *dst);
void integralImages(MyImage *src, MyIntImage *sum, MyIntImage *sqsum);
void processCurrentScale(MyCascade *_cascade, float _factor, MyIntImage *_sum, MyIntImage *_sqsum, MyPoint *final_offset);
int runCascadeClassifier(MyCascade *_cascade, MyPoint pt);
int evalWeakClassifier(MyCascade *_cascade, int variance, int x, int y, int w_index, int r_index, int t_index);
int isfull();
void load_cl_l1_cascade(MyCascade *l2_cascade);
void free_cl_l1_cascade();
void push (MyRect data);
// void dumpResult(MyRect results,FILE* fp, int top);
/***************************End User Function*******************************/

#endif /* INC_HAAR_H_ */
