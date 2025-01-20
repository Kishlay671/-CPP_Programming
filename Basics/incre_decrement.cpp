#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<x<<endl;
    //++x;  //Pre Increment
    cout<<++x<<endl; //cout<<x<<endl; for above comment line

    //x++;  //Post Increment;
    cout<<x++<<endl;
    cout<<x<<endl;

    --x; //Pre Decrement
    cout<<x<<endl;

    //x--; //Post Decrement
    cout<<x--<<endl;  //cout<<x<<endl; for above comment line
    return 0;
}