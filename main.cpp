#include <iostream>

using namespace std;

int main() 
{
 string Name;
 
 string AgePhrase;
 int Age;
 
 cout << "What's your name?" << endl;
 cin >> Name;
 cout << "How old are you?" << endl;
 cin >> Age;
 

 if (Age <= 35)
 {
     if (Age <= 8)
     {
        AgePhrase = "really young";
     } else
     {
         AgePhrase = "pretty young";
     }
 } else if (Age <= 55)
 {
     AgePhrase = "in your adulthood";
 } else if (Age <= 90)
 {
     AgePhrase = "pretty old";
 } else
 {
     AgePhrase = "really old";
 }
 
 
 cout << "\n" << "You're " << AgePhrase << ", " << Name << "." << endl;
 
    return 0;
}
