#include<iostream>
using namespace std;
 int getMax(int num1,int num2,int num3){
    int max= num1;
    if(num2>=num1&&num2>=num3){
        max=num2;
    }
    else if(num3>=num1&&num3>=num2){
        max=num3;
    }
    return max;
 }

int main()
{
int max=getMax(3,8,12);
cout<<max;
return 0;
}