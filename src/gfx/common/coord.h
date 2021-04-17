//SEE: https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1126/materials/cppdoc/Coord-class.html
/*
 * File: coord.h
 * -------------
 * This interface exports a class representing an integer-valued x-y pair.
 */

#pragma once
#include <string>
using namespace std;
/*
 * Class: Coord
 * ------------
 * This class represents an x-y coordinate coord on a two-dimensional
 * integer grid.  If you need to work with real-valued coords, you should
 * use the gtypes.h interface instead.
 */

class Coord {
private:
    int x;
    int y;

public:

/*
 * Constructor: Coord
 * Usage: Coord origin;
 *        Coord pt(x, y);
 * ----------------------
 * Creates a Coord object with the specified x and y coordinates.  If the
 * coordinates are not supplied, the default constructor sets these fields
 * to 0.
 */

   Coord();
   Coord(int x, int y);

/*
 * Method: getX
 * Usage: int x = pt.getX();
 * -------------------------
 * Returns the x-coordinate of the coord.
 */

   int getX() const;

/*
 * Method: getY
 * Usage: int y = pt.getY();
 * -------------------------
 * Returns the y-coordinate of the coord.
 */

   int getY() const;

/*
 * Method: toString
 * Usage: string str = pt.toString();
 * ----------------------------------
 * Returns a string representation of the Coord in the form "(x, y)".
 */

   std::string toString() const;

/*
 * Operator: ==
 * Usage: if (p1 == p2) . . .
 * --------------------------
 * Returns true if p1 and p2 are the same coord.
 */

   bool operator==(const Coord & p2) const;

/*
 * Operator: !=
 * Usage: if (p1 != p2) . . .
 * --------------------------
 * Returns true if p1 and p2 are different
 */

   bool operator!=(const Coord & p2) const;
   
   Coord operator+(const Coord & p2) const;

   Coord operator-(const Coord & p2) const;

/**
 * Change the sign of both the coordinates
 */ 
   Coord operator-();

   void operator+=(const Coord & p2);

   void operator-=(const Coord & p2);

/*
 * Operator: %
 * Usage: double distance = p1 % p2; . . .
 * --------------------------
 * Returns the modulus (distance) between p1 and p2
 */
   float operator%(const Coord & p2) const;
};

/*
 * Operator: <<
 * Usage: cout << pt;
 * ------------------
 * Overloads the << operator so that it is able to display Coord values.
 */

std::ostream & operator<<(std::ostream & os, const Coord & pt);
