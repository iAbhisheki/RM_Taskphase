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
 
void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout << str;
}


void printArraystring(string,int);
 

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
        cout << str[i] << " ";
}
 
int main()
{
    int N=0;
    string str[N];int length;
    cout<<"Enter number of Words: ";
    cin>>N;

    cout<<"Enter Words: ";
    for (int i = 0; i < N; i++)
    {
        cin>>str[i];
        sortString(str[i]);
        
    }
    length = sizeof(str)/sizeof(str[0]);
        sortlength(str,length);

    printArraystring(str,length );
    
    
    return 0;
}
