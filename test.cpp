#include <iostream>
// #include <vector>
#include <bits/stdc++.h>
using namespace std;

void printName(string name)
{
    cout << "Hey " << name;
}

int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    // cout << num3 << endl;
    return num3;
}

// passs by value
int updateValue(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// passs by refrence
int updateValueOfOriginal(int &num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// arrays always goes pass by refrence
void updateValueOfArray(int arr[], int n)
{
    arr[0] = 100;
    cout << "Value of arr inside update value function: " << arr[0] << endl;
}

void printstar1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void printstar2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void printstar3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void printstar4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
void printstar5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void printstar6(int n)
{
    for (int i = 1; i <= n - i; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void printstar7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printstar8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void printstar9(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printstar10(int n)
{
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 ^ start;
        }
        cout << endl;
    }
}

void printstar11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }

        cout << endl;
    }
}

void printstar12(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }

        cout << endl;
    }
}
void printstar13(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j < 'A' + i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
}
void printstar14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }
}

void printstar15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < i)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void printstar16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            char ch = 'A' - j + n - 1;
            cout << ch << " ";
        }

        cout << endl;
    }
}

void printstar17(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printstar18(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printstar19(int n)
{
    for (int i = 0; i < 2 * n; i++)
    {
        int spaces = 2 * (n - i);
        int stars = i;
        if (i > n)
            spaces = 2 * (i - n);
        if (i > n)
            stars = 2 * n - i;

        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void printstar20(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!(j % (n - 1)) || !(i % (n - 1)))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
void printstar21(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int right = 2 * (n - 1) - j;
            int bottom = 2 * (n - 1) - i;
            cout << n - min(min(i, j), min(right, bottom)) << " ";
        }
        cout << endl;
    }
}

void pair_example()
{
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> nested_pair = {1, {1, 3}};
    cout << nested_pair.first << " " << nested_pair.second.first << " " << nested_pair.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {4, 5}};
    cout << arr[0].first << endl;
}

void vector_example()
{
    // Same as array but have dynamic size
    vector<int> v = {9, 4, 7, 5, 8, 1, 3};
    v.push_back(2);
    v.emplace_back(6); // faster
    cout << v[0] << " " << v[1] << endl;
    vector<pair<int, int>> vector_pair;
    vector_pair.push_back({1, 2});
    vector_pair.emplace_back(4, 5);
    cout << vector_pair[0].first << endl;
    vector<int> v1(5, 20); // create vector with 5 elements having value 20 [20,20,20,20,20]
    cout << v1[0] << endl;
    vector<int> v2(5);
    cout << v2[0] << endl;
    cout << v2.back() << endl; // last element
    vector<int> v3 = {1, 4, 3, 6};
    vector<int> v4(v3); // copy above vector

    // iterators
    vector<int>::iterator it = v.begin(); // iterator pointing to the first element
    cout << *it << endl;                  // to access the value at that memory location
    it++;
    cout << *it << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (auto it : v) // like foreach loop
    {
        cout << it << " ";
    }
    cout << endl;
    // vector<int>::iterator it2 = v.end();            // iterator pointing after the last element
    // vector<int>::reverse_iterator it3 = v.rend();   // iterator pointing before the first element
    // vector<int>::reverse_iterator it4 = v.rbegin(); // iterator pointing to the last element
    v.erase(it + 1);                // erase element at the position
    v.erase(v.begin() + 1, it + 2); // uses for range  first element is starting eleemnt and last is element after end to delete
    vector<int> test(2, 100);
    for (auto e : test)
    {
        cout << e << " ";
    }
    cout << endl;
    test.insert(test.begin(), 2); // insert at index 0 element 2
    for (auto e : test)
    {
        cout << e << " ";
    }
    cout << endl;
    test.insert(test.begin() + 1, 2, 10); // insert at index 1 two times 10
    for (auto e : test)
    {
        cout << e << " ";
    }
    cout << endl;
    vector<int> copy;
    copy.insert(copy.begin(), test.begin(), test.end());
    for (auto i : copy)
    {
        cout << i << " ";
    }

    cout << endl
         << copy.size() << endl;
    test.pop_back();
    for (auto i : test)
    {
        cout << i << " ";
    }
    test.swap(copy);
    cout << endl;
    for (auto i : test)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto i : copy)
    {
        cout << i << " ";
    }
    cout << endl;
    copy.clear();
    cout << copy.size() << endl;
    cout << copy.empty() << endl;
    cout << test.empty() << endl;
}

void list_example()
{
    // Same fucntions as vector but also have fucntion to insert from front but its time complexity  is less as compare to vector in insertion
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(5);
    ls.push_front(10);
    ls.emplace_front(7);
    for (auto i : ls)
    {
        cout << i << " ";
    }
    // rest fucntions same as vector
    //  begin, end, rbegin, rend, clear, empty, size, swap
}

void dequeue_example()
{
    // Same as list
    deque<int> dq;
    dq.push_back(5);
    dq.emplace_back(6);
    dq.push_front(9);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
    for (auto i : dq)
    {
        cout << i << " ";
    }
    // rest function are same as vector
    // begin, end, rbegin, rend, clear, swap, clear, empty
}

void stack_example()
{
    // LIFO
    stack<int> st;
    st.push(6);
    st.push(3);
    st.push(9);
    st.emplace(33);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;
    stack<int> st2;
    st.swap(st2);
}

void queue_example()
{
    queue<int> qu;
    qu.push(4);
    qu.push(2);
    qu.push(8);
    qu.emplace(6);
    cout << qu.front() << endl;
    cout << qu.back() << endl;
    qu.back() += 7;
    cout << qu.back() << endl;
    qu.pop();
    cout << qu.front() << endl;
    // size, empty, swap are similar to stack
}

void example_priority_example()
{
    // push pop happenes in O(log(n)), top happen in O(1)
    // By default stores the elements in sorting order and largest at top
    // Max heap
    priority_queue<int> pq;
    pq.push(10);
    pq.push(8);
    pq.push(16);
    pq.push(99);
    pq.emplace(5);
    cout << pq.top() << endl;
    pq.pop(); // Removes the top element
    cout << pq.top() << endl;

    // For reverse order means stores the elements in sorting order and smallest at top
    // Min heap
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(8);
    min_pq.push(16);
    min_pq.push(99);
    min_pq.emplace(5);
    cout << min_pq.top() << endl;
}

void example_set()
{
    // sorted and unique
    set<int> s;
    s.insert(8);
    s.insert(5);
    s.insert(9);
    s.insert(9); // inserts only one time
    for (auto i : s)
    {
        cout << i << endl;
    }
    auto it = s.find(9);  // returns an iterator pointing to its address
    auto it2 = s.find(3); // returns an iterator which point st.end() if element doesnot exist in the set
    s.erase(5);           // erase 5 from the set
    int cnt = s.count(5); // if exist thenn 1 else 0
    auto it3 = s.find(6);
    s.erase(it3); // we can even pass the iterator to delete the element

    auto it4 = s.find(2);
    auto it5 = s.find(4);
    s.erase(it4, it5); /// Will erase the element between 2 and 4 including 2 elemnt but not 4
}

void example_multiset()
{
    // only sorted and not unique
    multiset<int> s;
    s.insert(8);
    s.insert(5);
    s.insert(9);
    s.insert(9); // inserts this also
    for (auto i : s)
    {
        cout << i << endl;
    }
    auto it = s.find(9);  // returns an iterator pointing to its address
    auto it2 = s.find(3); // returns an iterator which point st.end() if element doesnot exist in the set
    s.erase(5);           // erase all 5's from the set so to remove only one ocurance pass the iterator or path of that element
    int cnt = s.count(5); // if exist thenn return count else 0
    auto it3 = s.find(6);
    s.erase(it3); // we can even pass the iterator to delete the element

    auto it4 = s.find(2);
    auto it5 = s.find(4);
    s.erase(it4, it5); /// Will erase the element between 2 and 4 including 2 elemnt but not 4
}

void example_unordered_set()
{
    unordered_set<int> us;
    // It stores only unique elements but in unordered way
    // Most of the cases has time complexity of O(1) but in worst case it has complexity of O(n)
    // Doesnot have lower bound or upper bound
}

void example_map()
{
    // map stores unique  key in sorted order.
    map<int, int> mpp;
    // map<pair<int, int>, int> mpp;
    // map<int, pair<int, int>> mpp;
    mpp[1] = 5;
    // mpp.emplace({2, 5});
    mpp.insert({4, 5});

    // mpp[{3, 5}] = 9;

    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void example_multimap()
{
    // multimap can store duplicate key but in sorted order.
    multimap<int, int> mpp;
    // map<pair<int, int>, int> mpp;
    // map<int, pair<int, int>> mpp;
    // mpp[1] = 5;
    // mpp.emplace({2, 5});
    mpp.insert({4, 5});

    // mpp[{3, 5}] = 9;

    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }
}

void example_unordered_map()
{
    // in ordered map time is log(N) for operations but in unordered map it is O(1) in worst case it is O(n)
    // unordered_map stores unique key but in unordered manner.
    unordered_map<int, int> mpp;
    // map<pair<int, int>, int> mpp;
    // map<int, pair<int, int>> mpp;
    // mpp[1] = 5;
    // mpp.emplace({2, 5});
    mpp.insert({4, 5});

    // mpp[{3, 5}] = 9;

    for (auto i : mpp)
    {
        cout << i.first << " " << i.second << endl;
    }
}

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    if (a.second > b.second)
        return false;

    if (a.first < b.first)
    {
        return false;
    }
    return true;
}

void example_sorting()
{
    vector<int> v = {1, 8, 7, 5, 9};
    sort(v.begin(), v.end()); // takes iterator as params and will only sort elements from first param to element before last parm [a,b)
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    sort(a, a + 3, comp); // we can pass our own comparison function
    for (auto it : a)
    {
        cout << it.first << " " << it.second << endl;
    }
}

void example_extra()
{
    int i = 7;
    int j = 6;
    int cnt_i = __builtin_popcount(i); // count no. of ones in binary form of that number
    int cnt_j = __builtin_popcount(j);
    cout << cnt_i << " " << cnt_j << endl;

    long long num = 7345678976543;
    int cnt_num = __builtin_popcountll(num); // count no. of ones in binary form of that number for long long
    cout << cnt_num << endl;

    // Print all the permutations of the strings
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    vector<int> v = {1, 8, 7, 5, 9};
    int max_num = *max_element(v.begin(), v.end());
    cout << max_num;
}

int find_gcd_more_optimal(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int find_gcd(int a, int b)
{
    if (a == 0)
        return b;
    return find_gcd(b, b % a);
}

void maths_practise()
{
    // extration of digits and u can also count no. of digits
    int num = 112211;
    int n = num;
    int count = 0;
    while (n > 0)
    {
        cout << n % 10 << endl;
        n = n / 10; // Time complexity in this case is log10(N) if divided by other nnumber x then it will be logx(N)
        count++;
    }
    cout << "count of digits: " << count << endl;
    // to find count u can use log function as it is always divided by 10 so log base 10 +1 will give no. of digits
    n = num;
    int count_of_digits = int(log10(n)) + 1;
    cout << "count of digits by log function: " << count_of_digits << endl;

    // Reverse the n
    int reverse_number = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        n = n / 10;
        reverse_number = reverse_number * 10 + last_digit;
    }
    cout << "reverse_number: " << reverse_number << endl;
    if (reverse_number == num)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }

    // Armstrong number whose digits cubes sums will be equal to number itself
    int new_num = 371;
    int dup_num = new_num;
    int sum = 0;
    while (new_num)
    {
        int ld = new_num % 10;
        new_num /= 10;
        sum += ld * ld * ld;
    }
    if (sum == dup_num)
        cout << true << endl;
    else
        cout << false << endl;

    // Find all the divisor of number 1st method
    int number = 36;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            cout << i << " ";
    }
    cout << endl;
    // Find all the divisor of number 2nd method and more optimal method
    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            if (i == number / i)
                cout << i << " ";
            else
                cout << i << " " << number / i << " ";
        }
    }
    cout << endl;
    // Find prime number 2nd method and more optimal method
    int prime_or_not = 49;
    bool is_prime = true;
    for (int i = 2; i * i <= prime_or_not; i++)
    {
        if (prime_or_not % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    if (is_prime)
    {
        cout << prime_or_not << ": This no. is prime.";
    }
    else
        cout << "This number is not prime";
    cout << endl;

    // To find gcd first method
    int number1 = 20;
    int number2 = 40;
    int gcd = 1;
    for (int i = 1; i <= min(number1, number2); i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "gcd: " << gcd << endl;

    // To find gcd second method Euclidean Algorithm
    // According to this theorem gcd(n1,n2) = gcd (n1-n2,n2) if n1>n2
    int sub_number = number1 >= number2 ? number1 - number2 : number2 - number1;
    int min_number = number1 >= number2 ? number2 : number1;
    gcd = 1;
    for (int i = 1; i <= min(sub_number, min_number); i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "gcd by Euclidean Algorithm: " << gcd << endl;
}

void recursion_problem_1(int i, int n)
{

    // Print name 5 times
    if (i == n)
        return;
    cout << "Sourav Saini" << endl;
    i++;
    recursion_problem_1(i, n);
}

void recursion_problem_2(int i, int n)
{
    // Print number 1 to n
    if (i > n)
        return;
    cout << i << endl;
    i++;
    recursion_problem_2(i, n);
}

void recursion_problem_3(int i, int n)
{
    // Print number n to 1
    if (n == i)
        return;
    cout << n << endl;
    n--;
    recursion_problem_3(0, n);
}

void recursion_problem_4(int i, int n)
{
    // Print number 1 to n using backtracking
    if (i < 1)
        return;
    recursion_problem_4(i - 1, n);
    cout << i << endl;
}

void recursion_problem_5(int i, int n)
{
    // Print number n to 1 by backtracking
    if (i > n)
        return;
    recursion_problem_5(i + 1, n);
    cout << i << endl;
}

int sum_of_n_natural_numbers_using_recursion(int sum, int n)
{
    if (n < 1)
        return sum;
    sum = sum + n;
    sum_of_n_natural_numbers_using_recursion(sum, n - 1);
}

int sum_of_n_natural_numbers_using_recursion2(int n)
{
    if (n == 0)
        return n;

    return n + sum_of_n_natural_numbers_using_recursion2(n - 1);
}

int factorial_of_n_using_recursion(int n)
{
    if (n == 1)
        return n;

    return n * factorial_of_n_using_recursion(n - 1);
}

void reverse_array_using_recursion(vector<int> n, int i, int j)
{
    if (j > i)
    {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        reverse_array_using_recursion(n, i + 1, j - 1);
    }
    else
    {
        for (auto i : n)
        {
            cout << i << " ";
        }
    }
}

void reverse_array_using_recursion2(int arr[], int i, int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverse_array_using_recursion2(arr, i + 1, n);
}

void check_palidrome_string(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i >= n / 2)
        {
            cout << "Its a palindrome";
            break;
        }
        if (str[i] != str[n - i - 1])
        {
            cout << "Not a palindrome";
            break;
        }
    }
}

bool check_palidrome_string2(string str, int i, int n) // using recursion
{

    if (i >= n / 2)
    {
        return true;
    }
    if (str[i] != str[n - i - 1])
    {
        return false;
    }
    return check_palidrome_string2(str, i + 1, n);
}

int nth_fibonacci_num(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return nth_fibonacci_num(n - 1) + nth_fibonacci_num(n - 2);
}

int number_of_times_a_number_appear(int n, int arr[], int arr2[])
{
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        arr2[index] += 1;
    }
}

int number_of_times_a_character_appear(int n, int arr[], int arr2[])
{
    for (int i = 0; i < n; i++)
    {
        int index = arr[i];
        arr2[index] += 1;
    }
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
    // consider max number in the array is 12
    // max size of array that can be declared inside main will be around  10**6
    // max size of array that can be declared ouside main(globally) will be around  10**7
    int count_array[13] = {0};
    number_of_times_a_number_appear(n, arr, count_array);

    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        cout << "Number of times " << num << " appears: " << count_array[num] << endl;
    }

    // int result = nth_fibonacci_num(n);
    // cout << n << "th fibonacci number: " << result;
    // string str;
    // cin >> str;
    // cout << str << endl;

    // cout << check_palidrome_string2(str, 0, n);
    // check_palidrome_string(str, n);
    // int array_of_num[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> array_of_num[i];
    // }
    // for (auto i : array_of_num)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;
    // reverse_array_using_recursion2(array_of_num, 0, n);
    // for (auto i : array_of_num)
    // {
    //     cout << i << " ";
    // }

    // vector<int> reverse_array_of_num;
    // reverse_array_of_num = reverse_array_using_recursion(array_of_num, 0, n - 1);
    // for (auto i : reverse_array_of_num)
    // {
    //     cout << i << " ";
    // }

    // vector<int> factorial = reverse_array_using_recursion(n);

    // int factorial = factorial_of_n_using_recursion(n);
    // cout << "factorial: " << factorial;

    // int sum = sum_of_n_natural_numbers_using_recursion2(n);
    // cout << "sum: " << sum;

    // int sum = sum_of_n_natural_numbers_using_recursion(0, n);
    // cout << "sum: " << sum;

    // recursion_problem_5(1, n);
    // recursion_problem_4(n, n);
    // recursion_problem_3(0, n);
    // recursion_problem_2(1, n);
    // recursion_problem_1(0, n);
    // maths_practise();
    // example_extra();
    // example_sorting();
    // example_unordered_map();
    // example_multimap();
    // example_map();
    // example_unordered_set();
    // example_multiset();
    // example_set();
    // example_priority_example();
    // queue_example();
    // stack_example();
    // dequeue_example();
    // list_example();
    // vector_example();
    // pair_example();
    // int n;
    // cin >> n;
    // printstar21(n);
    // printstar20(n);
    // printstar19(n);
    // printstar18(n);
    // printstar17(n);
    // printstar16(n);
    // printstar15(n);
    // printstar14(n);
    // printstar13(n);
    // printstar12(n);
    // printstar11(n);
    // printstar11(n);
    // printstar10(n);
    // printstar9(n);
    // printstar8(n);
    // printstar7(n);
    // printstar6(n);
    // printstar5(n);
    // printstar4(n);
    // printstar3(n);
    // printstar2(n);
    // printstar1(n);
    // int n = 5;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // updateValueOfArray(arr, n);
    // cout << "Value of arr inside main function: " << arr[0] << " ";
    // int num = 10;
    // updateValue(num);
    // updateValueOfOriginal(num);
    // cout << num << endl;
    // int num1, num2;
    // cin >> num1 >> num2;
    // int minimum = min(num1, num2);
    // int maximum = max(num1, num2);
    // cout << "minimum:  " << minimum << " maximum: " << maximum << endl;
    // cout << sum(num1, num2);

    // string name;
    // cin >> name;
    // printName(name);

    // int n;
    // long m;
    // long long x;
    // float y;
    // double z;
    // long double a;
    // std::cin >> n;

    // std::cout << "The value of n: ";
    // std::cout << "The value of n: " << n;

    // string name;
    // string surname;
    // getline(cin, name);

    // cout << name << surname;
    // char a;
    // cin >> a;
    // cout << a << endl;
    // cout << sizeof(char);
    // int c;
    // cout << "Please enter your age\n";
    // cin >> c;
    // if (c < 18)
    // {
    //     cout << "You are not an adult age: " << c;
    // }
    // else
    // {
    //     cout << "You are an adult age: " << c;
    // }
    // int marks;
    // cin >> marks;
    // if (marks < 25)
    // {
    //     cout << 'F';
    // }
    // else if (marks < 44)
    // {
    //     cout << 'E';
    // }
    // else if (marks < 49)
    // {
    //     cout << "D";
    // }
    // else if (marks < 59)
    // {
    //     cout << "C";
    // }
    // else if (marks < 79)
    // {
    //     cout << "B";
    // }
    // else if (marks < 100)
    // {
    //     cout << "A";
    // }
    // int age;
    // cin >> age;
    // if (age < 18)
    // {
    //     cout << "not eligible for thee job";
    // }
    // else if (age < 55)
    // {
    //     cout << "eligible for the job";
    // }
    // else if (age <= 57)
    // {
    //     cout << "eligible for the job but retirement soon";
    // }
    // else if (age > 57)
    // {
    //     cout << "retirement soon";
    // }
    // int day;
    // cin >> day;
    // switch (day)
    // {
    // case 1:
    //     cout << "Sunday";
    //     break;
    // case 2:
    //     cout << "Monday";
    //     break;
    // case 3:
    //     cout << "Tuesday";
    //     break;
    // case 4:
    //     cout << "Wednesday";
    //     break;
    // case 5:
    //     cout << "Thursday";
    //     break;
    // case 6:
    //     cout << "Friday";
    //     break;
    // case 7:
    //     cout << "Saturday";
    //     break;
    // default:
    //     cout << "Invalid day";
    //     break;
    // }

    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // arr[3] = 0;
    // cout << arr[3] << endl;
    // cout << arr[4];
    // cout << arr[2];

    // int arr[5][3];
    // arr[1][3] = 9;
    // cout << arr[1][3];
    // cout << arr;

    // string name = "Sourav";
    // int len = name.size();
    // name[2] = 'b';
    // cout << name[len - 1];
    // cout << name;

    // int i;
    // for (i = 0; i <= 5; i++)
    // {
    //     cout << "Sourav " << i << endl;
    // }
    // cout << i;

    // int i = 0;
    // while (i <= 5)
    // {
    //     cout << "Sourav Saini " << i << endl;
    //     i++;
    // }

    // int i = 6;
    // do
    // {
    //     cout << "Sourav Saini " << i << endl;
    //     i++;
    // } while (i < 5);

    return 0;
}