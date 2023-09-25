#include "circle.h"

Circle::Circle() {
    radius = 0.0;
}

Circle::Circle(double r) {
    radius = r;
}

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getDiameter() {
    return radius * 2;
}

double Circle::getCircumference() {
    return 2 * PI * radius;
}

double Circle::getArea() {
    return PI * radius * radius;
}
