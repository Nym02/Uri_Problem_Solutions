#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum_CD = c + d;
    int sum_AB = a + b;

    if(b > c && d > a && sum_CD > sum_AB && c >= 0 && d >=0 && a % 2 == 0 )
    {
        cout << "Valores aceitos" << endl;
    }
    else
    {
        cout << "Valores nao aceitos" << endl;
    }

}
