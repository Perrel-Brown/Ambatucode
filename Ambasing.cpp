#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get the computer's move
char getComputerMove() {
    int move = rand() % 3; // Generate a random number between 0 and 2
    if (move == 0) return 'r'; // Rock
    else if (move == 1) return 'p'; // Paper
    return 's'; // Scissors
}

// Function to get the player's move
char getPlayerMove() {
    char move;
    cout << "Enter your move (r for rock, p for paper, s for scissors): ";
    cin >> move;
    return move;
}

// Function to determine the winner
void determineWinner(char player, char computer) {
    if (player == computer) {
        cout << "It's a tie!" << endl;
    } else if ((player == 'R' && computer == 's') || 
               (player == 'P' && computer == 'r') || 
               (player == 'S' && computer == 'p')) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    char playerMove = getPlayerMove(); // Get player's move
    char computerMove = getComputerMove(); // Get computer's move

    cout << "You chose: " << playerMove << endl;
    cout << "Computer chose: " << computerMove << endl;

    determineWinner(playerMove, computerMove); // Determine the winner

    return 0;
}