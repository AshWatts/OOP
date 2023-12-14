//7

#include<bits/stdc++.h>
using namespace std;

int main()
{
    fstream file;

    file.open("ayush.txt",ios::out);

    if(!file)
    {
        cout<<"Error in creating or opening file!";
        return 0;
    }

    cout<<"File created or opened successfully.";

    file<<"ABCDEFG";

    file.close();

    file.open("ayush.txt",ios::in);

    char a;

    cout<<"\nFile Contents : ";

    while(!file.eof())
    {
        file>>a;
        cout<<a;
    }

    file.close();

    cout<<"\nFile closed.";

}   