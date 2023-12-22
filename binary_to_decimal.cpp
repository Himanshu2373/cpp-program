#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int num; 
    cout<<"Enter binary digit :";
    cin>>num;
  
    int temp=num;
    int base =1;
    int dec_val=0;
    while(temp)
    {
        int last_digit=temp%10;
        dec_val+=last_digit*base;
        base= base*2;
        temp=temp/10;
    }
    cout<< endl <<dec_val ; 
} 
