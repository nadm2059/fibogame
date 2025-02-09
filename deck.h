// Author: Nadhirah Michael-Ho
// CECS 325-02 Prog 1
// Due 02/13/2025
#include <iostream> // library for cin,cout
#include <string>
using namespace std; // allows shortcuts
#ifndef DECK_H
#define DECK_H

#include "card.h"

/**
 * file deck.h
 * Defines the Deck class, which represents a deck of playing cards.
 *
 * The Deck class contains an array of 52 Card objects and provides
 * methods for dealing, shuffling, and displaying the deck.
 */

class Deck {
private:
    Card cards[52];  ///< Array to store the 52 cards in the deck.
    int topCard;     ///< Index of the next card to be dealt.

public:
    /**
     * Constructs a standard 52-card deck in order.
     */
    Deck();

    /**
     * Deals a single card from the top of the deck.
     * return The dealt card.
     */
    Card deal();

    /**
     * Displays all cards in the deck.
     */
    void displayDeck();

    /**
     * Shuffles the deck using a randomization algorithm.
     */
    void shuffle();
};

#endif
