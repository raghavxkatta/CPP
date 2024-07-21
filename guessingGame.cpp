#include <iostream>
using namespace std;

int main() {
    int secretNum = 7, guess = -1; // Initialize guess to a value different from secretNum

    while (secretNum != guess) {
        cout << "Enter your guess: ";
        cin >> guess;
    }

    cout << "You guessed it right, the secret number was " << secretNum << endl;
    return 0;
}
