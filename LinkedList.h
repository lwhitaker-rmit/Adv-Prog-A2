#ifndef ASSIGN2_LINKEDLIST_H
#define ASSIGN2_LINKEDLIST_H

#include "Node.h"

class LinkedList {
public:

   LinkedList();
   ~LinkedList();
   int length();
   void add(Tile* node);
   void add(Node* node);
   bool remove(char letter);
   bool search(Node* node);
   bool search(char letter);

   //For debugging
   void printList();

private:
   Node* head;
   int size;
};

#endif // ASSIGN2_LINKEDLIST_H
