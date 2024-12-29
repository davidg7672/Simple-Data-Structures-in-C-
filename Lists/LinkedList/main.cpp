#include <iostream>
#include "linkedList.hpp"

int main() {
    LinkedList list;
    list.add_back(1);
    list.add_back(9);
    list.add_back(5);
    list.add_back(7);
    list.add_back(12);
    list.add_back(2);

    list.display_list();
    list.merge_sort();
    list.display_list();

    


    return 0;
}