#include "hello/hello.h"
#include "hello/hello1.h"
#include "world.h"

#include <iostream>

int main() {
    // std::cout << "hello world" << std::endl;
    Hello();
    World();
    std::cout << IsOdd(10) << std::endl;
    return 0;
}