// Random numbers: Include <cstdlib> and <ctime>. Call srand(time(0)) once at the start of main(). Use rand() % n to get a random number from 0 to n-1.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {

    srand(time(0));

    std::cout << rand() % 19 << std::endl;

    return 0;
}
