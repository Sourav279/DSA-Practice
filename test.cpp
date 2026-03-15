#include <iostream>
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
int main()
{
    int n;
    cin >> n;
    printstar21(n);
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