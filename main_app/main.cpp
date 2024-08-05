#include <iostream>
#include "Greeter.h"

int main() {
    std::string name;
    std::cout << "¬ведите им€: ";
    std::getline(std::cin, name);

    Greeter greeter;
    std::cout << greeter.greet(name) << std::endl;

    system("pause");

    return 0;
}
