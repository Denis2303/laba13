#include <iostream>|
#include <Windows.h>
using namespace std;

int main(){
	double a;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������� ��������� 1 �� ������ ";
	cin >> a;
	for (int i = 1; i < 10; i++){
		cout << i * 0.1 <<"�� ������ ����� - " << i *0.1 * a << endl;
	}
	cout << "1 �� ������ ����� - " << a;
}
