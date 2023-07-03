/*
Q1 -Write a program to print the kth element of an array using pointers.
The first line of the input contains the size of the array and the value of k.
The second line of input contains the elements of the array. You can assume that 0 <= k < size
of the array.
*/
#include<iostream>
using namespace std;

void find_ele(int *array,int *n,int *k){
    for(int i=0;i<*n;i++){
        if(i==*k){
            cout<<array[i-1];
            break;
        }
    }
    return;
}

int main(){
    int n,k;
    cin>>n>>k;
    int *ptrn=&n;
    int *ptrk=&k;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    find_ele(array,ptrn,ptrk);
    return 0;
}

