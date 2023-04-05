Nguồn tham khảo:https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-nhi-phan-binary-search
int BinarySearch(int a[],int n,int x)
{
	int left, right, mid; // thuật toán gồm 3 tp:bên phải,bên trái,giữa 
  left=0; right=n-1;
	do{
		mid=(left+right)/2;//tìm giá trị tại phần tử giữa của mảng
		if(a[mid]==x){//nếu giá trị tại vị trí giữa=giá trị vị trí cần tìm thì đó là điểm cần tìm trong mảng 
			return mid;
		}
		else if(a[mid]<x){//nếu vị trí giữa nhỏ hơn vị trí cần tìm thì tăng giá trị vị trí phía bên trái lên 1 đơn vị 
			left=mid+1;
		}
		else{
			right=mid-1;//ngược lại giảm  vị trí phải đi 1 đơn vị 
		}
	}while(left<=right);//nếu phía bên trái nhỏ hơn hoặc bằng vị trí phía bên phải thì trả về phần tử đầu trong mảng 
	return -1;
}
