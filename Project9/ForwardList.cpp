#include "ForwardList.h"
#include <iostream>
using namespace std;

void ForwardList::push_back(int value) {
    Node* new_node = new Node(value); 
    if (!head) { 
        head = new_node; 
    }
    else { 
        tail->set_next(new_node); 
    }
    tail = new_node; 
}

void ForwardList::push_front(int value) {
    Node* new_node = new Node(value); 
    if (!head) { 
        head = new_node; 
        tail = new_node;
    }
    else { 
        new_node->set_next(head); 
        head = new_node; 
    }
}

void ForwardList::insert_after(int existing_value, int new_value) {
    Node* current = head; 
    while (current) { 
        if (current->get_value() == existing_value) { 
            Node* new_node = new Node(new_value); 
            new_node->set_next(current->get_next()); 
            current->set_next(new_node); 
            if (current == tail) { 
                tail = new_node; 
            }
            return; 
        }
        current = current->get_next(); 
    }
    cout << "Value " << existing_value << " not found in the list." << endl; 
}

void ForwardList::print() {
    Node* current = head; 
    while (current) { 
        cout << current->get_value() << ' '; 
        current = current->get_next(); 
    }
    cout << endl; 
}
