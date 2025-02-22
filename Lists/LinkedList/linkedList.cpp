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

void LinkedList::reverse_list() {
    Node* current = head; 
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

void LinkedList::remove_back() {
    if(is_empty()) {
        return;
    }

    Node* curr_node = head;
    Node* prev_node = nullptr;

    while (curr_node->next != nullptr) {
        prev_node = curr_node;
        curr_node = curr_node->next;
    }

    prev_node->next = nullptr;
    delete curr_node;
    curr_node = nullptr;
}

void LinkedList::remove_front() {
    if(is_empty()) {
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
    temp = nullptr;
}

void LinkedList::remove(int target) {
    if(head->value == target) {
        Node* temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
        return;
    }
    
    Node* current = head;
    Node* prev = nullptr;

    while (current != nullptr) {
        if(current->value == target) {
            prev->next = current->next;
            delete current;
            current = nullptr;
            return;
        }
        
        prev = current;
        current = current->next;
    }

    std::cout << "Target not found" << std::endl;
}

void LinkedList::set_head(Node* new_head) {
    head = new_head;
}


LinkedList::Node* LinkedList::merge(Node* left, Node* right) {
    // left: 1 3 5
    // right: 2 4 6
    Node* dummyValue = new Node();
    Node* result = dummyValue;

    while(left != nullptr && right != nullptr) {
        if(left->value < right->value) {
            result->next = left;
            left = left->next;
        } else {
            result->next = right;
            right = right->next;
        }
        result = result->next;
    }

    if(left != nullptr) {
        result->next = left;
    } else {
        result->next = right;
    }
        
    // this is pointing at the next value, in the memory address
    return dummyValue->next;
}

LinkedList::Node* LinkedList::quick_sort(Node* left_most_node, int size) {
    return nullptr;
}

LinkedList::Node* LinkedList::merge_sort(Node* left_most, int size) {
    if(size <= 1) {
        return left_most;
    }

    int mid = size / 2;

    Node* middle_node = left_most;

    for(int i = 0; i < mid - 1; i++) {
        middle_node = middle_node->next;
    }

    Node* right_most = middle_node->next;
    middle_node->next = nullptr;

    // sorting both halves
    left_most = merge_sort(left_most, mid);
    right_most = merge_sort(right_most, size - mid);    

    return merge(left_most, right_most);
}

void LinkedList::merge_sort() {
    // empty list
    if(head == nullptr || head->next == nullptr) {
        return;
    }

    head = merge_sort(head, get_size());
}

void LinkedList::quick_sort() {

}

void LinkedList::insertion_sort() {
    
}