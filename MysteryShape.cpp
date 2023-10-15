// File: Shape/MysteryShape.cpp

#include "MysteryShape.hpp"
#include "../Utilities/Utilities.hpp"


MysteryShape::MysteryShape(double d1, double d2, double len) {
    if (d1 < 0.0 || d2 < 0.0 || len < 0.0){
        cerr << "precondition violated: properties cannot be negative values" << endl;
        throw -1;
    }
    _d1 = d1;
    _d2 = d2;
    _length = len;
}

double MysteryShape::area(){
    return (_d1 * _d2) / 2;
}

double MysteryShape::perimeter(){
    return 4 * _length;
}
void MysteryShape::scale(double factor){
    if(factor <= 0.0) {
        cerr << "factor must be greater than 0.0" << endl;
        throw -1;
    }

    _d1 *= factor;
    _d2 *= factor;
    _length *= factor;
}
void MysteryShape::display(){
    cout << "Diamond" << endl;
    cout << "Length: " << _length << endl;
    cout << "Diagonal1: " << _d1 << endl;
    cout << "Diagonal2: " << _d2 << endl;
}
void MysteryShape::promptAndSetDimensions(){
    _length = promptDoubleGE("Length?", 0.0);
    _d1 = promptDoubleGE("Diagonal1?", 0.0);
    _d2 = promptDoubleGE("Diagonal2?", 0.0);
}