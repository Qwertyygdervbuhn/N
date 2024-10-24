#include "ForwardList.h"
#include<iostream>
using namespace std;
int main() {
    ForwardList list; 
    list.push_back(1); 
    list.push_back(2);
    list.push_back(3);

    cout << "Initial list: ";
    list.print(); 

    list.push_front(0); 
    cout << "After inserting at the front (0): ";
    list.print(); 

    list.insert_after(2, 2.5); 
    cout << "After inserting 2.5 after 2: ";
    list.print(); 

    list.insert_after(5, 6); 
  
}
