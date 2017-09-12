// HelloWorld.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Sales_item.h"


int add()
{

	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The sum of " << v1 << " and " << v2
		<< " is " << v1 + v2 << std::endl;
	return v1 + v2;
}
void comment()
{
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */;
	std::cout << /*  "*/" /*  "/*"  */;
}

void whileUse()
{
	int sum = 0, val = 1;
	// keep executingthe while as long as val is less than or equal to 10
	while (val <= 10)	
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

}
void e1_9()
{
	int sum = 0, val = 50;
	// keep executingthe while as long as val is less than or equal to 10
	while (val <= 100)
	{
		sum += val;
		++val;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

}
void e1_10()
{
	int val = 10;
	while (val >= 0)
	{
		std::cout << val << std::endl;
		--val;
	}
}

void e1_11()
{
	std::cout << "Enter two numbers:" << std::endl;
	int num1 = 0, num2 = 0;
	std::cin >> num1 >> num2;
	std::cout << "the range by " << num1 << " and " << num2 << ":" << std::endl;
	int big = num1, small = num2;
	if (big < num2)
	{
		big = num2;
		small = num1;
	}
	if (big == small)
	{
		std::cout << big << std::endl;
	}
	else {
		while (small <= big)
		{
			std::cout << small << " ";
			small++;
		}
	}
	std::cout << std::endl;
}

void unknowInput()
{
	int sum = 0, value = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
}

void readWriting()
{
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
}

void addSalesItem()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;
}

int checkISBN() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())
	{
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else
	{
		std::cerr << "Data must refer to same ISBN" << std::endl;
		return -1;
	}
}

int main()
{
	printf("Hello World!\n");
	//checkISBN();
	//addSalesItem();
	//readWriting();
	//unknowInput();
	//e1_11();
	//add();
	//comment();
	//whileUse();
	//e1_9();
	//e1_10();
	system("pause");
	return 0;
}

