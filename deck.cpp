// Author: Nadhirah Michael-Ho
// CECS 325-02 Prog 1
// Due 02/13/2025
#include <iostream> // library for cin,cout
#include <string>
using namespace std; // allows shortcuts
#include <cstdlib> // library for header file
#include <ctime> //provides functions for working with date and time
#include "deck.h"
/**
 * Constructs a deck of 52 playing cards, ordered by suit and rank.
 */
Deck::Deck() {
    char suits[] = {'C', 'D', 'H', 'S'};
    string ranks[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

    int index = 0;
    for (char suit : suits) {
        for (string rank : ranks) {
            cards[index++] = Card(rank, suit);
        }
    }
    topCard = 0;  // Start dealing from the top
}

/**
 * Deals one card from the deck.
 * return the next available card, or an empty card if the deck is exhausted.
 */
Card Deck::deal() {
    if (topCard < 52) {
        return cards[topCard++];
    } else {
        return Card();  // Return an empty card if deck is exhausted
    }
}

/**
 * Displays all 52 cards in the deck.
 */
void Deck::displayDeck() {
    for (int i = 0; i < 52; i++) {
        cards[i].displayCard();
        cout << ((i + 1) % 13 == 0 ? "\n" : ", ");
    }
    cout << endl;
}

/**
 * Shuffles the deck of cards
 */
void Deck::shuffle() {
    srand(time(0));
    for (int i = 0; i < 52; i++) {
        int j = rand() % 52;
        swap(cards[i], cards[j]);
    }
}
