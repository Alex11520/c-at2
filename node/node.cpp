#include <iostream>
#include "node.h"


Node* Node::get_prev() const{
    return this->prev;
}
Node* Node::get_next() const{
    return this->next;
}
Task Node::get_task() const{
    return this->task;
}

Node *Node::set_prev(Node* node) {
    return this->prev = node;
}
Node *Node::set_next(Node* node) {
    return this->next = node;
}
Task Node::set_task(Task task) {
    return this->task = task;
}

Node::Node(Task task) : task(task) {
    this->set_next(nullptr);
    this->set_prev(nullptr);
}

void Node::link_prev(Node *new_node) {
    if(new_node == nullptr){ return; }
    // Get the previous node of the current node
    Node* prev_node = this->prev;
    // Update the previous pointer of the current node to the new node
    this->prev = new_node;
    // Update the next pointer of the new node to the current node
    new_node->next = this;
    // If there was a previous node, update its next pointer to the new node
    if (prev_node != nullptr)
    {
        new_node->prev = prev_node;
        prev_node->next = new_node;
    }
}

void Node::link_next(Node *new_node) {
    if(new_node == nullptr){ return; }
    // Get the next node of the current node
    Node* nextNode = this->next;
    // Update the next pointer of the current node to the new node
    this->next = new_node;
    // Update the previous pointer of the new node to the current node
    new_node->prev = this;
    // If there was a next node, update its previous pointer to the new node
    if (nextNode != nullptr) {
        new_node->next = nextNode;
        nextNode->prev = new_node;
    }
}

void Node::print_node() {
    this->task.print_task();
}


