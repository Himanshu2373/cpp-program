#include <iostream>

using namespace std;

int main()
{
   int i=5, *j,**k;
   j=&i;
   k=&j;
   cout<<i<<endl;     // output 5
   cout<<j<<endl;     // address of j
   cout<<*j<<endl;    // 5
   cout<<k<<endl;     // address of k
   cout<<**k;         //5
    return 0;
}