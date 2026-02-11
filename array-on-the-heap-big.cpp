#include <iostream>

int main() {

    long bigNumber = 2147480;

    long * arrayOnTheHeap = new long[bigNumber];

    int arrayOnTheStack[bigNumber];

    // for(int i = 0; i < howBig; i++) {
    //     arrayOnTheStack[i] = i;
    // }

    // for(int i = 0; i < howBig; i++) {
    //     std::cout << arrayOnTheStack[i] << std::endl;
    // }

    // for(int i = 0; i < howBig; i++) {
    //     arrayOnTheHeap[i] = i;
    // }

    // for(int i = 0; i < howBig; i++) {
    //     std::cout << arrayOnTheStack[i] << std::endl;
    // }

    return 0;
}
