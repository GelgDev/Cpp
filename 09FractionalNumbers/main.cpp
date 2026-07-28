#include <iostream>
#include <string>
#include <iomanip> //needed to use std::setprecision();

int main() {
    
    //Floating types: used to represent numbers with fractional parts in c++
    //We have 3 types: float, double and long double
    //float: size of 4, precision of 7
    //double: size of 8, precision of 15. RECOMENDED DEFAULT
    //long double: size of 16, precision > double

    //precision means de number of bits you can represent starting from the decimal part
    // 1.23456700001 cannot be represented with a float, as it has 12 precision. it needs to be at least a double

    //How to declare and initialize the variables
    float float_number {1.12345678901234567890f}; //the f in the end mean that the number is a float
    double double_number {1.12345678901234567890};
    long double long_double_number {1.12345678901234567890L}; //the L in the end mean that the number is a long double
    //Always put the sufixes when including floating point variables, otherwise the default will be double
    //Double works well in many situations and will be used a lot


    std::cout << std::setprecision(20); //the default precision is 6

    std::cout << "Float number: " << float_number << std::endl; //precision 7 digits
    std::cout << "Float number size: " << sizeof(float_number) << std::endl;

    std::cout << "Double number: " << double_number << std::endl; //precision 15'ish digits
    std::cout << "Double number size: " << sizeof(double_number) << std::endl;

    std::cout << "Long double number: " << long_double_number << std::endl; //precision 15+ digits
    std::cout << "Long double number size: " << sizeof(long_double_number) << std::endl;


    std::cout << std::setprecision(20); //the default precision is 6
    //precision gone wrong
    //float number4 {192400023.0f}; //a float can only handle 7 digits -> compile error

    float number5 (192400023); //wont get compile error, but the piece of data is not usable
    number5 = number5 + 1;
    std::cout << "number5 is: " << number5 << std::endl;

    //Can be used with scientific notation
    double number6 {192400023};
    double number7 {1.92400023e8};
    double number8 {1.924e8};
    double number9 {0.00000000003498};
    double number10 {3.498e-11};

    std::cout << "Number 6: " << number6 << std::endl;
    std::cout << "Number 7: " << number7 << std::endl;
    std::cout << "Number 8: " << number8 << std::endl;
    std::cout << "Number 9: " << number9 << std::endl;
    std::cout << "Number 10: " << number10 << std::endl;


    //n(floating point)/0 -> infinity (+/-)
    //0.0/0.0 -> NaN

    double number11 {5.6};
    double number12 {}; //initialized to 0
    double number13 {}; //initialized to 0

    //Infinity
    double result {number11 / number12};

    std::cout << number11 << " / " << number12 << " yields " << result << std::endl;
    std::cout << result << " + " << number11 << " yields " << result + number11 << std::endl;

    //NaN
    result = number12 / number13;

    std::cout << number12 << " / " << number13 << " = " << result << std::endl;


    //IEEE_754: Floating point numbers memory representation -> wikipedia

    return 0;
}