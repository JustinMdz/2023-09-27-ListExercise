#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

    LinkedList dogList;

  /*  dogList.insert(new Dog(3, "Buddy", true, "Golden Retriever"));
    dogList.insert(new Dog(2, "Max", false, "Labrador"));
    dogList.insert(new Dog(5, "Lucy", true, "Poodle"));*/

    std::cout << "List of Dogs:" << std::endl;
    dogList.display();

    cout << "No error";
    return 0;
}