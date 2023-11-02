#ifndef AT2_CPP_NODE_H
#define AT2_CPP_NODE_H


#include "../task/task.h"

class Node {
private:
    Node* prev;
    Node* next;
    Task task;
public:
    Node* get_prev() const;
    Node* get_next() const;
    Task get_task() const;

    Node* set_prev(Node* node);
    Node* set_next(Node* node);
    Task set_task(Task task);



    Node(Task task);

    void link_prev(Node* new_node);
    void link_next(Node* new_node);

    void print_node();
};


#endif //AT2_CPP_NODE_H
