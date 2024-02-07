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



Deck::Deck(int DeckShuffler) {
}


// Shuffles the cards randomly
void Deck::RandomNumberGen() {
    random_device rd;
    mt19937 g(rd());

    shuffle(cardsDeck.begin(), cardsDeck.end(), g);
   // copy(cardsDeck.begin(), cardsDeck.end(), ostream_iterator<string>(cout, ""));
}


void Deck::popdeck() {
    cardsDeck.pop_back();
}

vector<Card> Deck::Getdeck(){
    return this->cardsDeck;
}


//cout << cardsDeck[0].rank << " OF " << cardsDeck[0].suit << " value = " << cardsDeck[0].value << endl;
//cout << cardsDeck[1].rank << " OF " << cardsDeck[1].suit << " value = " << cardsDeck[1].value << endl;
//int Total = cardsDeck[0].value + cardsDeck[1].value;
//cout << Total << endl;
//if (Total >= 21) {
   // cout << "Bust" << endl;
//}

//else {
   // cout << "Would you like to hit?" << endl;
   // string hit;
   // cin >> hit;
   // if (hit == "hit") {
   //     cout << cardsDeck[2].rank << " OF " << cardsDeck[2].suit << " value = " << cardsDeck[2].value << endl;
   //     int NewTotal = Total + cardsDeck[2].value;
   //     cout << NewTotal << endl;
  //  }

   // else {
    //    cout << "Your total is " << Total << endl;
   // }
//}

//}



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

