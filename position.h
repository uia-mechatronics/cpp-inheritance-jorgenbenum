#ifndef POSITION_H
#define POSITION_H


class Position
{
public:
    Position(double x, double y);
    ~Position();

    double getXPosition ();
    double getYPosition ();

    void setXPosition (double x);
    void setYPosition (double y);
    // Legg til get- og set-funksjoner her.

private:

    double x_;
    double y_;

};

#endif // POSITION_H
