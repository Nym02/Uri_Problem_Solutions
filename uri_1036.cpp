#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double Fix_Up = (b*b) - (4*a*c);
    double Fix_down = (2*a);
    double Fix_root = sqrt(Fix_Up);

    if(Fix_down == 0 || Fix_Up < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5);

        double R1 = ((-b + Fix_root) / Fix_down);
        cout << "R1 = " << R1 << endl;

        double R2 = ((-b - Fix_root) / Fix_down);
        cout << "R2 = " << R2 << endl;
    }




}
