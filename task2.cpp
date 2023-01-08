#include<iostream>
using namespace std;

float cubiccentimeters(float lenght,float width,float height);
float cubickilometers(float lenght,float width,float height);
float cubicmillimeters(float lenght,float width,float height);


main(){
float lenght;
float width;
float height;
float result1;
float result2;
float result3;
string output;
float output1;
float output2;
float output3;

cout<< "Enter lenght: ";
cin>>lenght;
cout<< "Enter width: ";
cin>>width;
cout<< "Enter height: ";
cin>>height;
cout<< "Enter output unit: ";
cin>>output;

result1=cubiccentimeters(lenght,width,height);
result1=(lenght*width*height)*(100*100*100);
cout<<"result is"<<result1 <<endl;

result2=(lenght*width*height)/(1000*1000*1000);
result2=cubickilometers(lenght,width,height);
cout<<"result is "<<result2<<endl;

result3=(lenght*width*height)*(1000*1000*1000);
result3=cubicmillimeters(lenght,width,height);
cout<<"result is "<< result3<<endl;

}


float cubiccentimeters(float lenght,float width,float height)
{
	string output;
  if  (output == "centimeters")
{  
  	float result1;
        result1=(lenght*width*height)*(100*100*100);
 	return result1;
}
return  0;
}

float cubickilometers(float lenght,float width,float height)
{
string output;
if (output == "kilometers")
{
 	float result2;
 	result2=(lenght*width*height)/(1000*1000*1000);
 	return result2;

}
return  0;
}

float cubicmillimeters(float lenght,float width,float height)
{
string output;
 if (output == "millimeters")
{
 	float result3;
 	result3=(lenght*width*height)*(1000*1000*1000);
 	return result3;
}
return  0;
}      
