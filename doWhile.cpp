#include <iostream>
#include <cstdio>
using namespace std;

int main() {
int secretNum=10, guessNum, limit=0;
bool outOfGuesses=false;
do {
    if(limit<3){
    cout<<"enter your Guess:";
    cin>>guessNum;
    limit++;
    }
    else{
        outOfGuesses=true;
    }
}
while(guessNum!=secretNum && !outOfGuesses);
if(!outOfGuesses){
cout<<"Congratulations!!!You found the guess num "<<secretNum;
}
else{
    cout<<"Sorry, you're out of guesses";
}
    return 0;
}