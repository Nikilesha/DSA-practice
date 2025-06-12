#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void delay(int milliseconds){
        clock_t start_time = clock();
        while(clock()<start_time+milliseconds * (CLOCKS_PER_SEC/1000));
    }
int main(){
    /*
       1. Print Natural Numbers

        Input: n

        Output: Print numbers from 1 to n.
    */
    
    /*
        int n;
        cout<<"Enter the number limit: ";
        cin>>n;
        int i=1;
        while(i<=n){
            cout<<i<<" ";
            i++;
        }
    */

    /*
        Input: 4
        Output:
        *
        **
        ***
        **** 
    */
    /*
    
    int n;
    cout<<"Enter the number limit: ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
            while(j<=i){
                
            cout<<"*";
            
            j++;
            }   
            
            cout<<endl;
            i++;
        }
    */
        
    /*
    
    Reverse a Number

    Input: 1234

    Output: 4321
    
    */
    /*
    int n,re;
    cout<<"Enter a number: ";
    cin>>n;
    int rev=0;
    
    while(n!=0){
        re = n%10;
        rev = rev*10+re;
        n /= 10;
        

    }
    cout<<"Reversed number is : "<<rev<<endl;
    */

    /*
        Problem:
        A fuel station dispenses petrol. Each liter costs ₹110. A customer fills up until they say "stop".

        Input:

        Liters filled each time (e.g., 3, 2, 5...) until 0 or negative is entered.

        Output:

        Total fuel filled

        Total amount to pay
    
    */

   
   float limit;
   cout<<"Enter the limit: ";
   cin>>limit;
   int speed = 15;

   int cost_per_L = 110;

   for(float i=0.0;i<=limit;i += 0.1f ){
    cout<<"\rLiteres: "<<fixed<<setprecision(1)<<i<<flush;
    
    if(i<=limit-15.0){
        speed = 10;

    }
    else{
        speed = 50;
    }

    delay(speed);
    
}
    cout<<endl<<"Cost per Litre: "<<cost_per_L<<endl;
    cout<<"Total cost: "<<cost_per_L*limit<<endl;
    
}