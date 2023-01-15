#include <iostream>
using namespace std;

int main()
{
    char fruit;
    char day;
    int quantity;
    cout << "Enter the fruit you want to buy(banana b , apple a, orange o, grapefruit g, kiwi k, pineapple p, grapes G):  " ;
    cin >> fruit;
    cout << "Enter the of purchase(m, t ,w ,T, f , s , S): " ;
    cin >> day;
    cout << "Enter quantity: " ;
    cin >> quantity;
    if((day == 'm' || day == 't') || (day == 'w' || day == 'T') || (day == 'f' || day  =='s'))
    {
        if(fruit == 'b')
        {
            cout << " price is "<< 2.50*quantity <<" $." ;
        }
        if(fruit == 'a')
        {
            cout << " price is "<<1.20*quantity<<" $." ;
        }
        if(fruit == 'o')
        {
            cout << " price is " << 0.85 *quantity <<" $." ;
        }
         if(fruit == 'g')
        {
            cout << " price is "<<1.45 * quantity <<" $." ;
        }
         if(fruit == 'k')
        {
            cout << " price is "<<2.70 * quantity <<" $." ;
        }
         if(fruit == 'p')
        {
            cout << " price is "<<5.50*quantity<<" $." ;
        }
         if(fruit == 'G')
        {
            cout << " price is "<<3.85*quantity<<" $." ;
        }
    }
    else if (day == 'S')
    {
       if(fruit == 'b')
        {
            cout << " price is " << 2.70*quantity<< " $." ;
        }
        if(fruit == 'a')
        {
            cout << " price is "<< 1.25*quantity<< " $." ;
        }
        if(fruit == 'o')
        {
            cout << " price is "<< 0.90*quantity<< " $." ;
        }
         if(fruit == 'g')
        {
            cout << " price is "<< 1.60*quantity<<" $." ;
        }
         if(fruit == 'k')
        {
            cout << " price is "<< 3.00*quantity<<" $." ;
        }
         if(fruit == 'p')
        {
            cout << " price is "<<5.60*quantity<<" $." ;
        }
         if(fruit == 'G')
        {
            cout << " price is "<< 4.20*quantity <<" $." ;
        } 
    }
    else
    {
        cout << "ERROR!!!!!!! Wrong input :(" ;
    }
}