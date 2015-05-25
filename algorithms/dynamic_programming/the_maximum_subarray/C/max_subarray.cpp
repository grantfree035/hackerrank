#include "max_subarray.h"


/******************************************/
/***    find Max Contiguous Subarray    ***/
/******************************************/

int max_subarr_contig (int *arr, int len)
  {
  // set initial values
  int n, final_sum;
  int cur_sum = 0;
  int cur_ind = -1;
  int best_sum = 0;
  int best_start_ind = -1;
  int best_end_ind = -1;
  
  
  // find max contiguous subarray
  for (int j=0; j < len; ++j)
    {
    // get next sum
    n = cur_sum + arr [j];
    
    // check that sum is positive
    if (n > 0)
      {
      // set current index if cur_sum is 0
      if (cur_sum == 0)
        cur_ind = j;
      
      // set current sum
      cur_sum = n;
      }
    else
      cur_sum = 0;
    
    // check if current sum is best sum
    if (cur_sum > best_sum)
      {
      // set new best sum
      best_sum = cur_sum;
      
      // set indexes
      best_start_ind = cur_ind;
      best_end_ind = j;
      }
    }
  
  // Check if an contiguous array was found
  // if not: then find the largest num in the array
  
  // this is smallest number that may be given
  int best_num = -10000;
  
  if (best_sum == 0)
    {
    // find largest num
    for (int j=0; j < len; ++j)
      {
      // save num for min overhead
      n = arr [j];
      
      // check if num is best num
      if (n > best_num)
        best_num = n;
      else;
      }
    
    // largest num found
    final_sum = best_num;
    }
  else
    {
    // largest contiguous sum exist
    final_sum = best_sum;
    }
    
  return final_sum;
  }


/******************************************/
/***  find Max Non-Contiguous Subarray  ***/
/******************************************/

int max_subarr_non_contig (int *arr, int len)
  {
  // declare var
  int max = 0;
  int n, final_sum;
  
  // find largest sum (non-contig)
  for (int j=0; j < len; ++j)
    {
    // save value in temp var, less overhead call
    n = arr [j];
    
    // if var is possitive, add to max
    if (n > 0)
      max += n;
    }
  
  // find largest num if no positive #'s exist
  if (max == 0)
    {
    // find the largest integer in array
    max = -1000;
    
    // iterate through array
    for (int j=0; j < len; ++j)
      {
      // principle of locality
      n = arr [j];
      
      // check if in is largest max
      if (n > max)
        max = n;
      }
    
    // found largest num
    final_sum = max;
    }
  else
    {
    // largest num exist
    final_sum = max;
    }
  
  return final_sum;
  }