// pointers_Of_Pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int ex1()
{
	int a;
	int b;
	double *ptrA ;
	double *ptrB ;

	cin >> a;
	cin >> b;

	ptrA = &a;
	ptrB = &b;

	cout << "The number in your pointer is " << *ptrA << "\n";
	cout << "The number in your pointer is " << *ptrB << "\n";
	system("pause");

	delete *ptrA;
	delete *ptrB;
	return 0;

}


int getDataCount(void)
{
	double dataCount = 1;
	cout << "How many Data types would you like to make? ";
	cin >> dataCount;
	return dataCount;
	delete dataCount;
}

int ex2()
{

	int max = 0;
	double *ptrA ;
	system("pause");

	int num;
	num = getDataCount();

	double *myArray = new int[num];

	for (int i = 0; i < num; ++i)
	{

		cout << "What is the data you want recorded? ";
		cin >> myArray[i];

	}

	for (int j = 0; j < num; j++)
	{
		if (myArray[j] > max)
		{
			max = myArray[j];
		}
	}
	ptrA = &max;

	cout << "The max number was - " << *ptrA;
	system("pause");

	delete[] myArray;
	delete ptrA;
	return 0;
}

int ex3()
{
	int a;
	double *ptrA;
	cout << "Enter and variable \n";
	cin >> a;
	ptrA = &a;
	cout << *ptrA << "\n";
	system("pause");
	delete ptrA;
	return 0;
}

int ex4()
{
	double char str1[] = "A string";
	double char *ptrA = str1;
	double char t = str1[4]; 
	cout << str1[0] << " " << &ptrA << " " << str1[3] << "\n"; 
	system("pause");
	*ptrA += 2;
	cout << *ptrA << " ";
	*ptrA += 1;
	cout << t << " ";
	*ptrA += 3;
	cout << &ptrA << "\n";
	system("pause");
	delete str1;
	delete ptrA;
	delete t;
	return 0;
}

int ex5()
{
	int a;
	int i;
	const int length = 5;
	double *ptrA;
	int keys[length];

	for (i = 0; i < 5; i++)
	{
		cin >> a;
		ptrA = &a;
		keys[i] = *ptrA;
	}

	cout << "The array in reverse is: ";

	for (int k = length - 1; k >= 0; k--)
	{
		cout << keys[k];
	}
	delete ptrA;
	return 0;
}

int ex6()
{
	// create variables and pointers
	int x;
	int y;
	double *p;
	double *q;

	// assign variabes
	x = 2;
	y = 8;

	// set pointers to addresses
	p = &x;
	q = &y;

	// prints
	cout <<"The Address of X is - " << &x <<" and the value of X is - " <<  x << "\n";
	cout << "The Address of p is - " << p << " and the value of pointer p is - " << *p << "\n";
	cout << "The address of y is - " << &y << " and the value of y is - " << y << "\n";
	cout << "The address of q is - " << q << " and the value of pointer q is - " << *q << "\n";
	cout << "The address of p is - " << &p << "\n";
	cout << "The address of q is - " << &q;
	system("pause");
	delete p;
	delete q;
	return 0;

}
int ex7()
{
	// Variables 
	int x;
	int y;
	int z;
	double *p;
	double *q;
	double *r;

	//set variables to values
	x = 1;
	y = 2;
	z = 3;
	p = &x;
	q = &y;
	r = &z;
	cout << "The value of x is - " << x << "\n";
	cout << "The value of y is - " << y << "\n";
	cout << "The value of z is - " << z << "\n";
	cout << "The value of p is - " << p << "\n";
	cout << "The value of q is - " << q << "\n";
	cout << "The value of r is - " << r << "\n";
	cout << "The value of pointer p is - " << *p << "\n";
	cout << "The value of pointer q is - " << *q << "\n";
	cout << "The value of pointer r is - " << *r << "\n";
	cout << "Swapping values \n";
	// swapping values
	z = x;
	x = y;
	y = z;
	//printing new values
	cout << "The value of x is - " << x << "\n";
	cout << "The value of y is - " << y << "\n";
	cout << "The value of z is - " << z << "\n";
	cout << "The value of p is - " << p << "\n";
	cout << "The value of q is - " << q << "\n";
	cout << "The value of r is - " << r << "\n";
	cout << "The value of pointer p is - " << *p << "\n";
	cout << "The value of pointer q is - " << *q << "\n";
	cout << "The value of pointer r is - " << *r << "\n";
	delete p;
	delete q;
	delete r;
	return 0;
} 

int ex8()
{
	int x;
	int y;
	int z;
	double *p;
	double *q;
	double *r;

	x = 1;
	y = 2;
	z = 3;

	p = &x;
	q = &y;
	r = &z;
	cout << "The value of x is - " << x << "\n";
	cout << "The value of y is - " << y << "\n";
	cout << "The value of z is - " << z << "\n";
	cout << "The value of p is - " << p << "\n";
	cout << "The value of q is - " << q << "\n";
	cout << "The value of r is - " << r << "\n";
	cout << "The value of pointer p is - " << *p << "\n";
	cout << "The value of pointer q is - " << *q << "\n";
	cout << "The value of pointer r is - " << *r << "\n";
	cout << "Swapping pointers \n";
	r = p;
	p = q;
	q = r;
	cout << "The value of x is - " << x << "\n";
	cout << "The value of y is - " << y << "\n";
	cout << "The value of z is - " << z << "\n";
	cout << "The value of p is - " << p << "\n";
	cout << "The value of q is - " << q << "\n";
	cout << "The value of r is - " << r << "\n";
	cout << "The value of pointer p is - " << *p << "\n";
	cout << "The value of pointer q is - " << *q << "\n";
	cout << "The value of pointer r is - " << *r << "\n";
	cout << "Swapping values \n";
	delete p;
	delete q;
	delete r;
	return 0;

}
int ex9()
{
	int x;
	int y;
	int u;
	int v;
	int a[5];
	
	x = 11;
	y = 12;
	u = 31;
	v = 32;
	for (int i = 21; i < 25; i++)
	{
		a[i];
		cout << a[i] << "\n";

	}

	return 0;
}
int ex10()
{
	int a[5] = {1, 4, 7, 10, 13};
	int i;
	double *p;

	for (i = 0; i < 5; i++)
	{
		cout << i << "" << hex << a[i] << endl;
	}

	i = 0;
	p = a;

	while (p < (a + 5)) {
		cout << i << "" << hex << *p << "\n";
		i++;
		p++;
	}
	delete p;
	return 0;
}
//int ex11()
//{
//	int *a;
//	int *a = new int[5];
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		while i = 0
//	}
//	return 0;
//}

int _tmain()
{
	ex1();
	system("pause");
	ex2();
	system("pause");
	ex3();
	system("pause");
	ex4();
	system("paause");
	ex5();
	system("pause");
	ex6();
	system("pause");
	ex7();
	system("pause");
	ex8();
	system("pause");
	ex9();
	system("pause");
	ex10();
	system("pause");

	return 0;
}