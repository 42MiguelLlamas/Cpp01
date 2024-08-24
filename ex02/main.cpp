#include <iostream>

int main()
{
	std::string str;
	std::string *ptr;
	std::string &ref = str;

	str = "Hola";
	ptr = &str;
	std::cout << "Address of str:" << &str <<std::endl;
	std::cout << "Address of ptr:" << ptr <<std::endl;
	std::cout << "Address of ref:" << &ref << std::endl;
	std::cout << "Value of str:" << str <<std::endl;
	std::cout << "Value of ptr:" << *ptr <<std::endl;
	std::cout << "Value of ref:" << ref << std::endl;

	return (0);
}