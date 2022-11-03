//Question 1 "Area and volume of a cylinder"
#include <iostream>
using namespace std;
int main()
{
//Declaration of variables
double area;
double volume;
double radius;
double height;
double pie;
pie = 3.141592;
//Capture radius
cout<<"Enter value of Radius:";
cin>> radius;
//Capture height
cout<<"Enter value of Height:";
cin>> height;
//Math Computations
volume = pie*radius*radius*height;
area = 2*pie*radius*height + 2*pie*radius*radius;
cout<<"\n";
cout<<"Volume of" << radius <<"and" << height << "is:" << volume << "\n";
cout<<"Area of" << radius <<"and" << height << "is:" <<area << "\n";
cout <<"\n";
cout << "End of Calculation.";
cout << "\n";
}