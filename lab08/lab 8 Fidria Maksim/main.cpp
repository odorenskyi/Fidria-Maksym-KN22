#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double x = 0;
    double y = 0;
    double z = 0;
    double s = 0;

    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;
    cout << "Enter z: " << endl;
    cin >> z;

    s = sin(x) / sqrt(abs((y*z) / x + y)) + 3 * pow(y, 5);

    cout << "S = " << s << endl;
}
