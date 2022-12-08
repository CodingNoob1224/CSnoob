#include<iostream>
using namespace std;

int *func( int *a, int *b )
{
    if( *b==0 )
        return a; 
    else{
        *a = *a % *b;
        // using recursion to get gdc. 
        // passing by address because both b and a are pointers, 
        // representing the address of n2 and n1 respectively
        return func(b, a); 
    }
}

int main()
{
    int n1, n2;

    while( true )
    {
        cout<<"please enter two numbers: ";
        cin>>n1>>n2;
        cout << "gcd of "<<n1<<" and "<<n2<<" is ";
        int *gcd = func(&n1, &n2); //pass the address of the two numbers when calling the sub function
        cout<<*gcd<< endl;
    }

    return 0;
}