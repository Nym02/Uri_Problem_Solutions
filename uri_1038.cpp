#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    double x1, x2, x3, x4, x5;

    x1 = 4.00;
    x2 = 4.50;
    x3 = 5.00;
    x4 = 2.00;
    x5 = 1.50;


    cout << fixed << setprecision(2);
    if(a == 1)
    {
        cout << "Total: R$ " << (x1*b) << endl;
    }
    else if(a == 2)
    {
        cout << "Total: R$ " << (x2*b) << endl;
    }
    else if(a == 3)
    {
        cout << "Total: R$ " << (x3*b) << endl;
    }
    else if (a == 4)
    {
        cout << "Total: R$ " << (x4*b) << endl;
    }
    else if (a == 5)
    {
        cout << "Total: R$ " << (x5*b) << endl;
    }



}
