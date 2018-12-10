


#include<iostream>
using namespace std;

class Dog
{
public:
	Dog()
	{
		cout<<"Dog Born"<<endl;
	}
	virtual void barkDemo()
	{
		cout<<"Dog barking"<<endl;
	}
	void bark()
	{
		cout<<"Dog barking"<<endl;
	}
	void seeCat()
	{
		bark();
		barkDemo();
	}
	

};

class BrownDog : public Dog
{
public:
	BrownDog()
	{
		cout<<"Brown Dog Born"<<endl;
	}
	void bark()
	{
		cout<<"Brown Dog barking"<<endl;
	}
	void barkDemo()
	{
		cout<<"Brown Dog barking Demo"<<endl;
	}
	

};

int main()
{
	BrownDog dog;
	dog.seeCat();
	
}
