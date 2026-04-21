#include <cctype>
#include <iostream>
#include <string>

using namespace std;

/**
 * Kiểm tra thông điệp có hợp lệ hay không.
 * Chỉ cho phép chữ cái (a-z, A-Z) và khoảng trắng.
 */
bool is_valid_message(const string &text) {
    if (text.empty()) return false;
    for (char c : text) {
        if (!isalpha(static_cast<unsigned char>(c)) && c != ' ') {
            return false;
        }
    }
    return true;
}

/**
 * Dịch chuyển một ký tự theo bảng chữ cái.
 * Công thức: (vị trí + độ dời) % 26
 */
char shift_char(char c, int shift) {
    if (!isalpha(static_cast<unsigned char>(c))) return c;

    char base = isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
    
    // Xử lý shift âm hoặc shift > 26
    shift %= 26;
    if (shift < 0) shift += 26;

    return static_cast<char>((c - base + shift) % 26 + base);
}

/**
 * Mã hóa chuỗi bằng cách dịch chuyển từng ký tự.
 */
string caesar_encrypt(const string &plaintext, int shift) {
    string ciphertext = "";
    // Dùng reserve để tối ưu việc cấp phát bộ nhớ chuỗi
    ciphertext.reserve(plaintext.length());
    for (char c : plaintext) {
        ciphertext += shift_char(c, shift);
    }
    return ciphertext;
}

/**
 * Giải mã bằng cách dịch chuyển ngược lại (âm shift).
 */
string caesar_decrypt(const string &ciphertext, int shift) {
    return caesar_encrypt(ciphertext, -shift);
}

int main() {
    // Thiết lập để in ra tiếng Việt (tùy thuộc vào hệ điều hành/console)
    cout << "=== Caesar Cipher Demo ===\n";
    cout << "1. Ma hoa (Encrypt)\n2. Giai ma (Decrypt)\nChon: ";

    int choice;
    if (!(cin >> choice)) {
        cout << "Loi: Vui long nhap so.\n";
        return 1;
    }
    cin.ignore(1000, '\n'); // Xóa bộ đệm an toàn hơn

    cout << "Nhap thong diep: ";
    string message;
    getline(cin, message);

    if (!is_valid_message(message)) {
        cout << "Loi: Thong diep chi duoc chua chu cai va khoang trang.\n";
        return 1;
    }

    cout << "Nhap khoa (key - so nguyen): ";
    int shift;
    if (!(cin >> shift)) {
        cout << "Loi: Khoa phai la mot so nguyen.\n";
        return 1;
    }

    cout << "--------------------------\n";
    if (choice == 1) {
        cout << "Ket qua Ma hoa: " << caesar_encrypt(message, shift) << "\n";
    } 
    else if (choice == 2) {
        cout << "Ket qua Giai ma: " << caesar_decrypt(message, shift) << "\n";
    } 
    else {
        cout << "Loi: Lua chon khong hop le.\n";
    }

    return 0;
}