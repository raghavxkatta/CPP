#include<iostream>
using namespace std;
class Book{
public:
string title;
string author;
int pages ;
Book(string name){
    cout<<"creating a new object"<<endl;
    }
};
int main(){
Book book1("Harry Potter");
book1.title="Harry Potter";
book1.author="JK Rowling";
book1.pages=576;

Book book2("Lord of the Rings");
book2.title="Lord of the Rings";
book2.author="Toklein";
book2.pages=300;

 return 0;
}