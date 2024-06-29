#include <iostream>
using namespace std;
int main()
{
	int len;
	cout<<"enter the len of the array:";
	cin>>len;
	int arr[len];
	for(int e=0;e<len;e++)
	{
		cout<<"input element no :"<<e+1;
		cin>>arr[e];
	}
	int num;
	cout<<"input no you wina find:"<<endl;
	cin>>num;
	int i;
	for(i=0;i<len;i++)
	{
		if (num==arr[i])
		{
			cout<<"your no is present in the index"<<endl;
			break;
		}
	}
	if (arr[i]!=num)
	{
		cout<<"your no is not in the index:"<<endl;
	}
	return 0;
}