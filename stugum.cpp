#include "stugum.h"
#include "animal.h"

bool isAnimal(const Animal* obj) {
    return dynamic_cast<const Animal*>(obj) != nullptr;
}
