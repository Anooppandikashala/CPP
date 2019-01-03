/*
	1. Unique pointer 
	2. Shared pointer
	ss
*/
#include<iostream>
#include<memory>

class A
{
	public:
		
		A()
		{
			std::cout<<"A created\n";
		}
		
		~A()
		{
			std::cout<<"A destroyed\n";
		}
		
		void Print()
		{
			std::cout<<"\nPrinting\n";
		}

};

int main()
{
	{
		//std::unique_ptr<A> A(new A()); //or
		std::unique_ptr<A> A = std::make_unique<A>();
		//can not be copied 
		//std::unique_ptr<A> e0 = A; // compilation error
		A->Print();
		
	}
	
	{
		std::shared_ptr<A> sharedA = std::make_shared<A>();
		std::shared_ptr<A> e0 = sharedA;
	
	}

}



