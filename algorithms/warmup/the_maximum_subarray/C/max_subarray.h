#ifndef MAX_SUBARRAY_H
#define MAX_SUBARRAY_H

/****************************************/
/***    Maximum Subarray Algorithms   ***/
/****************************************/

//  MAXIMUM CONTIGUOUS SUBARRAY
//
//  this will find the largest contiguous (adjacent values)
//  sub-array within the array passed, and return the sum
//
//  PARAMETERS:
//    INT *:  native c-array
//    INT:    length of c-array passed
//
//  RETURN:
//    INT: sum of the max sub array

int max_subarr_contig (int *array, int length);

//  MAXIMUM NON-CONTIGUOUS SUBARRAY
//  
//  Returns the sum of the largest subarray that is
//  non-contiguous, does not require adjacency

int max_subarr_non_contig (int *array, int length);
#endif