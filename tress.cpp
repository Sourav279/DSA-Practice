#include <bits/stdc++.h>
using namespace std;

// Declaration of Node
// class TreeNode
// {
// public:
//     int data;
//     TreeNode *left;
//     TreeNode *right;

//     TreeNode(int value)
//     {
//         data = value;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// Same as class but The only default difference is that members of a struct are public by default, while members of a class are private by default.
// Declaration of Node
struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    // int n;
    // cin >> n;
    // int k;
    // cin >> k;
    // vector<int> array(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array[i];
    // }

    // int ans = Search_Element_in_Rotated_Sorted_Array(array, n, k);
    // cout << "The index of the element in the rotated sorted array is: " << ans;

    int x = 10;
    int *y = &x;
    cout << x << " " << y << " " << *y;
    return 0;
}