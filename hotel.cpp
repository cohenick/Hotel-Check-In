#include <iostream>
#include "hotel.hpp"

int main(){

    std::cout << "\n" << "WELCOME TO HOTEL COHEN\n\n";

    //Calls functions described in header file
    bookRoom();
    info();
    pickRoom();
    meal();
    charge();

}

