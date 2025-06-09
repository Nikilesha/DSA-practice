#include<iostream>
using namespace std;

int main(){

    //operators inroduction
    int a = 10;
    int b = 3;


    cout<<(a+b)<<endl;
    cout<<(a-b)<<endl;
    cout<<(a*b)<<endl;
    cout<<(a/b)<<endl;

    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;

    a += 5;
    b -= 3;

    //compound assignment
    cout<<"A: "<<a<<endl;
    cout<<"B: "<<b<<endl;

    cout<<"Relational operators: "<<endl;
    cout<< (a>b)<<endl;
    cout<< (a==b)<<endl;

    b = 25;
    cout<<"Relational operators: "<<endl;
    cout<<a++<<endl;
    cout<<b--<<endl;

    cout<<"Bitwise operator: "<<endl;
    cout<<(5&7)<<endl;
    cout<<(5|7)<<endl;
    cout<<(5^7)<<endl;
    cout<<(~7)<<endl;
    
}