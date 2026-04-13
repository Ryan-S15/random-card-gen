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

	// cards cards cards
	int card;
	int cardB2;
	int cardB3;

	// user hand
	cout << "Your Hand\n";
	cout << "=======================\n";
	while (k < 6) {
		int randSuit = rand() % 4;
		int randVal = rand() % 13;
		string suit;

		card = randVal + 2;

		if (card < 11) {
			cout << "Card [" << k << "]: " << card;
		} else if (card == 11) {
			cout << "Card [" << k << "]: Jack";
		} else if (card == 12) {
			cout << "Card [" << k << "]: Queen";
		} else if (card == 13) {
			cout << "Card [" << k << "]: King";
		} else if (card == 14) {
			cout << "Card [" << k << "]: Ace";
		}
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

		hand1.push_back(card);
		suitHand1.push_back(suit);
	}

	// user input output
	cout << "=======================\n";
	cout << "Please select a card: ";
	cin >> cardPlayedUser;
	cout << "=======================\n";
	if (hand1.at(cardPlayedUser) < 11) {
		cout << "You played the " << hand1.at(cardPlayedUser) << suitHand1.at(cardPlayedUser);
	} else if (hand1.at(cardPlayedUser) == 11) {
		cout << "You played the Jack" << suitHand1.at(cardPlayedUser);
	} else if (hand1.at(cardPlayedUser) == 12) {
		cout << "You played the Queen" << suitHand1.at(cardPlayedUser);	    
	} else if (hand1.at(cardPlayedUser) == 13) {
		cout << "You played the King" << suitHand1.at(cardPlayedUser);	    
	} else if (hand1.at(cardPlayedUser) == 14) {
		cout << "You played the Ace" << suitHand1.at(cardPlayedUser);	    
	}
	userCard = hand1.at(cardPlayedUser);
	cout << "=======================\n";


	// bot 1 hand
	while (k2 < 6) {
		int randSuit2 = rand() % 4;
		int randVal2 = rand() % 13;
		string suit2;

		cardB2 = randVal2 + 2;

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

		hand2.push_back(cardB2);
		suitHand2.push_back(suit2);
	}

	// bot 1 actions
	if (hand2.at(0) > hand1.at(cardPlayedUser)) {
        if (hand2.at(0) < 11) {
		    cout << "Bot 1 played the " << hand2.at(0) << suitHand2.at(0);            
        } else if (hand2.at(0) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(0);            
        } else if (hand2.at(0) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(0);            
        } else if (hand2.at(0) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(0);            
        } else if (hand2.at(0) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(0);            
        }
		cardPlayedBot1 = hand2.at(0);
	} else if (hand2.at(1) > hand1.at(cardPlayedUser)) {
        if (hand2.at(1) < 11) {
		    cout << "Bot 1 played the " << hand2.at(1) << suitHand2.at(1);            
        } else if (hand2.at(1) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(1);            
        } else if (hand2.at(1) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(1);            
        } else if (hand2.at(1) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(1);            
        } else if (hand2.at(1) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(1);            
        }
        cardPlayedBot1 = hand2.at(1);
	} else if (hand2.at(2) > hand1.at(cardPlayedUser)) {
        if (hand2.at(2) < 11) {
		    cout << "Bot 1 played the " << hand2.at(2) << suitHand2.at(2);            
        } else if (hand2.at(2) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(2);            
        } else if (hand2.at(2) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(2);            
        } else if (hand2.at(2) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(2);            
        } else if (hand2.at(2) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(2);            
        }
		cardPlayedBot1 = hand2.at(2);
	} else if (hand2.at(3) > hand1.at(cardPlayedUser)) {
        if (hand2.at(3) < 11) {
		    cout << "Bot 1 played the " << hand2.at(3) << suitHand2.at(3);            
        } else if (hand2.at(3) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(3);            
        } else if (hand2.at(3) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(3);            
        } else if (hand2.at(3) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(3);            
        } else if (hand2.at(3) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(3);            
        }
		cardPlayedBot1 = hand2.at(3);
	} else if (hand2.at(4) > hand1.at(cardPlayedUser)) {
        if (hand2.at(4) < 11) {
		    cout << "Bot 1 played the " << hand2.at(4) << suitHand2.at(4);            
        } else if (hand2.at(4) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(4);            
        } else if (hand2.at(4) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(4);            
        } else if (hand2.at(4) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(4);            
        } else if (hand2.at(4) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(4);            
        }
		cardPlayedBot1 = hand2.at(4);
	} else if (hand2.at(5) > hand1.at(cardPlayedUser)) {
        if (hand2.at(5) < 11) {
		    cout << "Bot 1 played the " << hand2.at(5) << suitHand2.at(5);            
        } else if (hand2.at(5) == 11) {
		    cout << "Bot 1 played the Jack" << suitHand2.at(5);            
        } else if (hand2.at(5) == 12) {
		    cout << "Bot 1 played the Queen" << suitHand2.at(5);            
        } else if (hand2.at(5) == 13) {
		    cout << "Bot 1 played the King" << suitHand2.at(5);            
        } else if (hand2.at(5) == 14) {
		    cout << "Bot 1 played the Ace" << suitHand2.at(5);            
        }
		cardPlayedBot1 = hand2.at(5);
	} else {
		cout << "Bot 1 played the " << hand2.front() << suitHand2.front();
		cardPlayedBot1 = hand2.front();
	}
	cout << "=======================\n";

	// bot 2 hand
	while (k3 < 6) {
		int randSuit3 = rand() % 4;
		int randVal3 = rand() % 13;
		string suit3;

		cardB3 = randVal3 + 2;

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

		hand3.push_back(cardB3);
		suitHand3.push_back(suit3);
	}

	// bot 2 actions
	if (hand3.at(0) > hand1.at(cardPlayedUser)) {
        if (hand3.at(0) < 11) {
            cout << "Bot 2 played the " << hand3.at(0) << suitHand3.at(0);
        } else if (hand3.at(0) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(0);
        } else if (hand3.at(0) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(0);
        } else if (hand3.at(0) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(0);
        } else if (hand3.at(0) == 14) {
            cout << "Bot 2 played the Ace" << suitHand3.at(0);
        }
		cardPlayedBot2 = hand3.at(0);
	} else if (hand3.at(1) > hand1.at(cardPlayedUser)) {
        if (hand3.at(1) < 11) {
            cout << "Bot 2 played the " << hand3.at(1) << suitHand3.at(1);
        } else if (hand3.at(1) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(1);
        } else if (hand3.at(1) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(1);
        } else if (hand3.at(1) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(1);
        } else if (hand3.at(1) == 14) {
            cout << "Bot 2 played the Ace" << suitHand3.at(1);
        }
		cardPlayedBot2 = hand3.at(1);
	} else if (hand3.at(2) > hand1.at(cardPlayedUser)) {
        if (hand3.at(2) < 11) {
            cout << "Bot 2 played the " << hand3.at(2) << suitHand3.at(2);
        } else if (hand3.at(2) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(2);
        } else if (hand3.at(2) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(2);
        } else if (hand3.at(2) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(2);
        } else if (hand3.at(2) == 14) {
            cout << "Bot 2 played the Ace" << suitHand3.at(2);
        }
		cardPlayedBot2 = hand3.at(2);
	} else if (hand3.at(3) > hand1.at(cardPlayedUser)) {
        if (hand3.at(3) < 11) {
            cout << "Bot 2 played the " << hand3.at(3) << suitHand3.at(3);
        } else if (hand3.at(3) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(3);
        } else if (hand3.at(3) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(3);
        } else if (hand3.at(3) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(3);
        } else if (hand3.at(3) == 11) {
            cout << "Bot 2 played the Ace" << suitHand3.at(3);
        }
		cardPlayedBot2 = hand3.at(3);
	} else if (hand3.at(4) > hand1.at(cardPlayedUser)) {
        if (hand3.at(4) < 11) {
            cout << "Bot 2 played the " << hand3.at(4) << suitHand3.at(4);
        } else if (hand3.at(4) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(4);
        } else if (hand3.at(4) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(4);
        } else if (hand3.at(4) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(4);
        } else if (hand3.at(4) == 11) {
            cout << "Bot 2 played the Ace" << suitHand3.at(4);
        }
		cardPlayedBot2 = hand3.at(4);
	} else if (hand3.at(5) > hand1.at(cardPlayedUser)) {
        if (hand3.at(5) < 11) {
            cout << "Bot 2 played the " << hand3.at(5) << suitHand3.at(5);
        } else if (hand3.at(5) == 11) {
            cout << "Bot 2 played the Jack" << suitHand3.at(5);
        } else if (hand3.at(5) == 12) {
            cout << "Bot 2 played the Queen" << suitHand3.at(5);
        } else if (hand3.at(5) == 13) {
            cout << "Bot 2 played the King" << suitHand3.at(5);
        } else if (hand3.at(5) == 11) {
            cout << "Bot 2 played the Ace" << suitHand3.at(5);
        }
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
