#include <iostream>

class Node {
    private:
        int val;
        Node* next;
    public:
        Node(int val) {
            this->val = val;
            this->next = nullptr;
        }

        void set_next(Node* next) {
            this->next = next;
        }

        Node* get_next() {
            return this->next;
        }

        int get_val() {
            return this->val;
        }

        ~Node() {}
};

