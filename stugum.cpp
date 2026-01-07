#include "stugum.h"
#include "animal.h"

bool isAnimal( Animal* obj) {
    return dynamic_cast< Animal*>(obj) != nullptr;
}
