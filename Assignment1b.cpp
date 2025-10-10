/*Roll no: 54
Assignment 1: Create an Array to store Student name and perform Insertion Deletion and Display.
*/
#include <iostream>
using namespace std;

int main() {
    int op;
    string stud[100];
    int a = 99;
    int cnt = 0;

    do {
        cout << "\nOptions:" << endl;
        cout << "1. Insertion" << endl;
        cout << "2. Display" << endl;
        cout << "3. Deletion" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> op;
       
        switch (op) {
            case 1: {
                
                if (cnt >= 100) {
                    cout << "Array is full" << endl;
                    break;
                }

                int ind;
                cout << "Enter the index where you want to insert the name (0 to " << a << "): ";
                cin >> ind;
			
                if (ind < 0 || ind > a) {
                    cout << "Invalid index." << endl;
                    break;
                }
		cin.ignore();
                string newName;
                cout << "Enter the name: ";
                getline(cin, newName);

          
                for (int i = cnt; i > ind; i--) {
                    stud[i] = stud[i - 1];
                }

                stud[ind] = newName;
                cnt++;

                cout << "Name inserted at index " << ind << "." << endl;
                break;
            }

            case 2: {
               
                if (cnt == 0) {
                    cout << "No names to display." << endl;
                } else {
                    cout << "Student Names:" << endl;
                    for (int i = 0; i < cnt; i++) { 
                        cout << i << ": " << stud[i] << endl;
                    }
                }
                break;
            }

            case 3: {
               
                if (cnt == 0) {
                    cout << "No names to delete!" << endl;
                    break;
                }

                int index;
                cout << "Enter the index to be deleted (0 to " << cnt - 1 << "): ";
                cin >> index;

                if (index < 0 || index >= cnt) {
                    cout << "Invalid index." << endl;
                    break;
                }

                cout << "Deleted name: " << stud[index] << endl;

                
                for (int i = index; i < cnt - 1; i++) {
                    stud[i] = stud[i + 1];
                }
                cnt--;

                break;
            }

            case 4:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
                break;
        }

    } while (op != 4);

    return 0;
}
/*Output
Options:
1. Insertion
2. Display
3. Deletion
4. Exit
Enter your choice: 1
Enter the index where you want to insert the name (0 to 99): 4
Enter the name: xyz
Name inserted at index 4.

Options:
1. Insertion
2. Display
3. Deletion
4. Exit
Enter your choice: 2
Student Names:
0: 
1: noor
2: abc

Options:
1. Insertion
2. Display
3. Deletion
4. Exit
Enter your choice: 3
Enter the index to be deleted (0 to 2): 1
Deleted name: noor

*/
