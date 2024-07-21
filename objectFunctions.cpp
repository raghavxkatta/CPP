#include<iostream>
using namespace std;
class gpa{
    public:
    string name;
    int year;
    float Gpa;
    gpa(string aName,int aYear,float aGpa){
        name=aName;
        year=aYear;
        Gpa=aGpa;
    }
    bool hasGPA(){
        if(Gpa>3.5){
            return true; 
        }
        else{
            return false;
        }
    }
};

int main(){
gpa student1("jignesh",2,2.9);
gpa student2("suresh",4,4.9);
cout<<student1.hasGPA();
 return 0;
}