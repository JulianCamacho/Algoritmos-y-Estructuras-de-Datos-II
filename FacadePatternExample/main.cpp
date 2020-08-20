#include <iostream>
#include "src/Facade.h"

int main() {
    Facade *pFacade = new Facade();

    pFacade->MethodA();
    pFacade->MethodB();

    return 0;
}
