#include<iostream>
using namespace std;
int main(){
int grid[4][2]={
    {1,2},{2,3},{3,4},{4,5}
};
for(int i=1;i<=4;i++){
    for(int j=1;j<=2;j++){
        cout<<grid[i][j];
    }
}
 return 0;
}