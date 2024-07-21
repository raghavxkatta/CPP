#include<iostream>
#include<cmath>
using namespace std;
int main()

{
string name;
int age;
    cout<<"Hello!!! What is your name?\n";
    getline(cin,name);
    cout<<"How Old are you?\n";
    cin>>age;
    cout<<"Your name is "<<name<<" and you are "<<age<<" years old";
    return 0;
}
