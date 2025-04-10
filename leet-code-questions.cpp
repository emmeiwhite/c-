#include <iostream>
using namespace std;

int main()
{
    int n;
    // 1. subtract the product and sum of digits of a number
    cout << "enter a number" << endl;
    cin >> n;

    int sum = 0;
    int prod = 1;

    int digit;
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        prod *= digit;
        n = n / 10;
    }

    cout << (prod - sum) << endl;
    return 0;
}