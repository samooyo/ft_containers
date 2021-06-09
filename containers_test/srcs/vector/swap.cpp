#include "common.hpp"

#define TESTED_TYPE int

int main ()
{
	TESTED_NAMESPACE::vector<TESTED_TYPE> foo((size_t)3, 15);
	TESTED_NAMESPACE::vector<TESTED_TYPE> bar((size_t)5, 42);
	
	TESTED_NAMESPACE::vector<TESTED_TYPE>::const_iterator it_foo = foo.begin();
	TESTED_NAMESPACE::vector<TESTED_TYPE>::const_iterator it_bar = bar.begin();

	std::cout << "BEFORE SWAP" << std::endl;

	std::cout << "foo contains:" << std::endl;
	printSize(foo);
	std::cout << "bar contains:" << std::endl;
	printSize(bar);

	foo.swap(bar);

	std::cout << "AFTER SWAP" << std::endl;

	std::cout << "foo contains:" << std::endl;
	printSize(foo);
	std::cout << "bar contains:" << std::endl;
	printSize(bar);

	std::cout << "Iterator validity:" << std::endl;
	std::cout << (it_foo == bar.begin()) << std::endl;
	std::cout << (it_bar == foo.begin()) << std::endl;

	return (0);
}
