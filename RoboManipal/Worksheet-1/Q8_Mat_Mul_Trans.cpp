/* 
    Q8. Write two functions:
    i.To perform matrix multiplication
    ii.To find the transpose of a matrix.
       Use two matrices to verify the identity (A.B)’ = B’. A’ */


#include<iostream>
using namespace std;
static void input(int firstMatrix[10][10], int secondMatrix[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int i, j;
	cout << endl << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnFirst; ++j)
		{
			cout << "Enter elements a "<< i + 1 << j + 1 << " : ";
			cin >> firstMatrix[i][j];
		}
	}

	cout << endl << "Enter elements of matrix 2:" << endl;
	for(i = 0; i < rowSecond; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			cout << "Enter elements b " << i + 1 << j + 1 << " : ";
			cin >> secondMatrix[i][j];
		}
	}
}
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int mult[10][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
{
	int i, j, k;

	// Initializing elements of matrix mult to 0.
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			mult[i][j] = 0;
		}
	}

	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			for(k=0; k<columnFirst; ++k)
			{
				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}

void transpose(int A[10][10], int B[10][10],int r1,int c2)
{
    int i, j;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            B[i][j] = A[j][i];
}
void display(int mult[10][10], int rowFirst, int columnSecond)
{
	int i, j;

	cout << "Output Matrix:" << endl;
	for(i = 0; i < rowFirst; ++i)
	{
		for(j = 0; j < columnSecond; ++j)
		{
			cout << mult[i][j] << " ";
			if(j == columnSecond - 1)
				cout << endl << endl;
		}
	}
}
bool isequal(int m1[10][10],int m2[10][10],int r1,int c1,int r2,int c2  )
{
	
	for(int i = 0; i < r1; ++i)
	{
		for(int j = 0; j < c1; ++j)
		{
			if(m1[i][j]!=m2[i][j])
			{
				return false;
			}

		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
    int r1,r2,c1,c2;
	int m1[10][10];
	int m2[10][10];
	int m1m2[10][10];
	int tm1[10][10];
	int tm2[10][10];
	int tm1m2[10][10];
	int mtm1m2[10][10];
	cout<<"Enter the rows and columns of 1st matrix:";
    cin>>r1>>c1;

    cout<<"Enter the rows and columns of 2nd matrix:";
   
    cin>>r2>>c2;
    
	
	input(m1,m2,r1,c1,r2,c2);
	display(m1,r1,c1);



	multiplyMatrices(m1,m2,m1m2,r1,c1,r2,c2);
	transpose(m1m2,tm1m2,r1,c2);
	transpose(m2,tm2,c2,r2);
	transpose(m1,tm1,r1,c1);
	multiplyMatrices(tm1,tm2,mtm1m2,c1,r1,c2,r2);
	bool z=isequal(tm1m2,mtm1m2,c1,r1,c2,r2);

	
 if (z==1){
	 cout<<"Equal";
 }
	else{
		cout<<"Not Equal";
	}
	
	
    return 0;
}



