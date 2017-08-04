// IEEE_Test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <limits>

int main()
{
	std::stringstream s_inp,s_inp_f;
	s_inp << "3119.1544797";
	s_inp_f << "13119.1544";

	//float精度是2 ^ 23，能保证6位小数内精确。
	//double精度是2 ^ 52，能保证15位小数内精确。

	/* double */
	//std::cout.flags(std::ios::fixed);
	//std::cout.precision(7);

	/* Union */
	//union MyUnion
	//{
	//	double d;
	//	unsigned long ul;
	//};
	//MyUnion mu;
	//s_inp >> mu.d;
	//std::cout << "String:"<<s_inp.str() << '\n'<< std::endl;
	//
	//std::cout << "mu.d:\t" <<mu.d << std::endl;
	//std::cout << "mu.ul:\t"<<mu.ul << '\n'<<std::endl;
	//
	//mu.ul = 402036427;
	//std::cout << mu.d << std::endl;

	/* Pointer */
	//double d;
	//unsigned long l;
	//s_inp >> d;
	//std::cout << "String:" << s_inp.str() << '\n' << std::endl;
	//
	//l = *(unsigned long *)&d;
	//std::cout << "d:\t" << d << std::endl;
	//std::cout << "l:\t" << l << std::endl;

	/* float*/
	/* Pointer */
	//std::cout.precision(6);
	//float f_t;
	//unsigned long l_t;
	//
	//s_inp_f >> f_t;
	//l_t = *(unsigned long *)&f_t;
	//
	//std::cout << "String:\t" << s_inp_f.str() <<"\n"<< std::endl;
	//std::cout << "f_t:\t" << f_t << std::endl;
	//std::cout << "l_t:\t" << l_t << "\n"<<std::endl;
	//
	//f_t = *(float *)&l_t;
	//std::cout << "f_t:\t" << f_t << std::endl;
	//std::cout << "l_t:\t" << l_t << "\n" << std::endl;
	
	/* Limits*/
	std::cout << "max(float): " << std::numeric_limits<float>::max() << std::endl;
	std::cout << "min(float): " << std::numeric_limits<float>::min() << std::endl;
	std::cout << "digits(float): " << std:: numeric_limits<float>::digits << std::endl;
	std::cout << "digits10(float): " << std::numeric_limits<float>::digits10 << std::endl;



	/* float digits&max value test */
	std::cout.precision(15);
	float a = 0.33333333333;
	float b = 999999999999;
	std::cout << "a_str:\t0.33333333333" << std::endl;
	std::cout << "a:\t" << a << std::endl;
	std::cout << "b_str:\t999999999999" << std::endl;
	std::cout << "b:\t" << b << std::endl;
	
	system("pause");
    return 0;
}

