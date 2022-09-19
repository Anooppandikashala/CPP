#include<iostream>

// Student
/*
    marks
    name
    id
    subjects

    Class -- syntax

    class ClassName
    {
        // body of class

        access_specifier:
            // data

            // methods / functions

    };

    // Object

    ClassName objectName;
    ClassName objectName();

    

*/


class Rectangle
{
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
    Rectangle r1;

    // accessing the members
    // dot operator "."

    // obectName.memberName
    // objectName.functionName()

    r1.length = 10;
    r1.width = 10;

    double area = r1.getArea();

    std::cout << "Area :" << area;

    return 0;
}
