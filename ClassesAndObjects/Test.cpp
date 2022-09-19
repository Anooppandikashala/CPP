
#include<iostream>

class A
{
    public:
        void printA()
        {
            if(!_a)
            {
                std::cout << _a;
            } 
        }
    private:
        bool _a;
};

int main(int argc, char const *argv[])
{
    A a;
    a.printA();
    return 0;
}
