#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    double d_ft = 0,d_inches,d_yards,d_miles;
    int unit;
    cout<<"press 1 for 'feets' 2 for 'inches' 3 for 'yards' and 4 for 'miles' : ";
    cin>>unit;
    switch(unit)
    {
        case 1:
            cout<<"Input distance in feet: ";
            cin>>d_ft;
            break;
        case 2:
            cout<<"Input distance in inches : ";
            cin>>d_inches;
            d_ft=d_inches/12;
            break;
        case 3:
            cout<<"Input distance in yards : ";
            cin>>d_yards;
            d_ft=d_yards*3.0;
            break;
        case 4:
            cout<<"Input distance in miles : ";
            cin>>d_miles;
            d_ft=d_miles*5280.0;
            break;
        default:
            cout<<"Please enter valid unit";
            break;
            
    }
    d_inches = d_ft*12;
    d_yards = d_ft/3.0;
    d_miles = d_ft/5280.0;
    cout<<"The distance in feets is feets : "<<d_ft<<endl;
    cout<<"The distance in inches is inches : "<<d_inches<<endl;
    cout<<"The distance in yards is yards : "<<d_yards<<endl;
    cout<<"The distance in miles is miles : "<<d_miles<<endl;
} 