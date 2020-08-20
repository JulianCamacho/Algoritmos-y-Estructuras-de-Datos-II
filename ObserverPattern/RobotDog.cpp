//
// Created by julian_camacho on 29/5/20.
//

#include "RobotDog.h"

RobotDog::RobotDog(std::string name)
        : m_name(name) {

}

RobotDog::~RobotDog() {
}

void RobotDog::PlayBarkingSound()
{
    std::cout << m_name << " is playing barking sound\n";
}