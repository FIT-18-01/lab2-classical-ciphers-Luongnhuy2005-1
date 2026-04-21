# Run Log – FIT4012 Lab 2

## Caesar Cipher
- [x] Đã chạy Caesar encrypt với `I LOVE YOU`, key `3` -> Kết quả: `L ORYH BRX`
- [x] Đã chạy Caesar encrypt với `hello world`, key `5` -> Kết quả: `mjqqt btwqi`
- [x] Đã chạy Caesar decrypt với `LORYH BRX`, key `3` -> Kết quả: `I LOVE YOU`

## Rail Fence Cipher
- [x] Đã chạy Rail Fence encrypt với `I LOVE YOU`, `2` rails -> Kết quả: `ILV O OEYU`
- [x] Đã chạy Rail Fence encrypt với `I LOVE YOU`, `4` rails -> Kết quả: `I EYLVOOU`
- [x] Đã chạy Rail Fence decrypt với `ILV O OEYU`, `2` rails -> Kết quả: `I LOVE YOU`

## Validation / File input
- [x] Đã kiểm tra đầu vào không hợp lệ: Nhập "Hello@World", chương trình báo lỗi "Invalid input. Only letters and spaces are allowed."
- [x] Đã đọc dữ liệu từ `data/input.txt` -> Kết quả: `I LOVE YOU`, sau đó mã hóa với 2 rails: `ILV O OEYU`

## Điều em học được từ bài lab
1. Hiểu được nguyên lý hoạt động của Caesar Cipher và Rail Fence Cipher.
2. Biết cách cài đặt mã hóa và giải mã bằng C++.
3. Học được cách xử lý đầu vào, kiểm tra tính hợp lệ và đọc file.
4. Khó khăn lớn nhất là hiểu cách zigzag trong Rail Fence.
5. Giúp hiểu rõ hơn về bảo mật cổ điển và tầm quan trọng của mã hóa hiện đại.
