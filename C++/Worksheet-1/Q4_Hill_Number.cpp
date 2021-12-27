/*  Q4. Write a C++ program to print whether a number is a hill number or
    not.
    Note: Assume that a Hill Number is a natural number that has digits
         in ascending order followed by digits in descending order where
         consecutive digits are not the same i.e. the number has a peak and an
         ascending slope and descending slope.
         Example:
                    Hill Number: 147521, 23454
                    Not Hill Number: 1, 12, 22, 12334, 123212321
 */

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string NUM;
    int NO_DIG;
    int tmp;
    NUM = to_string(tmp);
    cout << "Enter a Number" << endl;
    cin >> tmp;

    /*

    cout<<tmp<<NO_DIG<<endl; */

    NO_DIG = NUM.size();
    int m = NO_DIG;
    int x = NO_DIG / 2;

    if (tmp < 100)
    {
        cout << "Not a hill Number\n";
        return 0;
    }

    for (int j = 0; j < x - 1; j++)
    {
        if (NUM.at(j) < NUM.at(j + 1))
            continue;
        else
        {
            cout << "Not a Hill Number\n";
            return 0;
            break;
        }

        for (int k = x; k < m - 1; k++)
        {
            if (NUM.at(k) > NUM.at(k + 1))
                continue;
            else
            {
                cout << "Not a Hill Number\n";
                return 0;
                break;
            }
        }
    }

    cout << "It is a Hill Number\n";

    return 0;
}
