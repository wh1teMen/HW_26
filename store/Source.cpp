#include<iostream>
#include"Products.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	
	product a = { "Aple", 13,14 };
	printProd(a);
	cout << endl;
	cout<<"Полная cтоимость при покупке\nвсех оставшихся товаров разом = "<<fullPrice(a)<<endl;
	cout << endl;
	sell(a, 4);
	printProd(a);
	system("pause>nul");
	return 0;
}