#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		Node* head = new Node(2);
		Node* temp1 = new Node(55);
		Node* temp2 = new Node(100);
		Node* temp3 = new Node(99);
		Node* temp4 = new Node(45);
		Node* temp5 = new Node(93);
		Node* temp6 = new Node(1000);



		head->next = temp1;
		head->next->next = temp2;
		head->next->next->next = temp3;
		head->next->next->next->next = temp4;
		head->next->next->next->next->next = temp5;
		head->next->next->next->next->next->next = temp6;


// 2 55 100 99 45 93 1000

		// 2 100 55

		Node* curr = head;


		while (curr->next->next->next->next != NULL)
		{
			curr = curr->next;
		}


		curr->next = curr->next->next;
		Node* temp = head;


		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
}