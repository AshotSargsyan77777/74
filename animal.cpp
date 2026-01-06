#include "animal.h"
#include <iostream>

Animal::Animal(const std::string& name):
m_name(name) {}
Animal::~Animal() {}

Dog::Dog(const std::string& name):
Animal(name) {}
void Dog::voice() const {
    std::cout << m_name << "Haf-Haf";
}

Cat::Cat(const std::string& name): 
Animal(name) {}
void Cat::voice() const {
    std::cout << m_name << "Myau-Myau";
}
