/*
  CSE109
  Cole Tomlinson
  cmt218
  Trie data structure program
  Program #3
*/

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#include "trie.h"
#include "node.h"
#include "link.h"

Trie::Trie() {
  sNode = new Node;
}

Trie::~Trie(){
 
}

void Trie::put(string key, int val){

  Node curNode = *sNode; 
  Link curLink;
  bool match = false;
  
  for(unsigned int x = 0; x < key.length(); x++){

    for(int y = 0;y < curNode.numLinks;y++){
      if((*curNode.links[y]).letter == key[x]){
	curLink = *curNode.links[y];
	curNode = *curLink.next;
	match = true;
      }
    }
    
    if(curNode.numLinks < 10 && match == false){
      curLink.setLet(key[x]);
      curNode.links[curNode.numLinks] = &curLink;
      curNode.numLinks++;
      cout << curLink.getLet() << endl;
      Node curNode;
      curLink.next = &curNode;
      Link curLink;
    }

    if(x == key.length() - 1){
      curNode.nodeVal = val;
    }
    
    match = false;
  }	
}

int Trie::get(string key){

  Node curNode = *sNode;

  cout << curNode.numLinks;
  
  for(unsigned int b = 0;b < key.length();b++){
    for(int c = 0;c < curNode.numLinks;c++){
      if((*curNode.links[c]).letter == key[b]){
	cout << (*curNode.links[c]).letter;
	curNode = (*(*curNode.links[c]).next);
	break;
      }
    }
  }
  return curNode.nodeVal;
}

