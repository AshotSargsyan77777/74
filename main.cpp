#include <iostream>
#include "animal.h"
#include "stugum.h"

int main() {
    Dog dog("Rex");
    Cat cat("Murka");
    Car car;

    Animal* a1 = &dog;
    Animal* a2 = &cat;

    std::cout << "dog: " << isAnimal(a1) << std::endl;
    std::cout << "cat: " << isAnimal(a2) << std::endl;


    return 0;
}
