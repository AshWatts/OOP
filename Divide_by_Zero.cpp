#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b;
    cout<<"Enter Numerator : ";
    cin>>a;
    cout<<"Enter Denominator : ";
    cin>>b;
    try
    {
        if(b==0)
        {
            throw b;
        }
        cout<<"Division is "<<a/b;
    }
    catch(float b)
    {
        cout<<"Cannot divide by zero!";
    }
}