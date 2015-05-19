// Author:  Grant Freeman
// Date:    May 19, 2015
// Problem: Cut The Sticks
// Domain:  Algorithms
// Site: hackerrank.com

#include <iostream>
using namespace std;

int main ()
  {
  // Declare Variables
  int   n, size, num, cnt; 
  int   *stick;
  bool  cutting;
  
  // get number of sticks
  cin >> n;
  
  // set initial array
  stick = new int [n];
  
  // get stick lengths
  for (int i=0; i<n; ++i)
    cin >> stick [i];
  
  // Begin cutting sticks
  cutting = true;
  while (cutting)
    {
    /*  find smallest int > 0   */
    
    // the largest input can be 1000
    size = 1000;
    
    // iterarte through each num
    for (int i=0; i<n; ++i)
      {
      // use num var to minimize overhead
      num = stick [i];
      
      // smaller num != 0 and be smaller
      if (num > 0 && num < size)
        size = num;
      }
    
    /* cut each stick by length (size) */
    
    // reset count
    cnt = 0;
    
    // cut sticks & count cuts
    for (int i=0; i<n; ++i)
      if(stick[i] > 0)
        {
        ++cnt;
        stick[i] = stick[i] - size;
        }
    
    // check wheter antything was cut
    if(cnt > 0)
      cout << cnt << endl;
    else
      cutting = false;
    }
  
  // clean dynamic memory
  delete [] stick;
  
  return 0;
  }