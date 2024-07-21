#include<iostream>
using namespace std;

int main()
{
 bool isMale;
bool isTall;
cin>>isMale>>isTall;

if(isMale&&isTall){
    cout<<"you're a tall male";
}
else if(isMale&&!isTall){
    cout<<"you're a short male";
}
else if(!isMale&&isTall){
    cout<<"you're tall but not a male";
}

else{
    cout<<"you're not a male and not tall";
}
return 0;
}