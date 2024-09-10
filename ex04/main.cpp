#include <iostream>
#include <fstream>


void	replace_string(std::string filename, std::string s1, std::string s2)
{
	
}

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string s2;

	if (argc != 4)
	{
		std::cerr<<"Numero de argumentos invalido"<<std::endl;
		return (0);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	replace_string(filename, s1, s2);

		
}