#include <iostream>
using namespace std;
string Zsign(int date , string month);

int main()
{
    int date;
    string month;
    cout << "Enter your date of birth : " ;
    cin >> date;
    cout << "Enter your month of birth : " ;
    cin >> month ;
    string zoadic = Zsign(date , month);
    cout << zoadic << "  People born on " << date <<" " << month << " have zoadic " << zoadic ;
}

string Zsign(int date , string month)
{
    string zoadic;
    if(date >= 21 && date <= 31)
    {
        if(month == "March")
        {
            zoadic = "ARIES." ;
        }
        if(month == "May")
        {
            zoadic = "GEMINI" ;
        }
        if(month == "August")
        {
            zoadic = "VIRGO." ;
        }
        if(month == "November")
        {
            zoadic = "SAGITTARIUS." ;
        }
        if(month == "December")
        {
            zoadic = "CAPRICORN" ;
        }
    }
    if(date >=1 && date <= 19)
    {
        if(month == "April")
        {
            zoadic = "ARIES." ;
        }
        if(month == "January")
        {
            zoadic = "Capricorn." ;
        }
        if(month == "February")
        {
            zoadic = "PISCUS" ;
        }
        
    }
    if(date >=20 && date <= 31)
    {
        if(month == "April")
        {
            zoadic = "TAURUS." ;
        }
        if(month == "June")
        {
            zoadic = "CANCER." ;
        }
        if(month == "July")
        {
            zoadic = "LEO" ;
        }
        if(month == "September")
        {
            zoadic = "LIBRA." ;
        }
        if(month == "October")
        {
            zoadic = "SCORPIO." ;
        }
        if(month == "January")
        {
            zoadic = "AQUARIUS." ;
        }
    }
    if(date >=1 && date <= 20)
    {
        if(month == "May")
        {
            zoadic = "TAURUS." ;
        }
        if(month == "March")
        {
            zoadic = "PISCUS." ;
        }
        if(month == "June")
        {
            zoadic = "GEMINI." ;
        }
        if(month == "February")
        {
            zoadic = "AQUARIUS." ;
        }
    }
    if(date >=1 && date <= 22)
    {
        if(month == "July")
        {
            zoadic = "CANCER." ;
        }
        if(month == "August")
        {
            zoadic = "LEO." ;
        }
        if(month == "October")
        {
            zoadic = "LIBRA." ;
        }
        if(month == "September")
        {
            zoadic = "VIRGO." ;
        }
        if(month == "November")
        {
            zoadic = "SCORPIO." ;
        }
        if(month == "December")
        {
            zoadic = "SAGITTARIUS" ;
        }
    }
    return zoadic ;
}