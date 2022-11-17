#include<iostream>

/*

    Abstraction

        ------- Hiding unwanted informations and implementations from the outside


        1.  By Header files

        2.  Using Classes and Access Specifiers

    Encapsulation

        ------- Combining similar data and functions
        
        Example : Class implementations


*/


class Person
{
public:

    Person(std::string name_)
    {
        name = name_;
    }

    std::string getName()
    {
        return name;
    }

    void setName(std::string name_)
    {
        name = name_;
    }

private:
    std::string name;

};


int main(int argc, char const *argv[])
{
    Person p("ANOOP");
    std::cout << "Name: " << p.getName() << std::endl;
    

    return 0;
}
