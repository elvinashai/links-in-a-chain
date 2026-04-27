#include <iostream>
#include "src/hello.hpp"

using namespace std;

int main() {
    Link gold("Gold");
    Link silver("Silver");
    Link bronze("Bronze");

    Node node_one(&gold);
    Node node_two(&silver);
    Node node_three(&bronze);

    node_one.attach(&node_two);
    node_two.attach(&node_three);

    Node* current = &node_one;

    while (current != nullptr) {
        cout << current->get_data()->get_material() << endl;
        current = current->next();
    }

    return 0;
}