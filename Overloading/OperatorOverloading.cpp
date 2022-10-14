/*

Operator Overloading

    use special function operator


    return-type operator operator-symbol(arguments)
    {
        //body
        return value
    }

    //operator-symbol : + - < > ++ -- 

    // . ? :: 

Types

    1. Overloading unary-operators ++, --
    

    2. Overloading binary-operators +, -

*/


#include<iostream>

class Complex
{
public:
    Complex()
    {
        real = 0;
        img = 0;
    }

    Complex(double r, double i)
    {
        real = r;
        img = i;
    }

    Complex operator +(const Complex& c)
    {
        Complex ret;
        ret.real = c.real + real;
        ret.img = c.img + img;

        return ret;
    }

    Complex operator -(const Complex& c)
    {
        Complex ret;
        ret.real = c.real - real;
        ret.img = c.img - img;

        return ret;
    }


    void print()
    {
        std::cout << real << " + i" << img << std::endl;
    }

    double real;
    double img;
};



int main(int argc, char const *argv[])
{
    
    Complex c1(10,20);
    Complex c2(5,10);


    Complex c3 = c1 + c2;
    c3.print();

    Complex c4 = c1 - c2;
    c4.print();

    return 0;
}
