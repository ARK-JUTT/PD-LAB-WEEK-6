#include <iostream>
using namespace std;

int main()
{
    string month;
    char category;
    float stays;
    float bill;
    cout << "Enter the category(s or a) : " ;
    cin >> category;
    cout << "Enter the number of stays : ";
    cin >> stays;
    cout << "Enter month : " ;
    cin >> month;
    if((month == "may" || month == "october") && category == 's')
    {
        bill = stays*50;
        if(stays > 7)
        {
            bill = (bill*5)/100;
        }
        if(stays > 14)
        {
            bill = (bill*30)/100 ;
        }
    }
    if((month == "may" || month == "october") && category == 'a')
    {
        bill = stays*65;
        if(stays > 7)
        {
            bill = bill ;
        }
        if(stays > 14)
        {
            bill = (bill * 10)/100;
        }
    }
    if((month == "june" || month == "september") && category == 's')
    {
        bill = stays*75.20;
        if(stays > 7)
        {
            bill = bill ;
        }
        if(stays > 14)
        {
            bill = (bill*20)/100 ;
        }
    }
    if((month == "june" || month == "september") && category == 'a')
    {
        bill = stays*68.70;
        if(stays > 7)
        {
            bill = bill ;
        }
        if(stays > 14)
        {
            bill = (bill * 10)/100;
        }
    }
    if((month == "july" || month == "august") && category == 's')
    {
        bill = stays*76;
        if(stays > 7)
        {
            bill = bill ;
        }
        if(stays > 14)
        {
            bill = bill ;
        }
    }
    if((month == "july" || month == "august") && category == 'a')
    {
        bill = stays*77;
        if(stays > 7)
        {
            bill = bill ;
        }
        if(stays > 14)
        {
            bill = (bill * 10)/100;
        }
    }
    cout << "your total bill for "<< stays <<" stays is "<< bill <<" $" ;
}