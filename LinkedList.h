//
//  LinkedList.h
//  Homework-10
//
//  
//Header Files
#ifndef LinkedList_h
#define LinkedList_h
#include "NODE.h"
#include <string>
#include <iostream>

class LinkedList{
public:
    //Constructor and Destructor
    LinkedList();
    ~LinkedList();
    //Functions for operations
    void addToStart(Node *);
    void addToEnd(Node *);
    void printList();
    bool removeFromStart();
    bool removeFromEnd();
    void removeNodeFromList(int);
    void removeNodeFromList(string);
    bool isEmpty() const;
private:
   //first and last Pointers
    Node *myHead;
    Node *myTail;
    
};

#endif
