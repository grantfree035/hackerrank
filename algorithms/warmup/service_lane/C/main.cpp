// Author: Grant Freeman
// Domain: hackerrank.com
// Problem: Service Lane

#include <iostream>
using namespace std;

int main ()
  {
  // declare variables
  int i,  // entry index
      j,  // exit index
      n,  // length of lane
      tc, // number of test cases
      w;  // width
  
  // get n & tc; create dynamic array
  cin >> n >> tc;
  int * sl = new int [n];
  
  // fill array with service lane width
  for (int k(0); k < n; ++k)
    cin >> sl [k];
  
  // iterate through test cases
  for (int k(0); k < tc; ++k)
    {
    // get entry and exit points
    cin >> i >> j;
    
    // set width to entry point
    w = sl [i];
    
    // look for smaller width within i & j
    for (int m = i+1; m <= j; ++m)
      if (w > sl [m])
        w = sl [m];
    
    // print width
    cout << w << endl;
    }
  
  // clean up memory
  delete [] sl;
  
  return 0;
  }