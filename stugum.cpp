#include "stugum.h"
#include "animal.h"

bool isAnimal(const void* obj) {
    return dynamic_cast<const Animal*>(
        static_cast<const Animal*>(obj)
    ) != nullptr;
}
