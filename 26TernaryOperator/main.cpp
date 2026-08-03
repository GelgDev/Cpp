#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Alternate way to use if statements

    int max{};

    int a {35};
    int b {20};

    //We want to find the maximum between these two values

    std::cout << "Using regular if" << std::endl;

    if(a > b){
        max = a;
    }else if (a < b){
        max = b;
    }else{
        std::cout << "Both values are the same" << std::endl;
        max = a;
    }

    std::cout << "Max: " << max << std::endl;

    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // TERNARY EXPRESSION

    // result = (condition) ? option1 : option2;

    int c {598};
    int d {256};

    int result = (c > d) ? c : d; // is c bigger than d? if yes, result = c, if false result = d

    std::cout << "The higher value from 'int result = (c > d) ? c : d', where  c = 598 and d = 256 is: " << result << std::endl;

    // We have the condition in parentheses 
    // option1 is the result if true, option2 is the result if false
    // result = (contition) ? resultIfTrue : resultIfFalse

    //Equivalent of

    if(c > d){
        result = c;
    }else{
        result = d;
    }


    //Ternary initialization
    
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    std::cout << "Speed" << std::endl;
    bool fast {false};

    int speed { fast ? 300 : 150};

    std::cout << "The speed is: " << speed << std::endl;



    return 0;
}