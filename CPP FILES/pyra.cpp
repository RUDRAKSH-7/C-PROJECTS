#include <iostream>
using namespace std;

void print(string str,int num = 0){
    for (int i = 0; i <= num ; i++){
        cout << str;
    }
}

int main(){
    system("cls");
    int j = 20;
    for (int i = 0; i<=20 ; i+=2){
        print(" ",j);
        print("* ",i) ; 
        cout << endl;
        j-=2;
    }
}