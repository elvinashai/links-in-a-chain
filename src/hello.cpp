#include "hello.hpp"

Node::Node(Link* link) {
   data = link;
   next_node = nullptr;
}

void Node::attach(Node* node) {
   next_node = node;
}

Node* Node::next() {
   return next_node;
}

Link* Node::get_data() {
   return data;
}
