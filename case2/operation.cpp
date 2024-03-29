	#include <cstdlib>

	#include "operation.h"

	Operation::Operation() {
		m_a = rand() % 10;
		m_b = rand() % 5;
	}
	
	Operation::~Operation() {}

	double Operation::Summa() {
		double sum = 0;
		sum = m_a + m_b;
		return sum;
	}
	
	double Operation::Difference() {
		double diff = 0;
		diff = m_a - m_b;
		return diff;
	}

	double Operation::Multiplication() {
		double mult = 0;
		mult = m_a * m_b;
		return mult;
	}

	double Operation::Division() {
		double div = 0;
		div = m_a / m_b;
		return div;
	}

	double Operation::getA() { return m_a; }
	double Operation::getB() { return m_b; }
	
	void Operation::setA(double a) {
		m_a = a;
	}
	
	void Operation::setB(double b) {
		m_b = b;
	}
