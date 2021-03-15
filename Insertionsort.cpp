#include<iostream>
using namespace std;
int Insertionsort(int A[],int n){
for(int i=0;i<n;i++){
    int value=A[i];
    int hole=i;
    while(hole>0 && A[hole-1]>value){
        A[hole]=A[hole-1];
        hole=hole-1;
    }
    A[hole]=value;
}
}
int main()
{
    int A[]={8,4,1,2,5,3};
    Insertionsort(A,6);
    for(int i=0;i<6;i++)
        cout<<A[i]<<" ";
}
