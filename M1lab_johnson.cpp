// CSC 134
// M1LAB - DJ
// Johnson
// 8/21/24


#include <iostream>
using namespace std;
#include <iomanip>
int main() { 
// set up our variables 
string name = " DJ ";
int num_apples = 10; 
double price_per_apple = 0.25;
double total_cost;


// get user input
 cout << "what is your name? ";
   cin >> name;
cout << "how many apples in stock? ";
  cin >> num_apples;
cout<< "how much is one apple? ";
 cin >> price_per_apple;

// Say hello
  cout << "--------------------" << endl;
 cout <<  "welcome to the ";
 cout << name << " orchard!" << endl;
 
  // caculate the total cost
  total_cost = num_apples * price_per_apple;
  
 
  // set all decimals to 2 places 
  cout <<  fixed << setprecision (2);
 
 // Give the answers 
    cout <<  " you have " << num_apples << "apples" << endl;
    cout << "Each apple costs $" << price_per_apple << endl;
    cout << "The total is: $" << total_cost << endl;
    
}





