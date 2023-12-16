//13

#include<bits/stdc++.h>
using namespace std;


class Item 
{
    public:
    int code;
    string name;
    float cost;
    int quantity;

    bool operator == (const Item &i1)
    {
        if(code==i1.code)
        {
            return 1;
        }
        return 0;
    }

    bool operator < (const Item &i1)
    {
        if(code<i1.code)
        {
            return 1;
        }
        return 0;
    }
};

vector <Item> o1;
void print(Item &i1);
void insert();
void del();
void display();
void search();
bool compare(const Item &i1, const Item &i2)
{
    if(i1.name!=i2.name)
    {
        return i1.cost<i2.cost;
    }
}


int main()
{
    int ch;
    do
    {
        cout<<"\n* * * * * Menu * * * * *";
        cout<<"\n1.Insert";
        cout<<"\n2.Display";
        cout<<"\n3.Search";
        cout<<"\n4.Sort";
        cout<<"\n5.Delete";
        cout<<"\n6.Exit";
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch(ch)
        {
            case 1:
            insert();
            break;

            case 2:
            display();
            break;

            case 3:
            search();
            break;

            case 4:
            sort(o1.begin(),o1.end(),compare);
            cout<<"\n\n Sorted on Cost : ";
            display();
            break;

            case 5:
            del();
            break;

            case 6:
            cout<<"Exiting";
        }
 
    }while(ch!=6);
    return 0;
}


void insert()
{
    Item i1;
    cout<<"Name : ";
    cin>>i1.name;
    cout<<"Code : ";
    cin>>i1.code;
    cout<<"Price : ";
    cin>>i1.cost;
    cout<<"Quantity : ";
    cin>>i1.quantity;
    o1.push_back(i1);
}

void display()
{
    for_each(o1.begin(),o1.end(),print);
}

void print(Item &i1)
{
    cout<<"\nItem name : "<<i1.name;
    cout<<"\nItem Code : "<<i1.code;
    cout<<"\nItem price : "<<i1.cost;
    cout<<"\nItem Quantity : "<<i1.quantity;
}

void search()
{
    vector <Item> :: iterator p;
    Item i1;
    cout<<"Enter code to be searched : ";
    cin>>i1.code;

    p=find(o1.begin(),o1.end(),i1);

    if(p!=o1.end())
    {
        cout<<"\nFound";
    }
    else
    {
        cout<<"\nNot found";
    }
}

void del()
{
    vector <Item> :: iterator p;
    Item i1;
    cout<<"Enter code to be deleted : ";
    cin>>i1.code;

    p=find(o1.begin(),o1.end(),i1);

    if(p!=o1.end())
    {
        o1.erase(p);
        cout<<"\nErased!";
    }
    else
    {
        cout<<"Not found";
    }
}