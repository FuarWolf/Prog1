#include <iostream>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int m, a, b, q, w, p, u;
	cout << "Как заполнить массив???\n 1-ручной ввод\n 2-автоматический случайными целыми и положительными значениями(По умолчанию до 100)\n";
	cin >> m;
	if (m == 1) {
		cout << "Введите значение n= ";
		int n, l;
		cin >> n;
		int* p_darr = new int[n];
		for (int i = 0; i < n; i++) {
			cout << "[" << i << "]" << ":";
			cin >> p_darr[i];
			cout << "Value of " << i << " element is " << p_darr[i] << endl;
		}
		cout << "\nМой массив :";

		for (int i = 0; i < n; ++i) {
			cout << p_darr[i] << " ";
		}
		cout << "\nПровети замену элементов, если да то нажмите 1\n";
		cin >> l;
		if (l == 1)
			cout << "Выберите первый элемент для замены";
		cin >> q;
		cout << "Выберите второй элемент для замены";
		cin >> w;
		a = p_darr[q];
		b = p_darr[w];
		p_darr[q] = b;
		p_darr[w] = a;

		cout << "\nМой массив после:";

		for (int i = 0; i < n; ++i) {
			cout << p_darr[i] << " ";
		}

	}

	else if (m == 2)
		cout << "Если вы хотите изменить интервал нажмите 1\n";
	cin >> p;
	if (p == 1) {
		cout << "Выберите диапазон значений\n";
		cin >> u;
	}
	else
		u = 100;
	cout << "Введите значение n= ";
	int n, l;
	cin >> n;
	int* p_darr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "]" << ":";
		p_darr[i] = rand() % u;
		cout << "Value of " << i << " element is " << p_darr[i] << endl;
	}
	cout << "\nМой массив      : ";

	for (int i = 0; i < n; ++i) {
		cout << p_darr[i] << " ";
	}
	cout << "\nПровети замену элементов, если да то нажмите 1\n";
	cin >> l;
	if (l == 1)
		cout << "Выберите первый элемент для замены";
	cin >> q;
	cout << "Выберите второй элемент для замены";
	cin >> w;
	p_darr[q] += p_darr[w];
	p_darr[w] = p_darr[q] - p_darr[w];
	p_darr[q] = p_darr[q] - p_darr[w];	

	cout << "\nМой массив после: ";

	for (int i = 0; i < n; ++i) {
		cout << p_darr[i] << " ";
	}
	cout << "\n";


	delete[] p_darr;
	return 0;
}


