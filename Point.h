#pragma once
class Point
{
private:
	double x;
	double y;
	Point();
	Point(double x = 0.0, double y = 0.0);
	Point(const Point& c);
public:
	static Point* fabriquer(double x = 0.0, double y = 0.0);
	void translate(double x, double y);
	void afficher() const;
	double distance(const Point& p) const;
	bool operator==(const Point& p) const;
	~Point();
};


