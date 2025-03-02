#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int Cayley_table(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            int c;
            c = (i * j) % a;
            cout << c << " ";
        }
        cout << endl;
    }
    return a;
}