#include "max_subarray.h"

int max_subarr_contig (int *array, int length)
  {
  /******************************************/
  /***    find Max Contiguous Subarray    ***/
  /******************************************/
  
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
  best_num = -10000;
  
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

int max_subarr_non_contig (int *array, int length)
  {
  // filler
  return 0;
  }