#include <iostream>

using namespace std;

int main()
{
	int x,y; 
	cin >> x;
	int *tab = new int[x];

	for (int i = 0; i < x; i++) //wypelnienie tablicy
	{
		cin >> tab[i];
	}
	
	y = tab[0];
	for (int i = 0; i < x; ++i)
	{
		if (i < (x-1)) { tab[i] = tab[i+1]; }
		else { tab[x - 1] = y; }
	}

	for (int i = 0; i < x; i++)
	{
		cout << tab[i] << endl;
	}

	system("pause");
	return 0;
}