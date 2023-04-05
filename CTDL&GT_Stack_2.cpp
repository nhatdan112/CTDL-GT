#define max 10000
int Stack[max];
int Top;

void StackInit(){
	Top = -1;//khởi tạo giá trị phần tử đầu danh sách 
}

void push(int V){//kiểm tra stack có đầy hay không 
	if(Top > max-1){
		cout<<"Stack is full";
	}else{
		Top++;
		Stack[Top] = V;
	}
}

int pop(){
	if (Top == -1){
		cout<<"Stack is empty";//kiểm tra stack có rỗng hay không 
		return -1;
	}else{
		int res = Stack[Top];
		Top--;
		return res;
	}
}

int empty(){
	if(Top == -1){
		return 0;//stack rỗng
	}
	return 1;//stack không rỗng 
}

int size(){
	return Top+1;//kích cỡ stack 
}
int top(){
	if (Top == -1){
		cout<<"Stack is empty";
		return -1;
	}else{
		int res = Stack[Top];
		return res;
	}
// trả về giá trị đầu stack 
