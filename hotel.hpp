#include <iostream>
#include <vector>
#include <climits>

//Defines class named Client
class client {

    //Makes class attributes public
    public:

    //Class attributes
    std::string name;
    int age = 0;
    int stay = 0;
    int account = 0;

    //Class function
    void deduct(){
       std::cout << account - 300 * stay;
    }

};

//Prompts user to book hotel room
void bookRoom() {
    
    char response;

    std::cout << "Would you like to book your stay with us? y/n\n";
    std::cout << ": ";
    std::cin >> response;

    std::cout << "\n";

    //Executes if user wants to book a room
    if(response == 'y' || response == 'Y') {

        std::cout << "Searching for available rooms...\n";
    }

    //Executes if user doesn't want to book room
    else if (response == 'n' || response == 'N'){

        char reAsk;

        std::cout << "Are you sure you want to exit? y/n\n";
        std::cout << ": ";

        std::cin >> reAsk;

        std::cout << "\n";

    //Confirms if user wants to exit program
    if(reAsk == 'y' || reAsk == 'Y') {
            std::cout << "Sad to see you go. Please call again!\n\n";
            exit(0);
        } 
    else if (reAsk == 'n' || reAsk == 'N') {

            bookRoom();
        } 
       
    } 

    //recalls function if invalid iput is entered
    else {
        std::cin.clear(); // clears error flag
        std::cin.ignore(INT_MAX, '\n'); // discards invalid input
        std::cout << "Invalid input. Please enter valid input\n\n";

        bookRoom();
    }
}

//Prompts user for their information
void info() {

    client new1;

    std::cout << "While we wait, Tell us a bit about yourself ;-)\n\n";

    std::cout << "What's your name: ";
    std::cin >> new1.name;
    std::cout << "\n";

    std::cout << "How old are you? ";
    std::cin >> new1.age;
    std::cout << "\n";

    //Executes if user input is below 18
    if (new1.age < 18 ) {
        std::cout << "Sorry " << new1.name << ", You're not eligible to make a booking with us yet. You need to be 18 or older.\n";
        std::cout << "See you soon ;-)\n\n";
        exit(0);
    } 
    
    std::cout << "Nice to meet you " << new1.name;
    std::cout << "!\n\n";

}

//Prints a default sentence
void goodChoice() {
    std::cout << "Nice choice, please take a seat while we get your room ready.\n\n";
}

//Prompts user to pick room
void pickRoom(){

    int rooms;

    std::cout << "Below is a list of available rooms, please pick a number for the room you would like to stay in: \n";

    std::cout << "1. Room 12\n";
    std::cout << "2. Room 777\n";
    std::cout << "3. Room 43\n";
    std::cout << "4. Room 13\n";
    std::cout << "5. Room 52\n";

    std::cout << ": ";
    std::cin >> rooms;

    std::cout << "\n";

    //Executes when all conditions are met
    if (rooms >= 1 && rooms <= 5) {
        goodChoice();
    }

    //recalls function if invalid iput is entered
    else {

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');
        std::cout << "Invalid input. Please enter valid input\n\n";
        
        pickRoom();
    }
}

//Prompts user to pick a meal
void option() {

    int choseMeal;

    std::vector<std::string> meals = {"Pizza", "Nshima", "Burger", "Sharwama"};

        std::cout << "We have the following meals: \n";

        std::cout << "1. Pizza\n";
        std::cout << "2. Nshima\n";
        std::cout << "3. Burger\n";
        std::cout << "4. Sharwama\n\n";

        std::cout << "What would you like to eat?\n";

        std::cout << ": ";
        std::cin >> choseMeal;

        std::cout << "\n";

    if(choseMeal == 1) {
        std::cout << "Your " << meals[0] << " is getting prepared ;-)\n\n";
    }
   else if (choseMeal == 2) {
        std::cout << "Your " << meals[1] << " is getting prepared ;-)\n\n";
    }
   else if (choseMeal == 3) {
        std::cout << "Your " << meals[2] << " is getting prepared ;-)\n\n";
    }
   else if (choseMeal == 4) {
        std::cout << "Your " << meals[3] << " is getting prepared ;-)\n\n";
    }

    //recalls function if invalid iput is entered
    else {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n'); 
        std::cout << "Invalid input. Please enter valid input\n\n";

        option();
    }
}

//Prompts users with option to change their decision
void option2() {
    char changemind;

    std::cout << "Don't worry, it's on the house ;-)\n\n";
    std::cout << "Would you like to change your mind? y/n\n";
    std::cout << ": ";

    std::cin >> changemind;

    std::cout << "\n";

    if(changemind == 'y' || changemind == 'Y'){

        option();
    } 
    else if (changemind == 'n' || changemind == 'N') {

        std::cout << "Maybe some other time :-)\n\n";
    
    } 

    //recalls function if invalid iput is entered
    else {
        std::cin.clear(); 
        std::cin.ignore(INT_MAX, '\n'); 
        std::cout << "Invalid input. Please enter valid input\n\n";

        option2();
    }
} 

//Asks users if they would like a meal
void meal() {
    char food;

    std::cout << "Would you like to order any food while you wait? y/n\n";
    std::cout << ": ";

    std::cin >> food;
    std::cout << "\n";
 
   if (food == 'y' || food == 'Y') {

        option();

    }
    else if(food == 'n' || food == 'N') {

        option2();
    }

    //recalls function if invalid iput is entered
    else {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n'); 
        std::cout << "Invalid input. Please try again\n\n";

        meal();
    }
    
}

//Prompts user to complete room booking
void charge() {

    client new1;

    std::cout << "How many nights do you wish to stay at Cohen Hotel? ";
    std::cin >> new1.stay;
    std::cout << " \n";

    std::cout << "We've reserved your room for " << new1.stay << " night(s).\n\n"; 

    std::cout << "How much do you have in your account? ";
    std::cin >> new1.account;
    std::cout << " \n";

    char proceed;

    std::cout << "Hotel Cohen charges $300 per night. Would you like to complete your room booking for " << new1.stay << " night(s)? y/n \n";

    std::cout << ": ";

    std::cin >> proceed;

    std::cout << "\n";

    //Checks if user has enough funds to book room
    if(proceed == 'y' && new1.account >= 300 * new1.stay) {

        std::cout << "Thank you for completing your booking. Your room is ready now! \n";
        std::cout << "Your new balance is: "; 

        new1.deduct();

        std::cout << " dollar(s)\n\n";

    } 
    else if (proceed == 'y' && new1.account < 300 * new1.stay) {
        std::cout << "Insufficient funds. Please top up balance and try again.\n\n";
        charge();
    }

    //Executes when users change their mind
    else if (proceed == 'n' || proceed == 'N') {

        char changemind;

        std::cout << "Are you sure you want to quit? y/n\n";
        std::cout << ": ";

        std::cin >> changemind;

        std::cout << "\n";

        if(changemind == 'y' || changemind == 'Y'){

            std::cout << "Sad to see you leave. Please call again ;-)\n\n";
            exit(0);
        } 
        else if (changemind == 'n' || changemind == 'N') {
            charge();
        } 
    } 

    //recalls function if invalid iput is entered
    else {
        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n'); 
        std::cout << "Invalid input. Please try again\n\n";

        charge();
    }
    }
