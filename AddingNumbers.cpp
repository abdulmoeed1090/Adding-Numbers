#include <iostream>
using namespace std;

// main function
int main()
{
    // variables
    int a, b, c, d, e, f, g, h, i, j, total;
    cout << "enter first number :"; // enter series from 0 to 9
    cin >> a;
    cout << "enter second number:";
    cin >> b;
    cout << "enter third number:";
    cin >> c;
    cout << "enter fourth number:";
    cin >> d;
    cout << "enter fifth number:";
    cin >> e;
    cout << "enter sixth number:";
    cin >> f;
    cout << "enter seventh number:";
    cin >> g;
    cout << "enter eight number:";
    cin >> h;
    cout << "enter ninth number:";
    cin >> i;
    cout << "enter tenth number:";
    cin >> j;
    // adding all the numbers
    total = (a += b += c += d += e += f += g += i += j);
    cout << total << endl;
    return 0;
}
