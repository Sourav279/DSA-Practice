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

void move_zeroes_to_the_end(int arr[], int n)
{
    // Brute force appproach
    // int temp[n] = {0};
    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] != 0)
    //     {
    //         temp[j] = arr[i];
    //         j++;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = temp[i];
    // }

    // More optimal solution

    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     while (j < n && arr[j] != 0)
    //     {
    //         j++;
    //     }
    //     if (arr[i] != 0 && i > j)
    //         swap(arr[i], arr[j]);
    // }
    int j = 0;
    while (arr[j] != 0 && j < n)
        j++;
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int linear_search_first_occurance(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

vector<int> union_of_two_array(vector<int> arr1, vector<int> arr2)
{
    // Brute force approach
    //  set<int> st;
    //  for (auto i : arr1)
    //      st.insert(i);
    //  for (auto i : arr2)
    //      st.insert(i);

    // vector<int> arr;
    // for (auto i : st)
    //     arr.push_back(i);
    // return arr;

    // Optimal approach O(n1+n2)
    vector<int> union_array;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (union_array.size() == 0 || union_array.back() != arr1[i])
            {
                union_array.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (union_array.size() == 0 || union_array.back() != arr2[j])
            {
                union_array.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (arr1[i] != union_array.back())
        {
            union_array.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (union_array.back() != arr2[j])
        {
            union_array.push_back(arr2[j]);
        }
        j++;
    }
    return union_array;
}

vector<int> intersection_of_two_sorted_array(vector<int> arr1, vector<int> arr2)
{
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0;
    int j = 0;
    vector<int> intersection_array;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            intersection_array.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return intersection_array;
}

int find_missing_number(vector<int> arr, int n)
{
    // Brute force method Time complexity = O(n*m) Space compexity =O(1);
    // for (int i = 1; i <= n; i++)
    // {
    //     bool ans = false;
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (i == arr[j])
    //         {
    //             ans = true;
    //             break;
    //         }
    //     }
    //     if (!ans)
    //         return i;
    // }

    // Better Solution using the hashing Time complexity = o(2n) Space complexity = O(n)
    // vector<int> is_present_array(n + 1, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     is_present_array[arr[i]] = 1;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     if (is_present_array[i] == 0)
    //         return i;
    // }

    // // Optimal solution - 1 Timecomplexity - O(n) Space complexity = O(1)
    // int sum_of_n_natural_numbers = n * (n + 1) / 2;
    // int sum = 0;
    // for (auto i : arr)
    // {
    //     sum += i;
    // }
    // return sum_of_n_natural_numbers - sum;

    // Most Optimal solution - 2 XOR method Timecomplexity - O(n) Space complexity = O(1)
    // Better because in sum if value if 10**5 then sum will be around 10**10 which need long not int but in xor max value will be 10**5 for this.
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        xor1 ^= i + 1; // only xor upto n-1
        xor2 ^= arr[i];
    }
    xor1 ^= n; // complete all xor upto n
    // Xor 2^2 = 0, 2^0 = 2, 2^3 = some num
    return xor1 ^ xor2;
}

int max_consecutive_ones(vector<int> arr, int n)
{
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            count += 1;
        else
            count = 0;
        max_count = max(max_count, count);
    }
    return max_count;
}

int find_number_which_appears_only_once(vector<int> arr, int n)
{
    // Brute force approach time complexity = o(n^2)
    // int number = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //             count++;
    //     }
    //     if (count == 1)
    //     {
    //         number = arr[i];
    //         break;
    //     }
    // }

    // Better solution Time complexity = O(nlogn)+ o(n), Space complexity =  O(n/2 +1)
    // int number = 0;
    // map<long, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     mp[arr[i]]++;
    // }
    // for (auto i : mp)
    // {
    //     if (i.second == 1)
    //     {
    //         number = i.first;
    //         break;
    //     }
    // }

    // Most optimal solution Time complexity = O(n), Space complexity =  O(1)
    int number = arr[0];
    for (int i = 1; i < n; i++)
    {
        number = number ^ arr[i];
    }
    return number;
}

int find_longest_sub_array_with_sum_n(vector<int> arr, int n, int k)
{
    // This is the most optimal soltuion which works with postive and negative and zero as well
    // Time complexity = O(n*logn) Spacce complexity = O(n)
    // If we use unorddered map: best caseTime complexity = O(n*1), worse case time complexity = O(n*log n), Spacce complexity = O(n)

    // int maxLength = 0;
    // map<long long, int> prefixSum;
    // long long sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    //     if (sum == k)
    //     {
    //         maxLength = i + 1;
    //     }
    //     long long remaining_sum = sum - k;
    //     if (prefixSum.find(remaining_sum) != prefixSum.end())
    //     {
    //         maxLength = max(maxLength, i - prefixSum[remaining_sum]);
    //     }
    //     if (prefixSum.find(sum) == prefixSum.end())
    //     {
    //         prefixSum[sum] = i;
    //     }
    // }

    // This is the most optimal solution with positive and zero numbers.
    // Time complexity = O(2N) Space complexity = O(1)
    int maxLength = 0;
    int j = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        while (k < sum && j <= i)
        {
            sum -= arr[j];
            j++;
        }
        if (sum == k)
        {
            maxLength = max(maxLength, i - j + 1);
        }
    }

    return maxLength;
}

bool two_sum_problem(vector<int> arr, int n, int k)
{
    // Brute force method
    // Time complexity - O(n^2)
    // Space complexity - O(1)
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //             continue;
    //         if ((arr[i] + arr[j]) == k)
    //             return true;
    //     }
    // }
    // return false;

    // Better approach
    // Time complexity - O(n*log n), In unordered map  best case - O(n * 1) worst case - O(n*n)
    // Space complexity - O(n)
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    // {
    //     if (mpp.find(k - arr[i]) != mpp.end())
    //     {
    //         return true;
    //     }
    //     else
    //     {
    //         mpp[arr[i]] = i;
    //     }
    // }
    // return false;

    // Without map approach
    // Time complexity - O(n*log n) + O(n)
    // Space complexity - O(1)
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == k)
        {
            return true;
        }
        else if (sum < k)
            left++;
        else
            right--;
    }
    return false;
}

void sorting_array_of_0_1_2(vector<int> &arr, int n)
{
    // Brute force approach  merge sort Time complexity = O(n*logn) Space complexity = O(n)

    // Better solution Time complexity = O(2*n) Space complexity = O(1)
    int count_0 = 0, count_1 = 0, count_2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count_0++;
        if (arr[i] == 1)
            count_1++;
        if (arr[i] == 2)
            count_2++;
    }
    for (int i = 0; i < count_0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count_0; i < count_0 + count_1; i++)
    {
        arr[i] = 1;
    }
    for (int i = count_0 + count_1; i < n; i++)
    {
        arr[i] = 2;
    }

    // Optimal approach - Deutch  national flag algo
    // Think hypothetical array where  from index 0 to low-1 every elemnt is 0,
    // from low to mid -1 every element is 1
    // from mid to high -1 every element is unsorted
    // from high to n -1 every element is 2
    // Time complexity = O(n) Space complexity = O(1)
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid < high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        if (arr[mid] == 1)
        {
            mid++;
        }
        if (arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int majority_element(vector<int> arr, int n)
{
    // The element which is appeared more than n/2

    // Brute force approch. Time complexity - O(n^2)
    // for (int i = 0; i < n; i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (count > n / 2)
    //         return arr[i];
    // }

    // Better approach
    // Time complexity - O(NlogN) + O(N)
    // Space complexity - O(N)
    // map<int, int> count;
    // for (int i = 0; i < n; i++)
    // {
    //     count[arr[i]]++;
    // }
    // for (auto i : count)
    // {
    //     if (i.second > n / 2)
    //         return i.first;
    // }

    // Optimal solution (Moore voting algorithm)
    // Thought is number can't be cancelled if number is more than n/2 times in array.
    // Time complexity = O(N) + O(N)
    int element;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = arr[i];
            count++;
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count_of_element = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            count_of_element++;
    }
    if (count_of_element > n / 2)
        return element;
    return -1;
}

int max_sub_array_sum_kadane_algorithm(vector<int> arr, int n)
{
    // Brute force approach
    // int max_sum = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = i; j < n; j++)
    //     {
    //         sum = sum + arr[j];
    //         max_sum = max(max_sum, sum);
    //     }
    // }
    // return max_sum;

    // Optmial solution
    // The thought is when we pass sum to next iteration then there is no use of sum less than 0 so we re initialize sum with 0 only carry postive sums for next iteration
    int max_sum = INT_MIN;
    int sum = 0;
    int start = -1;
    int start_index = -1;
    int end_index = -1;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
            start = i;
        sum += arr[i];
        if (sum > max_sum)
        {
            max_sum = sum;
            start_index = start;
            end_index = i;
        }
        if (sum < 0)
            sum = 0;
    }
    // cout << start_index << " " << end_index << endl;
    // Starting index of the sub array will be start_index and end is end_index. So we will have sub array as well
    return max_sum;
}

vector<int> rearrange_the_positive_and_negative(vector<int> arr, int n)
{
    // Brute force method;
    // Given it will have equal +ve and -ve numbers.
    //  Time complexity - O(n) + O(n/2)
    //  Space complexity - O(n)
    // vector<int> positive;
    // vector<int> negative;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= 0)
    //         positive.push_back(arr[i]);
    //     else
    //         negative.push_back(arr[i]);
    // }
    // for (int i = 0; i < n / 2; i++)
    // {
    //     arr[2 * i] = positive[i];
    //     arr[2 * i + 1] = negative[i];
    // }
    // return arr;

    // Better solution
    // It will only work if the there are equal number of positive and negative
    //   Time complexity - O(n)
    //   Space complexity - O(n)
    // vector<int> ans(n, 0);
    // int positive = 0;
    // int negative = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= 0)
    //     {
    //         ans[positive] = arr[i];
    //         positive += 2;
    //     }
    //     else
    //     {
    //         ans[negative] = arr[i];
    //         negative += 2;
    //     }
    // }
    // return ans;

    // Brute force method;
    // Given it will work for both with and without equal +ve and -ve numbers.
    //  Time complexity - O(n) + O(n)
    //  Space complexity - O(n)
    vector<int> positive;
    vector<int> negative;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }

    if (positive.size() > negative.size())
    {
        for (int i = 0; i < negative.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }
        int index = negative.size() * 2;
        for (int i = negative.size(); i < positive.size(); i++)
        {
            arr[index] = positive[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < positive.size(); i++)
        {
            arr[2 * i] = positive[i];
            arr[2 * i + 1] = negative[i];
        }
        int index = positive.size() * 2;
        for (int i = positive.size(); i < negative.size(); i++)
        {
            arr[index] = negative[i];
            index++;
        }
    }
    return arr;
}

void next_greater_permutation_(vector<int> &arr, int n)
{
    // Brtue force solution
    //  Find all the permutaions of the array then check which is just next greater then the given array

    // Better solution, Use in built library STL of c++
    // next_permutation(arr.begin(), arr.end());

    // Most optimal solution
    // Time complexity = O(3N) Space complexity = O(1)
    // First find breakpoint for the dip from last element
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    // Edge case if given array has greatest value then just reverse the array
    if (index == -1)
    {
        reverse(arr.begin(), arr.end());
        return;
    }
    // Swap the just greater element than arr[index]
    for (int i = n - 1; i > index; i--)
    {
        if (arr[index] < arr[i])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    // Reverse the string after than element whose index we found so that it will in the smallest form for next permutaion finding
    reverse(arr.begin() + index + 1, arr.end());
}

vector<int> leaders_in_an_array(vector<int> &arr, int n)
{
    // Leader is an element in array which is greater than all the elements on its right.
    // There can be mulitple leaders . eg 16 8 3 4  so leaders are 16,8,4
    // time commplexity = O(N) Space commpleity - O(N)
    int maxElement = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxElement)
        {
            ans.push_back(arr[i]);
            maxElement = arr[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    vector<int> ans = leaders_in_an_array(array, n);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    // next_greater_permutation_(array, n);
    // for (auto i : array)
    // {
    //     cout << i << " ";
    // }
    // vector<int> ans = rearrange_the_positive_and_negative(array, n);
    // for (auto i : ans)
    // {
    //     cout << i << " ";
    // }

    // int maximum_sub_array_sum = max_sub_array_sum_kadane_algorithm(array, n);

    // cout << "maximum Sub Array Sum is: " << maximum_sub_array_sum;

    // int majority_element_value = majority_element(array, n);

    // cout << "Majority element is: " << majority_element_value;

    // sorting_array_of_0_1_2(array, n);

    // for (auto i : array)
    // {
    //     cout << i << " ";
    // }

    // int k;
    // cin >> k;

    // bool isNumberExist = two_sum_problem(array, n, k);

    // cout << "Two number exists for sum " << k << " is: " << isNumberExist;

    // int maxLength = find_longest_sub_array_with_sum_n(array, n, k);

    // cout << "Length of longest subarray with sum " << k << " is: " << maxLength;

    // int number = find_number_which_appears_only_once(array, n);
    // cout << "Number which is appeared exactly once : " << number;

    // int max_count = max_consecutive_ones(array, n);
    // cout << "Maximum consecutive 1's: " << max_count;

    // int missing_number = find_missing_number(array, n);
    // cout << "Missing number: " << missing_number;

    // vector<int> array1(n);
    // vector<int> array2(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array1[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array2[i];
    // }

    // vector<int> final_array;
    // final_array = intersection_of_two_sorted_array(array1, array2);
    // // final_array = union_of_two_array(array1, array2);
    // for (auto i : final_array)
    // {
    //     cout << i << " ";
    // }

    // int num;
    // cin >> num;
    // int index = linear_search_first_occurance(arr, n, num);
    // cout << "num at index: " << index;

    // move_zeroes_to_the_end(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

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