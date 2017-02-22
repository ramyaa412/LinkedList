
#ifndef NODE_h
#define NODE_h
#include <string>
using std::string;

class Node{
    friend class LinkedList; //LinkedList is made a frined class
public:
    Node(string& name, int no):itemName(name), itemNo(no) //Constructor with intialisation list
    {
        this->next=NULL;
    }
    
//Private data members
private:
    //node content variables
    string itemName;
    int itemNo;
    Node *next; //Pointer
    
};

#endif /* LISTNODE_h */
