#define max 10000//khởi tạo hàng đợi 
int Queue[max];
int front, rear;

void QueueInit(){
	front = 0;
	rear = -1;
}

void enqueue(int V){//kiểm tra hàng đợi có đầy hay không 
	if(rear >= max-1){
		cout<<"Queue is full";
	}else{
		rear++;
		Queue[rear] = V;
	}
}

int dequeue(){ //Kiểm tra hàng đợi có rỗng hay không 
	if(front > rear){
		cout<<"Queue is empty";
		return -1;
	}else{
		int res = Queue[front];
		front++;
		return res;
	}
}
