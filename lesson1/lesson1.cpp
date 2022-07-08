#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, y=1;
    cin >> x;
    if (x < 0) {
        cout << "error";
    }
    else {
        for (int i = 2; i <= x; i++)
        {
            y *= i;
        }
        cout << y;
    }
}