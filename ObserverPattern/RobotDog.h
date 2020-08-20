//
// Created by julian_camacho on 29/5/20.
//

#ifndef OBSERVERPATTERNEXAMPLE_ROBOTDOG_H
#define OBSERVERPATTERNEXAMPLE_ROBOTDOG_H

#include <iostream>
using namespace std;

class RobotDog {
public:
    RobotDog(std::string name);
    virtual ~RobotDog();

    void PlayBarkingSound();
private:
    std::string m_name;
};

#endif //OBSERVERPATTERNEXAMPLE_ROBOTDOG_H
