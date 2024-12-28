#include <iostream>
#include "linkedList.hpp"

int main() {
    LinkedList list;

    list.add_back(15);
    list.add_back(16);
    list.add_back(17);
    list.add_back(18);
    list.display_list();
    list.remove_back();
    list.display_list();


    return 0;
}