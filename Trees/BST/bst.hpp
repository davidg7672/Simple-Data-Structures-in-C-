#ifndef BST_HPP
#define BST_HPP

class BST {
    private:
        struct Node {
            int value;
            struct Node* left;
            struct Node* right;

            Node(): value(0), left(nullptr), right(nullptr) {}
            Node(int data): value(data), left(nullptr), right(nullptr) {}
        };
        Node* root;
    public:
};

#endif