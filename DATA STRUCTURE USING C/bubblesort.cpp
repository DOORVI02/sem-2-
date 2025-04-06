#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,2,7,3,6};
    int size=6;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int c=0;c<size;c++){
        cout<<arr[c]<<" ";
    }
    return 0;
}