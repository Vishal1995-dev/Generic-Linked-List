#include<iostream>

using namespace std;

template<class T>
struct node
{
	T data;
	struct node *next;
};


template<class T>
class SLL
{
	public:
	struct node <T> *Head;
	SLL()
	{
		Head=NULL;
	}
	
	void InsertFirst(T no)
	{
		struct node <T> *newn = new struct node <T> ;
		newn->data=no;
		newn->next=NULL;
		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			newn->next=Head;
			Head=newn;
		}
	}
	
	void InsertLast(T no)
	{
		struct node <T> *newn = new struct node <T> ;
		newn->data=no;
		newn->next=NULL;
		
		if(Head==NULL)
		{
			Head=newn;
		}
		else
		{
			struct node <T> *temp =Head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newn;
		}
	}
	void Display()
	{
		struct node <T> * temp = Head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<endl;
	}
};

int main()
{
/*
	SLL obj;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.Display();
*/

	SLL <int>obj;
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	obj.InsertLast(101);
	obj.Display();
	
	SLL <char>obj1;
	obj1.InsertFirst('C');
	obj1.InsertFirst('B');
	obj1.InsertFirst('A');
	obj1.InsertLast('D');
	obj1.Display();
	return 0;
}
