#include <iostream>
#include "Task_list.h"

Node* Task_list::get_head() {
    return this->head;
}

void Task_list::set_head(Node *head) {
    this->head = head;
    this->node_set.insert(head);
}

std::unordered_set<Node*> Task_list::get_node_set() {
    return this->node_set;
};

Task_list::Task_list() {
    this->head = nullptr;
}

bool Task_list::ifNodeExist(Node* new_node){
    if (node_set.find(new_node) != node_set.end()) {
        return true;
    } else {
        return false;
    }
}

Node* Task_list::search_task(std::string content) {
    if(content == "") { std::cout << "Invalid content." << std::endl; return nullptr; }
    Node* curr = head;
    while (curr->get_next() != nullptr){
        while (curr->get_task().get_content() != content) {
            curr = curr->get_next();
        }
        if (curr->get_task().get_content() == content) {
            return curr;
        }
    }
    std::cout << "No content found." << std::endl;
    return nullptr;
}

void Task_list::add_front(Node *new_node) {
    if(new_node == nullptr){ return; }
    if(this->head == nullptr){
        this->head = new_node;
        this->node_set.insert(new_node);
        return;
    }
    if(!ifNodeExist(new_node)){
        node_set.insert(new_node);
        Node* temp_head = this->head;
        new_node->set_next(temp_head);
        temp_head->set_prev(new_node);
        this->head = new_node;
    }

}

void Task_list::add_back(Node *new_node) {
    if(new_node == nullptr){ return; }
    if(this->head == nullptr){
        this->node_set.insert(new_node);
        this->head = new_node;
        return;
    }
    if(!ifNodeExist(new_node)){
        node_set.insert(new_node);
        Node* current_node = this->head;
        while (current_node->get_next() != nullptr){
            current_node = current_node->get_next();
        }
        current_node->set_next(new_node);
        new_node->set_prev(current_node);
    }
}

void Task_list::move_ahead(Node *node) {
    if(ifNodeExist(node)) {
        if(node == this->head) { return; }
        Node* prev = node->get_prev();
        Node* next = node->get_next();
        if(prev == head) { head = node; node->set_prev(nullptr); }
        if(next == nullptr) {
            prev->link_prev(node);
            prev->set_next(nullptr);
            return;
        }
        prev->link_prev(node);
        next->link_prev(prev);

    } else {
        std::cout << "node doesnt exist in the list" << std::endl;
        return;
    }
}

void Task_list::move_back(Node *node) {
    if(ifNodeExist(node)) {
        if(node->get_next() == nullptr) { return; }
        Node* prev = node->get_prev();
        Node* next = node->get_next();
        if(node == head) {
            node->set_next(next->get_next());
            node->set_prev(next);
            next->set_next(node);
            next->set_prev(nullptr);
            head = next;
            return;
        }
        prev->set_next(next);
        next->set_prev(prev);
        node->set_next(next->get_next());
        next->set_next(node);
        node->set_prev(next);

    } else {
        std::cout << "node doesnt exist in the list" << std::endl;
        return;
    }
}

void Task_list::print_task_list() {
    if(head== nullptr) { std::cout << "empty list" << std::endl; return; }
    Node* curr = head;
    while (curr != nullptr) {
        curr->print_node();
        curr = curr->get_next();
    }
}

void Task_list::delete_list(Node* node) {
    if (node == nullptr) { std::cout << "empty list" << std::endl; return; }
    delete_list(node->get_next());
    delete node;
    head = nullptr;
}





