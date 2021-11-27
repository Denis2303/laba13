#include <iostream>
#include <Windows.h>
using namespace std;

int main(){
	int a, b;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите число N ";
	cin >> a;
	b = 1;
	int j = 1;
	while (j < (2 * a - 1)){
		j+=2;
		b+=j;
		cout << b << endl;
	}
	cout << b;
}
