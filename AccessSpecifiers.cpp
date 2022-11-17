#include<iostream>

/*

C++ Access Modifiers

Types:

    1. public:
        --------- access from any part of the program

    2. private:
        --------- only accessed from within the class.
        --------- also friend class and friend functon can access it

    3. protected:
        --------- accessed from within the class.
        --------- also from the child class.


*/

class Rectangle
{

public:

    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double getArea()
    {
        return length * width;
    }

protected:
    double length;
    double width;

};


class Square : public Rectangle
{
    public:

        Square(double l)
        {
            length = l;
            width = l;
        }


        double getSquareArea()
        {
            return length * width;
        }
};


int main(int argc, char const *argv[])
{

    Rectangle r1(10,20);

    // std::cout << "length :" << r1.length << std::endl;
    // std::cout << "width :" << r1.width << std::endl;
    std::cout << "area :" << r1.getArea() << std::endl;

    Square s(10);
    std::cout << "Square Area : " << s.getArea() << std::endl;
    
    return 0;
}
