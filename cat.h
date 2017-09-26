#ifndef CAT_H
#define CAT_H
#include "ianimal.h"
#include "ipositionprovider.h"
#include "position.h"

class Cat : public IAnimal, public IPositionProvider
{

public:
    Cat();

    // Destructor
    virtual ~Cat();

    // IAnimal interface, implementasjon av pure virtual fuksjon
    void move();

    // IPositionProvider interface, implementasjon av prue virtual funksjon
    Position getPosition();

private:
    Position posCat_;

};

#endif // CAT_H
