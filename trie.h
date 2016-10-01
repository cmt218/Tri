/*
  CSE109
  Cole Tomlinson
  cmt218
  Trie data structure program
  Program #3
*/

class Node;
#ifndef TRIE_H
#define TRIE_H
#include "node.h"
#include "link.h"
#include <iostream>

using namespace std;

class Trie {
public:

  //Member variable
  Node* sNode;

  //Member function
  void put(string key, int val);
  
  int get(string key);

  //Constructor
  Trie();

  //Destructor
  ~Trie();
};

#endif
