#include <iostream>
#include <vector>
using namespace std;

int main() {
	srand(time(0));
	vector<int> hand;
	vector<string> suitHand;
	int k = 0;
	int cardPlayedUser;

	while (k < 6) {
		int randSuit = rand() % 4;
		int randVal = rand() % 14;
		string suit;

		cout << randVal;
		if (randSuit == 0) {
			cout << " of diamonds \n";
			suit = " of diamonds \n";
		}
		if (randSuit == 1) {
			cout << " of hearts \n";
			suit = " of hearts \n";
		}
		if (randSuit == 2) {
			cout << " of clubs \n";
			suit = " of clubs \n";
		}
		if (randSuit == 3) {
			cout << " of spades \n";
			suit = " of spades \n";
		}
		k++;

		hand.push_back(randVal);
		suitHand.push_back(suit);
	}
	for (int i = 0; i < hand.size(); i++) {
		cout << hand[i] << "\n";
	}
	cin >> cardPlayedUser;
	cout << hand.at(cardPlayedUser) << suitHand.at(cardPlayedUser);
}
