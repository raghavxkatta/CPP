#include<iostream>
using namespace std;



string getDayNum(int DayNum){
string dayName;
switch (DayNum){
case 0:
dayName="Monday";
break;
case 1:
dayName="Tuesday";
break;
case 2:
dayName="Wednesday";
break;
case 3:
dayName="Thursday";
break;
case 4:
dayName="Friday";
break;
case 5:
dayName="Saturday";
break;
case 6:
dayName="Sunday";
break;
default:
cout<<"error";
}
return dayName;
}

int main(){
    cout<<getDayNum(3);
}
