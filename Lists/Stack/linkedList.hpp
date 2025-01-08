#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

class LinkedList {
    private:
        struct Node {
            int value;
            struct Node* next;
            Node(): value(0), next(nullptr) {}
            Node(int data): value(data), next(nullptr) {}
        };
        
         Node* head;
    public:
        LinkedList();
        ~LinkedList();

        int size() const;
        void destroy_list();
        void display() const;
        bool is_empty() const;

};

#endif