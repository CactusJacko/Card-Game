#include <iostream>
#include <string>
#include "HitAndMiss.h"
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include <cstdlib>

using namespace std;

HitAndMiss::HitAndMiss() {};



void HitAndMiss::HitAndMissRules() {

	//Needs to explain the Hit and miss rules
	//Gives player the option to play Hit and miss Afterwards or go to main menu

}

void HitAndMiss::HitAndMissGame() {

    // Makes two card decks
    Deck cardsDeck = Deck();
    cardsDeck.makeDeck();
    Deck HitHand = Deck();


	 // Needs to iterate throughout 
    int CardDeckLoop = 0;
    int verbalrank = 1;
    bool Hit = false;
    int HowManyCardsHit = -1;





    //Loops throught the entire card deck
  //  for (int L = 1; L < cardsDeck.DeckSize(); L++) {

       

      //  cout << verbalrank << endl;
      //  cout << cardsDeck.GetCard(L).rank << "OF" << cardsDeck.GetCard(L).value << endl;

       // if (verbalrank == cardsDeck.GetCard(L).getValue()) {
       //     Hit = true;
       //     cout << cardsDeck.GetCard(L).rank << "OF" << cardsDeck.GetCard(L).value << endl;
       //     HitHand.DeckAdd(cardsDeck.Getdeck().back());
        //    cardsDeck.popdeck();
        //    int HitCardCount = +1;

       //     //Adds up to see how many cards have been hit 
       //     HowManyCardsHit = cardsDeck.DeckSize() - HitCardCount;


      //  }

      //  //verbal rank is reset.
       // verbalrank++;
       // if (verbalrank > 13) {
       //     verbalrank = 1;

           
       // }

        //restarts the loop over again 
       // if (cardsDeck.DeckSize() == L) {
       //     CardDeckLoop = +1;

      //  }



        //If a card isnt hit in the 2 loops - game is lost.
        /// Plays at begining of game
        if ( not Hit and CardDeckLoop == 2) {

            // Game lost

        }

        else {

            //think of ways to make this work
            while (HitHand.DeckSize() < 52) {

                //Main Game code
                if (not Hit and CardDeckLoop == 2) {

                    // Game lost

                }

                else {
                    //Loops throught the entire card deck
                    for (int L = 1; L < cardsDeck.DeckSize(); L++) {



                        cout << verbalrank << endl;
                        cout << cardsDeck.GetCard(L).rank << "OF" << cardsDeck.GetCard(L).value << endl;

                        if (verbalrank == cardsDeck.GetCard(L).getValue()) {
                            Hit = true;
                            cout << cardsDeck.GetCard(L).rank << "OF" << cardsDeck.GetCard(L).value << endl;
                            HitHand.DeckAdd(cardsDeck.Getdeck().back());
                            cardsDeck.popdeck();
                            int HitCardCount = +1;

                            //Adds up to see how many cards have been hit 
                            HowManyCardsHit = cardsDeck.DeckSize() - HitCardCount;


                        }

                        //verbal rank is reset.
                        verbalrank++;
                        if (verbalrank > 13) {
                            verbalrank = 1;


                        }

                        //restarts the loop over again 
                        if (cardsDeck.DeckSize() == L) {
                            CardDeckLoop = +1;

                        }



                      
                }
            }

        }

    }


    

//}



// I need to make a vector of hit cards when the hit cards are equal to 52 the player wins.