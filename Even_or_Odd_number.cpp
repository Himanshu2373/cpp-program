#include<iostream>

using namespace std;

void BrustMethod(int num){

    if(num%2==0)
     cout<<"Even Number"<<endl;
    else
    cout<<"Odd number"<<endl;
}

void TernaryMethod(int num){

    (num%2==0)?cout<<"Even":cout<<"odd";
}

int main(){
    int num;
    cout<<"enter a number :"<<endl;
    cin>>num;
    cout<<"Brust Method :"<<endl;
    BrustMethod(num);
    cout<<"ternary method :"<<endl;
    TernaryMethod(num);
    return 0;
}