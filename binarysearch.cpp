#include<iostream>
using namespace std;
int Bsearch(int A[],int n,int x,bool fsearch)
{
    int low=0,high=n-1,result=-1;

        int mid=(low+(high-low))/2;
        if(A[mid]==x)
            return mid;

        else if(fsearch == true){
            high=mid-1;
        else
            low=mid+1;
        }
        else if(x<A[mid])
            high=mid-1;
        else{
            low=mid+1;
        }
    return result;

        }


int main(){
int x;
int A[]={1,3,3,5,5,5,6,6,6,8};

cout<<"Enter value to search";
cin>>x;
int findex=Bsearch(A,10,x,true);
int lindex=Bsearch(A,10,x,false);
if(findex == -1)
cout<<"The %d count is %d",x,0);
else
cout<<"The %d count is %d",x,lindex-findex+1);
}


