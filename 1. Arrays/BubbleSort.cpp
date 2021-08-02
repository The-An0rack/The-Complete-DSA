#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n)
{
    int temp;

    for(int j = 0 ; j < n - 1; j++)
    {
        for(int i = 0 ; i < n-j-1 ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {12,6,23,67,22,90,58};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout << "Before Sorting: " << endl;
    for(int i = 0 ; i < n; i++)
        cout << arr[i] << "  ";


    bubble_sort(arr,n);


    cout << "\n\nAfter Sorting: " << endl;
    for(int i = 0 ; i < n; i++)
        cout << arr[i] << "  ";

    cout << endl;

    return 0;
}
