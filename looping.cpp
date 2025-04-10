#include <iostream>
using namespace std;

// Only one Rule: Practice, Practice & Practice. No Emotions any more, be rock solid. Hold your ground and master the subject
int main()
{

    /* ---
       int n;
       cout << "Enter the value of n" << endl;
       cin >> n;


       // Introducing for-loop in C++
       cout << "Counting from 1 to " << n << endl;
       for (int i = 1; i <= n; i++)
       {
           cout << i << endl;
       }
       --- */

    // Question-1 : Check whether a number is prime.
    // Hint: A prime number exist only in 1's table and it's own table. It has no other factors except for 1 and itself.

    /* ---
    int n;
    cout << "Enter the number to check whether it prime or not" << endl;
    cin >> n;

    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            //   then number is not prime
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        cout << "Number is Prime" << endl;
    }
    else
    {
        cout << "Number is not Prime" << endl;
    }

    --*/
    // Question-2 Fibbonaci Series: 0, 1, 1, 2,3 ...,n-2, n-1, n:
    // Idea: n =(n-1)+(n-2) , so let's start with first two values 0 and 1

    /*
    int num;
    int a = 0, b = 1;

    cout << "Enter n" << endl;

    cin >> num;
    cout << a << endl;
    cout << b << endl;

    for (int i = 1; i <= num; i++)
    {
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }

    // continue & break

    for (int i = 1; i <= 5; i++)
    {
        cout << "Hi Hello" << endl;

        continue;

        cout << "Kindly respond back!" << endl; // sadly this line of code will never execute
    }

    for (int i = 1; i <= 5; i++)
    {
        cout << "Learning break" << endl;
        if (i == 3)
            break;
    }
    cout << "Hey, I am here" << endl;

    */

    /* --- 5 Questions on Looping | REMINDER :--- > PRACTICE, PRACTICE & PRACTICE --- */

    /* ---
    // Question:-1
    for (int i = 0; i <= 5; i++)
    {
        cout << i << endl;
        i++; // We are incrementing i with 1 here as well, just after printing
    }

    // Question:-2
    for (int i = 0; i <= 5; i--) // i=0,1,0,1,0 (infinite 0's printed, the loop never ends)
    {
        cout << i << endl;
        i++; // We are incrementing i with 1 here as well, just after printing
    }



    // Question:-3
    cout << "First Question On BIT-WISE Operator in my whole career :) " << endl;
    for (int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";

        if (i & 1)
        { // bitwise and
            continue;
        }
        i++; // We are incrementing i with 1 here as well, just after printing
    }

    // Question-4
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
  --- */
    // Question-5
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if (i + j == 10)
            {
                break;
            }
            cout << i << " " << j << endl;
        }
        }
    return 1; // Being positive and optimistic
}