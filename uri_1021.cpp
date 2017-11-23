#include <iostream>
using namespace std;

int main()
{
    double x ;
    cin >> x;
    int n = x * 100;
    cout << "NOTAS:" << endl;

    int taka = n / 10000;
    cout << taka <<" nota(s) de R$ 100.00"<< endl;
    int taka1 = n % 10000;

    int taka50 = taka1 / 5000;
    cout << taka50 <<" nota(s) de R$ 50.00"<< endl;
    int taka1_50 = taka1 % 5000;

    int taka_20 = taka1_50 / 2000;
    cout << taka_20 <<" nota(s) de R$ 20.00"<< endl;
    int taka1_20 = taka1_50 % 2000;

    int taka_10 = taka1_20 / 1000;
    cout << taka_10 <<" nota(s) de R$ 10.00"<< endl;
    int taka1_10 = taka1_20 % 1000;

    int taka_5 = taka1_10 / 500;
    cout << taka_5 <<" nota(s) de R$ 5.00"<< endl;
    int taka1_5 = taka1_10 % 500;

    int taka_2 = taka1_5 / 200;
    cout << taka_2 <<" nota(s) de R$ 2.00"<< endl;
    int taka2 = taka1_5 % 200;

    cout << "MOEDAS:" << endl;

    int coin_100 = taka2 / 100;
    cout << coin_100 << " moeda(s) de R$ 1.00" << endl;
    int coin100 =  taka2 % 100;

    int coin_50 = coin100 / 50;
    cout << coin_50 << " moeda(s) de R$ 0.50" << endl;
    int coin50 = coin100 % 50;

    int coin_25 = coin50 / 25;
    cout << coin_25 << " moeda(s) de R$ 0.25" << endl;
    int coin25 = coin50 % 25;

    int coin_10 = coin25 / 10;
    cout << coin_10 << " moeda(s) de R$ 0.10" << endl;
    int coin10 = coin25 % 10;

    int coin_5 = coin10 / 5;
    cout << coin_5 << " moeda(s) de R$ 0.05" << endl;
    int coin5 = coin10 % 5;



    int coin_1 = coin5 / 1;
    cout << coin_1 << " moeda(s) de R$ 0.01" << endl;







}
