
#include <iostream>
#include <limits.h>
using namespace std;

bool isPal(int n)
{
  int result=0;
  while(n!=0)
    {
      int ld=temp%10;
      result=result*10+ld;
      temp=temp/10;
    }
  return rev==n;
}
int main() {
    
    	int number = 4553;
    	
    	cout<<(bool)isPal(number);
    	
    	return 0;
}
