/*
EXPERIMENT 1:

Implement a class Complex which represents the Complex Number data type. Implement the
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.
*/

#include<iostream>
using namespace std;

int greatest(int arr[25],int n)
{
    int max=arr[0];
    for (int i=0;i<n;i++)
    {
        if(max>arr[i]);
    }
    return max;
}

int main()
{
    int ar[25],n;
    cout<<"Enter Number of elements in array:"<<endl;
    cin>>n;
    cout<<"Enter Elements of array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<"Greatest No. :"<<greatest(ar,n);
    return 0;
}