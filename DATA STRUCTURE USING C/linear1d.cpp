#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=5;
    int key=4;
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            cout<<"the element is present at index "<<i;
            break;
        }
    }
    return 0;
}