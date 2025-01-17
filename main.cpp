#include <iostream>
#include <cstring>

void BufferOverflowFunction() {
    char buffer[10];
    std::strcpy(buffer, "This is a very long string that will overflow the buffer.");
}

// Line of code ........ Line of code.............
// Line of code ........ Line of code.............


void useAfterFree() {
    int* ptr = new int(10);
    delete ptr; // Free memory
    std::cout << (*ptr) << std::endl;  // Use after free!
}

void XXXXXXXX_doSomething()
{
    std::cout << "XXXXXXXX Hello world";
}

int main() {
    BufferOverflowFunction();
    XXXXXXXX_doSomething();
    return 0;
}

