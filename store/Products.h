#pragma once
#include<iostream>
#include<string>
using namespace std;
struct product{
	string name; //название товара
	int number = 0; //количество товара
	int price;//цена за единицу
};
//Принимает объект и выводит всю информацию о нём;
void printProd(product &a);
//Принимает объект и возвращает полную стоимость при покупке всех оставшихся товаров разом;
int fullPrice(product& a);
//Принимает объект и число, на которое снижает количество товара у данного объекта;
void sell(product& a,int num);