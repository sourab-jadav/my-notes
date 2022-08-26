/*package whatever //do not write package name here */

import java.util.*;

class GFG {
    
    int getMinDiff(int arr[], int n){
        Arrays.sort(arr);
        
        int res = Integer.MAX_VALUE;
        for(int i = 1; i < n; i++){
            res = Math.min(res, arr[i] - arr[i-1]);
        }
        return res;
    }
	public static void main (String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int arr[] = new int[n];
		
		for(int i = 0; i < n; i++)
		arr[i] = sc.nextInt();
		
		GFG gfg = new GFG();
		System.out.println(gfg.getMinDiff(arr, n));
	}
}
