#include "cat.h"
#include <iostream>

Cat::Cat()
    :posCat_ (0.0 , 0.0)
{
    std::cout << "prosessing start position ............." << std::endl;
    std::cout << "x position: " << posCat_.getXPosition() << std::endl;
    std::cout << "y position: " << posCat_.getYPosition() << std::endl;
}

Cat::~Cat()
{

}

// move funksjon som pure virtual funskjon i baseklasse (IAnimal) tilsier at du må ha
void Cat::move()
{
    std::cout << "Cat runs" << std::endl;
}

// move funksjon som pure virtual funskjon i baseklasse (IPositionProvider) tilsier at du må ha
Position Cat::getPosition()
{
    posCat_.setXPosition(4.2);
    posCat_.setYPosition(3.1);

    std::cout << "prosessing position ........" << std::endl;

    return posCat_;

}
