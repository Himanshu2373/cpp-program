
// Find the Greatest of the Two Numbers in C++

#include<iostream>
#include<math.h>

using namespace std;

// Method 2

int GreatestNum(int a, int b){
    if(a==b){
        cout<<"Both are equals"<<endl;
    }
    else{
        return (a > b) ? a : b;
    }

}

// Method 3

int Greatest(int a, int b){
    int great=max(a,b);
    cout<<"Greatest number is :"<<great<<endl;
}

int main(){
    int num1,num2;
    cin>>num1>>num2;

// Method 1

    if(num1==num2){
        cout<<"both are equals!!"<<endl;
    }
    else if(num1>num2){
        cout<<"Greatest number is :"<<num1<<endl;
    }
    else{
        cout<<"Greatest number is :"<<num2<<endl;
    }
// method 2 function call
   cout<<"Greatest Number is :" <<GreatestNum(num1,num2)<<endl;
   // Method 3 function call
   Greatest(num1, num2);
   return 0;
}


