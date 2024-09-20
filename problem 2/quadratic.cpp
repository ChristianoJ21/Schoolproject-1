#include <iostream>
#include <cmath>
using namespace std;

float a, b, c;
float d;
float x1, x2;

int main()
{
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    
    d = (b*b) - (4*a*c);
    
    if (a == 0) {
        cout << "value a must be more or less than 0" << endl;
    }
    else {
        if (d > 0) {
        x1 = ((-1*b + sqrt(d)) / 2*a);
        cout << "x1 = "<< x1 << endl;
        x2 = ((-1*b - sqrt(d)) / 2*a);
        cout << "x2 = "<< x2 << endl;
    }
    else if (d == 0) {
        x1 = -1*b / 2*a;
        x2 = -1*b / 2*a;
        cout << "x1 = "<< x1 << endl;
        cout << "x2 = "<< x2 << endl;
    }
    else {
        cout << "There are no real roots" << endl;
    }
    }
    return 0;
}
