#include <iostream>
#include "task/task.h"
#include "node/node.h"
#include "task_list/Task_list.h"
#include "menu/Menu.h"

int main() {
//    Task task1 = Task("wash up");
//    Task task2 = Task("breakfast");
//    Task task3 = Task("walk my dog");
//    Task task4 = Task("go to work");
//    Task task5 = Task("1");
//    Task task6  = Task("2");
//
//    Node* node1 = new Node(task1);
//    Node* node2 = new Node(task2);
//    Node* node3 = new Node(task3);
//    Node* node4 = new Node(task4);
////    Node* node5 = new Node(task5);
////    Node* node6 = new Node(task6);
//
//    Task_list list;
//    list.set_head(node2);
//    list.add_back(node3);
//    list.add_front(node1);
//    list.add_back(node4);
//    list.move_ahead(node3);
////
//    list.move_back(node2);
//    list.move_ahead(node4);
//
////    Task_list list1;
////    list1.set_head(node5);
////    list1.add_back(node6);
////
////    node3->link_next(node5);
////    node2->link_prev(node3);
////    node4->link_prev(node2);
//list.print_task_list();
//list.delete_list(list.get_head());
//    list.print_task_list();

    Menu menu;
    menu.run_menu();

    return 0;
}
