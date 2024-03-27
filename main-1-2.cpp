#include <iostream>
#include "Orchestra.h"

int main() {
    // Test default constructor
    Orchestra orchestra1;
    std::cout << "Current number of members in orchestra1: " << orchestra1.get_current_number_of_members() << std::endl;

    // Test constructor with size parameter
    Orchestra orchestra2(3);
    std::cout << "Current number of members in orchestra2: " << orchestra2.get_current_number_of_members() << std::endl;

    // Test add_musician method
    Musician musician1("Violin", 5);
    Musician musician2("Piano", 10);
    Musician musician3("Flute", 3);
    Musician musician4("Violin", 7);

    std::cout << "Adding musician1 to orchestra2: " << orchestra2.add_musician(musician1) << std::endl;
    std::cout << "Adding musician2 to orchestra2: " << orchestra2.add_musician(musician2) << std::endl;
    std::cout << "Adding musician3 to orchestra2: " << orchestra2.add_musician(musician3) << std::endl;
    std::cout << "Adding musician4 to orchestra2: " << orchestra2.add_musician(musician4) << std::endl;

    // Test has_instrument method
    std::cout << "Orchestra2 has Piano: " << orchestra2.has_instrument("Piano") << std::endl;
    std::cout << "Orchestra2 has Violin: " << orchestra2.has_instrument("Violin") << std::endl;
    std::cout << "Orchestra2 has Guitar: " << orchestra2.has_instrument("Guitar") << std::endl;

    // Test get_members method
    Musician *members = orchestra2.get_members();
    std::cout << "Members of orchestra2:" << std::endl;
    for (int i = 0; i < orchestra2.get_current_number_of_members(); ++i) {
        std::cout << "Musician " << i + 1 << ": Instrument - " << members[i].get_instrument() << ", Experience - " << members[i].get_experience() << std::endl;
    }

    return 0;
}
