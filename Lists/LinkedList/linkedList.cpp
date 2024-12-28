#include "linkedList.hpp"

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
   destroy_list(); 
}

void LinkedList::destroy_list() {
    Node* temp = nullptr;

    while(head != nullptr) {
        temp = head->next;
        delete head;
        head = temp;
        temp = nullptr;
    }
    std::cout << "List empty" << std::endl;
    std::cout << "List Size: " << get_size() << std::endl;
}

bool LinkedList::add_front(int n) {
    
    
    if(is_empty()) {

    }
}

bool LinkedList::add_back(int n) {

}

int LinkedList::get_size() const {
    if(is_empty()) {
        return 0;
    }

    Node* temp = head;
    int size = 0;

    while(temp != nullptr) {
        temp = temp->next;
        size++;
    }
}

bool LinkedList::is_empty() const {
    return head == nullptr;
}

