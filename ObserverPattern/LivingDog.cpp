//
// Created by julian_camacho on 29/5/20.
//

#include "LivingDog.h"

LivingDog::LivingDog(std::string name)
        : m_name(name) {
}

LivingDog::~LivingDog() {
}

void LivingDog::Bark() {
    std::cout << m_name << " is barking!\n";
}