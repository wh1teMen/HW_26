#pragma once
#include<iostream>
#include<string>
using namespace std;
struct product{
	string name; //�������� ������
	int number = 0; //���������� ������
	int price;//���� �� �������
};
//��������� ������ � ������� ��� ���������� � ��;
void printProd(product &a);
//��������� ������ � ���������� ������ ��������� ��� ������� ���� ���������� ������� �����;
int fullPrice(product& a);
//��������� ������ � �����, �� ������� ������� ���������� ������ � ������� �������;
void sell(product& a,int num);