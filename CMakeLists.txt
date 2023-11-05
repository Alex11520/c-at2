cmake_minimum_required(VERSION 3.26)
project(at2_c__)

set(CMAKE_CXX_STANDARD 17)

add_executable(at2_cpp main.cpp
        node/node.cpp
        node/node.h
        task/task.cpp
        task/task.h
        task_list/Task_list.cpp
        task_list/Task_list.h
        menu/Menu.cpp
        menu/Menu.h
)
