#include <iostream>
using namespace std;

int main() {
    // Let's declare some variables to hold values of particular type because "every value has a type that determines its role and every value is nothing but a piece of information"

   /* ---
    int num = 23;
    cout << num << endl;

    char ch = 'I';
    cout << ch << endl;

    bool isPreparing = true;
    cout << isPreparing << endl;

    float f = 1.23;
    cout << f << endl;

    double d = 3.2;
    cout << d << endl;


    cout << "size of d is :" << sizeof(d);

    --- */


    /* --- 
    // TypeCasting:
    int a = 'a';

    cout << a << endl; // C++ does the type-casting for us, 'a' character is converted internally to an integer

    char ch = 99;

    cout << ch << endl; // typescript in action

    // Now if we try to add a number greater than 255 in char type, since the largest ASCII value is 255

    char ch1 = 12345;

    cout << ch1;

   

    unsigned int x = 23;
    cout << x << endl;

    unsigned int x1 = -23; // 2's compliment happen for 23 and it becomes a huge number
    cout << x1 << endl;
 
 
  

    // OPERATORS: Arithmetic, Relational, Logical

    int a = 4;
    int b = 5;

    cout << a / b << endl; // int/int = int

    float num1 = 4.0;
    int num2 = 5;

    cout << num1 / num2 << endl; // float/int = int
    --- */


    /** --- Relational Operators 
    int a = 2;
    int b = 3;

    bool first = (a == b);
    cout << first << endl; // 0 means false


    bool second = (a < b);
    cout << second << endl; // 1 means true

    bool third = (a > b);
    cout << third << endl; // 0 

    bool fourth = (a >= b);
    cout << fourth << endl; // 0 


    // Logical operator
    int a = 0;
    cout << !a << endl;

    --- */
    // Let's take inputs from the user with cin

    int x;

    cin >> x;
    

    cout << x << endl;
    cout << "all good!";

    return 0;
}
