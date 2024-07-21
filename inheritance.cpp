#include<iostream>
using namespace std;
class chef{//primary class
    public:
    void makeChicken(){
        cout<<"The chef can make chicken"<<endl;
    }
    void makeBurger(){
        cout<<"The chef can make burger"<<endl;

    }
    void makeDal(){
        cout<<"The chef can make dal"<<endl;
    }
     void specialDish(){
        cout<<"The chef can make Dal Makhani"<<endl;
    }
};
class italianChef:public chef{//This is sort of a sub class because it is inhertiting from the chef class
public:
void makePasta(){
    cout<<("The Italian chef can make Pasta");
}
void specialDish(){
    cout<<("The Italian chef can make Kadhai Paneer");
}
};


int main(){
    italianChef chef;
    chef.specialDish();
return 0;
}