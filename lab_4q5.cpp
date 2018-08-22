#include<iostream>

using namespace std;
// input two angles of triangle and find the third one

int main()
{
 int ang1,ang2,ang3;
 
cout<<"\n CONSIDER A TRIANGLE:";
cout<<"\n ENTER ANGLE ONE ";
cin>>ang1;
cout<<"\n ENTER ANGLE TWO ";
cin>>ang2;
ang3=180-(ang1+ang2);
cout<<"THE THIRD ANGLE IS "<<ang3;
return 0;
}


