#include <iostream>
using namespace std;

int main()
{
	int idx[8] = {0,0,0,0,0,0,0,0};
	for (int i = 0; i < 8; i++)
	{
		idx[i] = i;
	}
	for (int i = 0; i < 8; i++)
	{
		cout << idx[i] << endl;
	}
}