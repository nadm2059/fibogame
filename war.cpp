// Author: Nadhirah Michael-Ho
// CECS 325-02 Prog 1
// Due 02/13/2025
#include <iostream> // library for cin,cout
#include "deck.h"
#include <string>
using namespace std; // allows shortcuts
/**
 * file war.cpp
 * Main program for playing the One Card War game.
 *
 * The program creates a deck, asks for player names, displays and shuffles the deck,
 * then plays 26 rounds of the game, announcing winners and displaying final statistics.
 */

int main() {
    string player1, player2;
    Deck deck;

    // Prompt for player names
    cout << "Enter the name of the first player: ";
    cin >> player1;
    cout << "Enter the name of the second player: ";
    cin >> player2;

    // Display original deck
    cout << "\nOriginal Deck\n";
    deck.displayDeck();

    // Shuffle the deck
    deck.shuffle();

    // Display shuffled deck
    cout << "\nShuffled Deck\n";
    deck.displayDeck();

    int p1Wins = 0, p2Wins = 0, ties = 0;

    // Play 26 rounds
    for (int round = 1; round <= 26; round++) {
        cout << "\nGame " << round << "\n--------\n";

        // Deal cards
        Card card1 = deck.deal();
        Card card2 = deck.deal();

        cout << player1 << " => ";
        card1.displayCard();
        cout << endl;

        cout << player2 << " => ";
        card2.displayCard();
        cout << endl;

        // Determine winner
        int result = card1.compareCard(card2);
        if (result == 1) {
            cout << player1 << " => Winner\n";
            p1Wins++;
        } else if (result == -1) {
            cout << player2 << " => Winner\n";
            p2Wins++;
        } else {
            cout << "Tie game\n";
            ties++;
        }
    }

    // Display final statistics
    cout << "\n------Final Stats-------\n";
    cout << "       " << player1 << " vs. " << player2 << "\n";
    cout << "Wins   " << p1Wins << "        " << p2Wins << "\n";
    cout << "Losses " << p2Wins << "        " << p1Wins << "\n";
    cout << "Ties   " << ties << "         " << ties << "\n";

    return 0;
}



