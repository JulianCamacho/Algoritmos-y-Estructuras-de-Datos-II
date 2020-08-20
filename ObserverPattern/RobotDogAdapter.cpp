//
// Created by julian_camacho on 29/5/20.
//

#include "RobotDogAdapter.h"

RobotDogAdapter::RobotDogAdapter(RobotDog * robotDog)
        : m_pRobotDog(robotDog)
{

}

RobotDogAdapter::~RobotDogAdapter() {

}

void RobotDogAdapter::Bark()
{
    m_pRobotDog->PlayBarkingSound();
}