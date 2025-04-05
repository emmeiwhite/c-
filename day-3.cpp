#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the value for num: ";
    cin >> num; // ✅ Take input

    if (num == 0)
    {
        cout << "Number is 0" << endl;
    }
    else if (num > 0)
    {
        cout << "Number is greater than 0" << endl;
    }
    else
    {
        cout << "Number is less than 0" << endl;
    }

    // Questions: Question-1
    int a = 9;
    if (a == 9)
    {
        cout << "NINEY" << endl;
    }

    if (a > 0)
    {
        cout << "POSITIVE" << endl;
    }
    else
    {
        cout << "NEGATIVE" << endl;
    }

    // Question-2

    int b = 2;
    int c = b + 1; // 3

    if ((b = 3) == c)
    {
        cout << b << endl;
    }
    else
    {
        cout << b + 1 << endl;
    }

    // Question-3
    int x = 10;

    if (x < 5)
    {
        cout << "x is less than 5"; // only one blocks runs -- the first one that matches the conditions
    }
    else if (x < 20)
    {
        cout << "x is less than 20" << endl;
    }
    else
    {
        cout << "x is 20 or more";
    }

    // Question: Take user input and mention whether it is an uppercase, lowercase or a number

    char ch;

    cout << "Enter the character" << endl;

    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "UPPERCASE" << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "LOWERCASE" << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "NUMERIC" << endl;
    }
    else
    {
        cout << "SPECIAL CHARACTER ENTERED" << endl;
    }

    return 0;
}
