#include <math.h>

#include "coord.h"


Coord::Coord() : Coord(x = 0, y = 0)
{
}

Coord::Coord(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Coord::getX() const
{
    return this->x;
};

int Coord::getY() const
{
    return this->y;
};

std::string Coord::toString() const 
{
    return "{X: " + to_string(this->x) + ", " + "Y: " + to_string(this->y) + "}";
};

bool Coord::operator==(const Coord & p2) const
{
    return this->x == p2.getX() && this->y == p2.getY();
}


bool Coord::operator!=(const Coord & p2) const
{
    return !(*this == p2);
}

Coord Coord::operator+(const Coord & p2) const
{
    return Coord(this->x + p2.getX(), this->y + p2.getY());
}

void Coord::operator+=(const Coord & p2)
{
    this->x += p2.getX();
    this->y += p2.getY();
}

void Coord::operator-=(const Coord & p2)
{
    this->x -= p2.getX();
    this->y -= p2.getY();
};

Coord Coord::operator-(const Coord & p2) const
{
    return Coord(this->x - p2.getX(), this->y - p2.getY());
}

Coord Coord::operator-()
{
    return Coord(-this->x, -this->y);
}

float Coord::operator%(const Coord & p2) const
{
    const auto s1 = this->x * this->x;
    const auto s2 = this->y * this->y;
    return sqrt(s1 * s2);
}

std::ostream & operator<<(std::ostream & os, const Coord & pt)
{
    return os << pt.toString();
}