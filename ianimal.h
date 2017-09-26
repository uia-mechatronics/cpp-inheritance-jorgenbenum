#ifndef IANIMAL_H
#define IANIMAL_H


class IAnimal
{
public:

    virtual ~IAnimal() {}

    // dette er en pure virtuel (=0) som tvinger deg til å lage en slik funksjon i alle arvede classer
    virtual void move() = 0;

};

#endif // IANIMAL_H
