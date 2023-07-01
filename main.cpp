#include <iostream>

int hello() {
    std::cout << "hello";
    return 0;
}

int world() {
    std::cout << " world" << std::endl;
    return 0;
}

int main() {
    // std::cout << "hello world" << std::endl;
    hello();
    world();
    return 0;
}