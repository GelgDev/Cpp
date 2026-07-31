#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
int main(){
    
    //A way to format the information we send to the terminal via std::cout
    //There are a lot of resources we can use to make this, but the ones we are using here come from thoes 2 libraries:
    // #include <ios>
    // #include <iomanip>

    // Input Output Manipulation (iomanip): https://en.cppreference.com/cpp/io/manip

    // std::endl
    // can be used as \n at the end of a text
    std::cout << "Nothing: " << std::endl;
    std::cout << "Hello ";
    std::cout << "World!";
    std::cout << std::endl;

    std::cout << std::endl;
    
    std::cout << "std::endl: " << std::endl;
    std::cout << "Hello " << std::endl;
    std::cout << "World!" << std::endl;
    std::cout << std::endl;

    std::cout << "\\n:" << std::endl;
    std::cout << "Hello \n";
    std::cout << "World!\n";

    std::cout << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::flush
    // causes immediate sending of data to the device connected to the stream
    // std::cout has a type of storage before sending data to the terminal. A middle point.
    // once the buffer is full, the data is sent to the terminal in one go
    





    std::cout << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::endl;

    // std::setw()
    // set width for the text we want to print (in numbers of characteres wide)

    std::cout << "Unformatted table:" << std::endl;
    std::cout << "Daniel " << "Gray " << "25" <<std::endl;
    std::cout << "Stanley " << "Woods " << "33" <<std::endl;
    std::cout << "Jordan " << "Parker " << "45" <<std::endl;
    std::cout << "Joe " << "Ball " << "21" <<std::endl;
    std::cout << "Josh " << "Carr " << "27" <<std::endl;
    std::cout << "Izaiah " << "Robinson " << "29" <<std::endl;

    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Formatted table using std::setw(10), (15) and (5):" << std::endl;
    std::cout << std::setw(10) << "First Name" << std::setw(15) << "Second Name" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(15) << "Gray" << std::setw(5) << "25" <<std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(15) << "Woods" << std::setw(5) << "33" <<std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(15) << "Parker" << std::setw(5) << "45" <<std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(15) << "Ball" << std::setw(5) << "21" <<std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(15) << "Carr" << std::setw(5) << "27" <<std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(15) << "Robinson" << std::setw(5) << "29" <<std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    //We can also align the text to the right, left or internal on our std

    //RIGHT

    int colwidth {20};
    std::cout << std::right;

    std::cout << "RIGHT: Formatted table using std::right and std::setw(20):" << std::endl;
    std::cout << std::setw(colwidth) << "First Name" << std::setw(colwidth) << "Second Name" << std::setw(colwidth) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "Daniel" << std::setw(colwidth) << "Gray" << std::setw(colwidth) << "25" <<std::endl;
    std::cout << std::setw(colwidth) << "Stanley" << std::setw(colwidth) << "Woods" << std::setw(colwidth) << "33" <<std::endl;
    std::cout << std::setw(colwidth) << "Jordan" << std::setw(colwidth) << "Parker" << std::setw(colwidth) << "45" <<std::endl;
    std::cout << std::setw(colwidth) << "Joe" << std::setw(colwidth) << "Ball" << std::setw(colwidth) << "21" <<std::endl;
    std::cout << std::setw(colwidth) << "Josh" << std::setw(colwidth) << "Carr" << std::setw(colwidth) << "27" <<std::endl;
    std::cout << std::setw(colwidth) << "Izaiah" << std::setw(colwidth) << "Robinson" << std::setw(colwidth) << "29" <<std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    //LEFT

    std::cout << std::left;
    
    std::cout << "LEFT: Formatted table using std::right and std::setw(20):" << std::endl;
    std::cout << std::setw(colwidth) << "First Name" << std::setw(colwidth) << "Second Name" << std::setw(colwidth) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "Daniel" << std::setw(colwidth) << "Gray" << std::setw(colwidth) << "25" <<std::endl;
    std::cout << std::setw(colwidth) << "Stanley" << std::setw(colwidth) << "Woods" << std::setw(colwidth) << "33" <<std::endl;
    std::cout << std::setw(colwidth) << "Jordan" << std::setw(colwidth) << "Parker" << std::setw(colwidth) << "45" <<std::endl;
    std::cout << std::setw(colwidth) << "Joe" << std::setw(colwidth) << "Ball" << std::setw(colwidth) << "21" <<std::endl;
    std::cout << std::setw(colwidth) << "Josh" << std::setw(colwidth) << "Carr" << std::setw(colwidth) << "27" <<std::endl;
    std::cout << std::setw(colwidth) << "Izaiah" << std::setw(colwidth) << "Robinson" << std::setw(colwidth) << "29" <<std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    //INTERNAL

    std::cout << std::internal;
    
    std::cout << "INTERNAL: Sign is left justified and data is right justified" << std::endl;
    std::cout << std::setw(colwidth) << "Name" << std::setw(colwidth) << "Favorite number" << std::endl;
    std::cout << std::setw(colwidth) << "Davi: " << std::setw(colwidth) << 7 << std::endl;
    std::cout << std::setw(colwidth) << "Renauld: " << std::setw(colwidth) << -234.8 << std::endl;
    std::cout << std::setw(colwidth) << "Cabral: " << std::setw(colwidth) << -99 << std::endl;

    
    std::cout << std::endl;
    std::cout << std::endl;


    // std::setfill()
    // sets the fill charactere used in the setw

    std::cout << std::left;
    std::cout << std::setfill('-');

    std::cout << "SETFILL: Formatted table using setfill('-'): " << std::endl;
    std::cout << std::setw(colwidth) << "First Name" << std::setw(colwidth) << "Second Name" << std::setw(colwidth) << "Age" << std::endl;
    std::cout << std::setw(colwidth) << "ABC" << std::setw(colwidth) << "First" << std::setw(colwidth) << "11" <<std::endl;
    std::cout << std::setw(colwidth) << "DEF" << std::setw(colwidth) << "Second" << std::setw(colwidth) << "22" <<std::endl;
    std::cout << std::setw(colwidth) << "GHI" << std::setw(colwidth) << "Third" << std::setw(colwidth) << "33" <<std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    //std::boolalpha : turns boolean values from '0' and '1' to the text version 'false' and 'true'

    std::cout << std::setfill(' ');
    std::cout << std::setw(30) << "True before std::boolalpha: " << std::setw(10) << true << std::setw(30) << "False before std::boolalpha: " << std::setw(10) << false << std::endl;
    std::cout << std::boolalpha;
    std::cout << std::setw(30) << "True after std::boolalpha: " << std::setw(10) << true << std::setw(30) << "False after std::boolalpha: " << std::setw(10) << false << std::endl;
    std::cout << std::noboolalpha;
    std::cout << std::setw(30) << "True after std::noboolalpha: " << std::setw(10) << true << std::setw(30) << "False after std::noboolalpha: " << std::setw(10) << false << std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    // std::showpos and std::noshowpos
    // Shows or hides the + sign for positive numbers

    int pos {10};
    int neg {-50};

    std::cout << "Numero positivo: " << pos << std::endl;
    std::cout << "Numero negativo: " << neg << std::endl;
    std::cout << std::endl;

    std::cout << std::showpos;
    std::cout << "After std::showpos" << std::endl;
    std::cout << "Numero positivo: " << pos << std::endl;
    std::cout << "Numero negativo: " << neg << std::endl;

    std::cout << std::noshowpos;

    std::cout << std::endl;
    std::cout << std::endl;

    // Different number systems: std::dec, std::hex, std::oct

    int pos_int {435};
    int neg_int {-47827};
    double double_var {498.32};

    std::cout << "pos_int in different bases: " << std::endl;
    std::cout << "pos_int after std::dec : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int after std::hex : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int after std::oct : " << std::oct << pos_int << std::endl;
    std::cout << std::endl;

    std::cout << "neg_int in different bases: " << std::endl;
    std::cout << "neg_int after std::dec : " << std::dec << neg_int << std::endl;
    std::cout << "neg_int after std::hex : " << std::hex << neg_int << std::endl;
    std::cout << "neg_int after std::oct : " << std::oct << neg_int << std::endl;
    std::cout << std::endl;

    std::cout << "double_var in different bases: " << std::endl;
    std::cout << "double_var after std::dec : " << std::dec << double_var << std::endl;
    std::cout << "double_var after std::hex : " << std::hex << double_var << std::endl;
    std::cout << "double_var after std::oct : " << std::oct << double_var << std::endl;
    //These systems have no effect in floating point numbers
    std::cout << std::dec;

    std::cout << std::endl;
    std::cout << std::endl;

    // showbase and noshowbase: show the base for the integral types

    pos_int = 717171;

    std::cout << "pos_int (noshowbase: default): " << std::endl;
    std::cout << "pos_int after std::dec : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int after std::hex : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int after std::oct : " << std::oct << pos_int << std::endl;
    std::cout << std::endl;

    std::cout << "pos_int (showbase): " << std::endl;
    std::cout << std::showbase;
    std::cout << "pos_int after std::dec : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int after std::hex : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int after std::oct : " << std::oct << pos_int << std::endl;
    std::cout << std::noshowbase;


    std::cout << std::endl;
    std::cout << std::endl;

    //uppercase and no uppercase

    std::cout << std::showbase;
    std::cout << "pos_int (nouppercase: default and showbase): " << std::endl;
    std::cout << "pos_int after std::dec : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int after std::hex : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int after std::oct : " << std::oct << pos_int << std::endl;
    std::cout << std::endl;

    std::cout << "pos_int (uppercase and showbase): " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int after std::dec : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int after std::hex : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int after std::oct : " << std::oct << pos_int << std::endl;
    std::cout << std::nouppercase;
    std::cout << std::noshowbase;


    std::cout << std::endl;
    std::cout << std::endl;

    // std::scientific and std::fixed
    // defines if a scientific value is going to be used or not

    double a {3.1415926535897932384626433832795};
    double b {2006.0};
    double c {1.34e-10};

    std::cout << "double values (default: use scientific where necessary): " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << std::endl;

    std::cout << std::fixed;
    std::cout << "double values (std::fixed): " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl; //cant show beacuse of the precision
    std::cout << std::setprecision(20);
    std::cout << "c (after std::setprecision(20)): " << c << std::endl;
    std::cout << std::endl;

    std::cout << std::setprecision(6);
    std::cout << std::defaultfloat;
    
    std::cout << "double values (std::defaultfloat) to reset: " << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;


    std::cout << std::endl;
    std::cout << std::endl;

    //





    return 0;
}
