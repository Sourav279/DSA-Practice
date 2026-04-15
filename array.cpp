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

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest_element = largest_element_in_array(arr, n);
    cout << "Largest Element: " << largest_element;
}