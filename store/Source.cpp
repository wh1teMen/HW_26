#include<iostream>
#include"Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	product a = { "Aple", 13,14 };
	printProd(a);
	cout << endl;
	cout<<"������ c�������� ��� �������\n���� ���������� ������� ����� = "<<fullPrice(a)<<endl;
	cout << endl;
	sell(a, 4);
	printProd(a);
	system("pause>nul");
	return 0;
}