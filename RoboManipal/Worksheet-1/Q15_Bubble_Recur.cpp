#include<iostream>
using namespace std;
void recBubble(int arr[], int n){
   if (n == 1)
      return;
   for (int i=0; i<n-1; i++) 
   {
      if (arr[i] > arr[i+1]) 
   swap(arr[i], arr[i+1]); 
   }
   recBubble(arr, n-1);
}
main() {
    int n;
    cout << " Enter Number of elements"<<endl;
    cin>>n;
   int data[n] ;
   
   cout << " Fill Array"<<endl;
   for(int i = 0; i <n;i++){
      cin>> data[i];
   }
   
   cout << "Sorted Array is "<<endl;
   recBubble(data, n);
   for(int i = 0; i <n;i++){
      cout << data[i] << " ";
   }
}