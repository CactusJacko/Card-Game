#include "Card.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

//Card class is for singular instances of cards and not mutiple cards

Card::Card(string rank, string suit) {

	this->suit = suit;
	this->rank = rank;

	/*
	if (rank == "ACE") {
		//if (Player::handtotal <= 10) {
			//value = 11;
		//}

		//else {
		//	value = 1;
		//}
		value = 11;
	}

	else if (rank == "KING") {
		value = 10;
	}

	else if (rank == "QUEEN") {
		value = 10;
	}

	else if (rank == "JACK") {
		value = 10;
	}

	else {
		//coverts string to interger.
		value = stoi(rank);
	}
	*/

	value = stoi(rank);
}

int Card::getValue() {
	return value;
}

//black jack values
int Card::getBlackjackValue() {
	if (rank == "ACE") {
		//if (Player::handtotal <= 10) {
			//value = 11;
		//}

		//else {
		//	value = 1;
		//}
		return 11;
	}

	else if (rank == "KING") {
		return 10;
	}

	else if (rank == "QUEEN") {
		return 10;
	}

	else if (rank == "JACK") {
		return 10;
	}

	else {
		//coverts string to interger.
		return value;
	}
}