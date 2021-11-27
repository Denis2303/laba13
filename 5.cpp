#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main(){
	long long int a, n;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "¬ведите число A ";
	cin >> a;
	cout << "¬ведите целое число N ";
	cin >> n;
	long long int j = 0;
	for (int i = 0; i < n + 1; i++){
		j += pow(-a, i);
	}
	cout << j;
}
