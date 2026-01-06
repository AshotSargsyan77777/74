#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
protected:
    std::string m_name;

public:
    Animal(const std::string& name);
    virtual void voice() const = 0;
    virtual ~Animal();
};

class Dog : public Animal {
public:
    Dog(const std::string& name);
    void voice() const override;
};

class Cat : public Animal {
public:
    Cat(const std::string& name);
    void voice() const override;
};

class Car {
};

#endif
