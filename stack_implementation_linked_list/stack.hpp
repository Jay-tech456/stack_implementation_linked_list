//
//  stack.hpp
//  stack_implementation_linked_list
//
//  Created by Manjesh Prasad on 1/4/21.
//

#ifndef stack_hpp
#define stack_hpp

#include <stdio.h>


class stack_list
{
public:
    
    stack_list();                   // defult class constructor
    stack_list(int);
    
    ~stack_list();                  // class deconstructor
    
    void push(int);               // adds element to the top of the list LIFO
    void pop();                  // pops the first element in the list
    bool contain(int);

    void print();                   // print the entire objects within the stack
    
    int get_totalNode();            // return total nodes of the list 
private:
    struct node
    {
        int num;
        node *next;
    };
    
    node* top;                  // top of the stack
    int totalNode;
    
};
#endif /* stack_hpp */
