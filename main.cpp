#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl

int main()
{
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;

    std::string searchString;
    std::cout << "Enter string to search for: ";
    std::cin >> searchString;

    return 0;
}


/*
with open(filename, "r") as file:
    for line in file:
        if search_string in line:
            print(line)
*/
