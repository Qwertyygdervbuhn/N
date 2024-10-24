#pragma once

class Node {
private:
    int value;      
    Node* next;     

public:
    Node* get_next() const { return next; } 
    void set_next(Node* next_node) { next = next_node; } 
    int get_value() const { return value; } 

   
    Node() : value(0), next(nullptr) {}


    Node(int value) : value(value), next(nullptr) {}
};

class ForwardList {
private:
    Node* head; 
    Node* tail; 

public:
    
    ForwardList() : head(nullptr), tail(nullptr) {}

    void push_back(int value); 
    void push_front(int value); 
    void insert_after(int existing_value, int new_value); 
    void print(); 
};
