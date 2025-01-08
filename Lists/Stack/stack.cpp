#include <iostream>
#include "stack.hpp"

Stack::Stack() {
    head =nullptr;
    top = nullptr;
}

Stack::~Stack() {
    destroy_stack();
}

bool Stack::is_empty() const {
    return head == nullptr;
}

int Stack::size() const {
    int counter = 0;
    Node* current = head;

    while (current) {
        counter++;
        current = current->next;
    }

    return counter;
}

void Stack::display() const {
    Node* current = head;
    while(current) {
        std::cout << "| " << current->value << " |" << std::endl;
        current = current->next;
    }

    std::cout << top << std::endl;
}

void Stack::append(int n) {
    Node* new_node = new Node(n);

    if(is_empty()) {
        
    }
    
}