#include <iostream>
using namespace std;

void dice(int d){
    if (d==1)
    {
        cout<< " ----- " <<endl;
        cout<< "|     |" <<endl;
        cout<< "|  O  |" <<endl;
        cout<< "|     |" <<endl;
        cout<< " ----- " <<endl;
    }
    else if (d==2)
    {
        cout<< " ----- " <<endl;
        cout<< "|    O|" <<endl;
        cout<< "|     |" <<endl;
        cout<< "|O    |" <<endl;
        cout<< " ----- " <<endl;
    }
    else if (d==3)
    {
        cout<< " ----- " <<endl;
        cout<< "|    O|" <<endl;
        cout<< "|  O  |" <<endl;
        cout<< "|O    |" <<endl;
        cout<< " ----- " <<endl;
    }
    else if(d==4)
    {
        cout<< " ----- " <<endl;
        cout<< "|O   O|" <<endl;
        cout<< "|     |" <<endl;
        cout<< "|O   O|" <<endl;
        cout<< " ----- " <<endl;
    }
    else if(d==5)
    {
        cout<< " ----- " <<endl;
        cout<< "|O   O|" <<endl;
        cout<< "|  O  |" <<endl;
        cout<< "|O   O|" <<endl;
        cout<< " ----- " <<endl;
    }
    else 
    {
        cout<< " ----- " <<endl;
        cout<< "|O   O|" <<endl;
        cout<< "|O   O|" <<endl;
        cout<< "|O   O|" <<endl;
        cout<< " ----- " <<endl;
    }

}
