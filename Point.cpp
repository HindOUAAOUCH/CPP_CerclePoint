#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point(double x, double y) :x(x), y(y) {}

Point* Point::fabriquer(double x, double y)
{
    return new Point(x, y);

}

void Point::translate(double x, double y)
{
    this->x += x;
    this->y += y;
}

void Point::afficher() const
{
    cout << "(" << this->x << "," << this->y << ")" << endl;
}

double Point::distance(const Point& p) const
{
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

bool Point::operator==(const Point& p) const
{
    return (this->x == p.x) && (this->y == p.y);
}

Point::~Point()
{
    cout << "detruire point" << endl;

}
