#include <iostream>
using namespace std;

int main() {
    srand(time(0));

    int k = 0;
    
    while (k < 6) {
    	int randSuit = rand() % 4;    
    	int randVal = rand() % 14;
        string suit;
        
        cout << randVal;
        if (randSuit == 0) {
            cout << " of diamonds ";
        }
        if (randSuit == 1) {
            cout << " of hearts ";
        }
        if (randSuit == 2) {
            cout << " of clubs ";
        }
        if (randSuit == 3) {
            cout << " of spades ";
        }
        k++;
    }

}
