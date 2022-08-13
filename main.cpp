#include <iostream>
#include <string>

#define LOG(x) std::cout << x << std::endl

int main()
{
    std::string filename;
    std::cout << "Enter filename: ";
    std::cin >> filename;

    LOG(filename);

    return 0;
}


/*
filename = input("Enter filename: ")

search_string = input("Enter string to search for: ")

with open(filename, "r") as file:
    for line in file:
        if search_string in line:
            print(line)
*/
