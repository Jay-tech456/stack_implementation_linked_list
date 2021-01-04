//
//  stack.cpp
//  stack_implementation_linked_list
//
//  Created by Manjesh Prasad on 1/4/21.
//

#include "stack.hpp"
#include <iostream>
using namespace std;

stack_list::stack_list()        // class constructor
{
    top = nullptr;
    totalNode = 0;
}

stack_list::stack_list(int number)
{
    push(number);
}

stack_list::~stack_list()
{
    node* nodeptr;
    

    while(top)                    // while top->next != nullptr, continue
    {
        nodeptr = top->next;            // save the rest of the list
        delete top;
        top = nodeptr;
        
        totalNode--;
        
    }
}

void stack_list::push(int number)         // push elements to the top of the list
{
    node* newTop;                           // for newNodes
    
    newTop = new node;
    newTop->num = number;
    
    
    if(!top)                                // if the top does not exist, set the newn node as the top
    {
        newTop->next = nullptr;
        top = newTop;
        
        totalNode++;
        
        return;
    }
    newTop->next = top;                    // newNode next == the current top node
    top = newTop;                           // set the top as the new node
    totalNode++;
    
    return;
    
}


void stack_list::print()                // printing the entire list
{
    node* nodeptr;
    
    nodeptr = top;
    if(!top)                            // if top does not exist, stack is empty
        
    {
        cout << "STACK IS EMPTY " << endl;
        return;
    }
    cout << "\n" << endl;
    
    while(nodeptr)                          // while nodeptr-> next != nullptr, continue
    {
        cout << nodeptr->num << " -> ";
        nodeptr = nodeptr->next;                // so the entire list will not run infinite times
    }
    cout << "NULL " << endl;
    
    return;
}

void stack_list::pop()                      // pop the top of the list
{
    node*   temp;                           // to save the rest of the list while poping the top of the list
    
    if(!top)
    {
        cout << "\nCANNOT POP, LIST IS EMPTY " << endl;
        return;
    }
    else if (top->next == nullptr)
    {
        delete top;
        totalNode--;
        
        cout << "We have deleted the top, stack is empty " << endl;
        return;
    }
    
    temp = top->next;                       // saving the rest of the list to temp variable
    
    cout << "\n\nPopping " << top->num << " from the stack.... ";
    totalNode--;
    delete top;                             // delete the top
    top = temp;                             // set the top of the list
    
}

bool stack_list::contain(int number)        // observer, views if the element exist within the list
{
    node* nodeptr;
    
    if(!top)                                // if the list is empty
    {
        cout << "\nList is empty !!!" << endl;
        return false;
    }
    
    nodeptr = top;                          // set the top to nodeptr
    
    while(nodeptr)                    // iterates through the entire list
    {
        if(nodeptr->num == number)          // if the number within the stack == the number we are viewing, it exist
        {
            cout << "\n" << number << " exist in the list " << endl;
            return true;
        }
        
        nodeptr = nodeptr->next;
    }
                                            // if it iterates through the entire list without returning true, then the element does not exist
    cout << "\n" << number << " does not exist in the list " << endl;
    return false;
}

int stack_list::get_totalNode()
{
    cout << "\n\nThere are currently " << totalNode << " nodes in the stack " << endl;
    return 0;
}
