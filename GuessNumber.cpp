// Eli Gatchalian
// p2.cpp
// January 27, 2014
// Purpose: The purpose of this program is to play a guessing game with the
//  user if he or she so decides to play.
// Input: The user will input whether or not s/he wants to play the game. If
//  they decide to, they will input as many guesses needed until they guess the
//  correct number.
// Processing: If the user chooses to play the game, the program will ask the
//  user to guess what number it is thinking. The program will then run through
//  an if-statement to check if the guess is too high, too low, or correct.
//  Based on the guess, a message will output to the user.
// Output: The program will output messages telling the user if their guess was
//  too high, too low, or correct.
// Example: computer's number: 11, user's guess: 15, output: Too high!
//          computer's number: 11, user's guess: 10, output: Too low!
//          computer's number: 11, user's guess: 11, output: Correct!

#include <cctype>
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

const char YES = 'y';
const int MAX = 50;
const int MIN = 0;

int main() {

    char playAgain;
    int computersNumber, usersGuess;
    
    srand(time(0));
    computersNumber = rand() % ((MAX - MIN + 1) + MIN);
    
    cout << endl << endl << endl;
    cout << "Welcome to Eli's version of Guess the Number! In this game" << endl
    << "you will try to guess the number that the computer has chose from 0 to 50." << endl
    << "The main rule is that once you start, you cannot exit out of the game" << endl
    << "until you guess the correct number." << endl << endl << endl << endl;
    cout << "Would you like to play Guess the Number (y/n)? ";
    cin >> playAgain;
    cout << endl << endl << endl;

    while (tolower(playAgain) == YES){
        cout << "Please guess a number from 0 to 50: ";
        cin >> usersGuess;
        cout << endl << endl << endl;
        
        if (usersGuess < computersNumber){
            cout << "Your guess is too low, please try again." << endl << endl << endl;
        }else if (usersGuess > computersNumber){
            cout << "Your guess is too high, please try again." << endl << endl << endl;
        }else {
            cout << "Congratulations, you guessed the correct number! The number was "
            << computersNumber << "." << endl << endl << endl;
            cout << "Would you like to play again (y/n)? ";
            cin >> playAgain;
            cout << endl << endl << endl;
            computersNumber = rand() % ((MAX - MIN + 1) + MIN);
        }
    }
    
    cout << endl << endl << endl;
    cout << "Thank you for playing Eli's version of Guess the Number!" << endl << endl << endl;
    
    return 0;
}
