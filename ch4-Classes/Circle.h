#include "Shape.h"

class Circle: public Shape{
    public:
    Circle(Point p, int rad); //constructor
    Point center() const override //override helps to be explicit about our intetntion.
    {
        return x;
    }
    void move(Point to) override
    {
        x = to;
    }
    void draw() const override;
    void roatate(int) override{}
    private:
    Point x; //center
    int r; //radius
};
//making it inline puts this code close to the class code and makes it faster
inline Circle::Circle(Point p, int rad): x(p),r(rad) {}