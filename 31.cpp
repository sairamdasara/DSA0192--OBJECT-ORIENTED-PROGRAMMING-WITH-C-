#include<iostream>
using namespace std;

int main()
{
    int *arr, n, i;
    int sum = 0;

    cout << "Enter number of elements in array: ";
    cin >> n;
    arr = new int[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of array elements: " << sum << endl;
    return 0;
}

