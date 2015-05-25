
#include "max_subarray.h"
#include <iostream>
using namespace std;

int main ()
  {
  // declare vars
  int tc, len, max;
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
    
    // find largest contiguous subarray
    max = max_subarr_contig (arr, len);
    
    // print max subarray
    cout << max << " ";
    
    // find max non-contiguous sub array
    max = max_subarr_non_contig (arr, len);
    
    // print max
    cout << max << endl;
    
    // clean up memory
    delete [] arr;
    }
  }