#include <iostream>
#include <cstdlib>
#include <string>

#include "modes.h"
using namespace std;

int main(){

    srand(time(NULL));

    cout<<"\t\t---------------SNAKES AND LADDERS GAME---------------"<<endl;
    cout<<"\t\t\t\t\t Made by - Pratham Gupta (21BCE2534)"<<endl;
    cout<<"\t\t-----------------------------------------------------"<<endl;
    system("pause");
    cout<<"\nMenu"<<endl;
    cout<<"1. Play Game in Auto Mode"<<endl;
    cout<<"2. Play Game in User-filled board"<<endl;
    int choice;
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    if(choice==1){
        automode();
    }
    else if(choice==2){
        usermode();
    }
    else{
        cout<<"Invalid Choice"<<endl;
    }

    
    return 0;
}