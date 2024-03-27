#include "Orchestra.h"
#include <iostream>

//Default constructor
Orchestra::Orchestra() {
    max_size = 0;
    current_size = 0;
    members = nullptr;
}

//Constructor with size parameter
Orchestra::Orchestra(int size) {
    max_size = size;
    current_size = 0;
    members = new Musician[size];
}

//Destructor
Orchestra::~Orchestra() {
    delete[] members;
}

//Getter for current number of members
int Orchestra::get_current_number_of_members() {
    return current_size;
}

//Check if any musician in the orchestra plays the specified instrument
bool Orchestra::has_instrument(std::string instrument) {
    for (int i = 0; i < current_size; i++) {
        if(members[i].get_instrument() == instrument) {
            return true;
        }
    }
    return false;
}

//Getter for members array
Musician* Orchestra::get_members() {
    return members;
}

//Add new musican to the orchestra if not full
bool Orchestra::add_musician(Musician new_musician) {
    if (current_size < max_size) {
        members[current_size] = new_musician;
        current_size++;
        return true;
    } else {
        return false;
    }
}
