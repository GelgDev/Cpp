#include <iostream>
#include <string>

int main() {

    //Booleans can store 2 states in c++: True or False
    //used to make decisions in programs

    bool red_light {true};
    bool green_light {false};

    if (red_light){
        std::cout << "STOP!" << std::endl;
    }else {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light){
        std::cout << "The light is green!" << std::endl;
    }else{
        std::cout << "The light is NOT green!" << std::endl;
    }

    //Printing out a bool
    //1 -> True
    //0 -> False
    std::cout << std::endl;
    std::cout << "Red light: " << red_light << std::endl;
    std::cout << "Green_light: " << green_light << std::endl;

    //Print out true and false
    std::cout << std::endl;
    std::cout << std::boolalpha; // forces the output to true or false
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    std::cout << std::endl;
    std::cout << sizeof(bool) << std::endl; // 8 bits of memory, 1 byte
    //A byte can store 256 different values
    //Using it just to cover 2 states is wasteful, specially for devices with hard memory constraints (embedded devices)
    //There are techniques to pack even more data into a byte (learn in the future)


    return 0;
}