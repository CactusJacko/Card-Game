#pragma once
#include <string>
#include <vector>
using namespace std;


class Player
{
private:
	vector <int> hand;
	

	
public:
	Player(string name, int inventory);

	void AddHand(int NewCard);
	
	void Total();

	
};

