#include <iostream>
using namespace std;
string grade(float percentage);
int main()
{
    string student;
    float english , biology, chemistry, maths, socialscience;
    float obtainedmarks ,totalmarks , percentage;

    cout << "Enter student name: " ;
    cin >> student;

    cout << "Enter Maths marks obtained: ";
    cin >> maths;

    cout << "Enter Biology obtained: ";
    cin >> biology;

    cout << "Enter Chemistry marks obtained: ";
    cin >> chemistry;

    cout << "Enter English marks obtained: ";
    cin >> english;

    cout << "Enter SocialSciences marks  obtained: ";
    cin >> socialscience;

    obtainedmarks = maths + biology + chemistry + english + socialscience ;
    
    percentage = (obtainedmarks / totalmarks) * 100 ;

    string obtainedgrade = grade(percentage);

    cout << student << "has obtained " << obtainedmarks << " marks. He has succesfully achieved " 
         << percentage << " percentage with grade " << obtainedgrade  ;
}

string grade(float percentage)
{
    string obtainedgrade;
    if(percentage >= 50 && percentage < 60)
    {
        obtainedgrade = "C" ;
    }
    if(percentage >= 60 && percentage < 70)
    {
        obtainedgrade = "B" ;
    }
    if(percentage >= 70 && percentage < 80)
    {
        obtainedgrade = "B+" ;
    }
    if(percentage >= 80 && percentage < 90)
    {
        obtainedgrade = "A" ;
    }
    if(percentage >= 90 && percentage < 100)
    {
        obtainedgrade = "A+" ;
    }
    return obtainedgrade;
}


