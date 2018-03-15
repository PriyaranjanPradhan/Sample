#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};

struct linkedlist
{
	node *head;
	node *tail;
	linkedlist()
	{
		head = NULL;
		tail = NULL;
	}
	void addNode(int x)
	{
		node *temp = new node;
		temp->data = x;
		temp->next = NULL;

		if(head==NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			//tail->next == NULL;
			tail->next = temp;
			tail = tail->next;
		}
	}
	void displayList()
	{
		if(head==NULL){
			cout << "Nothing";
		}
		else{
			node *temp = head;
			while(temp != NULL){
			 cout << temp->data;
			 temp = temp->next;
			}
		}
	}
	
};
int main()
{
	int i,z;
	linkedlist L;
	cout<<"Enter the linked listvalues"<<endl;
	for(i=0;i<10;i++)
	{
		cin>>z;
		L.addNode(z);
	}
	cout<<"\n\nThe values you gave are:"<<endl;
	L.displayList();
	cout<<endl;
	return 0;
}
