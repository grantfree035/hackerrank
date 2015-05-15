// Author: Grant Freeman
// Domain: hackerrank.com
// Problem: Service Lane

#include <iostream>
using namespace std;

int main ()
  {
  // declare variables
  int i, // entry index
      j, // exit index
      n, // length of lane
      tc, // number of test cases
      w; // width
  
  cin >> n >> tc;
  int * sl = new int [n];
  
  for (int k(0); i < N; ++k)
    cin >> sl [k];
  
  for (int k(0); k < tc; ++k)
    {
    cin >> i >> j;
    w = sl [i-1];
    
    for (int m=i; m < j; ++m)
      if (w > sl[m])
        w = sl [m];
    
    cout << w << " ";
    }
  
  cout << endl;
  return 0;
  }