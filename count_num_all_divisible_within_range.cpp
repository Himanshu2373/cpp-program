#include <iostream>
using namespace std;
int main()
{
    int num, high, low,  sum=0;
    cin>>num;
    int arr[num];
  for(int j=0; j<num; j++){
      cin>>arr[j];
  }
  
  cin>>low>>high;
  for(int i=low; i<=high; i++){
      int count=0;
      for(int j=0; j<num; j++){
          if(i%arr[j]==0){
              count++;
          }
      }
      if(count==num){
          sum++;
      }
  }
  cout<<sum;
  return 0;
}