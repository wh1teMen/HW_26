#include<iostream>
#include<string>
#include"Products.h"
using namespace std;
void printProd(product& a) {
cout <<"��������-> "<< a.name << endl<<"����������-> "<< a.number <<endl<< "����/��.-> " << a.price << endl;
}
int fullPrice(product& a) {
	int st;
	st = a.number * a.price;
	return st;
}
void sell(product& a,int num) {
	a.number -= num;

}