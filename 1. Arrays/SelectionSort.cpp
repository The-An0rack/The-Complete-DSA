#include<iostream>

using namespace std;

void selection_sort(int arr[], int n)
{
    int temp;
    for(int i = 0 ; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
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

    selection_sort(arr,n);

    cout << "\n\nAfter Sorting: " << endl;
    for(int i = 0 ; i < n; i++)
        cout << arr[i] << "  ";
    cout << endl;
    return 0;
}
