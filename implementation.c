#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "utilities.h"  // DO NOT REMOVE this line
#include "implementation_reference.h"   // DO NOT REMOVE this line

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image up
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveUp(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveUpReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image left
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveRight(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveRightReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image up
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveDown(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveDownReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param offset - number of pixels to shift the object in bitmap image right
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note1: White pixels RGB(255,255,255) are treated as background. Object in the image refers to non-white pixels.
 * Note2: You can assume the object will never be moved off the screen
 **********************************************************************************************************************/
unsigned char *processMoveLeft(unsigned char *buffer_frame, unsigned width, unsigned height, int offset) {
    return processMoveLeftReference(buffer_frame, width, height, offset);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param rotate_iteration - rotate object inside frame buffer clockwise by 90 degrees, <iteration> times
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note: You can assume the frame will always be square and you will be rotating the entire image
 **********************************************************************************************************************/
unsigned char *processRotateCW(unsigned char *buffer_frame, unsigned width, unsigned height,
                               int rotate_iteration) {
    return processRotateCWReference(buffer_frame, width, height, rotate_iteration);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param rotate_iteration - rotate object inside frame buffer counter clockwise by 90 degrees, <iteration> times
 * @return - pointer pointing a buffer storing a modified 24-bit bitmap image
 * Note: You can assume the frame will always be square and you will be rotating the entire image
 **********************************************************************************************************************/
unsigned char *processRotateCCW(unsigned char *buffer_frame, unsigned width, unsigned height,
                                int rotate_iteration) {
    return processRotateCCWReference(buffer_frame, width, height, rotate_iteration);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param _unused - this field is unused
 * @return
 **********************************************************************************************************************/
unsigned char *processMirrorX(unsigned char *buffer_frame, unsigned int width, unsigned int height, int _unused) {
    return processMirrorXReference(buffer_frame, width, height, _unused);
}

/***********************************************************************************************************************
 * @param buffer_frame - pointer pointing to a buffer storing the imported 24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param _unused - this field is unused
 * @return
 **********************************************************************************************************************/
unsigned char *processMirrorY(unsigned char *buffer_frame, unsigned width, unsigned height, int _unused) {
    return processMirrorYReference(buffer_frame, width, height, _unused);
}

/***********************************************************************************************************************
 * WARNING: Do not modify the implementation_driver and team info prototype (name, parameter, return value) !!!
 *          Do not forget to modify the team_name and team member information !!!
 **********************************************************************************************************************/
void print_team_info(){
    // Please modify this field with something interesting
    char team_name[] = "OH NO";

    // Please fill in your information
    char student1_first_name[] = "Zhaotong";
    char student1_last_name[] = "Zheng";
    char student1_student_number[] = "1001651152";

    // Please fill in your partner's information
    // If yon't have partner, do not modify this
    char student2_first_name[] = "Yue Hin";
    char student2_last_name[] = "Lau";
    char student2_student_number[] = "1001408069";

    // Printing out team information
    printf("*******************************************************************************************************\n");
    printf("Team Information:\n");
    printf("\tteam_name: %s\n", team_name);
    printf("\tstudent1_first_name: %s\n", student1_first_name);
    printf("\tstudent1_last_name: %s\n", student1_last_name);
    printf("\tstudent1_student_number: %s\n", student1_student_number);
    printf("\tstudent2_first_name: %s\n", student2_first_name);
    printf("\tstudent2_last_name: %s\n", student2_last_name);
    printf("\tstudent2_student_number: %s\n", student2_student_number);
}

/***********************************************************************************************************************
 * WARNING: Do not modify the implementation_driver and team info prototype (name, parameter, return value) !!!
 *          You can modify anything else in this file
 ***********************************************************************************************************************
 * @param sensor_values - structure stores parsed key value pairs of program instructions
 * @param sensor_values_count - number of valid sensor values parsed from sensor log file or commandline console
 * @param frame_buffer - pointer pointing to a buffer storing the imported  24-bit bitmap image
 * @param width - width of the imported 24-bit bitmap image
 * @param height - height of the imported 24-bit bitmap image
 * @param grading_mode - turns off verification and turn on instrumentation
 ***********************************************************************************************************************
 *
 **********************************************************************************************************************/

struct coordinates {
    int x_coordinate;
    int y_coordinate;
};

int horizontal_shift_matrix[3][3]= {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
};
int vertical_shift_matrix[3][3]= {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
};
int rotation_90_CCW_matrix[3][3] = {
		{0, -1, 0},
		{1, 0, 0},
		{0, 0, 1}
};
int rotation_180_CCW_matrix[3][3] = {
		{-1, 0, 0},
		{0, -1, 0},
		{0, 0, 1}
};
int rotation_270_CCW_matrix[3][3] = {
		{0, 1, 0},
		{-1, 0, 0},
		{0, 0, 1}
};

int reflection_y_matrix[3][3] = {
		{-1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
};

int reflection_x_matrix[3][3] = {
		{1, 0, 0},
		{0, -1, 0},
		{0, 0, 1}
};

int reset_matrix[3][3] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
};

/*
//11
int rotate90_mirrorY[2][2] = {
		{0, 1},
		{1, 0},
};

//12
int rotate180_mirrorY[2][2] = {
		{1, 0},
		{0, -1},
};

//13
int rotate270_mirrorY[2][2] = {
		{0, -1},
		{-1, 0},
};

//01
int rotation_90[2][2] = {
		{0, -1},
		{1, 0},
};

//02
int rotation_180[2][2] = {
		{-1, 0},
		{0, -1},
};

//03
int rotation_270[2][2] = {
		{0, 1},
		{-1, 0},
};

//10
int reflection_y[2][2] = {
		{-1, 0},
		{0, 1},
};

//00
int nochange[2][2] = {
		{1, 0},
		{0, 1},
};
*/

//rotate then reflect, RExRO
int final_reflection_and_rotation(int r0c0, int r0c1, int r1c0, int r1c1) {
	if (r0c0 == 0) {
		if (r0c1 == 1) {
			if (r1c0 == 1) {
				if (r1c1 == 0)
					//0110
					return 11;
				else {
					//assert(0);
					return -1;
				}
			} else if (r1c0 == -1) {
				if (r1c1 == 0)
					//01-10
					return 3;
				else {
					//assert(0);
					return -1;
				}
			} else {
				//assert(0);
				return -1;
			}
		} else if (r0c1 == -1) {
			if (r1c0 == 1) {
				if (r1c1 == 0)
					//0-110
					return 1;
				else {
					//assert(0);
					return -1;
				}
			} else if (r1c0 == -1) {
				if (r1c1 == 0)
					//0-1-10
					return 13;
				else {
					//assert(0);
					return -1;
				}
			}

		} else {
			//assert(0);
			return -1;
		}
	} else if (r0c0 == 1) {
		if (r0c1 == 0 && r1c0 == 0){
			if (r1c1 == 1)
				//1001
				return 0;
			else if (r1c1 == -1)
				//100-1
				return 12;
			else {
				//assert(0);
				return -1;
			}
		} else {
			//assert(0);
			return -1;
		}
	} else if (r0c0 == -1){
		if (r0c1 == 0 && r1c0 == 0){
			if (r1c1 == 1)
				//-1001
				return 10;
			else if (r1c1 == -1)
				//-100-1
				return 2;
			else {
				//assert(0);
				return -1;
			}
		} else {
			//assert(0);
			return -1;
		}
	}
}

void findImage(unsigned char *buffer_frame, unsigned int width, unsigned int height, int *topOffset, int *leftOffset, int *bottomOffset, int *rightOffset) {

    bool topFound = false;
    bool bottomFound = false;

    int position = 0;

    //START FROM ORIGIN (TOP LEFT), TO FIND TOPOFFSET AND LEFTOFFSET
    for (int row = 0; row < height; row++) {
        for (int column = 0; column < width; column++) {
            position = row * width * 3 + column * 3;
            if (buffer_frame[position] == 255 && buffer_frame[position + 1] == 255 && buffer_frame[position + 2] == 255) {
                continue;
            }
            else {
                if (column < *leftOffset){
                    *leftOffset = column;
                }
                break;
            }
        }
        if (buffer_frame[position] == 255 && buffer_frame[position + 1] == 255 && buffer_frame[position + 2] == 255) {
                continue;
        }
        else {
            if (topFound == false) {
                *topOffset = row;
                topFound = true;
            }
        }
    }

    //START FROM BOTTOM RIGHT TO FIND BOTTOMOFFSET AND RIGHTOFFSET
    for (int row = height - 1; row >= 0; row--) {
        for (int column = width - 1; column >= 0; column--) {
            position = row * width * 3 + column * 3;
            if (buffer_frame[position] == 255 && buffer_frame[position + 1] == 255 && buffer_frame[position + 2] == 255) {
                continue;
            }
            else {
                if (column > *rightOffset){
                    *rightOffset = column;
                }
                break;
            }
        }
        if (buffer_frame[position] == 255 && buffer_frame[position + 1] == 255 && buffer_frame[position + 2] == 255) {
                continue;
        }
        else {
            if (bottomFound == false) {
                *bottomOffset = row;
                bottomFound = true;
            }
        }
    }
    //printf("leftOffset = %d, rightOffset = %d, topOffset = %d, bottomOffset = %d\n", leftOffset, rightOffset, topOffset, bottomOffset);
}

void translate_offset_to_coordinates(
		unsigned int width, unsigned int height,
		int topOffset, int leftOffset, int bottomOffset, int rightOffset,
		struct coordinates* topLeft, struct coordinates* topRight, struct coordinates* botLeft, struct coordinates* botRight) {

	topLeft->x_coordinate = leftOffset - width/2;
	topLeft->y_coordinate = height/2 - topOffset;

	topRight->x_coordinate = rightOffset - width/2;
	topRight->y_coordinate = height/2 - topOffset;

	botLeft->x_coordinate = leftOffset - width/2;
	botLeft->y_coordinate = height/2 - bottomOffset;

	botRight->x_coordinate = rightOffset - width/2;
	botRight->y_coordinate = height/2 - bottomOffset;

	printf("Translating offset to coordinates\n");
	printf("leftOffset = %d, rightOffset = %d, topOffset = %d, bottomOffset = %d\n", leftOffset, rightOffset, topOffset, bottomOffset);
	printf("TopLeft coordinates: (%d, %d)\n", topLeft->x_coordinate, topLeft->y_coordinate);
	printf("TopRight coordinates: (%d, %d)\n", topRight->x_coordinate, topRight->y_coordinate);
	printf("BotLeft coordinates: (%d, %d)\n", botLeft->x_coordinate, botLeft->y_coordinate);
	printf("BotRight coordinates: (%d, %d)\n", botRight->x_coordinate, botRight->y_coordinate);
}

void translate_coordinates_to_offset(
		unsigned int width, unsigned int height,
		int *topOffset, int *leftOffset, int *bottomOffset, int *rightOffset,
		struct coordinates* topLeft, struct coordinates* topRight, struct coordinates* botLeft, struct coordinates* botRight) {

	*leftOffset = topLeft->x_coordinate + width/2;
	*rightOffset = botRight->x_coordinate + width/2;
	*topOffset = height/2 - topLeft->y_coordinate;
	*bottomOffset = height/2 - botRight->y_coordinate;
	printf("Translating coordinates to offset");
	printf("leftOffset = %d, rightOffset = %d, topOffset = %d, bottomOffset = %d\n", *leftOffset, *rightOffset, *topOffset, *bottomOffset);
}


void *eraseImage(unsigned char *buffer_frame, unsigned width, unsigned height, int left, int top, int bottom, int right) {
    for (int row = top; row <= bottom; row++) {
        for (int column = left; column <= right; column++) {
            int position = row * width * 3 + column * 3;
            //CAN ADD A CHECK FOR WHITE VALUES TO SEE IF THAT HELPS IMPROVE PERFORMANCE
            buffer_frame[position] = 255;
            buffer_frame[position + 1] = 255;
            buffer_frame[position + 2] = 255;
        }
    }
}


int wrongmatrix=0;



void multiply_two_matrices(int firstMatrix[][3], int secondMatrix[][3], int outputMatrix[][3]) {
	int i,j, k;
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++){
			outputMatrix[i][j] = 0;
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				outputMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}

void copy_two_matrices(int matrixOriginal[3][3], int matrixCopy[3][3]) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			matrixCopy[i][j] = matrixOriginal[i][j];
		}
	}
}

void implementation_driver(struct kv *sensor_values, int sensor_values_count, unsigned char *frame_buffer,
                           unsigned int width, unsigned int height, bool grading_mode) {
    int processed_frames = 0;
    int number_of_mirrorX = 0;
    int number_of_mirrorY = 0;
    int number_of_rotation = 0;
    int current_matrix[3][3]= {
    		{1, 0, 0},
    		{0, 1, 0},
    		{0, 0, 1}
    };
    int output_matrix[3][3]= {
    		{0, 0, 0},
    		{0, 0, 0},
    		{0, 0, 0}
    };

    struct coordinates topLeft, topRight, botLeft, botRight;

    int leftOffset = 100000;
        int rightOffset = 0;
        int topOffset = 0;
        int bottomOffset = 0;

        //PROCESS BITMAP TO LOOK FOR IMAGE WITHIN BITMAP
        findImage(frame_buffer, width, height, &topOffset, &leftOffset, &bottomOffset, &rightOffset);

        translate_offset_to_coordinates(width, height, topOffset, leftOffset, bottomOffset, rightOffset, &topLeft, &topRight, &botLeft, &botRight);

        translate_coordinates_to_offset(width, height, &topOffset, &leftOffset, &bottomOffset, &rightOffset, &topLeft, &topRight, &botLeft, &botRight);

        //test if translate correctly

    for (int sensorValueIdx = 0; sensorValueIdx < sensor_values_count; sensorValueIdx++) {
//        printf("Processing sensor value #%d: %s, %d\n", sensorValueIdx, sensor_values[sensorValueIdx].key,
//               sensor_values[sensorValueIdx].value);
        if (!strcmp(sensor_values[sensorValueIdx].key, "W")) {
            //frame_buffer = processMoveUp(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	vertical_shift_matrix[1][2] = sensor_values[sensorValueIdx].value;
        	multiply_two_matrices(vertical_shift_matrix, current_matrix, output_matrix);
        	if (wrongmatrix == 1) {
        		printf("W\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "A")) {
            //frame_buffer = processMoveLeft(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	horizontal_shift_matrix[0][2] = -sensor_values[sensorValueIdx].value;
        	multiply_two_matrices(horizontal_shift_matrix, current_matrix, output_matrix);
        	if (wrongmatrix == 1) {
        		printf("A\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "S")) {
            //frame_buffer = processMoveDown(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	vertical_shift_matrix[1][2] = -sensor_values[sensorValueIdx].value;
        	multiply_two_matrices(vertical_shift_matrix, current_matrix, output_matrix);
        	if (wrongmatrix == 1) {
        		printf("S\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "D")) {
            //frame_buffer = processMoveRight(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	horizontal_shift_matrix[0][2] = sensor_values[sensorValueIdx].value;
        	multiply_two_matrices(horizontal_shift_matrix, current_matrix, output_matrix);
        	if (wrongmatrix == 1) {
        		printf("D\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "CCW")) {
            //frame_buffer = processRotateCW(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	if (sensor_values[sensorValueIdx].value >= 0) {
            	if (sensor_values[sensorValueIdx].value % 4 == 1) {
            		multiply_two_matrices(rotation_90_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 1;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 2) {
            		multiply_two_matrices(rotation_180_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 2;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 3) {
            		multiply_two_matrices(rotation_270_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 3;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 0) {
            		copy_two_matrices(current_matrix, output_matrix);
            	} else
            		printf("Died by rotation negatives");
        	} else {
                //frame_buffer = processRotateCCW(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
            	if (-sensor_values[sensorValueIdx].value % 4 == 1) {
            		multiply_two_matrices(rotation_270_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 3;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 2) {
            		multiply_two_matrices(rotation_180_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 2;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 3) {
            		multiply_two_matrices(rotation_90_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 1;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 0) {
            		copy_two_matrices(current_matrix, output_matrix);
            	} else
            		printf("Died by rotation negatives");
        	}


        	if (wrongmatrix == 1) {
        		printf("CW\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "CW")) {
        	if (sensor_values[sensorValueIdx].value >= 0) {
                //frame_buffer = processRotateCCW(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
            	if (sensor_values[sensorValueIdx].value % 4 == 1) {
            		multiply_two_matrices(rotation_270_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 3;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 2) {
            		multiply_two_matrices(rotation_180_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 2;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 3) {
            		multiply_two_matrices(rotation_90_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 1;
            	} else if (sensor_values[sensorValueIdx].value % 4 == 0) {
            		copy_two_matrices(current_matrix, output_matrix);
            	} else
            		printf("Died by rotation negatives");

        	} else {
            	if (-sensor_values[sensorValueIdx].value % 4 == 1) {
            		multiply_two_matrices(rotation_90_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 1;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 2) {
            		multiply_two_matrices(rotation_180_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 2;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 3) {
            		multiply_two_matrices(rotation_270_CCW_matrix, current_matrix, output_matrix);
            		number_of_rotation = number_of_rotation + 3;
            	} else if (-sensor_values[sensorValueIdx].value % 4 == 0) {
            		copy_two_matrices(current_matrix, output_matrix);
            	} else
            		printf("Died by rotation negatives");
        	}

        	if (wrongmatrix == 1) {
        		printf("CCW\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "MX")) {
            //frame_buffer = processMirrorX(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	multiply_two_matrices(reflection_x_matrix, current_matrix, output_matrix);
        	number_of_mirrorX++;
        	if (wrongmatrix == 1) {
        		printf("MX\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        } else if (!strcmp(sensor_values[sensorValueIdx].key, "MY")) {
            //frame_buffer = processMirrorY(frame_buffer, width, height, sensor_values[sensorValueIdx].value);
        	multiply_two_matrices(reflection_y_matrix, current_matrix, output_matrix);
        	number_of_mirrorY++;
        	if (wrongmatrix == 1) {
        		printf("MY\n");
        		wrongmatrix = 2;
        	}
//            printBMP(width, height, frame_buffer);
        }
        processed_frames += 1;
        if (processed_frames % 25 == 0) {
        	int reflect_and_rotate = final_reflection_and_rotation(output_matrix[0][0], output_matrix[0][1], output_matrix[1][0], output_matrix[1][1]);

//    			printf("Output Matrix: \n");
//    			printf("{%d, %d, %d}\n", output_matrix[0][0], output_matrix[0][1], output_matrix[0][2]);
//    			printf("{%d, %d, %d}\n", output_matrix[1][0], output_matrix[1][1], output_matrix[1][2]);
//    			printf("{%d, %d, %d}\n", output_matrix[2][0], output_matrix[2][1], output_matrix[2][2]);
//            if (reflect_and_rotate < 0) {
//        		printf("reflect_and_rotate is negative!\n");
//        	}
        	int rotate = reflect_and_rotate % 10;
        	int reflect = reflect_and_rotate / 10;
        	if (rotate != 0) {
        		//printf("reflect_and_rotate: %d\n", reflect_and_rotate);
        		//printf("Rotate: %d\n", rotate);
        		frame_buffer = processRotateCCW(frame_buffer, width, height, rotate);
        	}
        	if (reflect != 0){
        		//printf("Reflect: %d\n", reflect);
        		frame_buffer = processMirrorY(frame_buffer, width, height, 0);
        	}
        	if (output_matrix[0][2] != 0) {
        		frame_buffer = processMoveRight(frame_buffer, width, height, output_matrix[0][2]);
        	}
        	if (output_matrix[1][2] != 0) {
        		frame_buffer = processMoveUp(frame_buffer, width, height, output_matrix[1][2]);
        	}

            verifyFrame(frame_buffer, width, height, grading_mode);

			copy_two_matrices(reset_matrix, output_matrix);

        }


        copy_two_matrices(output_matrix, current_matrix);
    }
    return;
}
