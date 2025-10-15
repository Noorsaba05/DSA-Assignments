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
		cout<<"\n Node inserted.";
	}

void display(){
	node* temp = head;
	
	while(temp != NULL){
		cout<<temp->data<<"<-->";
		temp= temp -> next;
	}


}

int main(){
int op,n;
do{

        cout << "\n1. Insert" << endl;
        cout << "2. Display" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> op;
        switch(op){
        case 1: 
        	cout<<"Enter data: ";
        	cin>>n;
        	insertNode(n);
        	break;
        case 2: display();
        	break;
        case 3: break;
        }
        }while(op!=3);
/*insertNode(10);
insertNode(20);
insertNode(30);
insertNode(40);
*/
display();

return 0;
}
