#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	double x = 1.1;
	int j; 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите количество множителей ";
	cin >> j;
	for (double i = 2; i < j+1; i++){
		x *= i/10+1;
		cout << i/10 + 1 << endl;
	}
	cout << x;
}
