#include "sprite.h"

void Sprite::moveBy(const Coord& p) 
{
    this->pos += p;
};
    
void Sprite::moveTo(const Coord& p)
{
    this->pos = p;
};
    
void Sprite::draw()
{

}   

bool Sprite::overlaps(ABitmap& bmp)
{
    return false;
}
    
void Sprite::setTransparency(unsigned char const color)
{
        
}
