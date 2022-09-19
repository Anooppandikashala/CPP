#include<iostream>


/*
    Constructor and Destructor 

    Constructor 

        1. special type of member function
        2. called automatically when an object is created.

        Types
            1. Default 
            2. Parameterized 

    Destructor
        1. special type of member function
        2. called automatically when an object is deleted.

    Name is same as Class Name
    no return type


*/


class Rectangle
{
    // Constructor

    public:
        Rectangle()
        {
            std::cout << "Default Constructor called" << std::endl;
            length = 0;
            width = 0;
        }

        Rectangle(int len, int wid)
        {
            std::cout << "Parameterized Constructor called" << std::endl;
            length = len;
            width = wid;
        }

        ~Rectangle()
        {
            std::cout << "Destructor called " << std::endl;
        }

    // data members
    public:
        double length;
        double width;

    // functions
    double getArea()
    {
        return length * width;
    }

};


int main()
{
    // Program start here
    Rectangle r1(20,20);

    // accessing the members
    // dot operator "."

    // obectName.memberName
    // objectName.functionName()

    // r1.length = 10;
    // r1.width = 10;

    double area1 = r1.getArea();

    std::cout << "Area1 :" << area1 << std::endl;

    Rectangle r2;
    double area2 = r2.getArea();
    std::cout << "Area2 :" << area2 << std::endl;



    return 0;
}
