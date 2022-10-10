#include <iostream>
#include "Fracs.hpp"
#include "ComplexFracs.hpp"
using namespace std;

int main() {

    for (int den1=1; den1<10; ++den1) {
        for (int num1=0; num1<den1; ++num1) {
            for (int den2=1; den2<10; ++den2) {
                for (int num2=1; num2<den2; ++num2) {
                    const Frac f1(num1,den1);
                    const Frac f2(num2,den2);

                    f1.print();            cout << " / ";
                    f2.print();            cout << " = ";
                    f1.divide(f2).print(); cout <<  endl;

                }
            }
        }
    }
    cout << endl;

    const Frac f1(2,3);
    const Frac f2(3,5);
    const Frac f3(8,9);
    const Frac f4(7,12);

    const ComplexFrac z(f1, f2);
    const ComplexFrac y(f3, f4);

    z.print(); cout << endl;
    y.print(); cout << endl;
    z.print();            cout << " + ";
    y.print();            cout << " = ";
    z.add(y).print();     cout << endl;
    z.print();            cout << " * ";
    y.print();            cout << " = ";
    z.multiply(y).print(); cout << endl;
    z.print();            cout << " - ";
    y.print();            cout << " = ";
    z.subtract(y).print(); cout << endl;
    z.print();            cout << " / ";
    y.print();            cout << " = ";
    z.divide(y).print();  cout << endl;
    z.print();            cout << " = ";
    y.print();            cout << endl;
    cout << z.isEqual(z) << endl;

    return 0;
}
