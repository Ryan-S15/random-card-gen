#include <iostream>
#include <vector>
using namespace std;

int main() {
    // random seed
	srand(time(0));

    // hands
	vector<int> hand1;
	vector<string> suitHand1;
	vector<int> hand2;
	vector<string> suitHand2;
	vector<int> hand3;
	vector<string> suitHand3;

    // values
	int k = 0;
	int k2 = 0;
	int k3 = 0;
	char loop;

    // all cardplayeds
    int userCard;
	int cardPlayedUser;
	int cardPlayedBot1;
	int cardPlayedBot2;
    
    // user hand
    cout << "Your Hand\n";
    cout << "=======================\n";
	while (k < 6) {
		int randSuit = rand() % 4;
		int randVal = rand() % 14;
		string suit;

		cout << "Card [" << k << "]: " << randVal;
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

		hand1.push_back(randVal);
		suitHand1.push_back(suit);
	}
	
	// user input output
	cout << "=======================\n";
	cout << "Please select a card: ";
	cin >> cardPlayedUser;
	cout << "=======================\n";
	cout << "You played the " << hand1.at(cardPlayedUser) << suitHand1.at(cardPlayedUser);
	userCard = hand1.at(cardPlayedUser);
	cout << "=======================\n";
	
	
	// bot 1 hand
		while (k2 < 6) {
		int randSuit2 = rand() % 4;
		int randVal2 = rand() % 14;
		string suit2;

		if (randSuit2 == 0) {
			suit2 = " of diamonds \n";
		}
		if (randSuit2 == 1) {
			suit2 = " of hearts \n";
		}
		if (randSuit2 == 2) {
			suit2 = " of clubs \n";
		}
		if (randSuit2 == 3) {
			suit2 = " of spades \n";
		}
		k2++;

		hand2.push_back(randVal2);
		suitHand2.push_back(suit2);
	}
	
	// bot 1 actions
	if (hand2.at(0) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(0) << suitHand2.at(0);
	    cardPlayedBot1 = hand2.at(0);
	} else if (hand2.at(1) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(1) << suitHand2.at(1);
	    cardPlayedBot1 = hand2.at(1);
	} else if (hand2.at(2) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(2) << suitHand2.at(2);
	    cardPlayedBot1 = hand2.at(2);
	} else if (hand2.at(3) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(3) << suitHand2.at(3);
	    cardPlayedBot1 = hand2.at(3);
	} else if (hand2.at(4) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(4) << suitHand2.at(4);
	    cardPlayedBot1 = hand2.at(4);
	} else if (hand2.at(5) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 1 played the " << hand2.at(5) << suitHand2.at(5);
	    cardPlayedBot1 = hand2.at(5);
	} else {
	    cout << "Bot 1 played the " << hand2.front() << suitHand2.front();
	    cardPlayedBot1 = hand2.front();
	}
    cout << "=======================\n";

	// bot 2 hand
		while (k3 < 6) {
		int randSuit3 = rand() % 4;
		int randVal3 = rand() % 14;
		string suit3;

		if (randSuit3 == 0) {
			suit3 = " of diamonds \n";
		}
		if (randSuit3 == 1) {
			suit3 = " of hearts \n";
		}
		if (randSuit3 == 2) {
			suit3 = " of clubs \n";
		}
		if (randSuit3 == 3) {
			suit3 = " of spades \n";
		}
		k3++;

		hand3.push_back(randVal3);
		suitHand3.push_back(suit3);
	}
	
	// bot 2 actions
	if (hand2.at(0) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(0) << suitHand3.at(0);
	    cardPlayedBot2 = hand3.at(0);
	} else if (hand3.at(1) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(1) << suitHand3.at(1);
	    cardPlayedBot2 = hand3.at(1);
	} else if (hand3.at(2) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(2) << suitHand3.at(2);
	    cardPlayedBot2 = hand3.at(2);
	} else if (hand3.at(3) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(3) << suitHand3.at(3);
	    cardPlayedBot2 = hand3.at(3);
	} else if (hand3.at(4) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(4) << suitHand3.at(4);
	    cardPlayedBot2 = hand3.at(4);
	} else if (hand3.at(5) > hand1.at(cardPlayedUser)) {
	    cout << "Bot 2 played the " << hand3.at(5) << suitHand3.at(5);
	    cardPlayedBot2 = hand3.at(5);
	} else {
	    cout << "Bot 2 played the " << hand3.front() << suitHand2.front();
	    cardPlayedBot2 = hand3.at(0);
	}
    cout << "=======================\n";	

    // win screen
    if (userCard > cardPlayedBot1 && userCard > cardPlayedBot2) {
        cout << "You win! Go to bed!\n";
    } else if (userCard > cardPlayedBot1 && userCard < cardPlayedBot2) {
        cout << "Bot 2 won! Go to bed!\n";
    } else if (userCard < cardPlayedBot1 && userCard > cardPlayedBot2) {
        cout << "Bot 1 won! Go to bed!\n";
    } else if (userCard < cardPlayedBot1 && userCard < cardPlayedBot2) {
        if (cardPlayedBot1 > cardPlayedBot2) {
            cout << "Bot 1 won! Go to bed!\n";
        } else if (cardPlayedBot1 < cardPlayedBot2) {
            cout << "Bot 2 won! Go to bed!\n";
        }
    }
}
