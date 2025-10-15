#include <iostream>
using namespace std;


struct node{
int data;
node* next = NULL;
node* prev = NULL;

};

node* head = NULL;

void insertNode(int data){
	node* nn = new node;
	nn -> data = data;
	nn -> next = NULL;
	nn -> prev = NULL;

	if(head == NULL){
	head = nn;
	nn -> prev = head;
	}
	else{
	
	node* temp = head;
	
		while(temp->next != NULL){
			temp= temp->next;
		
			}
		 temp->next=nn;
		 nn->prev= temp;	
			
		}
		//cout<<"/n Node inserted.";
	}

void display(){
	node* temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<"<-->";
		temp= temp -> next;
	}


}

int main(){
/*int n;
cout<<"Enter Data: ";
cin>>n;*/

insertNode(10);
insertNode(20);
insertNode(30);
insertNode(40);

display();

return 0;
}
