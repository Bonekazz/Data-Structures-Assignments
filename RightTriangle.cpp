// File: Shape/RightTriangle.cpp

#include <cmath> // sqrt.


#include "RightTriangle.hpp"
#include "../Utilities/Utilities.hpp"

RightTriangle::RightTriangle(double base, double height) {
    if(base < 0.0 || height < 0.0) {
        cerr << "RightTriangle: Exercise for the student." << endl;
        throw -1; 
    }

    _base = base;
    _height = height;
}

double RightTriangle::area() {
    return _base * _height;
}

double RightTriangle::perimeter() {
    return 2.0 *(_base + _height);
}

void RightTriangle::scale(double factor) {
    if(factor <= 0.0) {
        cerr << "factor must be greater than 0.0" << endl;
        throw -1;
    }

    _base *= factor;
    _height *= factor;
}

void RightTriangle::display() {
    cout << "Rectangle" << endl;
    cout << "base: " << _base << endl;
    cout << "height: " << _height << endl;
}

void RightTriangle::promptAndSetDimensions() {
    _base = promptDoubleGE("base?", 0.0);
    _height = promptDoubleGE("height?", 0.0);
}
