// File: Shape/Rectangle.cpp

#include "Rectangle.hpp"
#include "../Utilities/Utilities.hpp"

Rectangle::Rectangle(double length, double width) {
    if (length < 0.0 || width < 0.0) {
        cerr << "Rectangle precondition violated: length and width cannot be negative." << endl;
        throw -1;
    }
    _length = length;
    _width = width;
}

double Rectangle::area() {
    return _length * _width;
}

double Rectangle::perimeter() {
    return 2.0 *(_length + _width);
}

void Rectangle::scale(double factor) {
    if(factor <= 0.0) {
        cerr << "factor must be greater than 0.0" << endl;
        throw -1;
    }

    _length *= factor;
    _width *= factor;
}

void Rectangle::display() {
    cout << "Rectangle" << endl;
    cout << "Length: " << _length << endl;
    cout << "Width: " << _width << endl;
}

void Rectangle::promptAndSetDimensions() {
    _length = promptDoubleGE("Length?", 0.0);
    _width = promptDoubleGE("Width?", 0.0);
}
