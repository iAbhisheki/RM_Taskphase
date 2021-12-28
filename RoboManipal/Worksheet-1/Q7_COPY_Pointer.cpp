// Q7. Write a function to copy a string into another string using pointers.

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[100], str2[100];
    char *Ptr1, *Ptr2;
    cout<<"Enter the string: ";
    gets(str1);
    Ptr1 = &str1[0];
    Ptr2 = &str2[0];
    while(*Ptr1)
    {
        *Ptr2 = *Ptr1;
        Ptr1++;
        Ptr2++;
    }
    *Ptr2 = '\0';
    cout<<"\nEntered String: "<<str1;
    cout<<"\nCopied String: "<<str2;
    cout<<endl;
    return 0;
}