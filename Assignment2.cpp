/* Roll no: 54 
Assignment 2 : Write a c++ program to represent a railway time table as sparse matrix*/

#include <iostream>
using namespace std;

int main() {
    int s, t;

    cout << "Enter Number of Stations: ";
    cin >> s;
    cout << "Enter number of Trains: ";
    cin >> t;

    int m[s][t];
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cout << "Enter Train Id for Station " << i << ", train " << j << ": ";
            cin >> m[i][j];
        }
    }

    cout << "Train Schedule Matrix:" << endl;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            cout << m[i][j] << "   ";
        }
        cout << endl;
    }

    
    int spar[20][3];
    int k = 0; 
    
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < t; j++) {
            if (m[i][j] != 0) {
                spar[k][0] = i;
                spar[k][1] = j;    
                spar[k][2] = m[i][j]; 
                k++; 
            }
        }
    }

    cout << "Active Train Schedule" << endl;
    cout<<"S "<<"T "<<" Id "<<endl;
    for (int i = 0; i < k; i++) {
        cout << spar[i][0] << " " << spar[i][1] << " " << spar[i][2] << endl;
    }
    return 0;
}
/*
	Output
Enter Number of Stations: 4
Enter number of Trains: 4
Enter Train Id for Station 0, train 0: 0
Enter Train Id for Station 0, train 1: 101
Enter Train Id for Station 0, train 2: 0
Enter Train Id for Station 0, train 3: 0
Enter Train Id for Station 1, train 0: 202
Enter Train Id for Station 1, train 1: 0
Enter Train Id for Station 1, train 2: 0
Enter Train Id for Station 1, train 3: 0
Enter Train Id for Station 2, train 0: 303
Enter Train Id for Station 2, train 1: 0
Enter Train Id for Station 2, train 2: 404
Enter Train Id for Station 2, train 3: 0
Enter Train Id for Station 3, train 0: 0
Enter Train Id for Station 3, train 1: 0
Enter Train Id for Station 3, train 2: 
0
Enter Train Id for Station 3, train 3: 505
Train Schedule Matrix:
0   101   0   0   
202   0   0   0   
303   0   404   0   
0   0   0   505   
Active Train Schedule
S T  Id 
0 1 101
1 0 202
2 0 303
2 2 404
3 3 505
*/
