/* 
 * File:   reverse.h
 * Author: xy
 *
 * Created on October 12, 2013, 10:42 AM
 */

#ifndef REVERSE_H
#define	REVERSE_H

#ifdef	__cplusplus
extern "C" {
#endif
    

struct STARLIST{
    int id;
    float ra;
    float dec;
};

float *sum(float *array, float *result, int len);
void sum1(struct STARLIST *starlist, int length);


#ifdef	__cplusplus
}
#endif

#endif	/* REVERSE_H */

