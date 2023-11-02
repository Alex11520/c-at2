
#include <iostream>
#include "task.h"

std::string Task::get_content() const {
    return this->content;
}

void Task::set_content(std::string content) {
    this->content = content;
}

Task::Task(std::string task_content) : content(task_content){}

void Task::print_task() const {
    std::cout << this->get_content() << std::endl;
}
