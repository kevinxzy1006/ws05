#include <iostream>
#include "Musician.h"

int main() {
    //Test default constructor
    Musician musician1;
    std::cout << "Default instrument: " << musician1.get_instrument() << std::endl;
    std::cout << "Default experience: " << musician1.get_experience() << std::endl;

    //Test constructor with parameters
    Musician musician2("Piano", 10);
    std::cout << "Instrument: " << musician2.get_instrument() << std::endl;
    std::cout << "Experience: " << musician2.get_experience() << std::endl;

    return 0;
}