#include <iostream>
#include "LivingDog.h"
#include "RobotDog.h"
#include "RobotDogAdapter.h"

using namespace std;

int main() {
    Dog * livingDog = new LivingDog(string("Chester"));
    livingDog->Bark();

    RobotDog * robotDog = new RobotDog(string("Dogui"));
    Dog * robotDogAdapter = reinterpret_cast<Dog *>(new RobotDogAdapter(robotDog));
    robotDogAdapter->Bark();

    delete livingDog;
    delete robotDogAdapter;
    delete robotDog;

    return 0;
}
