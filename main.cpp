#include <iostream>
#include <cat.h>
#include <position.h>

int main()
{
    Cat katt;                       //lager et object av klassen Cat
    katt.move();                    //kaller move funksjon på objekte katt


    IAnimal& kattReferanse = katt;  //lager en IAnimal referanse med variabelnavn "kattReferanse" til objektet klasse
    kattReferanse.move();           //kaller move funksjon på referansen, dette gjør det samme som Cat katt; katt.move(); så lenge vi har pure virtuel move.


    //Henter posisjonen til katta
    Position catPos = katt.getPosition();

    std::cout << "x position: " << catPos.getXPosition() << std::endl;
    std::cout << "y position: " << catPos.getYPosition() << std::endl;




    return 0;
}
