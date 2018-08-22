#include<iostream>
//converting temp fahrenheit to degree centigrade

using namespace std;

int main()
{
 double c,f;
cout<<"\n Enter a temperature in farehenheit ";
cin>>f;
c=(f-32)*(0.56);
cout<<"\n the temperature in degree centigrade is "<<c<<" degree celcius";
return 0;
}
