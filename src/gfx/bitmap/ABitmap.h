#pragma once
#include "../common/coord.h"
#include "../common/size.h"

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
