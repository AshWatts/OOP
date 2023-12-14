#include <bits/stdc++.h>
using namespace std;

int main()
{
    typedef map<string,int> population;
    population pm;
    pm["Maharashtra"]=10;
    pm["UP"]=20;
    pm["WB"]=8; 
    pm["Bihar"]=14;
    pm["MP"]=5;
    pm["Tamil_Nadu"]=6;
    pm["Rajasthan"]=7;
    pm["Andhra_Pradesh"]=8;
    pm["Odisha"] = 9;
    pm["Kerala"] = 4;
    population::iterator iter ;
    char a;
    do
    {
        string state;
        cout<<"\nEnter that state you want to know the population of: ";
        cin>>state;
        iter = pm.find(state);
        if( iter != pm.end() )
        {
            cout << state <<"'s populations is "<< iter->second << " million"<<endl;
        }
        else
        {
            cout << "State is not in populationMap" << endl;
        }
                          
        cout<<"Do you wish to continue?(y/n):";
        cin>>a;
    }while(a=='y' || a=='Y');
}

