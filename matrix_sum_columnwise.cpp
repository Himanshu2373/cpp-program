#include <iostream>

using namespace std;

int main()
{
    int num[3][3];
    
    cout<<"enter matrix :";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>num[i][j];
        }
    }
    
    
       for(int i=0; i<3; i++)
    {
        int sum=0;
        for(int j=0; j<3; j++)
        {
            
            sum+=num[j][i];
        }
        cout<<sum<<" ";
    }
    

    return 0;
}
