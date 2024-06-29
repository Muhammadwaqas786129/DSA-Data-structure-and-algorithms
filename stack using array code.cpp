#include<iostream>
using namespace std;
   struct link{
   	int data;
   	link *next;
   };
   class stack{
   	private:
   		 link *top;
   		 public:
   		 	stack();
   		 	void push(int d);
   		 	int pop();
   		 	void show();
   };
               stack::stack()
               {
               	top=NULL;
			   }
			   void stack::push(int d)
			   {
			   	link *ptr,*temp;
			   	if(top==NULL)
			   	{
			   		top=new link;
			   		top->data=d;
			   		top->next=NULL;
				   }
				   else
				   {
				   	ptr=top;
				   	while(ptr->next!=NULL)
				   	ptr=ptr->next;
				   	temp=new link;
				   	temp->data=d;
				   	temp->next=NULL;
				   	ptr->next=temp;
				   }
				} 
        int stack::pop()
        {
        	link *temp,*pre;
        	int n;
        	temp=top;
        	if(top==NULL)
        	{
        		cout<<"the stack is empty:"<<endl;
        		return NULL;
			}
			pre=temp;
			while(temp->next!=NULL)
			{
				pre=temp;
				temp=temp->next;
			}
			pre->next=NULL;
			n=temp->data;
			             delete temp;
			             return n;
		}
		void stack::show()
		{
			link *temp;
			temp=top;
			while(temp!=NULL)
			{
	cout<<temp->data<<" ";
	temp=temp->next;			 
			}
		}
	int main()
	{
		stack s;
				                   	s.push(10); 
		                   	s.push(20); 
		                   	s.push(30); 
		                   	s.push(40);
							s.pop();
							s.pop();
							s.show();
							s.push(50);
							s.show();    
	}