#include <iostream>
using namespace std;

int main ()
  {
  // declare vars
  int tc, len, max, n;
  int cur_sum, cur_ind, best_sum, best_start_ind, best_end_ind;
  int best_num;
  int *arr;
  
  // get # of test cases
  cin >> tc;
  
  // iterate through each test case
  for (int i=0; i < tc; ++i)
    {
    // get length of array
    cin >> len;
    
    // create array
    arr = new int [len];
    
    // get values for array
    for (int j=0; j < len; ++j)
      cin >> arr [j];
    
    /******************************************/
    /***    find Max Contiguous Subarray    ***/
    /******************************************/
    
    // set initial values
    cur_sum = 0;
    cur_ind = -1;
    best_sum = 0;
    best_start_ind = -1;
    best_end_ind = -1;
    
    
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
      if (cur_cum > best_sum)
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
      
      /***  OUTPUT  ***/
      
      // print largest num
      cout << best_num << " ";
      }
    else
      {
      // print largest sum
      cout << best_sum << " ";
      }
    
    /******************************************/
    /***  find Max Non-Contiguous Subarray  ***/
    /******************************************/
    
    // reset max
    max = 0;
    
    for (int j=0; j < len; ++j)
      {
      // save value in temp var, less overhead call
      n = arr [j];
      
      // if var is possitive, add to max
      if (n > 0)
        max += n;
      }
      
    /////////// resolve the case of negative subarray!!!!!!!
    
    
    // clean up memory
    delete [] arr;
    }
  }