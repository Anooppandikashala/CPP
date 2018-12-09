// Friend Class
#include<iostream>
using namespace std;
class MyClass1
{
	friend class MyClass2;
	int x;
	public:
	
		MyClass1(int a)
		{
			x=a;
		}

};
class MyClass2
{
	public:
		void showData(MyClass1 obj)
		{
			cout<<"Value of x is"<<obj.x;
		}

};
int main()
{

	MyClass1 obj1(5);
	MyClass2 obj2;
	
	obj2.showData(obj1);

	return 0;

}
