#include<iostream>

using namespace std;
int main(){
    int num, temp, rem, sum=0;
    cin>>num;
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum=sum*10+rem;
        temp/=10;
        }
    if(num==sum){
        cout<<"The number is a palindrome."<<endl;
    }
    else{
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}