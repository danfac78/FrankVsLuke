#pragma once
#include "../common/coord.h"
#include "../common/IMovable.h"

class Size
{
    Size(Coord p1, Coord p2);
    Size(uint16_t w, uint16_t h);
};

class ABitmap {
protected:
    unsigned char transparencyColor {0};
    Coord pos; //TODO: should be moved to the subclasses when needed?
    Size size;

public:
    //paint the bitmap above the given parent
    virtual void draw() = 0;

    //true if this partially or completely overlaps another bitmaps
    virtual bool overlaps(ABitmap& bmp) = 0;
    /**
     * Set the transparency color, i.e. when the bitmap has no rectangular shape
     */
    virtual void setTransparency(unsigned char const color) = 0;

    virtual ~ABitmap() = 0;
};


class Sprite: ABitmap, IMovable
{
public:
    Sprite();
    
    void moveBy(const Coord& p) override
    {
        this->pos += p;
    };
    
    void moveTo(const Coord& p) override
    {
        this->pos = p;
    };
    
    void draw() override
    {

    };
    
    bool overlaps(ABitmap& bmp) override
    {
        return false;
    }
    
    void setTransparency(unsigned char const color) override
    {
        
    }

    ~Sprite() override {

    }
};