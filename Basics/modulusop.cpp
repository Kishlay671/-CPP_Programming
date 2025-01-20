#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=3;
    cout<<a/b<<endl;    //Division operator gives quotient

    cout<<a%b<<endl;  //Modulo opeartor gives remainder

    cout<<2%5<<endl;   //if a<b then a%b=a

    cout<<10%(-4)<<endl;    // a%(-b)=a%b

    cout<<(-10)%4<<endl;    // (-a)%b=-(a%b)

    cout<<(-10)%(-4)<<endl;   // (-a)%(-b)=-(a%b)

    cout<<(-4)%10<<endl;

    cout<<10%3-4<<endl;

    cout<<10%(3-4)<<endl;
    return 0;
}