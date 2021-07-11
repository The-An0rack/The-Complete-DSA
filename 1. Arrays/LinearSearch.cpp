#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int val)
{
    for(int i = 0; i < n; i++)
    {
        if(val == arr[i]) return i;
    }
    return -1;
}

int main()
{
    int arr[] = {5,7,12,9,11};
    int n = sizeof(arr)/sizeof(int);
    int val = 9;
    int pos = linearSearch(arr,n,val);
    if(pos == -1) cout << "Element Not Found";
    else cout << "Element found at index: " << pos;
    return 0;
}
