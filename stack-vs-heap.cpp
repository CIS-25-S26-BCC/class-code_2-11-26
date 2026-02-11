#include <iostream>

int main() {

    int intOnTheStack = 10;

    int * intOnTheHeap = new int;

    *intOnTheHeap = 11;

    std::cout << "intOnTheStack: " << intOnTheStack << std::endl;

    std::cout << "intOnTheHeap: " << *intOnTheHeap << std::endl;

    return 0;
}
