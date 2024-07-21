#include<iostream>
using namespace std;

class movie{
    private:
    string rating;//rating private kardi to add condition
public:
string title;
string director;

movie(string aTitle,string aDirector,string aRating){
    title=aTitle;
    director=aDirector;
 setRating(aRating);
}
void setRating(string aRating){//method to set the rating with conditions
    if(aRating=="R"||aRating=="PG"||aRating=="PG-13"||aRating=="A"||aRating=="NR"){
    rating=aRating;
}else{
    rating="NR";
}
}
string getRating(){//rating waapis karne ka method since it was private and therefore impossible to access
    return rating;
}
};

int main(){
 movie avengers("The Avengers","Joss Wheadon","R");
avengers.setRating("Dog");
cout<<avengers.getRating();
}