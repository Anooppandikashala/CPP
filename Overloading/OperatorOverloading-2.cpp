#include<iostream>

/*


1. prefix

    ++a, --a

    returnType operator symbol()
    {
        //body
        return
    }


2. postfix

    a++, a--

    returnType operator symbol(int)
    {
        //body
        return
    }



*/



class Number
{

public:

    Number()
    {
        value = 0;
    }

    Number(int val)
    {
        value = val;
    }


    // prefix ++

    Number operator ++()
    {
        //body
        Number n;
        n.value = ++value;
        return n;
    }

    // postfix ++

    Number operator ++(int)
    {
        //body
        Number n;
        n.value = value++;
        return n;
    }

    // prefix --

    Number operator --()
    {
        //body
        Number n;
        n.value = --value;
        return n;
    }

    // postfix --

    Number operator --(int)
    {
        //body
        Number n;
        n.value = value--;
        return n;
    }



    int value;
};


int main(int argc, char const *argv[])
{
    Number n1(10);
    Number n2 = ++n1;
    Number n3 = n1++;

    std::cout << "n1:" << n1.value << std::endl;
    std::cout << "n2:" << n2.value << std::endl;
    std::cout << "n3:" << n3.value << std::endl;

    Number n4 = n3--;
    Number n5 = --n4;

    std::cout << "n4:" << n4.value << std::endl;
    std::cout << "n5:" << n5.value << std::endl;

    return 0;
}
