/*OUT PUT

g++ constAndFunctions.cpp 
./a.out
10
10
dummy
In non-const function : dummy
dummy
In const function : dummy
dummy

*/


#include<iostream>
using namespace std;
class Dog
{
int age;
string name;
public:
	Dog():age(3),name("dummy"){}
	
	void setAge1(int &a)
	{
		age = a;
		a++; //it will increment the value of i in the main function bcz it pass by reference; 
	}
	
	void setAge2(const int &a)
	{
		age = a;
		//a++; will not work here
	}
	
	//const return value
	const string& getName(){return name;}
	
	const string& getNameDummy() const { return name;}
	
	void printDogName()
	{ 
		cout<<"In non-const function : "<< name <<endl;
		
		cout << getNameDummy() <<endl;
	
	}
	//const function  means it will not change the member variables
	void printDogName() const
	{ 
		cout<<"In const function : " <<name <<endl;
		
		cout << getNameDummy(); // this function call permit bcz it is const function
		
		//but
		
		// cout <<  getName() ; //this function call not permit bcz it is not const function
		
		
		//age++;
		//name = "sddssd";  will not permit to modify the memeber variable
		
		
	}
	
};

int main()
{
	Dog d;
	
	int i = 9;
	
	d.setAge1(i);
	
	cout<< i <<endl;
	
	d.setAge2(i);
	
	cout<< i <<endl;
	
	string n = d.getName();
	cout<<n<<endl;
	
	d.printDogName();// call the non- const function
	
	const Dog d1;
	d1.printDogName();// call the const function
	

}
