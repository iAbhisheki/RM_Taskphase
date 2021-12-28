/* 
Q5. Write a C++ program to input a decimal number and print its
    equivalent hexadecimal, octal and binary forms.
    (If you are unaware of different number systems then please learn
    about them).*/
#include <iostream>  
using namespace std;  
int main()  
{  
int a[100], n, i;    
cout<<"Enter the number to convert: ";    
cin>>n;    
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
cout<<"Binary of the given number= ";    
for(i=i-1 ;i>=0 ;i--)    
{    
cout<<a[i];    
}    
}  