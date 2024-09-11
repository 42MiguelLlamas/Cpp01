#include <iostream>
#include <fstream>
#include <string>

int replace_string(std::string &filename, std::string &s1, std::string &s2)
{
    std::ifstream infile(filename.c_str());
    std::string line;
    std::size_t pos;

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be an empty string." << std::endl;
        return (1);
    }
    if (!infile.is_open())
    {
        std::cerr << "Error opening the infile." << std::endl;
        return (1);
    }
	std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
	{
        std::cerr << "Error: Unable to create the output file." << std::endl;
        infile.close();
        return (1);
    }

    while (std::getline(infile, line))
    {
        pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            outfile << line.substr(0, pos);
            outfile << s2;
            pos += s1.length();
            line = line.substr(pos);
            pos = 0;
        }
        outfile << line << std::endl;
    }

    infile.close();
    outfile.close();
    return 0;
}

int main(int argc, char **argv)
{
    if (argc != 4) // Ensure correct number of arguments
    {
        std::cerr << "Error: Invalid number of arguments." << std::endl;
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    // Call the replace function
    return replace_string(filename, s1, s2);
}
