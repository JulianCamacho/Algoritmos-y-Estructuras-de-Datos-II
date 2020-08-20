//
// Created by julian_camacho on 21/3/20.
//
#include <iostream>
using namespace std;

class Subsystem {
    void MethodZero(){ cout << "SubSystem 0" << endl; };
};

// Subsystem 1
class SubSystemOne
{
public:
    void MethodOne(){ cout << "SubSystem 1" << endl; };
};

// Subsystem 2
class SubSystemTwo
{
public:
    void MethodTwo(){ cout << "SubSystem 2" << endl; };
};

// Subsystem 3
class SubSystemThree
{
public:
    void MethodThree(){ cout << "SubSystem 3" << endl; }
};
