#include <cstdlib>
#include <iostream>
using namespace std;

class Node{
public:
	int Data;
	Node* Next;

	Node(int data){
		Data = data;
		Next = NULL;
	}
};

class LinkedList{
public:
	Node* Head;

	LinkedList(){
		Head = NULL;
	}

	LinkedList(int data){
		Head = new Node(data);
	}

	void Insert(int data){
		Node* newNode = new Node(data);
		if(Head == NULL)
			Head = newNode;
		else{
			newNode->Next = Head;
			Head = newNode;
		}
	}

	void Append(int data){
		Node* newNode = new Node(data);
		if(Head == NULL)
			Head = newNode;
		else{
			Node* probe = Head;
			while(probe->Next != NULL)
				probe = probe->Next;
			probe->Next = newNode;
		}
	}

	void Print(){
		if(Head == NULL){
			cout << "Empty list" << endl;
			return;
		}
		Node* probe = Head;
		while(probe->Next != NULL){
			cout << probe->Data << " ";
			probe = probe->Next;
		}
		cout << probe->Data << endl;
	}

};
