#include <iostream>
using namespace std;
float taxCalculator(float price, string name);

main()
{
 float price;
 string name;
 float totalPrice;
 float answer; 

 cout << "Enter price of vehicle:  ";
 cin >> price;
 cout << "Enter name of vehicle:  ";
 cin >> name;
 answer = taxCalculator(price, name);

 cout <<  "Total Amount is:  " << answer << endl;

} 

float taxCalculator(float price, string name)
{

 float taxAmount;
 float totalPrice;

 if (name == "motorcycle")
{
 taxAmount = price * (6.0/100);
}

if (name == "electric")
{
 taxAmount = price * (8.0/100);
}

if (name == "sedan")
{
 taxAmount = price * (10.0/100);
}

if (name == "van")
{
 taxAmount = price * (12.0/100);
}

if (name == "truck")
{
 taxAmount = price * (15.0/100);
}


 totalPrice = taxAmount + price;
 return totalPrice;
}