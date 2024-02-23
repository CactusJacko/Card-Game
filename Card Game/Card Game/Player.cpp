#include "Player.h"
#include "Deck.h"
#include "Card.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

//void Player::AddHand(int NewCard) {
//	hand.push_back(NewCard);
//}





Player::Player(string name, int inventory, bool IsBust) {
    handtotal = 0;
}

//Adds last card from the deck and adds it to the player hand, takes deck as paramater
void Player::AddCard(Deck & inDeck) {
   








    //Takes card from Card deck and puts it into a player hand vector
    playerHand.push_back(inDeck.Getdeck().back());
   
    //removes card from card deck
    inDeck.popdeck();


    handtotal = 0;
    // creates a loop and loop
    for (Card c : playerHand) {
        handtotal += c.value;
    }


    

}

void Player::printdeck() {
    for (int N = 0; N < playerHand.size(); N++) {
        cout << playerHand[N].rank << " OF " << playerHand[N].suit << endl;
    }
   
}

void Player::DealerHit(Deck& inDeck) {
    if (handtotal <= 16) {
        //Takes card from Card deck and puts it into a player hand vector
        playerHand.push_back(inDeck.Getdeck().back());

        //removes card from card deck
        inDeck.popdeck();
    }
}

void Player::HasACE() {
    for (int M = 0; M < playerHand.size(); M++) {
    if (playerHand[M].rank == "ACE" && handtotal == 21) {
       handtotal = 10;

    }
}


