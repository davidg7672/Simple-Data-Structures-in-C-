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
        
        void set_head(Node* new_head);
        void add_front(int n);
        void add_back(int n);
        void remove_back();
        void remove_front();
        void remove(int target);
        void destroy_list();
        bool is_empty() const;
        int get_size() const;
        void display_list() const;
        Node* get_head() const;

        void reverse_list();
        bool search(int target) const;
        int add_in_order(int n);
        
        Node* merge(Node* left, Node* right);
        Node* quick_sort(Node* left_most, int size = -1);
        Node* merge_sort(Node* left_most, int size = -1);
        void merge_sort();
        void quick_sort();
        void insertion_sort();

};

#endif