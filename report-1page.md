# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Bài lab này nhằm cài đặt và mở rộng hai mã cổ điển: Caesar Cipher và Rail Fence Cipher, bao gồm mã hóa, giải mã, xử lý đầu vào và đọc file, đồng thời làm quen với quy trình nộp bài qua GitHub.

## 2. Cách làm
- Hoàn thiện `src/caesar.cpp` với hỗ trợ chữ thường, giữ dấu cách và chức năng giải mã.
- Hoàn thiện `src/rail_fence.cpp` với giải mã, giữ dấu cách, kiểm tra đầu vào và đọc file từ `data/input.txt`.
- Chạy thử các test case và ghi lại kết quả vào `tests/test_cases.md` và `logs/run_log.md`.
- Viết báo cáo tóm tắt trong `report-1page.md`.

## 3. Kết quả chính
### 3.1 Caesar Cipher
| Input | Key | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Mã hóa thành công, giữ dấu cách |
| hello world | 5 | mjqqt btwqi | Chữ thường được dịch đúng |
| LORYH BRX | 3 | I LOVE YOU | Giải mã ngược lại chính xác |

### 3.2 Rail Fence Cipher
| Input | Rails | Ciphertext / Plaintext | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV O OEYU | Mã hóa theo zigzag |
| I LOVE YOU | 4 | I EYLVOOU | Quan sát sự thay đổi với 4 rails |
| ILV O OEYU | 2 | I LOVE YOU | Giải mã thành công |

### 3.3 Input validation / file input
- Trường hợp đầu vào không hợp lệ: Nhập ký tự đặc biệt như "@", chương trình báo lỗi "Invalid input. Only letters and spaces are allowed."
- Kết quả đọc từ `data/input.txt`: "I LOVE YOU", sau đó mã hóa với 2 rails thành "ILV O OEYU"

## 4. Kết luận
Từ bài lab, tôi học được nguyên lý cơ bản của mã hóa cổ điển, cách cài đặt bằng C++ và tầm quan trọng của kiểm tra đầu vào. Khó khăn lớn nhất là hiểu và triển khai thuật toán zigzag cho Rail Fence Cipher. Điều này giúp tôi hiểu rõ hơn về sự yếu kém của mã cổ điển so với mã hiện đại.
