#include <iostream>
#include <string>
#include <fstream>

#define LOG(x) std::cout << x << std::endl

int main()
{
    std::string filename;
    std::cout << "Enter filename: ";
    // std::cin >> filename;
    std::getline(std::cin, filename);

    std::string searchString;
    std::cout << "Enter string to search for: ";
    // std::cin >> searchString;
    std::getline(std::cin, searchString);

    std::string content;
    std::ifstream file(filename);

    while (file >> content)
    {
        if (content.find(searchString) != std::string::npos)
        {
            std::cout << content << "\n";
        }
    }

    return 0;
}
