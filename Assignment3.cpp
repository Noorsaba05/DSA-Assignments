/*Roll no 54
Assignment 3: TO use a singly linked list to create a  Student Management System
*/

#include <iostream>
#include <string>
using namespace std;


struct node {
    int rollno;
    string name;
    int mark;
    node* next;
};
node *head= NULL;
void insert(int rollno, string name, int mark) {
    node* nn = new node;
    nn->rollno = rollno;
    nn->name = name;
    nn->mark = mark;
    nn->next = NULL;

    if (head == NULL) {
        head = nn;
    } else {
        node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = nn;
    }
}

void display(){
	node* temp = head;
	while(temp != NULL){
		cout<<"Roll no: "<<temp->rollno;
		cout<<"  Name: "<<temp->name;
		cout<<"  mark: "<<temp->mark<<endl;
		temp= temp->next;
	}
}

void deletenode(int pos){
	if(pos = 1){
		node* temp = head;
		head= head->next;
		delete temp;
	}
	else{
	node* temp = head;
	for(int i=1; i<pos-1 && temp->next!=NULL; i++){
	temp=temp->next;
	}
	
	node* nodeDelete = temp->next;
	temp->next = temp->next->next;
	delete nodeDelete;
	}
	cout<<pos<<" has been deleted.";
}
int main(){
  
  int op,pos;
  int rollno, mark;
  string name;
  do{
  	cout << "\nStudent Record System:" << endl;
        cout << "1. Insert a record" << endl;
        cout << "2. Display" << endl;
        cout << "3. Delete a record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> op;
       switch(op){ 
        case 1 :
                cout << "Enter roll number: ";
                cin >> rollno;
                cin.ignore();
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter marks: ";
                cin >> mark;
                insert(rollno, name, mark);
                cout << "Record inserted successfully.\n";
                break;
                
        case 2: display();
        	break;
        case 3: 
        	cout<<"Enter Roll no to delete: ";
		cin>>pos;
        	deletenode(pos);
        	break;
            
        case 4:
        	break;    
         }
  	
  	 	
  }while(op!=4);


}

/* Output:
Student Record System:
1. Insert a record
2. Display
3. Delete a record
4. Exit
Enter your choice: 1
Enter roll number: 3
Enter name: pqr
Enter marks: 78
Record inserted successfully.

Student Record System:
1. Insert a record
2. Display
3. Delete a record
4. Exit
Enter your choice: 2
Roll no: 1  Name: abc  mark: 67
Roll no: 2  Name: xyz  mark: 56
Roll no: 3  Name: pqr  mark: 78

Student Record System:
1. Insert a record
2. Display
3. Delete a record
4. Exit
Enter your choice: 3
Enter Roll no to delete: 3
1 has been deleted.
*/
