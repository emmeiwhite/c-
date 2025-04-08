#include <iostream>
using namespace std;

int main()
{

    /* ---
    int a = 4; // 100
    int b = 7; // 111

    cout << " a&b " << (a & b) << endl; // 100 = 4
    cout << " a|b " << (a | b) << endl; // 111 = 7
    cout << " ~a " << ~a << endl;       // Negative number, to print with 2's complement -5
    cout << " a^b " << (a ^ b) << endl; // 011 = 3

    // left & right shift

    cout << (17 >> 1) << endl; // 17/(2*1) = 8 (For smaller numbers)
    cout << (17 >> 2) << endl; // 17/(2*2) = 4
    cout << (19 << 1) << endl; // 19*(2*1) = 38
    cout << (21 << 2) << endl; // 21*(2*2) = 84

    // pre & post increment/decrement

    cout << "Learning pre & post increments" << endl;
    int i = 7;

    cout << "pre-increment: " << ++i << endl;  // ++i=8, i=8
    cout << "post-increment: " << i++ << endl; // 8,after execution i++=9
    cout << "pre-decrement: " << i-- << endl;  // 9, i=8
    cout << "pre-decrement: " << --i << endl;  // 7, i=7

    --- */

    /* --- 5 Questions --- */

    /* Question-1 ---
    int a, b = 1;
    a = 10;
    if (++a) // 11 - non-zeroed integers are considered true
    {
        cout << b << endl; // so b is printed as 1
    }
    else
    {
        cout << ++b << endl;
    }
    --- */

    /* Question-2 ---
    int a = 1, b = 2;

    if (a-- > 0 && ++b > 2) // a=1, & b=3
    {
        cout << "Stage-1 - inside if "; // This will be outputted
    }
    else
    {
        cout << "Stage-2 - inside else";
    }

    // After execution of if(a--), a = 0, b stays 3
    cout << a << " " << b << endl; // 0 3

    --- */

    /* Question-3 ---
    int a = 1, b = 2;

    if (a-- > 0 || ++b > 2) // a=1, & b=2 (b stays 2 because || or part is not executed) TRICKY QUESTION ++b never gets executed since a-- > 0 is true, if block immediately gets executed
    {
        cout << "Stage-1 - inside if "; // This will be outputted
    }
    else
    {
        cout << "Stage-2 - inside else";
    }

    // After execution of if(a--), a = 0, b stays 3
    cout << a << " " << b << endl; // 0 3
  --- */

    /* --- Question-4
    int number = 3;
    cout << (25 * (++number)) << " "; // 100
    --- */

    /** --- Question-5   --- */
    int a = 1;
    int b = a++; // b=1 & after execution of the line a=2;
    int c = ++a; // ++2 = 3;

    cout << b << endl; // 1
    cout << c << endl; // 3

    return 0;
}
