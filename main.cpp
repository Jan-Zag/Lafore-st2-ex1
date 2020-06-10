#include <iostream>

using namespace std;

int main()
{
    double k = 7.481;

    double gallons;
    cout << "gallons = "; cin >> gallons;

    double cubeFuts = gallons/k;
    cout << "cubeFuts = " << cubeFuts << endl;

    return 0;
}
