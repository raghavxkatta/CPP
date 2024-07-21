    #include<iostream>
#include<cmath>
using namespace std;
int main()
{
    string colour,pluralNoun,celebrity;
    cout<<"Enter a colour\n";
    getline(cin,colour);
    cout<<"Enter a plural noun\n";
    getline(cin,pluralNoun);
    cout<<"Enter a celebrity\n?";
    getline(cin,celebrity);
    cout<<"Roses are" <<colour<<endl;
    cout<<pluralNoun << "are blue"<<endl;
    cout<<"I love "<<celebrity<<endl;

    return 0;
}