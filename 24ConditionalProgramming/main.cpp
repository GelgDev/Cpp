#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <limits>
#include <cmath>

int main(){
    
    std::cout << std::endl;

    bool red {false};
    bool green {true};
    bool yellow {false};
    bool police_stop {true};

    //if green: go
    //if yellow: slow down
    //if red: stop
    //if green and police_stop: stop

    std::cout << std::boolalpha;
    std::cout << std::left;
    std::cout << std::setw(15) << "Green: " << std::setw(5) << green << std::endl;
    std::cout << std::setw(15) << "Yellow: " << std::setw(5) << yellow << std::endl;
    std::cout << std::setw(15) << "Red: " << std::setw(5) << red << std::endl;
    std::cout << std::setw(15) << "Police Stop: " << std::setw(5) << police_stop << std::endl;
    std::cout << std::setw(15) << "Action: " << std::setw(5);

    if(police_stop || red){
        std::cout << "STOP!" << std::endl;
    }
    else if(yellow) {
        std::cout << "Slow down!" << std::endl;
    }
    else {
        std::cout << "Go!" << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    green = false;
    yellow = true;
    red = false;
    police_stop = false;

    std::cout << std::setw(15) << "Green: " << std::setw(5) << green << std::endl;
    std::cout << std::setw(15) << "Yellow: " << std::setw(5) << yellow << std::endl;
    std::cout << std::setw(15) << "Red: " << std::setw(5) << red << std::endl;
    std::cout << std::setw(15) << "Police Stop: " << std::setw(5) << police_stop << std::endl;
    std::cout << std::setw(15) << "Action: " << std::setw(5);

    if(police_stop || red){
        std::cout << "STOP!" << std::endl;
    }
    else if(yellow) {
        std::cout << "Slow down!" << std::endl;
    }
    else {
        std::cout << "Go!" << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //IF statement: Do things based if the condition is True or False

    int n1 {55};
    int n2 {60};

    bool result {55 < 60};
    std::cout << "IF STATEMENT" << std::endl;
    //if(result)
    if (result == true){
        std::cout << n1 << " is less than " << n2 << std::endl;
    }
    //if(!result)
    if (!(result == true)){
        std::cout << n1 << " is not less than " << n2 << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //ELSE: executed when the if statement is false

    std::cout << "ELSE STATEMENT" << std::endl;
    //if(result)
    n1 = 65;
    result = n1 < n2;
    if (result == true){
        std::cout << n1 << " is less than " << n2 << std::endl;
    }
    //if(!result)
    else {
        std::cout << n1 << " is not less than " << n2 << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    bool first {true};
    bool second {false};

    std::cout << "NESTED CONDITIONS" << std::endl;

    if (first){
        std::cout << "The first condition is: " << first << std::endl;

        if (second){
            std::cout << "The second condition is: " << second << std::endl;
        } else{
            std::cout << "The second condition is: " << second << std::endl;
        }
    } else{
        std::cout << "The first condition is: " << first << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    //ELSE IF

    // Tools
    const int Pen {10};
    const int Marker {20};
    const int Eraser {30};
    const int Rectangle {40};
    const int Circle {50};
    const int Ellipse {60};

    int tool {Ellipse};

    std::cout << "ELSE IF" << std::endl;

    if(tool == Pen){
        std::cout << "The actual tool is pen." << std::endl;
    }
    else if (tool == Marker){
        std::cout << "The actual tool is marker." << std::endl;
    }
    else if (tool == Eraser){
        std::cout << "The actual tool is eraser." << std::endl;
    }
    else if (tool == Rectangle){
        std::cout << "The actual tool is rectangle." << std::endl;
    }
    else if (tool == Circle){
        std::cout << "The actual tool is circle." << std::endl;
    }
    else if (tool == Ellipse){
        std::cout << "The actual tool is ellipse." << std::endl;
    }

    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;


    return 0;
}