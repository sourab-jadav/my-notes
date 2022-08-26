/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
import static java.lang.System.out;

class GFG {



	static int fib(int n)
        {
            int f[] = new int[n+1];
            
            f[0]=0;
            f[1]=1;
            
            for(int i=2;i<=n;i++)
            {
                f[i] = f[i-1] + f[i-2];
            }
            
        
            return f[n];
            
        }


	public static void main (String[] args) {
		
		int n = 5;

		out.println(fib(n));

	}
}
