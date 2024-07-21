#include<iostream>
using namespace std;
void sayHi(string name, int age){
cout<<"your name is "<<name<<" and your age is "<<age;
}
int main()
{
sayHi("Mike",9);
sayHi("John",19);
sayHi("Kane",99);
return 0;
}