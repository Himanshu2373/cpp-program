#include <iostream>

using namespace std;
int main()
{
    int a[5], *p,i;
    for(i=0; i<5;i++)
    {
        cin>>a[i];
    }
    
    p=a;
    
    for(i=0; i<5;i++)
    {
        cout<<*p;
        
        p=p+1;
    }

    return 0;
}
