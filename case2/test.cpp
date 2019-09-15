#include <cppunit/TestCase.h>

#include <cppunit/ui/text/TextTestRunner.h>

#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/extensions/HelperMacros.h>

#include <cstdlib>

#include "operation.h"
 
class OperationTest : public CppUnit::TestCase {
public:
 
	void checkValue() {
		Operation oper;
		CPPUNIT_ASSERT_MESSAGE("m_b must be not ZERO!", oper.getB() != 0);
	}
	
	CPPUNIT_TEST_SUITE(OperationTest); // исп. для опр. тест. пакета
	CPPUNIT_TEST(checkValue);
	CPPUNIT_TEST_SUITE_END();
};

	CPPUNIT_TEST_SUITE_REGISTRATION(OperationTest);

int main() {
	
	srand(time(nullptr));
	
	CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextTestRunner runner;
	
	runner.addTest(test);
	
	runner.run();
	
	return 0;
}
