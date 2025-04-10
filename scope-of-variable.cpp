#include <iostream>
using namespace std;

int main()
{
    // Concept-1:
    // cout << a << endl; error: use of undeclared identifier 'a'

    /* Concept-2:
    int a;
    cout << a << endl; // Garbage value
     */
    int a = 2;
    cout << a << endl;
    if (true)
    {
        int a = 23;
        cout << a << endl;
    }

    cout << a << endl;

    if (1)
    {
        int b = 45;
        if (1)
        {
            cout << b << endl;
        }
    }
    return 1;
}