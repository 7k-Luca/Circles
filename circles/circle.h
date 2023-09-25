#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
    private:
        const double PI = 3.14159;
        double radius;
    public:
        Circle();
        Circle(double r);
        double getRadius();
        void setRadius(double r);
        double getDiameter();
        double getCircumference();
        double getArea();
};

#endif // CIRCLE_H