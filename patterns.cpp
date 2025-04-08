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

    /* ---
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
        --- */

    /*
    1 2 3
    4 5 6
    7 8 9


    int i = 0;
    while (i < n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << i * n + j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
   */

    /*
     Stars Right angled triangle
     *
     * *
     * * *
     * * * *

     Here rows:1-->4
     For each row, we are printing exactly the i times


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }

      */

    /*
      1
      2 2
      3 3 3
      4 4 4 4


    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }

     */

    /* --- To render this, we introduce a count variable outside the loop from 1 and increment it
    1
    2 3
    4 5 6
    7 8 9 10

    [ inner-loop runs upto row value ] Observation one
     [output the count value]


    int count = 1;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            j++;
            count++; // count is making it work - wowww
        }
        cout << endl;
        i++;
    }
        */

    /*
        1
        2 3
        3 4 5
        4 5 6 7

        IDEA:
        - Each

        Row-1   1
        Row-2   2 3
        Row-3   3 4 5
        Row-4   4 5 6 7

        Each column value starts with the row value. And that's the idea.
        Also, j runs exactly i times,
        Now, we have to think what to output, So, within the first loop, let's define a variable equal to i and output it and increment it.


    // A very cure problem at hand
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        int output = i;
        while (j <= i)
        {
            cout << output << " ";
            j++;
            output++; // count is making it work - wowww
        }
        cout << endl;
        i++;
    }
 */

    /*
       // An Alternate solution: Which really makes me feel good to have it done!

       int i = 1;
       while (i <= n)
       {
           int j = 0;
           while (j < i)
           {
               cout << i + j << " ";
               j++;
           }
           cout << endl;
           i++;
       }

       */

    /* --- I have always yearned to be a good problem-solver, then be the best. This course is helping me set the foundations. Thanks to CodeHelp & Love Babbar
    1
    2 1
    3 2 1
    4 3 2 1
    */

    // An Alternate solution: Which really makes me feel good to have it done!
    /* ---
        int i = 1;
        while (i <= n)
        {
            int j = i; // j starts from i each time
            while (j >= 1)
            {
                cout << j << " ";
                j--;
            }
            cout << endl;
            i++;
        }

        --- */

    /*
    A A A
    B B B
    C C C
    */
    /* ---
        char ch = 65;
        int i = 1;
        while (i <= n)
        {
            int j = 1; // j starts from i each time
            while (j <= n)
            {
                cout << ch << " ";
                j++;
            }
            cout << endl;
            ch++;
            i++;
        }
    --- */

    // Alternative Logic with i, cout << 'A'+i
    int i = 0;
    while (i < n)
    {
        int j = 1; // j starts from i each time
        while (j <= n)
        {
            char ch = 'A' + i;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}