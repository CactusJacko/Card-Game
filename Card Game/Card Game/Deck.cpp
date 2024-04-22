#include "Deck.h"
#include "Card.h" 
#include <stack>
#include <algorithm>
#include <iostream>
#include <random>
#include <iterator>
//#include <String>
//#include <queue>
#include <vector>
using namespace std;

//#include <cstdlib>



Deck::Deck() {
}


// Shuffles the cards randomly
void Deck::RandomNumberGen() {
    random_device rd;
    mt19937 g(rd());

    shuffle(cardsDeck.begin(), cardsDeck.end(), g);
   // copy(cardsDeck.begin(), cardsDeck.end(), ostream_iterator<string>(cout, ""));
}

//Removes the last card out of the vector 
void Deck::popdeck() {
    cardsDeck.pop_back();
}

//This returns the vector from private and makes it public
vector<Card> Deck::Getdeck(){
    return this->cardsDeck;
}


// Contains all 52 cards, stores them in a vector
void Deck::makeDeck() {
    for (int i = 1; i <= 13; i++) {
        if (i == 1) {
            Card HEARTS("ACE", "HEARTS");
            Card DIAMONDS("ACE", "DIAMONDS");
            Card SPADES("ACE", "SPADES");
            Card CLUBS("ACE", "CLUBS");
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 11) {
            Card HEARTS("JACK", "HEARTS");
            Card DIAMONDS("JACK", "DIAMONDS");
            Card SPADES("JACK", "SPADES");
            Card CLUBS("JACK", "CLUBS");
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 12) {
            Card HEARTS("QUEEN", "HEARTS");
            Card DIAMONDS("QUEEN", "DIAMONDS");
            Card SPADES("QUEEN", "SPADES");
            Card CLUBS("QUEEN", "CLUBS");
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else if (i == 13) {
            Card HEARTS("KING", "HEARTS");
            Card DIAMONDS("KING", "DIAMONDS");
            Card SPADES("KING", "SPADES");
            Card CLUBS("KING", "CLUBS");
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }
        else {
            Card HEARTS(to_string(i), "HEARTS");
            Card DIAMONDS(to_string(i), "DIAMONDS");
            Card SPADES(to_string(i), "SPADES");
            Card CLUBS(to_string(i), "CLUBS");
            this->cardsDeck.push_back(HEARTS);
            this->cardsDeck.push_back(DIAMONDS);
            this->cardsDeck.push_back(SPADES);
            this->cardsDeck.push_back(CLUBS);
        }


    }
  //  return cardsDeck;
}





//NEEDS A way of getting Deck size
int Deck::DeckSize() {
   return cardsDeck.size();
}





//NEEDS a way of Adding cards to the deck
void Deck::DeckAdd(Card NewCard) {
    cardsDeck.push_back(NewCard);
}


Card Deck::GetCard(int index){

    return cardsDeck[index];
}






//PUT IN HIT OR MISS


//THINGS I NEED TO DO:
// 1.NEEDS TO BE IN HIT OR MISS

//2. NEEDS TO HAVE OWN THING TO GET RID OF CURRENT CARD




   // Once cards deck size = 0 
   // Shuffle non hit cards 
   // for loop size of non hit cards gets put back into cards deck.
   //Once hit cards = 52, youve won
   //
   // YOU NEED TO HIT 1 CARD A ROUND, to contuine.




//Needs to have the deck size value at all times so i can iterate through that value of it.
//Need to make new card decks every time the cards in deck have been hit before i can make a new card deck. 
//The hit deck then needs to be wiped 



//HitHand.push_back(inDeck.Getdeck().back());



//NEED:
//HIT DECK
//NOT HIT DECK
// 
