/*
Luca Marinelli
COP2335C
03/05/2023

IPO Chart
Input:
  - radius of a circle
Processing:
  - create an instance of the Circle class with the given radius
  - calculate the diameter of the circle usign the getDiameter() member function
  - calculate the circumference of the circle using the getCircumference() member function
  - calculate the area of the circle using the getArea() member function
Output:
  - display the diameter, circumference and area fo the circle
*/
#include <iostream>
#include <iomanip>
#include "circle.h"
using namespace std;

// function to get the radius from the user
double getRadiusFromUser() {
    double radius;
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    return radius;
}

// function to display the output with proper formatting
void displayOutput(double diameter, double circumference, double area) {
    // set the output format to display 2 decimal places
    cout << fixed << setprecision(2);

    // output the results with proper alignment
    cout << setw(16) << left << "Diameter:" << setw(10) << right << diameter << endl;
    cout << setw(16) << left << "Circumference:" << setw(10) << right << circumference << endl;
    cout << setw(16) << left << "Area:" << setw(10) << right << area << endl;
}

int main() {
    char choice;
    do {
        double radius = getRadiusFromUser();
        Circle circle(radius);
        double diameter = circle.getDiameter();
        double circumference = circle.getCircumference();
        double area = circle.getArea();
        displayOutput(diameter, circumference, area);
        cout << "\nDo you want to calculate for another circle? (Y/N) ";
        cin >> choice;
    } while (toupper(choice) == 'Y');

    return 0;
}