#include "Source.cpp"

using namespace std;

bool coresp_int(int n, int m)
{
	if (n == m)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int test1()
{
	bool t = coresp_int(Gorn(5, 16, 17), 1);
	if (t == true)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}