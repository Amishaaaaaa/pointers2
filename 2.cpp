/*
Q2 - Write a program to find the sum of all the elements of an array. Use pointers to traverse
the array. The first line of the input contains the size of the array.
The second line of input contains the elements of the array.
*/
#include<iostream>
using namespace std;

void sum(int *arr,int *n){
    int sum=0;
    for(int i=0;i<*n;i++){
        sum+=arr[i];
    }
    cout<<sum;
    return;
}

int main(){
    int n;
    cin>>n;
    int *ptrn=&n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sum(arr,ptrn);
    return 0;
}