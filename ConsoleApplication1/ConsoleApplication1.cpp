#include <iostream>
using namespace std;

void task1() {
    for (int i = 1; i < 11; i++)
        cout << i << endl;
}

void task2() {
    for (int i = 1; i < 11; i++) {
        if (i % 2 != 0)
            cout << i << endl;
    }
}

void task3() {
    int n;
    cout << "Count: ", cin >> n;
    cout << endl;
    for (int i = 1; i < n + 1; i++) {
        if (i % 4 == 3)
            cout << i << endl;
    }
}

void task4() {
    int n;
    int tmp = 1;
    int tmp2 = 1;
    int ciTMP;
    cout << "Count: ", cin >> n;
    cout << endl;
    cout << tmp << endl;
    cout << tmp2 << endl;
    for (n - 2; n != 0; n--) {
        ciTMP = tmp + tmp2;
        tmp = tmp2;
        tmp2 = ciTMP;
        cout << ciTMP << endl;
    }

}

void task5() {
    int k, n;

}

void t6() {
    double km;
    cout << "KM: "; cin >> km;
    cout << "Miles: " << 0.621371 * km << endl;
}
void t7() {
    double km;
    cout << "KM: "; cin >> km;
    cout << "Foots: " << km * 3280.84 << endl;
    cout << "Miles: " << 0.621371 * km << endl;
}
void t8() {
    double sazh;
    cout << "Sazh: "; cin >> sazh;
    cout << "Metters: " << 2.16 * sazh << endl;
}
void t9() {
    int sazh, arsh;
    double out = 0;
    cout << "Сажени: "; cin >> sazh;
    cout << "Аршины: "; cin >> arsh;
    out += sazh * 2.16;
    out += arsh * (2.16 / 3);
    cout << "Метров: " << out << endl;
}

void t10() {
    double m;
    cout << "M/s: "; cin >> m; cout << endl;
    cout << "KM/s: " << m * 3.6 << endl;
}

void t11() {
    double km;
    cout << "KM/s: "; cin >> km; cout << endl;
    cout << "KM/s: " << km / 3.6 << endl;
}

void t12() {
    int n;
    int outer = 0;
    cout << "Count: "; cin >> n; cout << endl;
    for (n; n != 0; n--) {
        outer += n;
    }
    cout << outer << endl;
    
}

int main()
{

}
