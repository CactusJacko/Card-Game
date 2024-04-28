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
		cout << "MAIN MENU" << endl;
		cout << "PLEASE TYPE IN CAPS" << endl;
		cout << "which game do you want to play BLACKJACK OR HITANDMISS" << endl;
		string choice;
		cin >> choice;

		//BlackJack menu
		if (choice == "BLACKJACK") {
			cout << "Would you like to read the rules? YES or NO" << endl;
			string RulesBlackJack;
			cin >> RulesBlackJack;
			if (RulesBlackJack == "YES") {
				BlackJackChoice.BlackJackRules();
			}

			else if (RulesBlackJack == "NO") {
				gamechosen = true;
				BlackJackChoice.BlackJackGame();
			}

			else {
				cout << "returned to menu" << endl;
			}
		}

		//HITANDMISS menu
		if (choice == "HITANDMISS") {
			cout << "Would you like to read the rules? YES or NO" << endl;
			string RulesHITANDMISS;
			cin >> RulesHITANDMISS;
			if (RulesHITANDMISS == "YES") {
				HitAndMissChoice.HitAndMissRules();
			}

			else if (RulesHITANDMISS == "NO") {
				gamechosen = true;
				HitAndMissChoice.HitAndMissGame();
			}

			else {
				cout << "returned to menu" << endl;
			}
		}



	}




	
}
