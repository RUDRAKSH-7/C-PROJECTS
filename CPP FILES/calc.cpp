#include <iostream>
#include <math.h>
using namespace std;

int main(){while (true){
        system("cls");
        cout << "\t\tCALCULATOR :\n\n";
        cout << "1. Add 2 Nums\t\t";
        cout<<"   2. Subtract 2 Nums\n";
        cout << "3. Multiply 2 Nums          ";cout << "4. Divide 2 Nums\n";
        cout<<"5. log(x)     6. Sin(x)    7. cos(x)" << endl << endl;
        int choice ,a,b; cout<<"ENTER OPTION : "; // we declared a,b and X for log and trigo problems
        double x;
        char menu;
        cin >> choice;
        if(choice == 1){
            cout << "Num 1 : "; cin>>a;
            cout << "Num 2 : "; cin >>b; cout << endl;
            cout << " = "<< a+b<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 2){
            cout << "Num 1 : "; cin>>a;
            cout << "Num 2 : "; cin >>b; cout << endl;
            cout << " = "<< a-b<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 3){
            cout << "Num 1 : "; cin>>a;
            cout << "Num 2 : "; cin >>b; cout << endl;
            cout << " = "<< a*b<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 4){
            cout << "Num 1 : "; cin>>a;
            cout << "Num 2 : "; cin >>b; cout << endl;
            double div = a/b;
            cout << " = "<<div<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 5){
            cout << "X = ";
            cin >> x;
            cout << "log(x) = "<<log(x)/log(10)<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 6){
            cout << "X (rad.)= ";
            cin >> x;
            cout << "sin(x) = "<<sin(x)<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;
            }}
        else if (choice == 7){
            cout << "X (rad.)= ";
            cin >> x;
            cout << "cos(x) = "<<cos(x)<<endl;
            cout << "Back [y]         Exit [n]"; cin >> menu;
            if (menu == 'n'){
                break;
            }
            else if (menu == 'y'){
                continue;}}}}