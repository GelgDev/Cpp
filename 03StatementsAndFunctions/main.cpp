#include <iostream>


    
//Statement is a basic unit of computation in a c++ program
//The smallest thing the cpu can execute in a program
//Um programa em cpp é uma colletion de statements, organizados de uma maneira que cheguem a um objetivo
//Statements end with a semicolon (;)
//Statements are executed in order, from top to bottom


//functions must be defined before they are called/used
//functions are REUSABLE pieces of code
int addNumbers(int num1, int num2){
    return num1 + num2;
}

//Exemplo basico
int main(int argc, char **argv)
{

    int firstNumber = 9;
    int secondNumber = 12;

    int sum = firstNumber + secondNumber;

    std::cout << "The sum of the numbers " << firstNumber << " and " << secondNumber << " is : " << sum << std::endl;

    

    //Parte 2
    std::cout << "-----------------------------------------" << std::endl;
    int num1 {1}; //Statement
    int num2 {46};

    std::cout << "Number 1: " << num1 << std::endl;
    std::cout << "Number 2: " << num2 << std::endl;

    std::cout << "Calling the addNumbers() function: " << addNumbers(num1, num2) << std::endl;



    return 0;
}



