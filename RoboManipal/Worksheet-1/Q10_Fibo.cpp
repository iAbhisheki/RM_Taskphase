#include<iostream>
#include<chrono>
using namespace std::chrono;
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}


int main(){
       auto start = high_resolution_clock::now();
    
    int a;
    cout<<"Series is :"<<endl;
   for (int i = 0; i <= 39; i++)
   {
       cout<<fib(i)<<"\t";
   }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout <<endl<< "Time taken by function: " << duration.count() << " second" << endl;
    return 0;
}
