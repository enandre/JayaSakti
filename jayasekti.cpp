#include <iostream>

using namespace std;

int main() {
    double menuin, cr, email, username, key, loop1;

    do {
    cout << "1. Login\n2. Sign up" << endl;
    cin >> menuin;
    if(menuin == 1) {
        cout << "\t\t\tLogin\n" << endl;
        cout << "Username\t: ";
        cin >> username;
        cout << "Password\t: ";
        cin >> key;
        loop1 = 33;
    }
    else if(menuin == 2) {
        cout << "\t\t\tSign up\n" << endl;
        cout << "Email  \t: " ;
        cin >> email;
        cout << "Username\t: ";
        cin >> username;
        cout << "Password\t: ";
        cin >> key;
        cout << "Create "; cin >> cr;
        loop1 = 1;
    }
    else {
        cout << "\nError";
        loop1 = 1;
    }
    }
    while (loop1 == 1);
}