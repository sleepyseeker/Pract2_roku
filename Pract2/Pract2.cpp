#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	int a = 0;
	cout << "Введ1ть св1й в1к:";
	cin >> a;

		{
			if ((a > 0) && (a <= 100))
			{
				if ((a % 10 == 0) || (a % 10 >= 5))
					cout << "Вам " << a << " Рок1в" << endl;
				else if (a % 10 == 1)
					cout << "Вам " << a << " Р1к" << endl;
				else
					cout << "Вам " << a << " Рок1в" << endl;
			}
			else
				cout << "Введ1ть значення менше 101" << endl;
		}
}