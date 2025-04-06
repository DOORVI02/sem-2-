#include<iostream>
using namespace std;
int binary(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    int key=2;
    int result=binary(arr,size,key);
    if(result==-1){
        cout<<"no such element is there";
    }else{
        cout<<result;
    }
    return 0;
}