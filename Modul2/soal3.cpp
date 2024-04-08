#include<iostream>
#include<conio.h>
#include<stdlib.h>

#define n 10

using namespace std;

struct queue{
    int head, tail, data[n];
};

queue antrian;

bool ISEMPTY(){
    if (antrian.tail == -1){
        return true;
    }
    else{
        return false;
    }
}

bool ISFULL(){
    if(antrian.tail == n - 1){
        return true;
    }
    else{
        return false;
    }
}

void INSERT(int data){
    if(ISEMPTY()){
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
    }
    else if (!ISFULL()){
        antrian.tail++;
        antrian.data[antrian.tail] = data;
    }
}

void DELETE(){
    if(ISEMPTY()){
        cout << "QUEUE IS EMPTY, NOTHING TO DELETE";
    }
    else if(!ISFULL){
        cout << antrian.data[antrian.head] << " ";
        for(int i = antrian.head; i <= antrian.tail - 1 ;i++){
            antrian.data[i] = antrian.data[i+1];
        }
        antrian.tail--;
    }
}

void CETAKLAYAR(){
    if(!ISEMPTY()){
        for(int i = antrian.head; i <= antrian.tail; i++){
            cout << "QUEUE AT INDEX " << i << " = " << antrian.data[i] << endl; 
        }
        cout << endl;
    }
    else{
        cout << "QUEUE IS EMPTY, NOTHING TO PRINT ";
    }

};

void Inisialisasi(){
    antrian.head = antrian.tail = -1;
}

void RESET(){
    antrian.head = antrian.tail = -1;
    cout << "QUEUE HAS BEEN CLEARED ";
}

int PIL;
char PILIHAN[1];

int main(){
    Inisialisasi();
    do{
        cout << "QUEUE" << endl;
        cout << "====================" << endl;
        cout << "1. INSERT" << endl;
        cout << "2. DELETE" << endl;
        cout << "3. CETAK QUEUE" << endl;
        cout << "4. RESET QUEUE" << endl;
        cout << "5. QUIT" << endl;
        cout << "SELECT : "; cin >> PILIHAN;
        PIL = atoi(PILIHAN);

        switch(PIL){
            case 1:
                int x;
                cout << "INSERT VALUE : "; cin >> x;
                INSERT(x);
                break;
            case 2:
                DELETE();
                break;
            case 3:
                CETAKLAYAR();
                break;
            case 4:
                RESET();
                break;
            default:
                cout << "THANK YOU" << endl;
                break;
        }
        cout << "press any key to continue" << endl;
        getch();
        system("cls");
    }
    while(PIL < 5);

}