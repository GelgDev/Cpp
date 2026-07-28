#include <iostream>
#include <string>

int main() {
    
    //Positive and negative numbers
    //signed means it allows to store negative and positive numbers
    signed int val1 {10};
    signed int val2 {-300};

    //unsigned means it CANT store negative numbers
    unsigned int val3 {10};
    //unsigned int val4 {-100}; //compiler error

    //they still use 4bytes of memory but signed int has 1 bet reserved for the sign
    //unsigned range: [0 ~ (2^n) - 1]  -> [0, 4.294.967.295]
    //signed range: [(-2 ^ n-1) ~ (2 ^ n-1) - 1] -> [-2.147.483.648, 2.147.483.647]


    //flat integer as short or long

    short short_var {-32768}; // 2 bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-456};
    unsigned short int unsigned_short_int {456};

    int int_var {55}; // 4 bytes
    signed  signed_var {122};
    signed  int signed_int {77};
    unsigned  int unsigned_int {77};

    long long_var {88}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {44};
    signed long int signed_long_int {44};
    unsigned long int unsigned_long_int {44};

    long long long_long_var {888}; // 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {1234};
    unsigned long long int unsigned_long_long_int {1234};

    //NOTE: These modifiers only apply to integral types, the ones you can store decimal numbers


    std::cout << "Value of val1: " << val1 << std::endl;
    std::cout << "Size of val1: " << sizeof(val1) << std::endl;

    std::cout << "Value of short_int: " << short_int << std::endl;
    std::cout << "Size of short_int: " << sizeof(short_int) << std::endl;
    
    std::cout << "Value of long_int: " << long_int << std::endl;
    std::cout << "Size of long_int: " << sizeof(long_int) << std::endl;

    std::cout << "Value of long_long_int: " << long_long_int << std::endl;
    std::cout << "Size of long_long_int: " << sizeof(long_long_int) << std::endl;

    return 0;
}