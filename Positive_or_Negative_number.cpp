#include <iostream>
using namespace std;


void BruteForceMethod(int num)
{
    if (num > 0)
         cout << "The number is positive"<<endl;
    else if (num < 0)
        cout << "The number is negative"<<endl;
    else
        cout << "Zero"<<endl;
}

void NestedIfElseMethod(int num){
 
  if (num >= 0)
    {
        if (num == 0)
            cout << "Zero"<<endl;
        else
            cout << "The number is positive"<<endl;
    }
    else
            cout << "The number is negative"<<endl;

}

void  TernaryMethod(int num){
     
      if(num == 0)
            cout << "Zero"<<endl; 
            
        else (num > 0) ? cout << "Positive"<<endl: cout << "Negative"<<endl;
}
int main()
{
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
     cout<<"Through Brute Force Method:"<<endl;
    BruteForceMethod(num);

     cout<<"Through Nested If Else Method:"<<endl;
    NestedIfElseMethod(num);
    
     cout<<"Through Ternary Method "<<endl;
    TernaryMethod(num);
    return 0;
}