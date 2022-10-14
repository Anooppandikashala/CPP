/*
    Overloading

    1. Constructor Overloading

        --- same name (name of the class)
        --- different number of arguments


    2. Function Overloading

        --- same name and return-type
        --- different number of arguments


*/

#include<iostream>

class Rectangle
{

public:

    // Constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(double len, double wid)
    {
        length = len;
        width = wid;
    }

    Rectangle(double side)
    {
        length = side;
        width = side;
    }

    void print()
    {
        std::cout << "length: "<< length << std::endl;
        std::cout << "width: "<< width << std::endl;
    }

    double getArea()
    {
        return length * width;
    }

    double getArea(double l, double w)
    {
        return l * w;
    }

    double getArea(double side)
    {
        return side * side;
    }



    double length;
    double width;

};


int main(int argc, char const *argv[])
{

    Rectangle r1;
    r1.print();
    std::cout << "Area : " << r1.getArea() << std::endl;
    Rectangle r2(100,200);
    r2.print();
    std::cout << "Area : " << r2.getArea() << std::endl;
    Rectangle s(50);
    s.print();
    std::cout << "Area : " << s.getArea() << std::endl;



    Rectangle r3;
    std::cout << "Area : " << r3.getArea() << std::endl;
    std::cout << "Area : " << r3.getArea(10,10) << std::endl;
    std::cout << "Area : " << r3.getArea(20) << std::endl;
    
    return 0;
}
