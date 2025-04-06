#include <iostream>
using namespace std;

int main()
{

    /**
     1. Equal rows and column stars
     * * * *
     * * * *
     * * * *
     * * * *
     */

    int n;
    cout << "Enter rows (n)" << endl;

    cin >> n;

    /* ---
    int i = 0;
    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
    --- */

    /**
    2. Equal rows and column stars
    1 1 1
    2 2 2
    3 3 3


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

     */

    /**
        3. equal rows and columns
        1 2 3
        1 2 3
        1 2 3

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

     */

    /**
    4. Reverse of above
    3 2 1
    3 2 1
    3 2 1


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
         */

    // Alternate Solution: A more straight forward logic would be to start j from 3 upto 1 included

    int i = 1;
    while (i <= n)
    {
        int j = 3;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}