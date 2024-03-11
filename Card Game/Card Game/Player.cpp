#include "Player.h"
#include "Deck.h"
#include "Card.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

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
    // counts the other cards in the vector but avoids the ACES
    for (Card c : playerHand) {
        if (c.rank != "ACE") {
            handtotal += c.value;
        }
    }

    //Decides the ACE value from the hand total above
    for (int M = 0; M < playerHand.size(); M++) {
        if (playerHand[M].rank == "ACE") {
            if (handtotal + 11 < 21) {
                playerHand[M].value = 11;
            }
            else {
                playerHand[M].value =1;
            }

        }

    }

    // counts the together now, includes ACES
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
    if (handtotal < 17) {
        cout << "DEALER TAKES A NEW CARD" << endl;
        cout << "DEALERS NEW DECK:" << endl;
        //Takes card from Card deck and puts it into a player hand vector
        playerHand.push_back(inDeck.Getdeck().back());

        //removes card from card deck
        inDeck.popdeck();


        handtotal = 0;
        for (Card c : playerHand) {
            handtotal += c.value;
        }

        
    }
}
/*
void Player::PlayerHIT(Deck& inDeck) {
    AddCard(inDeck);
    cout << "PLAYER HIT" << endl;
    cout << "PLAYER TAKES A NEW CARD" << endl;
    cout << "PLAYERS NEW DECK:" << endl;
    printdeck();

    if (handtotal >= 22) {
        cout << "YOU LOSE" << endl;
        cout << "PLAYER CARD TOTAL - " << handtotal << endl;
        cout << "YOU ARE BUST" << endl;
        cout << "\n" << endl;

        //Ask the user if they want to play again
        cout << "Want to play again Y/N" << endl;
        string PlayAgain;
        cin >> PlayAgain;

        if (PlayAgain == "Y") {
           // A = true;
            cout << "\n" << endl;
            return A = true;
        }

        else {
            A = false;
        }
    }
}

*/





