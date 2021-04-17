#pragma once
#include "coord.h"

class IMovable
{
    virtual void moveBy(const Coord& p) = 0;
    virtual void moveTo(const Coord& p) = 0;
};