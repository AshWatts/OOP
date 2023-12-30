// Function Templates allow us to pass datatype as a parameter and hence we can use a generic code for more than 1 data type.


#include <iostream>

using namespace std;

template <class T>
void selectionSort(T arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
        {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

template <class T>
void insertionSort(T arr[], int size)
{
    int i, key, j;
    for (i = 1; i < size; i++) 
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

template <class T>
void inputArray(T arr[], int size) 
{
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }
}

template <class T>
void printArray(T arr[], int size) 
{
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main() 
{
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Sort Integer Array using Selection Sort\n";
        cout << "2. Sort Float Array using Selection Sort\n";
        cout << "3. Sort Integer Array using Insertion Sort\n";
        cout << "4. Sort Float Array using Insertion Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: 
            {
                int intSize;
                cout << "Enter the size of the Integer Array: ";
                cin >> intSize;

                int* intArr = new int[intSize];

                inputArray(intArr, intSize);

                cout << "Original Integer Array: ";
                printArray(intArr, intSize);

                selectionSort(intArr, intSize);

                cout << "Sorted Integer Array: ";
                printArray(intArr, intSize);

                delete[] intArr;
                break;
            }

            case 2: 
            {
                int floatSize;
                cout << "Enter the size of the Float Array: ";
                cin >> floatSize;

                float* floatArr = new float[floatSize];

                inputArray(floatArr, floatSize);

                cout << "Original Float Array: ";
                printArray(floatArr, floatSize);

                selectionSort(floatArr, floatSize);

                cout << "Sorted Float Array: ";
                printArray(floatArr, floatSize);

                delete[] floatArr;
                break;
            }

            case 3: 
            {
                int intSize;
                cout << "Enter the size of the Integer Array: ";
                cin >> intSize;

                int* intArr = new int[intSize];

                inputArray(intArr, intSize);

                cout << "Original Integer Array: ";
                printArray(intArr, intSize);

                insertionSort(intArr, intSize);

                cout << "Sorted Integer Array: ";
                printArray(intArr, intSize);

                delete[] intArr;
                break;
            }

            case 4: 
            {
                int floatSize;
                cout << "Enter the size of the Float Array: ";
                cin >> floatSize;

                float* floatArr = new float[floatSize];

                inputArray(floatArr, floatSize);

                cout << "Original Float Array: ";
                printArray(floatArr, floatSize);

                insertionSort(floatArr, floatSize);

                cout << "Sorted Float Array: ";
                printArray(floatArr, floatSize);

                delete[] floatArr;
                break;
            }

            case 5:
                cout << "Exiting program. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 5);

    return 0;
}