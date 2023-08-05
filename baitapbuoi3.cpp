#include <iostream>

bool isPrime(int number) {
if (number <= 1)
return false;

for (int i = 2; i * i <= number; i++) {
    if (number % i == 0)
        return false;
}

return true;
}

void bai1() {
int n;
float sum = 0.0;

std::cout << "Nhap vao so nguyen duong n: ";
std::cin >> n;

for (int i = 1; i <= n; i++){
    sum += 1.0 / (2 * i);
}

std::cout << "Tong S = " << sum << std::endl;
}

void bai3() {
int N;

std::cout << "Nhap gia tri N: ";
std::cin >> N;

std::cout << "Cac so nguyen to nho hon " << N  <<" la:\n";

for (int i = 2; i < N; i++) {
    if (isPrime(i))
        std::cout << i << " ";
}

std::cout << std::endl;
}

void bai4() {
int number;
    std::cout << "Nhap nguyen duong: ";
    std::cin >> number;

    int sum = 0;
    int temp = number;

    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    std::cout << "Tong cac chu so trong so " << number << " la: " << sum << std::endl;
}

int gcd(int a, int b) {
if (b == 0)
return a;
else
return gcd(b, a % b);
}

void bai5() {
int a, b   ;
std::cout << "Nhap so nguyen duong a: ";
std::cin >> a;
std::cout << "Nhap so nguyen duong b: ";
std::cin >> b;

int ucln = gcd(a, b);

std::cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << ucln << std::endl;
}

main() {
    int choice;

    do {
        std::cout << "----- MENU -----" << std::endl;
        std::cout << "1. Bai tap 1" << std::endl;
        std::cout << "2. Bai tap 2" << std::endl;
        std::cout << "3. Bai tap 3" << std::endl;
        std::cout << "4. Bai tap 4" << std::endl;
        std::cout << "5. Bai tap 5" << std::endl;
        std::cout << "0. Thoat" << std::endl;
        std::cout << "Nhap lua chon cua ban: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                bai1();
                break;
            case 3:
                bai3();
                break;
            case 4:
                bai4();
                break;
            case 5:
                bai5();
                break;
            case 0:
                std::cout << "Ket thuc chuong trinh." << std::endl;
                break;
            default:
                std::cout << "Lua chon khong hop le. Vui long chon lai." << std::endl;
                break;
        }
    } while (choice != 0);

    return 0;
}