Ví dụ : cho danh sách gồm các chữ số:12,54,67,21,56,43
Cách hoạt động của thuật toán sắp đổi chỗ trực tiếp :
+Hoạt động dựa trên việc triệt tiêu các cặp nghịch thế (là cặp số mà số bên trái lớn hơn số bên trái như :(56,12))
+Triệt tiêu bằng cách đổi vị trí hai số trong cặp 
+các danh sách sắp xếp :12<54->12,54,67,21,56,43
                        54<67->12,54,67,21,56,43
                        67>21->12,54,21,67,56,43
                        54>21->12,21,54,67,56,43
                        65<56->12,21,54,56,67,43
                        67>43->12,21,54,56,43,67
                        56>43->12,21,54,43,56,67
                        54>43->12,21,43,54,56,67
