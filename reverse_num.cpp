#include<iostream>
using namespace std;

// int main(){
//     int num,res;
//     int sum=0;
//     cin>>num;

//     while(num>0){
//         res=num%10;
//         sum=sum*10+res;
//         num=num/10;
//     }

//     cout<<sum<<endl;
// }


// Using  function recall

//   int  getSum(int n, int sum)  {  
      
//        if(n == 0) 
//        return sum;

//       sum=(sum*10)+(n%10);
//       return getSum(n / 10, sum );
//  }

// // // using recursion function
//  int sumOfDigit(int num, int rev){
//      if (num==0)
//     return rev;
   
//    int rem=num%10;
//    rev=rev*10+rem;
//    return sumOfDigit(num/10, rev);
   
// }
//  int main(){
//     int num, sum=0;
//     cin>>num;
//     // for function call
//     sum = getSum(num, sum);
//     cout << "The Sum of digits is: " << sum <<endl;

//     // for recursion call
//      cout << "The Sum of digits is: " << sumOfDigit(num, sum) ;
//     return 0;
//  }