#pragma once
#include "Point.h"

class Cercle
{
private:
	int id;
	Point* centre;
	double rayon;
	static double pi;
public:
	Cercle(int id, Point* p, double r);
	void afficher() const;
	void modifRayon(double r);
	void translate(double x, double y);
	double perimetre() const;
	double surface() const;
	bool appartCercle(const Point& p) const;
	bool operator==(const Cercle& c) const;
	~Cercle();
};


