/* Q3. In a given matrix for all zero elements the corresponding row and
       column must be replaced with zeroes. Write a C++ program to do
       that.
       Eg: Input: [ 1 2 0                 Output: [ 0 0 0
                    2 3 4                           2 3 0
                    3 3 3 ]                         3 3 0 ] */


#include<iostream>
using namespace std;
int main()
{
    int matOne[10][10], matThree[10][10];
    int matOneRow, matOneCol;
    int i, j, k, sum;
    cout<<"Enter the Row Size of First Matrix:  ";
    cin>>matOneRow;
    cout<<"Enter the Column Size of First Matrix:  ";
    cin>>matOneCol;
    cout<<"\nEnter "<<matOneRow*matOneCol<<" Elements for First Matrix: \n";
    for(i=0; i<matOneRow; i++)
    {
        for(j=0; j<matOneCol; j++)
            cin>>matOne[i][j];
    }

     cout<<"\n Input Matrix is:\n";
    for(i=0; i<matOneRow; i++)
    {
        for(j=0; j<matOneCol; j++)
        {
            cout<<matOne[i][j]<<"\t";
            matThree[i][j]=matOne[i][j];
        }
        cout<<endl;
        
    }
    cout<<endl;
    


//....START -> METHOD
  int zrow,zcol;
        for(i=0; i<matOneRow; i++)
    {
        for(j=0; j<matOneCol; j++)
            {
                   if(matOne[i][j]==0)
                   {
                     zrow=i;
                     zcol=j;
                     continue;
                   }
            }
    }
     for(i=0; i<matOneRow; i++)
    {
        
            matThree[zrow][i]=0;
    }
    for(j=0; j<matOneCol; j++)
    {
        
            matThree[j][zcol]=0;
    }
    //...END ->METHOD


   
    cout<<"\n Result:\n";
    for(i=0; i<matOneRow; i++)
    {
        for(j=0; j<matOneCol; j++)
            cout<<matThree[i][j]<<"\t";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
