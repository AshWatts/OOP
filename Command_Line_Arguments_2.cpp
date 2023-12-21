// Actual code for file handling


#include<iostream>
#include<fstream>
using namespace std;

int main(int argc , char* argv[])         // OR int main(int argc , char** argv)
{
    if(argc!=2)
    {
        cout<<"Error in opening file!";
        return 0;
    }

    char c;
    ifstream file;
    file.open(argv[1]);
    cout<<"File Contents : ";
    while(file.eof()!=0)
    {
        file>>c;
        cout<<c;
    }
    return 0;
}