#include <iostream>
#include "task/task.h"
#include "node/node.h"
#include "task_list/Task_list.h"

int main() {
    Task task1 = Task("wash up");
    Task task2 = Task("breakfast");
    Task task3 = Task("walk my dog");

    Node* node1 = new Node(task1);
    Node* node2 = new Node(task2);
    Node* node3 = new Node(task3);
    Node* node4 = nullptr;

    Task_list list;
    list.set_head(node2);
    list.add_back(node3);
    list.add_front(node1);
    list.move_ahead(node3);
    //list.add_back(nullptr);

    Node* node = list.get_head()->get_next();
    return 0;
}
