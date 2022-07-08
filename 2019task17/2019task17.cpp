
#include <iostream>
using namespace std;
int delete_chet(int a) {
	if (a == 0) {
		return 0;
	}
	else if (a % 2 == 0) {
		return delete_chet(a / 10);
	}
	else {
		return a%10 + 10 * delete_chet(a / 10);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << delete_chet(n);
}

