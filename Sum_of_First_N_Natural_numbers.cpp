#include<iostream>
using namespace std;

int recursionMethod(int num){
    
    if(num==0)
        return 0;
    return num+recursionMethod(num-1);
}

void FormulaMetod( int num){
    int sum;
    sum= (num*(num+1))/2;
    cout<<"Sum :"<<sum<<endl;
}

void LoopMethod(int num){
     int sum=0;
    for(int i=1; i<=num; i++)
    {
       sum+=i;
    }
       
     cout<<"sum:"<<sum<<endl;
}

int main(){

    int n;
    cout<<"Enter first N number :"<<endl;
    cin>>n;

    int sum=recursionMethod(n);
    cout<<"sum:"<<sum<<endl;
     FormulaMetod(n);
     LoopMethod(n);

     return 0;
}