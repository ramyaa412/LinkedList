#include <stdio.h>
#include "NODE.h"
#include "LinkedList.h"
#include <iostream>
using std::cout;

//Constructor with initialisation list
LinkedList::LinkedList():myHead(0),myTail(0)
{
    
}


 void LinkedList::addToStart(Node *n)
    {
        if ( isEmpty())  // List is empty
                myHead = myTail = n;
    
              else {  // List is not empty
                     n->next = myHead;
                        myHead = n;
                 
                    } // end else
    }


void LinkedList::printList()
{
    if ( isEmpty()) {
            cout << "The list is empty\n\n";
               return;
        
        }
        //Going thru the list using current ptr
        Node *currentPtr = myHead;
    
        cout << "\n THE LIST: \n ";
        cout << "\t ITEM NO \t ITEM NAME \n";
        //While loop to print all the nodes
         while ( currentPtr != 0 )
         {
               cout <<" \t " << currentPtr->itemNo << " \t\t\t\t " << currentPtr->itemName <<"\n";
            currentPtr = currentPtr->next;
          
             } // end while
    
    cout << "\n\n";

}


//Destructor

      LinkedList::~LinkedList()
       {
               if ( !isEmpty() ) {    // List is not empty
                   

                    Node *currentPtr = myHead;
                      Node *tempPtr;
            
                     while ( currentPtr != 0 ) {  // delete remaining nodes
                            tempPtr = currentPtr;
                            currentPtr = currentPtr->next;
                             delete tempPtr;
                   
                         } // end while
               
                  } // end if
    
           
           
        }



 bool LinkedList::isEmpty() const
          {
            
              return myHead == 0;
              
          }

void LinkedList::addToEnd(Node *n)
{
 
    
          if ( isEmpty() )  // List is empty
              myHead = myTail = n;
              
          else
          {  // List is not empty
                  myTail->next = n;
               myTail = n;
           }
}

bool LinkedList::removeFromStart()
 {
         if ( isEmpty() )  // List is empty
               return false;  // delete unsuccessful
    
         else {
              Node *tempPtr = myHead;
        
                if ( myHead == myTail )
                       myHead = myTail = 0;
                    else
                          myHead = myHead->next;  //Move pointer
             
                        
                       delete tempPtr;
             
               return true;  // delete successful
          
             } // end else
     
      } // end function removeFromFront


bool LinkedList::removeFromEnd()
{
    if ( isEmpty() )
            return false;  // delete unsuccessful
    
        else {
              Node *tempPtr = myTail;
        
               if ( myHead == myTail )
                       myHead = myTail = 0;
               else {
                     Node *currentPtr = myHead;
        
                       // locate second-to-last element
                       while ( currentPtr->next != myTail )
                             currentPtr = currentPtr->next;
            
                      myTail = currentPtr;
                       currentPtr->next = 0;
              
                    } // end else
         
               delete tempPtr;
            return true;
        }
}

void LinkedList::removeNodeFromList(int val)
{
    Node *Pre = NULL, *Del = NULL;
    
    
     //if it is in head node, delete and update the head node */
    if (myHead->itemNo == val)
    {
        // point to the node to be deleted
        Del = myHead;
        // update
        myHead = Del->next;
        delete Del;
        return;
    }
    
    Pre = myHead;
    Del = myHead->next;
    
    // traverse the list and check the value of each node
    while (Del != NULL)
    {
        if (Del->itemNo == val)
        {
            // Update the list
            Pre->next = Del->next;
            // If it is the last node, update the tail
            if (Del == myTail)
            {
                myTail = Pre;
            }
            delete Del;
            break; // break and return
        }
        
        Pre = Del;
        Del = Del->next;
    }
    //If the item is not found
    if (Del==NULL)
        std::cout<<"\n The item cannot be found \n";
    
    
}




void LinkedList::removeNodeFromList(string namen)
{
    Node *Pre = NULL, *Del = NULL;
    
    //if it is in head node, delete and update the head node 
    if (myHead->itemName == namen)
    {
        // point to the node to be deleted
        Del = myHead;
        // update
        myHead = Del->next;
        delete Del;
        return;
    }
    
    Pre = myHead;
    Del = myHead->next;
    
    // traverse the list and check the value of each node
    while (Del != NULL)
    {
        if (Del->itemName == namen)
        {
            // Update the list
            Pre->next = Del->next;
            // If it is the last node, update the tail
            if (Del == myTail)
            {
                myTail = Pre;
            }
            delete Del;
            break;
            // break and return
        }
        
        Pre = Del;
        Del = Del->next;
    }
    
    //If the item is not found
    if (Del==NULL)
        std::cout<<"\n The item cannot be found \n";
    
    
}


