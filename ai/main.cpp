#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, x, fx;

    // ���� ��������
    cout << "������� �������� a, b, c, x: ";
    cin >> a >> b >> c >> x;

    // �������� ������
    if ((x + a) < 0 && c == 0) {
        if (a * x == 0) {
            cout << "������: ������� �� ���� � ��������� 1/(a*x)" << endl;
            return 1;
        }
        fx = 1.0 / (a * x) - b;
    }
    else if ((x + a) > 0 && c != 0) {
        if (sin(x) == 0) {
            cout << "������: ������� �� ���� � ��������� (x - a)/sin(x)" << endl;
            return 1;
        }
        fx = (x - a) / sin(x);
    }
    else {
        if (c == 6) {
            cout << "������: ������� �� ���� � ��������� (10*x)/(c - 6)" << endl;
            return 1;
        }
        fx = (10 * x) / (c - 6);
    }

    // ����� ����������
    cout << fixed << setprecision(5);
    cout << "�������� x = " << x << endl;
    cout << "�������� ������� f(x) = " << fx << endl;

    return 0;
}
