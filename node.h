/*
  CSE109
  Cole Tomlinson
  cmt218
  Trie data structure program
  Program #3
*/

#ifndef NODE_H
#define NODE_H

#include "link.h"
#include <iostream>

using namespace std;

class Node {
public:

  //Member variables
  int nodeVal;
  Link* links[10];
  int numLinks;

  //Member functions
  void setVal(int val);
  int getVal();
  
  //Constructor
  Node();

  //Destructor
  ~Node();

}; 

#endif
