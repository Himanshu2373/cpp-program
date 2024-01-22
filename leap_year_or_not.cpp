// Program to Check Whether a Year is a Leap Year or Not in C++

#include<iostream>

using namespace std;

// Method 2

int LeapYear(int year){
    int res=(year%400==0|| (year%4==0 && year%100!=0))? 1:0;
    if(res){
        cout<<"Leap year"<<endl;
    }
    else{
        cout<<"not leap year"<<endl;
    }
}  

int main()
{
    int year;
    cin>>year;
  
//   method 1

    if(year%400==0){
        cout<<"Leap Year"<<endl;
    }
    else if(year%4==0 && year%100!= 0)
    {
        cout<<"Leap Year"<<endl;
    }
    else{
        cout<<"Not a Leap year"<<endl;
    }

    // Method 2 function call
    
    LeapYear(year);
}