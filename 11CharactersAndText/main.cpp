#include <iostream>
#include <string>

int main(){
    
    //char variable, declared using '' otherwise will get compiler errors
    char char1 {'a'};
    char char2 {'r'};
    char char3 {'r'};
    char char4 {'o'};
    char char5 {'w'};

    //printing chars

    std::cout << char1 << std::endl;
    std::cout << std::endl;
    std::cout << char1 << char2 << char3 << char4 << char5 << std::endl;
    std::cout << std::endl;
    std::cout << sizeof(char) << std::endl; //char occupies 1 byte (8 bits), with 256 different values, each assigned to a different character (ASCII Table)

    char char6 {65}; //65 is the ASCII code for 'A'
    std::cout << std::endl;
    std::cout << "char(value): " << char6 << std::endl;
    std::cout << "char(int): " << static_cast<int>(char6) << std::endl; //way to transform char to int

    //char are short when it comes to representing languages other than english, like japanes, chinese, arabic
    //Unicode is a better way to represent text in other languages, but there are other options too.
    //Unicode is a robust way to represent text in different languages for a computer





    return 0;
}