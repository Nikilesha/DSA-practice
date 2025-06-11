#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    /*
        2. Movie Ticket Pricing
        Input age and time of movie (in 24hr format). Apply:

        Age < 12: ₹100

        Age ≥ 60: ₹80

        Else normal price ₹150

        If movie is before 17:00 (5 PM), give 20% discount on price

    */
    
        int age,time,price;

        cin>>age;
        cin>>time;

        if(age <12){
        price = 100;
        }
        else if(age >= 60){
            price = 80;
        }
            else{
            price=150;
        }


        if(time<1700){
            price = price - (price*0.2);
        }

        cout<<"Price: "<<price<<endl;
    

    /*
        4. Mobile Data Usage Alert
        Input user’s data usage (in GB) and plan limit:

        If usage ≤ 90% of limit: "All good"
        
        If usage > 90% and ≤ 100%: "Caution"
        
        If usage > 100%: "Limit Exceeded! Extra charges apply"
        
    */
    
        int usage,limit;
        cin>>usage>>limit;
        if(usage<=(limit*0.9)){
            cout<<"All good"<<endl;
        }
        else if(usage>(limit*0.9) && usage<=(limit*1.0)){
            cout<<"Caution"<<endl;
        }
        else{
            cout<<"Limit exceeded charges will apply"<<endl;
        }
    
    /*
        3. Blood Donation Eligibility
        Input: age, weight, and hemoglobin level
        
        Age ≥ 18, weight ≥ 50kg, hemoglobin ≥ 12.5: Eligible
        
        Else: Not eligible
        Output appropriate message.
        
    */
    
    
        int age, weight;
        float hameoglobin;
        string condition;
        
        cin >> age >> weight >> hameoglobin;
        condition = (age >= 18 && weight >= 50 && hameoglobin >= 12.5) ? "Eligible" : "Not eligible";
            cout << condition << endl;
            
        
    /*
        6. Traffic Signal Fine
        Input: Signal color (Red, Yellow, Green)
        
        Red → Fine ₹500
        
        Yellow → Warning
        
        Green → Go
        Use switch-case on string (simulate with char or number if needed)
    */

    
   
        char signal;
        cout << "Enter signal color (R=Red, Y=Yellow, G=Green): ";
        cin >> signal;
        
        switch(signal){
                case 'r':
                case 'R':
                cout<<"Red signal fine - 500";
                break;
                case 'Y':
                case 'y':
                cout<<"Yellow signal - warning";
                break;
                case 'G':
                case 'g':
                cout<<"Green signal - go";
                break;
                default:
                cout<<"Invalid colour";
            }
        
}