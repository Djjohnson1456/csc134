
#include <iostream>
using namespace std;

// CSC 134
//M3T1
// Ask the user to enter the length and width of two rectangles,
// then display the area of both
// Dj
// 9/9/2024

int main()  {
// Set up variables 
double width1, width2, length1, length2;
double area1, area2; 

cout << "M3T1- Area of two rectangles" << endl;
cout << "width of first rectangle:" << endl;
cin >> length1;
cout << "lengthof first rectangle :" << endl;
cin >> length1;
cout << endl;
cout << " width of second rectangle :" << endl;
cin >> width2;
cout << " Length of second rectangle:" << endl;
cin >> length2;


 // calc areas
 area1 = length1 * width1;
 area2 = length2 * width2;

 // print the answer
 cout << " The first area is : " << area1 << endl;
cout <<"  The second area is: " << area2 << endl;

// Tell which i larger
if ( area1 < area2)  {
    cout << "the first rectangle is larger." << endl;
    }
     else if (area1 > area2)
     cout << " the second rectangle is larger . " << endl;
     }
   
     // area1 == area2
     cout << " the rectangles are the same size." << endl; 
       }

     
 }