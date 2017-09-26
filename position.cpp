#include "position.h"
#include <iostream>



Position::Position(double x, double y)  //startposisjon x og y
    : x_(x)
    , y_(y)
{

}


Position::~Position()
{

}


double Position::getXPosition()
{
    return x_;
}


double Position::getYPosition()
{
    return y_;
}


void Position::setXPosition(double x) // endrer fra start posisjon i x
{
    x_ = x;
}

void Position::setYPosition(double y)   // endrer fra start posisjon i y
{
    y_ = y;
}

