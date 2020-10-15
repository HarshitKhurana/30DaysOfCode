#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}
int factorial(int n)
{
    // one liner
    return n > 0 ? factorial(n-) : 1;

    if(n > 0)
    return n * factorial(n - 1);
    else
    return 1;
}
