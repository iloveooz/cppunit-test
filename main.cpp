	#include "sstring.h"
	#include <cppunit/TestCase.h>
	#include <cppunit/ui/text/TextTestRunner.h>

	class mystringTest : public CppUnit::TestCase {
	public:

	void runTest() {
			myString s;
			CPPUNIT_ASSERT_MESSAGE("String Length Non-Zero", s.size() == 0);
		}
	};
	
	#include <iostream>

	int main() {
		mystringTest test;
		CppUnit::TextTestRunner runner;
		runner.addTest(&test);
		runner.run();
		return 0;
	}
