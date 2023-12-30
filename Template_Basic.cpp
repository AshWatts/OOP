#include<iostream>
#include<string>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    int c,d;
    float e,f;
    string g,h;
    cout<<"Enter Integers : ";
    cin>>c>>d;
    int max1 = add(c,d);
    cout<<max1;
    cout<<endl;
    cout<<"Enter Decimels : ";
    cin>>e>>f;
    float max2 = add(e,f);
    cout<<max2;
    cout<<endl; 
    cout<<"Enter Strings : ";
    cin>>g>>h;
    string max3 = add(g,h);
    cout<<max3;
    cout<<endl;      
}