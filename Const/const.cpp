// Const
#include<iostream>

using namespace std;

int main()
{
	const int i = 9;
	//i=5;    //will not work
	
	const int *p1 = &i; //data is const, pointer is not
	//*p1 = 5;    //will not work
	p1++ ; //increment the pointer variable

	int j = 10;
	int* const p2 = &j;  //pointer is const, data is not
	
	const int* const p3 = &i; //data and pointer are both constant
	
	
	int const *p4 = &i; //this is equal to // const int *p4 = &i;
	
	
	// If const is on the left of *, data is const
	// If const is on the right of *, pointer is const
	
	//Casting
	
	const_cast<int&>(i) = 6; //it will not remove the const of i 	
	
	//const cast only for const reference and pointers.
	
	
	//cout << i;
	
	//i =10; //it will not work
	
	cout << i;
	
	
	



}


