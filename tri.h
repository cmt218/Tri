/*
  CSE109
  Cole Tomlinson
  cmt218
  Trie data structure program
  Program #3
*/

class Node;
#ifndef TRI_H
#define TRI_H
#include "node.h"
#include "link.h"
#include <iostream>

using namespace std;

class Tri{
public:

  //Member variable
  Node* sNode;

  //Member functions
  void put(string key, int val);

  int get(string key);

  //Constructor
  Tri();

  //Destructor
  ~Tri();

};

#endif
