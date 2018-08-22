#include<iostream>
using namespace std;

struct node{
	int data;
	struct node* next;
};

node* head;

void reverse()
{
	node* temp = new node;
	temp = head;
	node* abc = new node;
	node* prev = new node;
	prev = NULL;
	abc = temp->next;
	temp->next = prev;
	prev = temp;
	temp = abc;
	//abc = temp->next;

	while(temp->next!=NULL)
	{
		abc = temp->next;
		temp->next = prev;
		prev = temp;
		temp = abc;
		
	}

	temp->next = prev;
	head = temp;

}

void Display()
{
	node* pointer = head;
	while(pointer!=NULL)
	{
		head = pointer;
		cout<<head->data<<"\n";
		pointer = head->next;
		free(head);

	}
}

int main(){
	node* prev = new node;
	head = prev;
	bool flag=1;
	cin>>prev->data;
	prev->next = NULL;
	cout<<"Do you want to addmore - ";
	char ch;
	cin>>ch;
	if(ch=='Y')
	{
		while(flag==1)
		{
			//node* temp = new node;
			node* tempa = new node;
			cin>>tempa->data;
			tempa->next = NULL;
			prev->next = tempa;
			prev = tempa;
			cout<<"Do you want to addmore - ";
			char ch;
			cin>>ch;

			if(ch=='Y')
			{
				flag = 1;
			}

			else
			{
				flag = 0;
			}
		}
	}

	reverse();
	Display();
}