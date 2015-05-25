
//  Even Tree Problem

//  Author: Grant Freeman
//  Domain: Algorithms > Graph Theory
//  Challenge: https://www.hackerrank.com/challenges/even-tree

#include <vector>

#include <iostream>
using namespace std;

template <typename T> struct node
  {
  T val;
  vector<node *> children;
  };

template <typename T> class tree
  {
  
  struct node {
    T val;
    vector<node *> link;
  };
  public:
    
    // constructors
          tree  ();
    
    // manipulation methods
    bool  add   (T &, T &);
    bool  exist (T &);
    
  protected:
    node<T>   *root;
  };
  
tree::tree ()
  {
  root = NULL;
  }
  

bool tree::exist (T &,)
  {
  node *temp;
  bool exist;
  
  if (root == NULL)
    exist = false;
  else
    {
    temp = root;
    
    for (int i)
    }
  }

int main ()
  {
  return 0;
  }