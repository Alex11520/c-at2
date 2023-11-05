#ifndef AT2_C___TASK_LIST_H
#define AT2_C___TASK_LIST_H


#include "../node/node.h"
#include <unordered_set>


class Task_list {
private:
    Node* head;
    std::unordered_set<Node*> node_set;
public:
    Node* get_head();
    void set_head(Node* head);
    std::unordered_set<Node*> get_node_set();


    Task_list();

    bool ifNodeExist(Node* new_node);
    Node* search_task(std::string content);

    void add_front(Node* new_node);
    void add_back(Node* new_node);

    void move_ahead(Node* node);
    void move_back(Node* node);

    void print_task_list();
    void delete_list(Node* node);
};


#endif //AT2_C___TASK_LIST_H
