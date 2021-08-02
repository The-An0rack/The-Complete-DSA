#include<iostream>

using namespace std;

int binary_search_(int arr[], int num, int lower, int upper)
{
    int mid;
    if(lower == upper)
    {
        if (arr[lower] == num)
        {
            return lower;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        mid = (lower + upper)/2;
        if(arr[mid] == num) return mid;
        if(num > arr[mid])
            lower = mid + 1;
        if(num < arr[mid])
            upper = mid - 1;

        return binary_search_(arr,num,lower,upper);
    }
}

int main()
{
    //Binary search only takes place in a sorted array
    int arr[] = {3, 7, 8, 12, 34 ,78 };
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: " << endl;
    for(int i = 0 ; i < n; i++) cout <<arr[i] << "  ";

    int val = 3;
    int idx = binary_search_(arr, val, 0 ,n);
    (idx == -1) ? cout << "\nValue " << val << " was Not Found" : cout << "\nValue " << val <<" fount at index " << idx;

    int val = 13;
    int idx = binary_search_(arr, val, 0 ,n);
    (idx == -1) ? cout << "\nValue " << val << " was Not Found" : cout << "\nValue " << val <<" fount at index " << idx;
    return 0;
}
