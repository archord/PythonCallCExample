/* 
 * File:   reverse.c
 * Author: xy
 *
 * Created on October 12, 2013, 10:42 AM
 */

#include <stdio.h>
#include <stdlib.h>

float *sum(float *array, float *result, int len){
    int i;
    float sum = 0;
    for(i=0; i<len; i++){
        sum += array[i];
        result[i] = sum;
    }
    return result;
}
