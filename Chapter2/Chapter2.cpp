// Chapter2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

void intConversions()
{
	bool b = 42;
	// print 1
	std::cout << b << std::endl;
	int i = b;
	// print 1
	std::cout << i << std::endl;
	i = 3.14;
	// print 3
	std::cout << i << std::endl;
	double pi = i;
	// print 3.0
	std::cout << pi << std::endl;
	unsigned char c = -1;
	// print 255
	std::cout << int(c) << std::endl;
	signed char c2 = 256;
	// print 0
	std::cout << int(c2) << std::endl;
	unsigned u = 10;
	int i2 = -42;
	std::cout << i2 + i2 << std::endl; //  prints -84
	std::cout << i2 + u << std::endl;  //  if 32-bit ints, prints 4294967264

	unsigned u1 = 42, u2 = 10;
	std::cout << u1 - u2 << std::endl; // ok:result is 32
	std::cout << u2 - u1 << std::endl; // ok:but the result will wrap around

	// WRONG: u can never be less than 0; the condition will always succeed
	/*for (unsigned u = 10; u >= 0; u--) {
		std::cout << u << std::endl;
	}*/

	unsigned u3 = 11; // start the loop one past the first element we want to print
	while (u3 > 0)
	{
		--u3;			//	decrement first, so that the last iteration will print 0
		std::cout << u3 << std::endl;
	}
}

void exercise212()
{
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;	// 32
	std::cout << u - u2 << std::endl;	// 4294967264
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;	// 32
	std::cout << i - i2 << std::endl;	// -32
	std::cout << i - u << std::endl;		// 0
	std::cout << u - i << std::endl;		// 0
	std::cout << 024 << std::endl;
}

void literal()
{
	std::cout << "a really, really long string literal "
		"that spans two lines" << std::endl;
	std::cout << '\n';
	std::cout << "\tHi!\n";
	std::cout << "Hi \x4dO\115!\n"; // prints Hi MOM!followed by a newline
	std::cout << '\115' << '\n';	// prints M followed by a newline
	std::cout << "\011" << '\n';
}

void initial()
{
	int units_sold1 = 1;
	int units_sold2 = { 2 };
	int units_sold3{ 3 };
	int units_sold4{ 4 };
	std::cout << units_sold1 << '\n';
	std::cout << units_sold2 << '\n';
	std::cout << units_sold3 << '\n';
	std::cout << units_sold4 << '\n';
}

int _____B = 13;
void identifiers()
{
	int _____a = 10;
	std::cout << _____a << std::endl;
	int _____A = 11;
	std::cout << _____A << std::endl;
	std::cout << _____B << std::endl;
	int _A____B = 14;
	std::cout << _A____B << std::endl;
	int _ = 15;
	std::cout << _ << std::endl;
	double Double = 3.14;
	std::cout << Double << std::endl;
}

void reference()
{
	int ival = 1024;
	int &refVal = ival;
	std::cout << "ival:  " << ival << " refVal: " << refVal << std::endl;
	//int &refVal2;		// error: a reference ust e initialized
	refVal = 2;			// assigns 2 to the oject to which refVal refers, i.e., to ival
	std::cout << "ival:  " << ival << " refVal: " << refVal << std::endl;

	int ii = refVal;	// same as ii = ival
	std::cout << "ii:  " << ii << std::endl;
	
	// ok: refVal3 is bound to the object to which refVal is bound, i.e., to ival
	int &refVal3 = refVal;
	std::cout << "ival:  " << ival << " refVal: " << refVal << " refVal3: " << refVal3 << std::endl;
	// initializes i from the value in the object to which refVal is bound
	int i = refVal;		// ok:initializes i to the same value as ival
	std::cout << "i:  " << i << std::endl;

	int j = 1024, j2 = 2048;	// j and j2 are both ints
	int &r = j, r2 = j2;		// r is a reference bound to j; r2 is an int
	int i3 = 1024, &ri = i3;	// i3 is an int; ri is a reference bound to i3;
	int &r3 = i3, &r4 = j2;		// both r3 and r4 are references

	//int &refVal4 = 10;			// error: initializer must be an object
	//double dval = 3.14;
	//int &refVal5 = dval;		// error: initializer must be an int object
}

void exercises2_3_1()
{
	// 2.15
	int ival = 1.01;
	//int &rval1 = 1.01;		//错误： 引用初始化必须是对象
	int &rval2 = ival;
	//int &rval3;					//错误： 引用必须初始化；
	// 2.16
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;
	r2 = 3.14159;
	std::cout << r2 << std::endl;
	r2 = r1;
	std::cout << r2 << std::endl;
	i = r2;
	r1 = d;

	std::cout << r1 << std::endl;

	// 2.17
	int i2, &ri = i2;
	i2 = 5; ri = 10;
	std::cout << i2 << " " << ri << std::endl;

}

void pointers()
{
	int ival = 42;
	int *p = &ival;		// p holds the address of ival; p is a pointer to ival
	std::cout << "*p:  " << *p << std::endl;
	double dval;
	double *pd = &dval;	// ok:initializer is the address of a double
	double *pd2 = pd;	// ok:initializer is a pointer to double
	std::cout << "*pd:  " << *pd << std::endl;

	//int *pi = pd;	// error:types of pi and pd differ
	//pi = &dval;		// error:assigning the address of a double to a pointer to int

	// 空指针的3种写法,c++推荐第一种写法
	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;
}

void exercises2_3_2()
{
	// 2.18
	int a = 10, b = 20;
	int *pc = &a;
	pc = &b;
	std::cout << "a = " << a << " b = " << b << " *pc = " << *pc << std::endl;
	*pc = 30;
	std::cout << "a = " << a << " b = " << b << " *pc = " << *pc << std::endl;
	// 2.19 
	//todo: 有啥漏的，以后再来补
	/*
	1.指针是对象，引用不是对象
	2.指针声明时可以不初始化，引用声明时必须初始化
	3.指针可以多次赋值，引用不能赋值
	4.可以有const指针，但是没有const引用
	5.指针可以有多级，但是引用只能是一级
	*/
	// 2.20	i的平方
	int i = 42;
	int *p1 = &i;
	*p1 = *p1 * *p1;
	std::cout << "i=" << i << " *p1=" << *p1 << std::endl;
	// 2.21
	int j = 0;
	//double *dp = &j;	// 错误:类型不匹配
	//int *ip = j;		// 错误:int值不能初始化指针
	int *p = &j;
	// 2.24
	void *p2 = &i;
	//long *lp = &i;	//错误
}

void constReferences()
{
	const int ci = 1024;
	const int &r1 = ci;
	//int i = 42;
	//r1 = i;
	//int &r2 = ci;	// 错误：r2必须是const

}

int main()
{
	printf("Hello World\n");
	//intConversions();
	//exercise212();
	//literal();
	//initial();
	//identifiers();
	//reference();
	//exercises2_3_1();
	//pointers();
	//exercises2_3_2();
	//constReferences();
	system("pause");
	return 0;
}

