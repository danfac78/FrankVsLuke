#pragma once
#include "ABitmap.h"
#include "../common/IMovable.h"

class Sprite: public ABitmap, public IMovable
{
public:
    Sprite() = default;
    
    void moveBy(const Coord& p) override;
    
    void moveTo(const Coord& p) override;
    
    void draw() override;
    
    bool overlaps(ABitmap& bmp) override;
    
    void setTransparency(unsigned char const color) override;

    virtual ~Sprite() = default;
};
