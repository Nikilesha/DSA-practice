#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout<<sizeof(long int)<<endl;
    // Implicit type casting
    cout<<(5/3.0)<<endl;
    cout<<(5.0/3)<<endl;


    char letter = 'A';
    letter = letter + 1;
    cout<<letter<<endl;

    //explicit typeconversion
    int x = 5;
    cout << (float)x/3<<endl;


    int a,b,c,d,e;
    int sum = a+b+c+d+e;

    cout<< fixed << setprecision(4)<<float(sum)/5<<endl;
}