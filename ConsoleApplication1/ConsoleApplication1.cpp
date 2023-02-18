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

void t13() {
    int sum = 0;

    for (int i = 1; i <= 12; i += 2)
    {
        sum += i;
    }

    cout << "Sum of odd numbers between 0 and 12 = " << sum;

}

void t14() {
    int arr[20];

    for (int i = 0; i < 20; i++)
        arr[i] = 2 * i;

    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";

}

void t15() {
    int ar[10];
    int i = 0;
    int j = 1;
    while (i < 10)
    {
        if (j & 1)
        {
            ar[i] = j;
            i++;
        }
        j++;
    }
    for (i = 0; i < 10; i++)
    {
        cout << ar[i] << " ";
    }
}

void t16() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * (i + 1);
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << endl;
    }
}

void t17() {
 
    int arr[11];


    for (int i = 0; i <= 10; i++)
        arr[i] = pow(2, i);


    for (int i = 0; i <= 10; i++)
        cout << arr[i] << " ";
}

void t18() {
    int Fibonacci[10];
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (int i = 2; i < 10; i++)
    {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << Fibonacci[i] << " ";
    }
}

void t19() {
    int arr[20];

 
    for (int i = 0; i < 20; i++) {
        if (i % 2 == 0)
            arr[i] = i;
        else
            arr[i] = i * i;
    }
    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";
}

void t20() {

    const int arrSize = 10;

    int array[arrSize]; 

    for (int i = 0; i < arrSize; i++) 
    {
        cout << "Enter the value of the element at index " << i << ": ";
        cin >> array[i];
        system("cls");
    }

    cout << "The array elements are:" << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void main() {
    t20();
}
