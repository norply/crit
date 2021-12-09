#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	setlocale(LC_CTYPE, "rus");
	float num;// количество критериев
	for (;;)//проверка ввода количества критериев
	{
		cout << "Введите количество критериев:";
		cin >> num;
		if (!cin)
		{
			cout << "Введите число"<<endl;
		}
		else
		{
			if (num <= 0)
			{
				cout << "Введите положительное число" << endl;
			}
			else
			{
				if (int(num) != num)
				{
					cout << "Введите целое число" << endl;
				}
				else
					break;
			}
		}
		cin.clear();
		cin.ignore(100000, '\n');
	}
	float* a = new float[num*num];
	cout << "Введите через пробел таблицу попарного сравнения критериев(только сами значения). Чтобы перейти на следующую строку таблицы нажмите Enter."<<endl;
	
		for (int i = 0; i < num * num; i++)// ввод данных попарного сравнения
		{
			for (;;)
			{
				cin >> a[i];
				if (!cin)
				{
					cout << "Введите число" << endl;
				}
				else
				{
					if (a[i] <= 0)
					{
						cout << endl << "Введите положительное число" << endl;
					}
					else
						break;
				}
				cin.clear();
				cin.ignore(100000, '\n');
			}
		}
}
