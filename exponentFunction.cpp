#include<iostream>
using namespace std;
int power(int baseNum, int powerNum)
{
    int answer=1;
for(int i=1;i<=powerNum;i++){
answer= answer*baseNum;
} 
return answer;
}
int main(){
cout<<power(2,5);
 return 0;
}