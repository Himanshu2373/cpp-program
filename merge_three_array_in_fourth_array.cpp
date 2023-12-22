#include <iostream>

using namespace std;

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int arr3[]={11,12,13,14,15};
    
    
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    
    int size4=size1+size2+size3;
    int arr4[size4];
    for(int i=0; i<size1; i++){
        arr4[i]=arr1[i];
    }
    int j=size1;
    for(int i=size2-1; i>=0; i--,j++)
    {
        
        arr4[j]=arr2[i];
        
        
    }
    int k=size1+size2;
    for(int i=0; i<size3; i++,k++)
    {
        
        arr4[k]=arr3[i];
        
    }
    
    for(int i=0; i<size4; i++)
    {
        cout<<arr4[i]<<" ";
    }

    return 0;
}

