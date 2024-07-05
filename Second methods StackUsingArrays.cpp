#include <iostream>
using namespace std;

int stack[10], top=-1;

void push(int data){
	if (top >= 9){
		cout<<"\nStack is full, cannot insert.\n";
	}
	else{
		top++;
		stack[top] = data;
	}
}

void pop(){
	if (top <= -1){
		cout<<"\nStack already empty, cannot pop";
	}
	else{
		cout<<"\nYour pop data is: "<<stack[top]<<endl;
		top--;
	}
}

void display(){
	for(int i=top; i>=0; i--){
		cout<<"|\t"<<stack[i]<<"\t|"<<endl;
	}
}

void peek(){
	cout<<"\nTop element is: "<<stack[top];
}

void isFull(){
	if(top >= 9){
		cout<<"\nStack is full";
	}
}

void isEmpty(){
	if(top <= 0){
		cout<<"\nStack is empty";
	}
}

int main(){
	
	push(10);
	push(3);
	push(2);
		
	display();
	
}