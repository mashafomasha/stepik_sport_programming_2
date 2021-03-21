#include <iostream>
#include "Node.cpp"

class List {
    private:
        Node* start;

    public:
        List() {
            this->start = nullptr;
        }

        void instert_after(int pos, int val) {
            Node* node_to_insert = new Node(val);

            if (pos == -1) {
            	Node* curr_node_curr_next = this->start;
            	node_to_insert->set_next(curr_node_curr_next);
            	this->start = node_to_insert;

                return;
            }

            Node* curr_node = this->start;
            for (int i = 0; i < pos; ++i) {
            	curr_node = curr_node->get_next();
            }

            Node* curr_node_curr_next = curr_node->get_next();
            node_to_insert->set_next(curr_node_curr_next);
            curr_node->set_next(node_to_insert);
        }

        void erase_after(int pos) {
        	Node* curr = this->start;

        	for (int i = 0; i < pos; ++i) {
        		curr = curr->get_next();
        	}

        	delete curr;
        }

        int get_at_pos(int pos) {
        	Node* curr = this->start;

            for (int i = 0; i < pos; ++i) {
            	curr = curr->get_next();
            }

            return curr->get_val();
        }

        void print_contents() {
        	std::cout << "CONTENT" << std::endl;
        }

        ~List() {
        	Node* curr = this->start;

        	while(curr) {
        		Node* next = curr->get_next();
        		delete curr;
        		curr = next;
        	}
        }
};
