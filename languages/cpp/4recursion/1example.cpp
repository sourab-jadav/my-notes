#include <iostream>

using namespace std;

void fun1(int n) {
	if(n == 0)
		return;
	cout<<"sourab"<<" ";
	fun1(n - 1);
}
int main() {
	fun1(823);
	return 0;
}
