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

int second_smallest_element_in_array(int arr[], int n)
{
    int smallest_number = arr[0];
    int second_smallest_number = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (smallest_number > arr[i])
        {
            second_smallest_number = smallest_number;
            smallest_number = arr[i];
        }
        if (second_smallest_number > arr[i] && arr[i] > smallest_number)
        {
            second_smallest_number = arr[i];
        }
    }
    return second_smallest_number;
}

bool check_if_array_is_sorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int remove_duplicates_from_sorted_array(int arr[], int n)
{
    // Remove duplicates from sorted array and return count  for unique elements and also place them in front in same array

    // Brute force approach. Time complexity = nlogn + n. Space = n
    // set<int> new_set;
    // for (int i = 0; i < n; i++)
    // {
    //     new_set.insert(arr[i]);
    // }

    // int index = 0;
    // for (auto i : new_set)
    // {
    //     arr[index] = i;
    //     index++;
    // }
    // return index;

    //  Most optimal solution best. Time complexity = n. Space = n
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[j])
        {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    return j + 1;
}

void left_rotate_array_by_one_element(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void left_rotate_array_by_d_index(int arr[], int n, int d)
{
    d = d % n;

    // Brute force approach
    // int temp_arr[d];
    // for (int i = 0; i < d; i++)
    // {
    //     temp_arr[i] = arr[i];
    // }
    // for (int i = d; i < n; i++)
    // {
    //     arr[i - d] = arr[i];
    // }

    // for (int i = n - d; i < n; i++)
    // {
    //     arr[i] = temp_arr[i - (n - d)];
    // }
    // Optimal approach
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
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
    int d;
    cin >> d;
    left_rotate_array_by_d_index(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // int total_unique_element = remove_duplicates_from_sorted_array(arr, n);
    // cout << "total_unique_element: " << total_unique_element << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // bool is_sorted = check_if_array_is_sorted(arr, n);
    // if (is_sorted)
    //     cout << "Array is already sorted";
    // else
    //     cout << "Array is not sorted";

    // int second_smallest_element = second_smallest_element_in_array(arr, n);
    // cout << "Second Smallest Element: " << second_smallest_element;

    // int second_largest_element = second_largest_element_in_array(arr, n);
    // cout << "Second Largest Element: " << second_largest_element;

    // int largest_element = largest_element_in_array(arr, n);
    // cout << "Largest Element: " << largest_element;
}