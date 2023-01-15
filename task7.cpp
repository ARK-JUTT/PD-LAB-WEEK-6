#include <iostream>
using namespace std;

int main ()
{
    int examhour, examin, arrivalhour, arrivalmin;
    int timea , timeb, timeeee;
    cout << "enter exam starting hour: " ;
    cin >> examhour ;
    cout << "enter exam starting minute: ";
    cin >> examin;
    cout <<" enter arrival hour: ";
    cin >> arrivalhour;
    cout << "enter arrival minutes: ";
    cin >> arrivalmin;
    timea = (examhour*60) + examin;
    timeb = (arrivalhour*60) + arrivalmin ;
    if(timea > timeb)
    {
        timeeee = timea - timeb ;
        if(timeeee <= 30)
        {
            cout << "ON time." ;
        }
        if(timeeee > 30)
        {
            cout << "EARLY" ;
        }
    }
    else
    {
        timeeee = timeb - timea ;
        cout << "you are " << timeeee << " minutes late " ;
    }

}