#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
	if(n==0)
	   return 1;
		
	return n * fact(n-1);
}
int main() {
    
    	int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}
int fact(int x)
{
  if(n==0)
  {
    return 1;
  }
  return n*fact(n-1);
}

#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
	int res = 1;

	for(int i=2; i<=n; i++)
	{
		res = res * i;
	}
	
	return res;
}
int main() {
    
    	int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}
