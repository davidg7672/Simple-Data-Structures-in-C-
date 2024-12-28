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
        
        void add_front(int n);
        void add_back(int n);
        int remove_back();
        int remove_front();
        void destroy_list();
        bool is_empty() const;
        int get_size() const;
        void display_list() const;
        Node* get_head() const;

        void reverse_list();
        void sort_list();
        int add_in_order(int n);

};

#endif