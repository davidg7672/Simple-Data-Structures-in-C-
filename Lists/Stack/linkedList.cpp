#include <iostream>
#include "linkedList.hpp"

LinkedList::LinkedList() {
    head = nullptr;
}


LinkedList::~LinkedList() {
    destroy_list();
}

void LinkedList::display() const {
    Node* current = head;

    std::cout << "head->";
    while (current) {
        std::cout << current->value << "->";
        current = current->next;
    }
    std::cout << std::endl;   
}

bool LinkedList::is_empty() const {
    return head == nullptr;
}

int LinkedList::size() const {
    Node* current = head;
    int counter = 0;

    while (current) {
        counter++;
        current = current->next;
    }
    return counter;
}

void LinkedList::destroy_list() {
    while(head) {
        Node* temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
    }
}