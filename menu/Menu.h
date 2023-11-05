#ifndef AT2_C___MENU_H
#define AT2_C___MENU_H


#include <string>
#include <iostream>
#include "../task/task.h"
#include "../node/node.h"
#include "../task_list/Task_list.h"

class Menu {
public:
    std::string greeting = "Let's have a productive day!";
    Task essential_task = Task("WalkTimmy");
    Node* essential_node = new Node(essential_task);
    Task_list list;
//    list.set_head(essential_node);

    Menu();

    static void display_menu();
    void run_menu();
};


#endif //AT2_C___MENU_H
