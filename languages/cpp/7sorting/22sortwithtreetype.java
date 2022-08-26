
import java.util.*;
import java.lang.*;
import java.io.*;

class Solution
{
    public static void main (String[] args) 
    {
        int arr[] = new int[]{0,1,1,2,0,1,1,2};
        
        int n = arr.length;
        
        sort(arr,n);
	
	    for(int x:arr)
            System.out.print(x+" ");
        
    }
    
    static void sort(int arr[],int n){
        int[] temp=new int[n];int i=0;
        
        for(int j=0;j<n;j++)
            if(arr[j]==0)
                temp[i++]=arr[j];
        for(int j=0;j<n;j++)
            if(arr[j]==1)
                temp[i++]=arr[j];
        for(int k=0;k<n;k++)
            if(arr[k]==2)
                temp[i++]=arr[k];
        for(int j=0;j<n;j++)
            arr[j]=temp[j];
    }
}
