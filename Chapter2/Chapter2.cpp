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

int main()
{
	printf("Hello World\n");
	//intConversions();
	//exercise212();
	literal();
	system("pause");
    return 0;
}

