#include <iostream>
using namespace std;
float prem(char servicecode, float minutes, char time);
float resd(char servicecode, float minutes, char time);
int main()
{
    char servicecode , time;
    float minutes;
    cout << "Enter which kind of user you are (premium 'p' or residential 'r'): " ;
    cin >> servicecode;
    cout << "Enter number of minutes you called: " ;
    cin  >> minutes;
    if(servicecode == 'p')
    {
        cout << "Enter the time (DAY 'd' or NIGHT 'n' ): " ;
        cin >> time;
        float bill = prem(servicecode, minutes, time) ;
        cout << "You have called "<< minutes << " minutes and your payable bill is " << bill << " $" ;
    }
    else if(servicecode == 'r')
    {
        float bill = resd(servicecode, minutes, time);
        cout << "You have called "<< minutes << " minutes and your payable bill is " << bill << "$";
    }
    else
    {
        cout << "ERROR!!!!! Enter correct time :)" ;
    }

}

float prem(char servicecode, float minutes, char time)
{
    float bill, payablemins;
    if(time == 'd')
    {
        if(minutes < 75)
        {
            bill = 25 + 0 ;
        }
        if(minutes > 75)
        {
            bill = (payablemins*0.10) + 25 ;
        }    
    }
    if(time == 'n')
    {
         if(minutes < 100)
        {
            bill = 25 + 0 ;
        }
        if(minutes > 100)
        {
            bill = (payablemins*0.05) + 25;
        }   
    }
    return bill;
}

float resd(char servicecode, float minutes, char time)
{
    float bill , payablemins;
    if(minutes < 50)
    {
        bill = 10 + 0 ;
    }
    if(minutes > 50)
    {
        payablemins = minutes - 50 ;
        bill = (payablemins * 0.20) + 10 ;
    }
    return bill ;
}