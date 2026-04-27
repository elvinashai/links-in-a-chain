#pragma once
#include "link.hpp"

class Node {
private:
    Link* data;
    Node* next_node;

public:
    Node(Link* link);
    void attach(Node* node);
    Node* next();
    Link* get_data();
};
