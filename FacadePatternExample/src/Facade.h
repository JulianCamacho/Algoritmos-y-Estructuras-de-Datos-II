//
// Created by julian_camacho on 21/3/20.
//

#ifndef FACADEPATTERNEXAMPLE_FACADE_H
#define FACADEPATTERNEXAMPLE_FACADE_H


#include "Subsystem.h"

class Facade {
public:
    Facade()
    {
        pOne = new SubSystemOne();
        pTwo = new SubSystemTwo();
        pThree = new SubSystemThree();
    }

    void MethodA()
    {
        std::cout << "Facade::MethodA" << std::endl;
        pOne->MethodOne();
        pTwo->MethodTwo();
    }

    void MethodB()
    {
        std::cout << "Facade::MethodB" << std::endl;
        pTwo->MethodTwo();
        pThree->MethodThree();
    }

private:
    SubSystemOne *pOne;
    SubSystemTwo *pTwo;
    SubSystemThree *pThree;
};


#endif //FACADEPATTERNEXAMPLE_FACADE_H
