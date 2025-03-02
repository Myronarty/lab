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

vector<int> v(int a)
{
	vector<int> h;
	double b = a;
	int m = log2(a);
	for (int i = 0; i <= m; i++)
	{
		if (b - pow(2, m - i) >= 0)
		{
			h.push_back(1);
			b = b - pow(2, m - i);
		}
		else
		{
			h.push_back(0);
		}
	}
	for (int i = 0; i <= h.size() - 1; i++)
	{
		//cout << h[i];
	}
	//cout <<  endl;
	return h;
}


int Gorn(int a, int b, int n)
{
	vector<int> h = v(b);
	int k = 1;
	int t = h.size() - 1;
	for (int i = 0; i < t; i++)
	{
		if (h[i] == 1) 
		{
			k = k * a;
		}		
		k = k*k;
		k = k % n;
	}
	k = k * pow(a, h[t]);
	k = k % n;
	//cout << k;
	return k;
}