//
// Created by julian_camacho on 29/5/20.
//

#ifndef OBSERVERPATTERNEXAMPLE_LIVINGDOG_H
#define OBSERVERPATTERNEXAMPLE_LIVINGDOG_H

#include <iostream>
#include "Dog.h"
using namespace std;

class LivingDog : public Dog {
public:
    LivingDog(std::string name);
    virtual ~LivingDog();

    virtual void Bark();
private:
    std::string m_name;
};


#endif //OBSERVERPATTERNEXAMPLE_LIVINGDOG_H
