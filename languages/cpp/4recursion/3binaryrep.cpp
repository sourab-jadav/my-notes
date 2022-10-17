#include <iostream>
using namespace std;


void fun(long long n) {
	if(n == 0)
		return;
	
	fun(n / 2);

	cout<<(n % 2)<<" ";
}
int main() {
	
	fun(2983742932829374293);
	
	return 0;
}

