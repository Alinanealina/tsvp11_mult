#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	long long int i, a = 9999, b = 9999, c = 0, a1, T = 0;
	cout << " a = " << a << ", b = " << b << "\n ";
	if (a % 10 == 0)
	{
		i = b;
		b = a;
		a = i;
	}
	for (i = 0; b != 0; i++, b /= 10)
	{
		if (b % 10 != 0)
		{
			c += (b % 10) * a * pow(10, i);
			T++;
			for (a1 = a; a1 != 0; a1 /= 10)
			{
				if (a1 % 10 != 0)
					T++;
			}
		}
	}
	T--;
	cout << c << "\n Трудоемкость: " << T;
	return 0;
}