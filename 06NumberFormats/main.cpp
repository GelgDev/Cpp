#include <iostream>

int main(){
    
    int num1 {15}; //Decimal
    int num2 {017}; //Octal
    int num3 {0x0f}; //hexadecimal
    int num4 {0b00001111}; //Binary
    
    std::cout << "Number in Decimal is: " << num1 << std::endl;
    std::cout << "Number in Octal is: " << num2 << std::endl;
    std::cout << "Number in hexadecimal is: " << num3 << std::endl;
    std::cout << "Number in binary is: " << num4 << std::endl;

    return 0;


}