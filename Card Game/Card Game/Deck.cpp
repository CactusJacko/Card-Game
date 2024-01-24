#include "Deck.h"
#include "Card.h" 
#include <stack>
#include <String>
#include <queue>
#include <vector>



// Contains all 52 cards, stores them in a vector



Deck::Deck(int DeckShuffler) {
	//Change to a random card generator 
	CardLayout.push(4);
	CardLayout.push(7);
	CardLayout.push(8);
	CardLayout.push(2);
	CardLayout.push(1);
	CardLayout.push(6);
	CardLayout.push(3);
	CardLayout.push(11);

	
}

//Looks at the top card 
int Deck::SeeTopCard() {
	return CardLayout.front();
}

//Removes the top card from the pile
int Deck::LossOfTopCard() {
	int TempCard = CardLayout.front();
	CardLayout.pop();
	return TempCard;
}





void Deck::makeDeck() {
    for (int i = 1; i <= 13; i++) {
        if (i == 1) {
            Card h("ACE", "HEARTS", false);
            Card d("ACE", "DIAMOND", false);
            Card s("ACE", "S", false);
            Card c("ACE", "C", false);
            this->cardsDeck.push_back(h);
            this->cardsDeck.push_back(d);
            this->cardsDeck.push_back(s);
            this->cardsDeck.push_back(c);
        }
        else if (i == 11) {
            Card h("J", "H", false);
            Card d("J", "D", false);
            Card s("J", "S", false);
            Card c("J", "C", false);
            this->cardsDeck.push_back(h);
            this->cardsDeck.push_back(d);
            this->cardsDeck.push_back(s);
            this->cardsDeck.push_back(c);
        }
        else if (i == 12) {
            Card h("Q", "H", false);
            Card d("Q", "D", false);
            Card s("Q", "S", false);
            Card c("Q", "C", false);
            this->cardsDeck.push_back(h);
            this->cardsDeck.push_back(d);
            this->cardsDeck.push_back(s);
            this->cardsDeck.push_back(c);
        }
        else if (i == 13) {
            Card h("K", "H", false);
            Card d("K", "D", false);
            Card s("K", "S", false);
            Card c("K", "C", false);
            this->cardsDeck.push_back(h);
            this->cardsDeck.push_back(d);
            this->cardsDeck.push_back(s);
            this->cardsDeck.push_back(c);
        }
        else {
            Card h(to_string(i), "H", false);
            Card d(to_string(i), "D", false);
            Card s(to_string(i), "S", false);
            Card c(to_string(i), "C", false);
            this->cardsDeck.push_back(h);
            this->cardsDeck.push_back(d);
            this->cardsDeck.push_back(s);
            this->cardsDeck.push_back(c);
        }


    }
}

