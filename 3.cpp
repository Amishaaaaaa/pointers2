/*
Q3 - Write a program to traverse the array in the reverse order using pointers.
The first line of the input contains the size of the array.
The second line of input contains the elements of the array.
*/
#include<iostream>
using namespace std;

void reverse(int *arr,int *n){
    for(int i=*n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int *ptrn=&n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,ptrn);
    return 0;
}