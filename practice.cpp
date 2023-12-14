//9



#include<bits/stdc++.h>
using namespace std;


template <typename T>
void take(T l[], int size)
{
    cout<<"Enter "<<size<<" elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>l[i];
    }
}

template <typename T>
void show(T l[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<l[i]<<"   ";
    }
    cout<<endl;
}

template <typename T>
void SS(T l[], int size)
{
    for(int i=0;i<size;i++)
    {
        int min=i;
        for(int j=i+1;j<size;j++)
        {
            if(l[j]<l[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            swap(l[i],l[min]);
        }
    }
}

template <typename T>
void IS(T l[], int size)
{
    for(int i=1;i<size;i++)
    {
        int k=l[i];
        int j=i-1;
        while(j>=0 && l[j]>k)
        {
            l[j+1]=l[j];
            j=j-1;
        }
        l[j+1]=k;
    }
}




int main()
{
    int a;

    do {
        cout << "\nMenu:\n";
        cout << "1. Sort Integer Array using Selection Sort\n";
        cout << "2. Sort Float Array using Selection Sort\n";
        cout << "3. Sort Integer Array using Insertion Sort\n";
        cout << "4. Sort Float Array using Insertion Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> a;

        switch(a)
        {
            case 1:
            {
                int n;
                cout<<"Enter number of elements : ";
                cin>>n;

                int *arr=new int[n];

                take(arr,n);

                cout<<"Original Array : ";
                show(arr,n);

                SS(arr,n);

                cout<<"Sorted Array : ";
                show(arr,n);

                break;
            }

            case 2:
            {
                int n;
                cout<<"Enter number of elements : ";
                cin>>n;

                float *arr=new float[n];

                take(arr,n);

                cout<<"Original Array : ";
                show(arr,n);

                SS(arr,n);

                cout<<"Sorted Array : ";
                show(arr,n);

                break;
            }

            case 3:
            {
                int n;
                cout<<"Enter number of elements : ";
                cin>>n;

                int *arr=new int[n];

                take(arr,n);

                cout<<"Original Array : ";
                show(arr,n);

                IS(arr,n);

                cout<<"Sorted Array : ";
                show(arr,n);

                break;
            }

            case 4:
            {
                int n;
                cout<<"Enter number of elements : ";
                cin>>n;

                float *arr=new float[n];

                take(arr,n);

                cout<<"Original Array : ";
                show(arr,n);

                IS(arr,n);

                cout<<"Sorted Array : ";
                show(arr,n);

                break;
            }

            case 5:
            {
                cout<<"Exiting the Program!";
                break;
            }

            default:
            {
                cout<<"Enter a Valid Choice!\n";
            }
        }

    }while(a!=5);
}