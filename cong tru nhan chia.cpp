#include <iostream>
using namespace std;

// Hàm cộng
float cong(float a, float b) {
    return a + b;
}

// Hàm trừ
float tru(float a, float b) {
    return a - b;
}

// Hàm nhân
float nhan(float a, float b) {
    return a * b;
}

// Hàm chia
float chia(float a, float b) {
    return a / b;
}

int main() {
    float a, b;
    int luaChon;

    cout << "Nhap so a: ";
    cin >> a;

    cout << "Nhap so b: ";
    cin >> b;

    cout << "===== MENU =====" << endl;
    cout << "1. Phep cong" << endl;
    cout << "2. Phep tru" << endl;
    cout << "3. Phep nhan" << endl;
    cout << "4. Phep chia" << endl;
    cout << "Chon phep toan (1-4): ";
    cin >> luaChon;

    switch (luaChon) {
        case 1:
            cout << "Ket qua: " << cong(a, b);
            break;
        case 2:
            cout << "Ket qua: " << tru(a, b);
            break;
        case 3:
            cout << "Ket qua: " << nhan(a, b);
            break;
        case 4:
            if (b != 0)
                cout << "Ket qua: " << chia(a, b);
            else
                cout << "Khong the chia cho 0!";
            break;
        default:
            cout << "Lua chon khong hop le!";
    }

    return 0;
}