#include <cppunit/TestCase.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include "operation.h"
 
class OperationTest : public CppUnit::TestCase {
public:
 
	void runTest() {
		Operation s;
		CPPUNIT_ASSERT_MESSAGE("B Zero", s.getB() != 0);
	}
};
 
int main() {
	OperationTest test;
	CppUnit::TextTestRunner runner;
	runner.addTest(&test);

	runner.run();
	return 0;
}
