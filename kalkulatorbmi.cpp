#include <iostream>
using namespace std;

int main() {
    float berat, tinggi, bmi;

    cout << "BMI Calculator by Bima Rifqi Pratama" << endl;

    cout << "Masukin berat badan (kg): ";
    cin >> berat;

    cout << "Masukin tinggi badan (cm): ";
    cin >> tinggi;

    tinggi = tinggi / 100; 

    bmi = berat / (tinggi * tinggi);

    cout << "\nBMI kamu = " << bmi << " kg/m^2" << endl;

    if (bmi < 18.5)
        cout << "Kategori: kurang makan inimah" << endl;
    else if (bmi < 25)
        cout << "Kategori: normal" << endl;
    else if (bmi < 30)
        cout << "Kategori: overweight" << endl;
    else
        cout << "Kategori: hino dutro" << endl;

    return 0;
} 