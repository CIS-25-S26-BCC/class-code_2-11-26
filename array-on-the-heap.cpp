#include <iostream>

int main() {

    int intOnTheStack = 10;

    int howBig;

    std::cout << "Put in how big you want the array to be: ";

    std::cin >> howBig;

    int * arrayOnTheHeap = new int[howBig];

    int arrayOnTheStack[howBig];

    for(int i = 0; i < howBig; i++) {
        arrayOnTheStack[i] = i;
    }

    for(int i = 0; i < howBig; i++) {
        std::cout << arrayOnTheStack[i] << std::endl;
    }

    return 0;
}
