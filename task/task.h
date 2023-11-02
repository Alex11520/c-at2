#ifndef AT2_C___TASK_H
#define AT2_C___TASK_H


#include <string>

class Task {
private:
    std::string content;

public:
    std::string get_content() const;
    void set_content(std::string content);

    Task(std::string task_content);

    void print_task() const;
};


#endif //AT2_C___TASK_H
