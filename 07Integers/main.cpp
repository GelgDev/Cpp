#include <iostream>
#include <string>

int main(){
    
    //stores decimals, whole numbers
    //tipically stores in 4 bytes ir more in memory

    int num1 {67};
    //Variable: a named piece of memory that you use to stores specific types of data 


    //--------------------------------------------------------------------------------------------------------------------------//
    //Variables can be declared using {}, and that is called braced initialization

    //Variables with no value assigned can contain random garbage value. WARNING
    int elephant_count; //some compilers automatically put 0 in here

    int lion_count{}; //initializes to 0

    int dog_count {10}; //initializes to 10

    int cat_count {15}; //initializes to 15

    //Can use expression as initializer
    int domesticated_animals {dog_count + cat_count};

    //wont compile, the expression in braces uses undeclared variable
    //int bad_initialization{doesnt_exist1 + doesnt_exist2};

    //2.9 is a double, with a wider range than int. ERROR OR WARNING
    //int narrowing_conversion {2.9}; //compiler error

    //--------------------------------------------------------------------------------------------------------------------------//
    //Variables can be declared using () too, and that is called functional initialization

    int apple_count(5);
    int orang_count(10);

    int fruit_count (apple_count + orang_count);

    //int bad_initalization2 (doesnt_exist3 + doesnt_exist4);

    //information lost. less safe than braced {} inicialization
    int narrowing_conversion_functional (2.9); //this is going to cut the decimal part, storing only the 2

    //--------------------------------------------------------------------------------------------------------------------------//
    //Variables can be declared using = too, and that is called assignment initialization

    int bike_count = 2;
    int truck_count = 7;

    int vehicle_count = bike_count + truck_count;

    int narrowing_conversion_assignment = 2.9;

    //--------------------------------------------------------------------------------------------------------------------------//
    //Its possible to query the size of a type in memory

    std::cout << "Size in bytes of int: " << sizeof(int) << std::endl;

    std::cout << "Size in bytes of truck_count variable: " << sizeof(truck_count) << std::endl;

    //returns exactly how much memory an integer occupies in our memory
    //normally integers use 4 bytes (32bits) in memory

    //--------------------------------------------------------------------------------------------------------------------------//
    //Variables MUST start with letters from a-z or _
    //variables cant be named with numbers 0-9 at the start
    //variables names are CASE SENSITIVE

    return 0;
}