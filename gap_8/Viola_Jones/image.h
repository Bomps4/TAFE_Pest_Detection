 /* Copyright (C) 2023-2024 University of Bologna, Italy.
 *  Created on: Apr 21, 2022
 *      Author: olmo baldoni
 *      email:  olmo.baldoni@studio.unibo.it
 *  Modified by 
 *          Carlo Montanari calo.montanari4@studio.unibo.it
*/

#ifndef INC_IMAGE_H_
#define INC_IMAGE_H_



/*
 * struct for input image
 */

#define width_image 320
#define height_image 240

#define WIDTH_TILE	100
#define HEIGHT_TILE 120

typedef struct {
	int width;
	int height;
} MySize;

typedef struct {
	int x;
	int y;
} MyPoint;

typedef struct {
	int x;
	int y;
	int width;
	int height;
} MyRect;


typedef struct {
	int width;
	int height;
	unsigned char data[width_image*height_image];
} MyImage;

/*
 * struct for integral image
 */

typedef struct {
	int width;
	int height;
	int data[WIDTH_TILE*HEIGHT_TILE];
} MyIntImage;


void readImage(MyImage *image);
void Copy_tile_image (MyImage *tile, MyImage* src, int n_tile, int overlapp, MyPoint *final_offset);
void setImage(int width, int height, MyImage *image);
void setSumImage(int width, int height, MyIntImage *image);

extern unsigned char pixels[];







#endif/* INC_IMAGE_H_ */