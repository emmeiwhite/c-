// loops: to perform repetitive tasks
/** --- Run a code block until a condition is satisfied --- */

// 1. Print princess 5 times

#include <iostream>
using namespace std;

int main() // start
{
    int n; // Define 'n'
    cout << "Enter a number";

    cin >> n;

    // 1. print 1 to n
    int i = 1; // i=0

    while (i <= n)
    {
        cout << i << endl;

        i++; // increment
    }

    // 2. sum upto n

    int sum = 0;
    int j = 1;

    while (j <= n)
    {
        sum = sum + i;
        j++;
    }

    cout << "Sum upto " << n << " is : " << sum << endl;

    // 3. sum of even numbers upto n

    int n1 = 2;
    int evenSum = 0;
    while (n1 < n)
    {
        evenSum = evenSum + n1;
        n1 = n1 + 2;
    }

    cout << "Sum of even upto " << n << " is : " << evenSum << endl;

    // 4. sum of odd numbers upto n

    int n2 = 1;
    int oddSum = 0;
    while (n2 < n)
    {
        oddSum = oddSum + n2;
        n2 = n2 + 2;
    }

    cout << "Sum of odd upto " << n << " is : " << oddSum << endl;

    // 5. to check whether a give number is prime or not
    int number;
    cout << "Enter a number to be checked as prime?" << endl;
    cin >> number;

    int k = 2;

    bool isPrime = true;
    while (k < number)
    {
        if (number % k == 0)
        {
            isPrime = false;
            break;
        }

        k = k + 1;
    }

    if (isPrime)
    {
        cout << "Number is  prime";
    }
    else
    {
        cout << "Number is not prime";
    }

    return 0; // end
}
