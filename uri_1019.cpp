#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a = n / 3600;

    int b = n % 3600;

    int c = b / 60;

    int d = b % 60;


    cout <<a<<":"<<c<<":"<<d<<endl;
}
