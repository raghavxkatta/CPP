#include<iostream>
using namespace std;
int main()
{
double num1,num2,result=0;
char op;
cout<<"Enter the value of first number\n";
cin>>num1;
cout<<"Enter the operator\n";
cin>>op;
cout<<"Enter the value of second number\n";
cin>>num2;
if (op=='+'){
    result= num1+num2;
}
else if (op=='-'){
    result= num1-num2;
}
else if (op=='*'){
result= num1*num2;
}
else if (op=='/'){
result= num1/num2;
}
else{
    cout<<"invalid operator";
}
cout<<result;
return 0;
}