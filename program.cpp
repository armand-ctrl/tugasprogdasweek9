#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.141592653589793;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double radius(double x1, double y1, double x2, double y2) {
    return distance(x1, y1, x2, y2);
}

double circumference(double r) {
    return 2.0 * pi * r;
}

double area(double r) {
    return pi * r * r;
}

int main(){
    cout << "apa yang ingin anda hitung?" << endl;
    cout << "1. Jarak antara dua titik" << endl;
    cout << "2. Jari-jari lingkaran" << endl;
    cout << "3. Keliling lingkaran" << endl;
    cout << "4. Luas lingkaran" << endl;
    int choice;
    cin >> choice;
    switch(choice) {
        case 1: {
            double x1, y1, x2, y2;
            cout << "Masukkan koordinat titik pertama (x1 y1): ";
            cin >> x1 >> y1;
            cout << "Masukkan koordinat titik kedua (x2 y2): ";
            cin >> x2 >> y2;
            cout << "Jarak antara dua titik adalah: " << distance(x1, y1, x2, y2) << endl;
            break;
        }
        case 2: {
            double x1, y1, x2, y2;
            cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
            cin >> x1 >> y1;
            cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
            cin >> x2 >> y2;
            cout << "Jari-jari lingkaran adalah: " << radius(x1, y1, x2, y2) << endl;
            break;
        }
        case 3: {
            double r;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> r;
            cout << "Keliling lingkaran adalah: " << circumference(r) << endl;
            break;
        }
        case 4: {
            double r;
            cout << "Masukkan jari-jari lingkaran: ";
            cin >> r;
            cout << "Luas lingkaran adalah: " << area(r) << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }
    return 0;
}
