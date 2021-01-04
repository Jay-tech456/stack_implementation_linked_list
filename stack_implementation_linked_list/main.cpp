//
//  main.cpp
//  stack_implementation_linked_list
//
//  Created by Manjesh Prasad on 1/4/21.
//

#include <iostream>
#include "stack.hpp"
using namespace std;

int main()
{
    stack_list L;
    stack_list S;
    
try{
    L.print();
    
    L.push(0);
    L.push(2);
    L.push(4);
    L.push(6);
    L.push(8);
    L.push(10);
    
    L.print();
    
    cout << endl;
    L.contain(100);
    L.contain(0);
    
    L.pop();
    L.pop();
    L.pop();
    L.print();
    
    L.get_totalNode();

    
    
    
    }
    
    catch (int e)
    {
        cout << "For some reason your program has crashed " << endl;
        return 0;
    }
    
    return 0;
}
