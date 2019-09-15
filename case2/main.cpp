	#include <iostream>
	#include "operation.h"
	
	int main() {
		srand(time(nullptr));

		Operation OPER;
		
		std::cout << "a = " << OPER.getA() << ", b = " << OPER.getB() << std::endl;
		
		std::cout << "Сумма = " << OPER.Summa() << std::endl;
		std::cout << "Разность = " << OPER.Difference() << std::endl;
		std::cout << "Умножение = " << OPER.Multiplication() << std::endl;
		std::cout << "Деление = " << OPER.Division() << std::endl;
		
		return 0;
	}
