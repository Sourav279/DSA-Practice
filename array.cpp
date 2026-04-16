#include <bits/stdc++.h>
using namespace std;

int largest_element_in_array(int arr[], int n)
{
    // Brute force method (less optimal)
    // sort(arr, arr + n);
    // return arr[n - 1];

    // Most optimal solution best
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}

int second_largest_element_in_array(int arr[], int n)
{
    // Brute force method (less optimal)
    // sort(arr, arr + n);
    // int i = n - 1;
    // while (i--)
    // {
    //     if (arr[i] < arr[n - 1])
    //         return arr[i];
    // }
    // return -1;

    // Better solution
    // int largest = arr[0];
    // int second_largest = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > largest)
    //         largest = arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > second_largest && arr[i] < largest)
    //         second_largest = arr[i];
    // }
    // return second_largest;

    // Most optimal solution best
    int largest = arr[0];
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    }
    return second_largest;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int second_largest_element = second_largest_element_in_array(arr, n);
    cout << "Second Largest Element: " << second_largest_element;
    // int largest_element = largest_element_in_array(arr, n);
    // cout << "Largest Element: " << largest_element;
}