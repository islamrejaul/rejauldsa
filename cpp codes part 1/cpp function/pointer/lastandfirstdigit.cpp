#include <iostream>
using namespace std;

void fun(int *x)
{
    int ld = *x % 10;
    cout << "last digit is" << ld << endl;
    while (*x > 9)
    {
        *x = *x / 10;
    }
    cout << "first digit is" << *x;
}

int main()
{
    int n;
    cout << "enter n";
    cin >> n;
    fun(&n);
}