
//Header Files
#include <iostream>
#include "NODE.h"
#include "LinkedList.h"
#include <string>

using std::string;
using std::cout;
using std::cin;

//Main
int main()
{
    //
    int choice;
    int no;
    string name;
    //node declaration
    Node *n;
    
    //Linked List creation
    LinkedList L;
    
    //Loop for menu repitition
        do
        {
            
        //Menu
            cout<<"\n Please choose an option: \n 1. Add a new node at the beginning \n 2. Add a new node at the end \n 3. Remove the beginning node \n 4. Remove the end node \n 5. Remove a node from the list by entering an item number \n 6. Remove a node from the list by entering an item name \n 7. Print out the list \n 0. Quit the program \n";
            
            cin>>choice;
            
            //Switch Network
            switch (choice)
            {
                    
                    //Add a new node at the start
                case 1:
                    cout<<"\n Enter the item number";
                    cin>>no;
                    cout<<"\n enter the item name";
                    cin>>name;
                    //creating new node
                    n = new Node(name, no);
                    //Calling add to start to add this node
                    L.addToStart(n);
                    //Printing the list
                    L.printList();
                    break;
                    
                    //Add a new node at the end
                case 2:
                    cout<<"\n Enter the item number";
                    cin>>no;
                    cout<<"\n enter the item name";
                    cin>>name;
                    n = new Node(name, no);
                    L.addToEnd(n);
                    L.printList();
                    break;
                    
                    //Remove the first node
                case 3:
                    //Checking if the delete was successful
                    if(L.removeFromStart())
                        cout<<"\n Delete Successful \n";
                    else
                        cout<<"\n No node to delete \n";
                    //Printing the list
                    L.printList();
                    break;
                    
                    //Remove the last node
                case 4:
                    
                    //Check if the delete was successful
                    if(L.removeFromEnd())
                        cout<<"\n Delete Successful \n";
                    else
                        cout<<"\n No node to delete \n";
                    L.printList();
                    break;

                case 5:
                    //Getting the item no from user and passsing the value to appropriate function
                    cout<<"\n Enter the item Number you want to delete";
                    cin>>no;
                    L.removeNodeFromList(no);
                    L.printList();
                    break;
                    
                case 6:
                    //Getting the item name from user and passsing the value to appropriate function
                    cout<<"\n Enter the item Name you want to delete";
                    cin>>name;
                    L.removeNodeFromList(name);
                    L.printList();
                    break;
                
                case 7:
                    //Printing the list
                    L.printList();
                    break;
                    
                    //Exiting the program
                case 0:
                    std::exit(1);
            }
    

        }while(1); //Loop

    return(0);//Program ends
}




