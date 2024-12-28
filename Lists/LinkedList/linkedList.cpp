#include <iostream>
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
}

void LinkedList::add_front(int n) {
    Node* new_node = new Node(n);    
    
    // list not empty
    if(!is_empty()) {
        new_node->next = head;
        head = new_node;
    } else {
        head = new_node;
    }
}

void LinkedList::add_back(int n) {
    Node* new_node = new Node(n);

    if(!is_empty()) {
        Node* temp = head;

        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    } else {
        head = new_node;
    }
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

    return size;
}

bool LinkedList::is_empty() const {
    return head == nullptr;
}

LinkedList::Node *LinkedList::get_head() const {
    return head;
}


void LinkedList::display_list() const {
    Node* temp = head;

    std::cout << "head->";

    while(temp != nullptr) {
        std::cout << temp->value << "->";
        temp = temp->next;
    }

    std::cout << "nullptr" << std::endl;
}

bool LinkedList::search(int target) const {
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->value == target) {
            return true;
        }
        temp = temp->next;
    }

    return false;
}


LinkedList::Node* LinkedList::merge(Node* left, Node* right) {
    return  nullptr;
}

LinkedList::Node* LinkedList::quick_sort(Node* left_most_node, int size = -1) {
    return nullptr;
}

LinkedList::Node* LinkedList::merge_sort(Node* left_most_node, int size = -1) {

}

void LinkedList::merge_sort() {

}

void LinkedList::quick_sort() {

}

void LinkedList::insertion_sort() {

}