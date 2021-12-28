/* Q6b.
    Write a function for Bubble and Selection Sort. Ask the user for which
    method to use: ‘s’ for Selection Sort and ‘b’ for Bubble Sort. Call the
    correct function based on the user’s choice. After sorting the array, call
    another function that implements Binary Search to find the position of
    the number taken as input from the user. [Take the array as input from
    the user].
 */

#include<iostream>
using namespace std;
void swapping(int &a, int &b) {      //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void bubbleSort(int *array, int size) {
   for(int i = 0; i<size; i++) {
      int swaps = 0;         //flag to detect any swap is there or not
      for(int j = 0; j<size-i-1; j++) {
         if(array[j] > array[j+1]) {       //when the current item is bigger than next
            swapping(array[j], array[j+1]);
            swaps = 1;    //set swap flag
         }
      }
      if(!swaps)
         break;       // No swap in this pass, so array is sorted
   }
}
void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main() {
   int n,m;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];     //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout<<"Enter 1 to Sort using bubble sort and 2 to sort using Selection Sort\n";
cin>>m;
   cout << "Array before Sorting: ";
   display(arr, n);
   switch (m)
   {
   case 1:
     bubbleSort(arr, n);
   cout << "Array after Bubble Sorting: ";
   display(arr, n);
      break;

      case 2:
      selectionSort(arr, n);
   cout << "Array after Selection Sorting: ";
   display(arr, n);
      break;
   
   default:
   cout<<"Invalid Input";
      break;
   }
   int search;
  cout<<"Enter Number to be Searched\n";
  cin>>search;

   int x = sizeof(arr)/ sizeof(arr[0]);
   int index = binarySearch (arr, 0, x-1, search);
   if(index == -1){
      cout<< search <<" is not present in the array";
   }else{
      cout<< search <<" is present at index "<< index <<" in the array";
   }
   return 0;
 
}