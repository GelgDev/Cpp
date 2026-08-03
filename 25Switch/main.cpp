#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << std::endl;

    // Switch is used for testing with several different conditions in a much compact way than using if and else

    // Tools
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    //using const because we dont want them to be modifiable

    int tool {Circle};

    switch(tool){
        case Pen: {
            std::cout << "Active tool is Pen." << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Active tool is Marker." << std::endl;
        }
        break;

        case Eraser: {
            std::cout << "Active tool is Eraser." << std::endl;
        }
        break;

        case Rectangle: {
            std::cout << "Active tool is Rectangle." << std::endl;
        }
        break;

        case Circle: {
            std::cout << "Active tool is Circle." << std::endl;
        }
        break;

        case Ellipse: {
            std::cout << "Active tool is Ellipse." << std::endl;
        }
        break;

        default: {
            std::cout << "There is no tool selected." << std::endl;
        }
    }

    // Break signals to the cpp compiler that after we execute what is in the case block, we are jumping out of the switch statement
    // Default is executed when none of the cases match
    // The contidition can ONLY BE Integral types and enums: int, long, unsigned short, char, etc.
    // the condition CANT BE string for example, because it doesnt make sense

    //BREAK: without it, everything after the case that match is going to be executed, even without matching

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //We can also GROUP CASES

    switch(tool){
        case Pen: {
            std::cout << "Drawing freely." << std::endl;
        }
        break;

        case Marker: {
            std::cout << "Marking." << std::endl;
        }
        break;

        case Eraser: {
            std::cout << "Erasing." << std::endl;
        }
        break;

        case Rectangle:
        case Circle:
        case Ellipse: {
            std::cout << "Drawing shapes." << std::endl;
        }
        break;

        default: {
            std::cout << "There is no tool selected." << std::endl;
        }
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //Incorrect use examplo: string as condition

    std::string name {"Gelg"};

    /*
    switch (name){
        
        //Error: expression must have integral or enum type
        //Wont even compile
        
    }
    */


    return 0;
}