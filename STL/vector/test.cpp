#include<iostream>

#include <vector>

using namespace std;
int main()
{

    vector< int > v(10);
    cout << v.size();
    for(int i=0; i<10;i++)
    {

        v.insert((i*10)+(i+2));
        
    }
    
    
}
