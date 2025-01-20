#include<iostream>
using namespace std;
int main(){
    float x=3.1428;
    x+=1;
    cout<<x<<endl;

    cout<<5/2<<endl;  //Gives integer

    float y=5;
    float z=2;
    cout<<y/z<<endl;  //Gives float

    cout<<5.0/2<<endl;  //Gives float
    cout<<5/2.0<<endl;  //Gives float
    cout<<5.0/2.0<<endl;  //Gives float
}