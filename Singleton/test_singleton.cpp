#include<iostream>

//implementation of singleton

class Test
{
private:
    int x=0;
    Test(){
        //null constructor
    }

    static Test* object;

public:
    static Test* getObject()
    {
        if(object == 0)
        {
            object = new Test();
        }
        return object;
    }
    void setX(int x_)
    {
        x = x_;
    }

    int getX()
    {
        return x;
    }
};

Test* Test::object=0;

int main()
{
    //new Singleton(); // Won't work
    Test* a = Test::getObject(); // Ok
    a->setX(6333);
    
    

    /* The addresses will be the same. */
    std::cout << a << std::endl;
    std::cout << a->getX() << std::endl;
    Test* b = Test::getObject();
    b->setX(9999);
    std::cout << b << std::endl;
    std::cout << b->getX() << std::endl;
    std::cout << a->getX() << std::endl;
}
