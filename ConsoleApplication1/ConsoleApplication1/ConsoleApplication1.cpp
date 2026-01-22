

#include <iostream>
#include"../Project1/math.h"
using namespace std;
int main() {
    int a;
    int b;
    char symbol;
    cout << "Enter : ";
    cin >> a;
    cin >> symbol;
    cin >> b;
    int result;

    if (symbol == '+') {
        result = addition(a, b);
    }
    if (symbol == '-') {
        result = subtract(a, b);
    }
    if (symbol == '*') {
        result = multiply(a, b);
    }
    if (symbol == '/') {
        result = divide(a, b);
    }
    cout << "Result: " << result << endl;
}



int main() {
    int a, b;
    char znak;

    cout << "Въведете израз (напр. 5 + 3): ";
    cin >> a >> znak >> b;

    int rezultat = 0;

    if (znak == '+') {
        rezultat = addition(a, b);
    }
    if (znak == '-') {
        rezultat = subtract(a, b);
    }
    if (znak == '*') {
        rezultat = multiply(a, b);
    }
    if (znak == '/') {
        rezultat = divide(a, b);
    }

    cout << "Резултат: " << rezultat << endl;


}
