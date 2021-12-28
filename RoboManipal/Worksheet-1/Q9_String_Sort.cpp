/* 
Q9. 
(a) Given a 2D character array, where each row is a string, write a
function which rearranges the strings in ascending order based on their
lengths.
        Input: word 
               number 
                cat

        Output: cat
                word
                number
(b) Also, sort each individual string in ascending order.
Output: act
        dorw
        bemnru */


#include<bits/stdc++.h>
using namespace std;
 

void sortString(string s)
{
    
     
    int i, j, length;
    length = s.length();
    char ch,str[length+1];
    strcpy(str,s.c_str());
    
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
    cout<<str<<endl;

   
}
void sortlength(string s[], int n)
{
    for (int i=1 ;i<n; i++)
    {
        string temp = s[i];
 
        
        int j = i - 1;
        while (j >= 0 && temp.length() < s[j].length())
        {
            s[j+1] = s[j];
            j--;
        }
        s[j+1] = temp;
    }
}
  

void printArraystring(string str[], int n)
{
    for (int i=0; i<n; i++)
        cout << str[i] << " "<<endl;
}
 
int main()
{
    int N=0;
    string str[100];string x[100];
    cout<<"Enter number of Words: ";
    cin>>N;

    cout<<"Enter Words: ";
    for (int i = 0; i < N; i++)
    {
        cin>>str[i];
      
        
    }
    sortlength(str,N);
    for (int j = 0; j < N; j++)
    {
         sortString(str[j]);
    }
    
    
    
    
 
    return 0;
}
