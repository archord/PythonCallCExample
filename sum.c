/* 
 * File:   reverse.c
 * Author: xy
 *
 * Created on October 12, 2013, 10:42 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "sum.h"

float *sum(float *array, float *result, int len){
    int i;
    float sum = 0;
    for(i=0; i<len; i++){
        sum += array[i];
        result[i] = sum;
    }
    return result;
}


void sum1(struct STARLIST *starlist, int length){
    printf("from c environemt!\n");
    printf("length=%d\n", length);
    int i;
    float sum = 0;
    for(i=0; i<length; i++){
        sum += starlist[i].ra;
        starlist[i].dec = sum;
        printf("%f\n", sum);
    }
}
