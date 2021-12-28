/* Q6a. 
    Write a C++ program to find if two numbers are Amicable numbers.
    Note: Amicable numbers are two different numbers such that the sum of proper divisors of each is equal to the other number.
    e.g. 220 and 284
    Factors of 220 1 + 2+ 4+ 5+ 10+ 11+20 +22+44+55+110 = 284
    Factors of 284 1 + 2+ 4+ 71+142 = 220  */

#include <iostream>
using namespace std;
 
int ProDivSum(int n)
{
    int sum = 0;
    for (int i=1; i<n; i++)
    {
        if (n%i == 0)
        {
            sum += i;
            
        }
    }
    return sum;
}
bool chkAmicable(int a,int b)
{
    return(ProDivSum(a) == b && ProDivSum(b) == a);
}
int main()
{
    int n, i, j, ctr,nm1,nm2;

      cout<<" Input the 1st number : ";
      cin>>nm1;
      cout<<" Input the 2nd number : ";
      cin>>nm2;	  
   

      if( chkAmicable(nm1,nm2))
        cout << " The given numbers are an Amicable pair."<<endl;
    else
        cout << " The given numbers are not an Amicable pair."<<endl;
    return 0;
}