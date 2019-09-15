	#pragma once

	class Operation {
	public:
		Operation();
		~Operation();
		
		double getA();
		double getB();
		
		void setA(double a);
		void setB(double b);
		
		double Summa();
		double Difference();
		double Multiplication();
		double Division();
	
	private:
		double m_a;
		double m_b;
	};
