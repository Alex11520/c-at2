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
        if(prev == this->head){

        }
        prev->link_prev(node);
        prev->link_next(next);
        if(node->get_prev() == nullptr) { this->head = node; }
    } else {
        std::cout << "node doesnt exist in the list" << std::endl;
        return;
    }
}

void Task_list::move_back(Node *node) {
    if(ifNodeExist(node)){
        if(node->get_next() == nullptr){ return; }
        Node* prev = node->get_prev();
        Node* next = node->get_next();
        next->link_next(node);
        next->link_prev(prev);
        if(node->get_prev()->get_prev() == nullptr){
            this->head = node->get_prev();
        }
    } else {
        std::cout << "node doesnt exist in the list" << std::endl;
    }
}




