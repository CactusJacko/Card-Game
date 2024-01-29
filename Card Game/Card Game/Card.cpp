#include "Card.h"
#include <string>
#include <iostream>
using namespace std;

//Card class is for singular instances of cards and not mutiple cards

Card::Card(string rank, string suit) {

	this->suit = suit;
	this->rank = rank;


	if (rank == "ACE") {
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
}