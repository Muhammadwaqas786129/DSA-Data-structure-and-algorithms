#include<iostream>
using namespace std;
int main ()
 {
 	int len;
 	cout<<"input the lent of the array";
 	cin>>len;
 	int arr[len],target;
 	cout<<"input no you winna find";
 	cin>>target;
 	for(int e=0;e<len;e++)
 	{
 		cout<<"element no"<<e+1;
 		cin>>arr[e];
	 }
	 int start =0,end=len-1,mid=0;
	 while(start<=end)
	 {
	 	mid=(start=end)/2;
	 	if(target==arr[mid])
	 	{
	 		cout<<"element is present in the index"<<endl;
	 		break;
		 }
		 else if (target>arr[mid])
		 start=mid+1;
		 else
		 end=mid-1;
	}
	if (arr[mid]!=target)
	cout<<"the elements is not in the present in the index:";
	return 0;
	 }