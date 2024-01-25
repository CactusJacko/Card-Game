#include "Deck.h"
#include "Card.h" 
#include <stack>
#include <String>
#include <queue>
#include <vector>



// Contains all 52 cards, stores them in a vector



Deck::Deck(int DeckShuffler) {
	//Change to a random card generator 
	//CardLayout.push(4);
	//CardLayout.push(7);
	//CardLayout.push(8);
	//CardLayout.push(2);
	//CardLayout.push(1);
	//CardLayout.push(6);
	//CardLayout.push(3);
	//CardLayout.push(11);

	
}

//Looks at the top card 
//int Deck::SeeTopCard() {
	//return CardLayout.front();
//}

//Removes the top card from the pile
//int Deck::LossOfTopCard() {
//	int TempCard = CardLayout.front();
//	CardLayout.pop();
//	return TempCard;
//}




void Deck::makeDeck() {
    for (int i = 1; i <= 13; i++) {
        if (i == 1) {
            Card HEARTS("ACE", "HEARTS", false);
            Card DIAMONDS("ACE", "DIAMONDS", false);
            Card SPADES("ACE", "SPADES", false);
            Card CLUBS("ACE", "CLUBS", false);
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 11) {
            Card HEARTS("JACK", "HEARTS", false);
            Card DIAMONDS("JACK", "DIAMONDS", false);
            Card SPADES("JACK", "SPADES", false);
            Card CLUBS("JACK", "CLUBS", false);
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 12) {
            Card HEARTS("QUEEN", "HEARTS", false);
            Card DIAMONDS("QUEEN", "DIAMONDS", false);
            Card SPADES("QUEEN", "SPADES", false);
            Card CLUBS("QUEEN", "CLUBS", false);
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 13) {
            Card HEARTS("KING", "HEARTS", false);
            Card DIAMONDS("KING", "DIAMONDS", false);
            Card SPADES("KING", "SPADES", false);
            Card CLUBS("KING", "CLUBS", false);
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else {
            Card HEARTS(to_string(i), "HEARTS", false);
            Card DIAMONDS(to_string(i), "DIAMONDS", false);
            Card SPADES(to_string(i), "SPADES", false);
            Card CLUBS(to_string(i), "CLUBS", false);
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }


    }
  //  return cardsDeck;
}

