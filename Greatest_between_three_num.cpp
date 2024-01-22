// C++ Program to find the Greatest of three numbers

#include<iostream>
#include<math.h>

using namespace std;

// Method 2

int GreatestNum(int a, int b, int c){
    if(a==b==c){
        cout<<"ALL are equals"<<endl;
    }
    else {
        return (a > b) ? (a>c) ? a : c : (b > c ) ? b : c;
    }

}

// Method 3

int Greatest(int a, int b, int c){
    if(a==b==c){
        cout<<"ALL are equals"<<endl;
      }
      else{
           int great=max(a, max(b,c));

           cout<<"Greatest number is :"<<great<<endl;
      }    
}

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

// Method 1

    if(num1==num2==num3){
        cout<<"all are equal!!"<<endl;
    }
    else if(num1>num2){
        if(num1>num3){
        cout<<"Greatest number is :"<<num1<<endl;
          }
     else{
        cout<<"Greatest number is :"<<num3<<endl;
        }
    }
    else{
        if(num2>num3){
        cout<<"Greatest number is :"<<num2<<endl;
          }
     else{
        cout<<"Greatest number is :"<<num3<<endl;
        }
    }
   
// method 2 function call
   cout<<"Greatest Number is :" <<GreatestNum(num1,num2,num3)<<endl;
   // Method 3 function call
   Greatest(num1, num2,num3);
   return 0;
}