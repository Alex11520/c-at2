#include "Menu.h"

Menu::Menu() {
    list.set_head(essential_node);
}

void Menu::display_menu() {
    std::cout << "Menu:\n";
    std::cout << "1. Add a task to the beginning\n";
    std::cout << "2. Add a task to the end\n";
    std::cout << "3. Print the list\n";
    std::cout << "4. Move a task forward\n";
    std::cout << "5. Move a task backward\n";
    std::cout << "6. Delete the list\n";
    std::cout << "7. Quit\n";
    std::cout << "Enter your choice: ";
}

void Menu::run_menu() {

    std::cout << greeting << std::endl;
//    std::cout << "Enter your choice: ";
    std::string content = "";
    Task task = Task(content);
    Node* node = nullptr;
    int choice; // Variable to store user's menu choice
//    std::cin >> choice;
    do {
        display_menu();
        std::cin >> choice;
        switch(choice) {
            case 1:
                std::cout << "Enter the task content: ";
                std::cin >> content;
                task = Task(content);
                node = new Node(task);
                list.add_front(node);
                break;
            case 2:
                std::cout << "Enter the task content: ";
                std::cin >> content;
                task = Task(content);
                node = new Node(task);
                list.add_back(node);
                break;
            case 3:
                std::cout << "Today's tasks: " << std::endl;
                list.print_task_list();
                std::cout << "\n";
                break;
            case 4:
                std::cout << "Enter the task content: ";
                std::cin >> content;
                node = list.search_task(content);
                list.move_ahead(node);
                std::cout << "\n";
                break;
            case 5:
                std::cout << "Enter the task content: ";
                std::cin >> content;
                node = list.search_task(content);
                list.move_back(node);
                std::cout << "\n";
                break;
            case 6:
                list.delete_list(list.get_head());
                break;
            case 7:
                std::cout << "Exiting the program." << std::endl;
                break;
            default: // Invalid choice
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    } while (choice != 13);
}
