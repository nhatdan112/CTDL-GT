Heap h = Heap();
for (int i = 0; i < n; i++) {
	// thêm phần tử vào heap
	h.push(data[i]);
}
int a[MAXN];
for (int i = 0; i < n; i++) {
	// lấy phần tử nhỏ nhất và cho vào mảng đã sắp xếp
	a[i] = h.pop();
}
