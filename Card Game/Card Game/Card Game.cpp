//MAIN FILE

#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"
#include "BlackJack.h"
#include "HitAndMiss.h"
#include <cstdlib>
using namespace std;


int main()
{

	HitAndMiss HitAndMissChoice = HitAndMiss();
	BlackJack BlackJackChoice = BlackJack();

	//whole menue
	bool gamechosen = false;
	while (gamechosen == false) {
		string MainMenuScreen = R"(
		MAIN MENU

PLEASE CHOOSE A GAME:
SELECT EITHER 1 OR 2

1 - BLACKJACK

2 - HIT OR MISS

)";
		cout << MainMenuScreen << endl;
		string choice;
		cin >> choice;

		//BlackJack menu
		if (choice == "1") {
			cout << "GAME SELECTED BLACKJACK" << endl;
			cout << "Would you like to read the rules? Y or N" << endl;
			string RulesBlackJack;
			cin >> RulesBlackJack;
			if (RulesBlackJack == "Y") {
				BlackJackChoice.BlackJackRules();
			}

			else if (RulesBlackJack == "N") {
				gamechosen = true;
				BlackJackChoice.BlackJackGame();
			}

			else {
				cout << "returned to menu" << endl;
			}
		}

		//HITANDMISS menu
		if (choice == "2") {
			cout << "GAME SELECTED HIT OR MISS" << endl;
			cout << "Would you like to read the rules? Y or N" << endl;
			string RulesHITANDMISS;
			cin >> RulesHITANDMISS;
			if (RulesHITANDMISS == "Y") {
				HitAndMissChoice.HitAndMissRules();
			}

			else if (RulesHITANDMISS == "N") {
				gamechosen = true;
				HitAndMissChoice.HitAndMissGame();
			}

			else {
				cout << "returned to menu" << endl;
			}
		}



	}




	
}
