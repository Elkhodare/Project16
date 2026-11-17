#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    float m1, m2, m3, avg;
    cin >> name >> m1 >> m2 >> m3;
    avg = (m1 + m2 + m3) / 3.0;

    cout << fixed << setprecision(1);
    cout << "the name of the student is " << name << " and his average is " << avg << endl;
    return 0;
}