#ifndef ORCHESTRA_H
#define ORCHESTRA_H

#include <string>
#include "Musician.h"

class Orchestra {
    private:
    int max_size;
    int current_size;
    Musician* members;

    public:
    //Default constructor
    Orchestra();

    //Constructor with size parameter
    Orchestra(int size);

    //Destructor
    ~Orchestra();

    //Getter for current number of members
    int get_current_number_of_members();

    //Check if any musician in the orchestra plays the specified instrument
    bool has_instrument(std::string instrument);

    //Getter for members array
    Musician *get_members();

    //Add new musician to the orchestra if not full
    bool add_musicial(Musician new_musician);
};

#endif //ORCHESTRA_H