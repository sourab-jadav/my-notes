#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<h;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}


int kthsmallest(int arr[],int n,int k)
{
    int l=0,r=n-1;
    while(l<=r)
    {
        int p=partition(arr,l,r);

            if(p==k-1)
            {
                return p;
            }
            else if(p>k-1)
            {
                r=p-1;
            }
            else{
                l=p+1;
            }
    }
}

int main(){

}
