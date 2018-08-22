#include<iostream>
using namespace std;

struct node{
	string code;
	node* next;
};

node* head_a = new node;
node* head_b = new node;

/*void Display1(node* traversal)
{
	int count = 1;
	node* traverse = traversal->next;
	free(traversal);
	node* pointer = traverse;
	while(pointer!=NULL)
	{
		traverse = pointer;
		cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
		count++;
		pointer = traverse->next;
		free(traverse);
		cout<<"\n";
	}

	//cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
	cout<<"\n";
	free(pointer);
}*/

/*void Display2(node* traversal)
{
	int count = 1;
	node* traverse = traversal->next;
	free(traversal);
	node* pointer = traverse;
	while(pointer!=NULL)
	{
		traverse = pointer;
		cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
		count++;
		pointer = traverse->next;
		free(traverse);
		cout<<"\n";
	}

	//cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->data<<" , pointer stored - "<<traverse->next;
	cout<<"\n";
	free(pointer);
}*/

/*void Search(string f,string s,node* heada)
{
	node* ab = heada->next;
	node* found1;
	node* found2;
	if(ab->code == f){found1 = ab;}
	else
	{
		while(ab->code != f)
		{
			ab = ab->next;
		}
		found1 = ab;
	}

	node* abc = heada;
	if(abc->code == s){found2 = abc;}
	else
	{
		while(abc->code != s)
		{
			abc = abc->next;
		}
		found2 = abc;
	}

	string temp;
	string ff1,ff2;
	temp = found2->code;
	found2->code = found1->code;
	found1->code = temp;
}*/

/*void split()
{
	node* start = head_a->next;
	node* previous_a = new node;
	//previous_a = traverse_a->next;
	head_a = previous_a;
	node* previous_b = new node;
	head_b = previous_b;
	//cout<<"hi";
	//int count = 1;
	while(start->next!=NULL)
	{	
		//cout<<count<<"\n";count++;
		char check = start->code[start->code.length()-1];
		//cout<<check<<" "<<start->code<<endl;
		if(check=='0' || check=='2' || check=='4' || check=='6' || check=='8')
		{
			//Cout<<start->code[start->code.length()-1];
			previous_a->next = start;
			previous_a = previous_a->next;
			//previous_a->next = NULL;
			start = start->next;
		}
		else
		{
			previous_b->next = start;
			previous_b = previous_b->next;
			//previous_b->next = NULL;
			start = start->next;
		}
	}

	char check = start->code[start->code.length()-1];
	if(check=='0' || check=='2' || check=='4' || check=='6' || check=='8')
	{
		previous_a->next = start;
	}


	int count = 1;
	node* traverse = head_a->next;
	free(head_a);
	node* pointer = traverse;
	while(pointer!=NULL)
	{
		traverse = pointer;
		cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
		count++;
		pointer = traverse->next;
		free(traverse);
		cout<<"\n";
	}

	//cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
	cout<<"\n";
	free(pointer);

	count = 1;
	node* traversesecond = head_b->next;
	free(head_b);
	node* pointersecond = traversesecond;
	while(pointersecond!=NULL)
	{
		traversesecond = pointersecond;
		cout<<"position - "<<count<<" , address of node - "<<traversesecond<<" , value stored - "<<traversesecond->code<<" , pointer stored - "<<traversesecond->next;
		count++;
		pointersecond = traversesecond->next;
		free(traversesecond);
		cout<<"\n";
	}

	//cout<<"position - "<<count<<" , address of node - "<<traverse<<" , value stored - "<<traverse->code<<" , pointer stored - "<<traverse->next;
	cout<<"\n";
	free(pointersecond);
}*/

int main()
{	
	node* previous = new node;
	head_a = previous;
	bool flag = 1;
	cin>>head_a->data;
	head_a->next = previous;
	while(flag==1)
	{
		cout<<"Enter course code - ";
		//string code;cin>>code;
		node* p = new node;
		previous->next = p;
		//p->code = code;
		cin>>p->code;
		p->next = NULL;
		previous = p;
		cout<<"Do you want to enter more course codes (print Y if you want to add more details else N ) - ";
		char ch;cin>>ch;
		if(ch=='Y')
		{
			flag = 1;
		}
		if(ch=='N')
		{
			flag = 0;
		}
	}
	//Display1(head_a);
	//split();
	//Display1(head_a);
	//cout<<head_b;
	//Display2(head_b);
	previous->next = head_a;

}