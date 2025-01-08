#ifndef STACK_HPP
#define STACK_HPP


class Stack {
    private:
        struct Node {
            int value;
            struct Node* next;
            Node(): value(0), next(nullptr) {}
            Node(int data): value(data), next(nullptr) {}
        };
        Node* head;
        Node* top;
        
    public:
        Stack();
        ~Stack();

        int size() const;
        void destroy_stack();
        void display() const;
        bool is_empty() const;
        void append(int n);
        void pop();

};

#endif