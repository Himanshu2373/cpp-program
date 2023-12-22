#include <iostream>
using namespace std;
int main()
{
    int n[3], *p[3],i;
    
    //cout<<"enter element in array" ;
    for(i=0; i<3;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<3;i++)
    {
        p[i]=&n[i];
    }
     for(i=0;i<3;i++)
    {
        cout<<*p[i];
    }
    return 0;
}