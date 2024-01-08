
#include<iostream>
using namespace std;

void LoopMethod(int a, int b){
    int sum=0;
    for(int i=a; i<=b; i++)
    {
        sum+=i;
    }
    cout<<"sum :"<<sum<<endl;
}

void FormulaMetod(int a, int b){
     int sum=0;
     sum=(b*(b+1)/2)-(a*(a+1)/2)+a;
     cout<<"sum :"<<sum<<endl;
}

int recursionMethod1(int a, int b){

    if(a>b){
        return 0;
    }

    return a+recursionMethod1(a+1, b);
}

int recursionMethod2(int a, int b){

    if(b<a){
        return 0;
    }

    return b+recursionMethod2(a, b-1);
}

int main(){

    int num1, num2;

    cout<<"enter the range :"<<endl;
    cin>>num1>>num2;

    LoopMethod(num1,num2);

    FormulaMetod(num1,num2);

    int sum1=recursionMethod1(num1,num2);
    cout<<"sum :"<<sum1<<endl;
    
    int sum2=recursionMethod2(num1,num2);
    cout<<"sum :"<<sum2<<endl;

    return 0;
}