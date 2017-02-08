// CalcDriver.cpp - CIS279 - 2017
// Diogo M Delgado
#include <iostream>
#include "calculator.h"
using namespace std;

int main( ) {
	AddSubMult one;
	cout << "The account is: " << one.getTotal() << endl;
	cout << "Test Cases: " << endl;
	cout << "Operation,Input,Output" << endl;
	one.addNum(10);
	cout << "addNum, " << "10, " << one.getTotal << endl;
	one.addNum(20);
	cout << "addNum, " << "20, " << one.getTotal << endl;
	one.subNum(5);
	cout << "addNum, " << "5, " << one.getTotal << endl;
	one.multNum(2);
	cout << "addNum, " << "2, " << one.getTotal << endl;
	one.addNum(30);
	cout << "addNum, " << "30, " << one.getTotal << endl;
	return 0;
}