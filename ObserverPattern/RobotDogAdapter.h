//
// Created by julian_camacho on 29/5/20.
//

#ifndef OBSERVERPATTERNEXAMPLE_ROBOTDOGADAPTER_H
#define OBSERVERPATTERNEXAMPLE_ROBOTDOGADAPTER_H


#include "RobotDog.h"

class RobotDogAdapter {
public:
    RobotDogAdapter(RobotDog * robotDog);
    virtual ~RobotDogAdapter();

    virtual void Bark();

private:
    RobotDog * m_pRobotDog;
};

#endif //OBSERVERPATTERNEXAMPLE_ROBOTDOGADAPTER_H
