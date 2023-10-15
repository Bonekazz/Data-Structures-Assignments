#ifndef MysteryShape_hpp
#define MysteryShape_hpp

#include "../AShape/AShape.hpp"

class MysteryShape : public AShape {
private:
    double _d1;
    double _d2;
    double _length;

public:
    explicit MysteryShape(double d1 = 0.0, double d2 = 0.0, double len = 0.0);
    double area() override;
    double perimeter() override;
    void scale(double factor) override;
    void display() override;
    void promptAndSetDimensions() override;
};

#endif