#include <iostream>
using namespace std;

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
    cout << "Метров: " << out;
}

int main()
{
    
}
