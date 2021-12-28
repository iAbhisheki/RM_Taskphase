/*  Q1. Write a C++ program to sort a character array alphabetically using
    bubble sort. (lower case only).
    Eg: input: “worksheet”
        Output: “eehkorstw” */

#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[200], ch;
    int i, j, length;
    cout<<"Enter the String: ";
    gets(str);
    length = strlen(str);
    for(i=0; i<length; i++)
    {
        for(j=0; j<(length-1); j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j] = str[j+1];
                str[j+1] = ch;
            }
        }
    }
    cout<<"\nString in Ascending Order: "<<str;
    cout<<endl;
    return 0;
}