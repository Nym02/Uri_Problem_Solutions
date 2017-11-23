#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int year = n / 365;
    cout << year <<" ano(s)" << endl;
    int a = n%365;

    int month = a / 30;
    cout << month <<" mes(es)" << endl;

    int day = a % 30;
    cout << day <<" dia(s)" << endl;
}
