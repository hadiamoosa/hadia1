#include<iostream>
using namespace std;
float taxcalculator(char type, float price, float tax, float finalPrice);

main() 
{

float price;
char type;
float tax;
float finalPrice;

cout<< "Enter price: " ;
cin>>price;
cout<< "Enter type of vehicle: ";
cin>>type;
finalPrice=taxcalculator(type,price,tax,finalPrice);
cout<< "Final Price: "<<finalPrice<<endl;

}


float taxcalculator(char type, float price, float tax, float finalPrice)
{

 tax=price/100;
 finalPrice=price+tax;

   if (type == 'M')
 {
	tax=tax*6;
        finalPrice=price+tax;
 }
 
 if (type == 'E')
{      tax=tax*8; 
       finalPrice=price+tax;
} 

if (type == 'S')
{
   	tax=tax*10;
	finalPrice=price+tax;
}
if (type == 'V')
{  
	tax=tax*12;
	finalPrice=price+tax;
}
if (type == 'T')
{
	tax=tax*15;
	finalPrice=price+tax;
}
 return finalPrice;
}