#include <iostream>
using namespace std;

void sum(int n)
{
    int sum = 0;
    while (n != 0)
    {

        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "Sum of Digits without Recursion is: " << sum << endl;
}
int sum_re(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return ((n % 10) + sum_re(n / 10));
    }
}

int main()
{
    int N;
    int sum1;
    cout << "Enter Number" << endl;
    cin >> N;

    sum(N);
    sum1 = sum_re(N);

    cout << "Sum of Digits with Recursion is: " << sum1;
    return 0;
}
