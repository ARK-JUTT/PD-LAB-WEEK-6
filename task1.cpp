#include <iostream>
using namespace std;
int main()
{
    string temperature , humidity;
    cout << "Enter temperature: " ;
    cin >> temperature;
    cout << "Enter humidity: " ;
    cin >> humidity;
    if(temperature == "warm" && humidity == "dry")
    {
        cout << "Play Tennis." ;
    }
    if(temperature == "warm" && humidity == "humid")
    {
        cout << "Swim." ;
    }
    if(temperature == "cold" && humidity == "dry")
    {
        cout << "Play Basketball." ;
    }
    if(temperature == "cold" && humidity == "humid")
    {
        cout << "Watch TV." ;
    }
    
}
