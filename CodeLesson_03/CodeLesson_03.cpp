#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, world!";
    std::cout << "String: " << myString << std::endl;
    std::cout << "Length string: " << myString.length() << std::endl;
    std::cout << "First symbol: " << myString.front() << std::endl;
    std::cout << "Last symbol: " << myString.back() << std::endl;
    return 0;
}