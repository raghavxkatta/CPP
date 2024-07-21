#include<iostream>
using namespace std;

class book{
public:
string author;
string title;
int pages;
book(){
    title="No title";
    author="No author";
    pages=0;
}
book(string aTitle, string aAuthor, int aPages){
title=aTitle;
author= aAuthor;
pages= aPages;
}};
int main(){
    book Book1("Harry Potter","JK Rowling", 576);
    book Book2("Lord of the Rings","Toklein", 876);
    book Book3("EPIC SHIT DONE","Ankur Warikoo ", 76);
cout<<Book3.pages;
 return 0;
}