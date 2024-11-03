#include "Cercle.h"
#include "Point.h"
#include <cmath>
#include <iostream>
using namespace std;
double Cercle::pi = 3.14;

Cercle::Cercle(int id, Point* p, double r)
{
    this->id = id;
    this->centre = p;
    this->rayon = r;
}

void Cercle::afficher() const
{
    cout << "Cercle " << this->id << ": " << "centre= ";
    this->centre->afficher();
    cout << "Rayon=" << this->rayon;
}

void Cercle::modifRayon(double r)
{
    this->rayon = r;
}

void Cercle::translate(double x, double y)
{
    this->centre->translate(x, y);
}

double Cercle::perimetre() const
{
    return 2 * pi * this->rayon;
}

double Cercle::surface() const
{
    return pow(this->rayon, 2) * pi;
}

bool Cercle::appartCercle(const Point& p) const
{
    return p.distance(*(this->centre)) <= this->rayon;
}

bool Cercle::operator==(const Cercle& c) const
{
    return (c.centre == this->centre) && (c.rayon == this->rayon);
}

Cercle::~Cercle()
{
    cout << "detruire cercle" << endl;
}
