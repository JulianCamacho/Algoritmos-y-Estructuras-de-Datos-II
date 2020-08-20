//
// Created by julian_camacho on 29/5/20.
//

#ifndef OBSERVERPATTERNEXAMPLE_DOG_H
#define OBSERVERPATTERNEXAMPLE_DOG_H


class Dog {
public:
    virtual ~Dog() {}
    virtual void Bark() = 0;
};


#endif //OBSERVERPATTERNEXAMPLE_DOG_H
