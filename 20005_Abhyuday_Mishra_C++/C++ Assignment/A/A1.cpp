/*  A1. Write a program in C++ to find the first 10 natural numbers.
    Sample output:
    The natural numbers are:
    1 2 3 4 5 6 7 8 9 10
*/

#include<iostream>

using namespace std;

int main()
{
    int i;

    cout << "\nFirst 10 Natural Number(s)\n\n";

    for(i = 1; i <= 10; i++)
    {
        cout << " " << i;
    }

    return 0;
}

/*  OUPUT

    First 10 Natural Number(s)

    1 2 3 4 5 6 7 8 9 10
*/