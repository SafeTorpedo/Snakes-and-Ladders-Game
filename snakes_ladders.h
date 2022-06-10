#include <iostream>
using namespace std;

struct ladder{
    int start;
    int end;
};

struct snake{
    int start;
    int end;
};

int l,s;
struct ladder ladders[10];
struct snake snakes[10];

int jump(int score, int choice){
    if (choice==1){

        switch(score){
            case 4:{
                cout<<"You climbed a ladder to 25"<<endl;
                score=25;
                cout<<  "   25   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "    4   "<<endl;
                return score;
                break;
            }

            case 13:{
                cout<<"You climbed a ladder to 46"<<endl;
                score=46;
                cout<<  "   46   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   13   "<<endl;
                return score;
                break;
            }

            case 33:{
                cout<<"You climbed a ladder to 49"<<endl;
                score=49;
                cout<<  "   49   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   33   "<<endl;
                return score;
                break;
            }

            case 42:{
                cout<<"You climbed a ladder to 63"<<endl;
                score=63;
                cout<<  "   63   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   42   "<<endl;
                return score;
                break;
            }

            case 50:{
                cout<<"You climbed a ladder to 69"<<endl;
                score=69;
                cout<<  "   69   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   50   "<<endl;
                return score;
                break;
            }

            case 62:{
                cout<<"You climbed a ladder to 81"<<endl;
                score=81;
                cout<<  "   81   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   62   "<<endl;
                return score;
                break;
            }

            case 74:{
                cout<<"You climbed a ladder to 92"<<endl;
                score=92;
                cout<<  "   92   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   74   "<<endl;
                return score;
                break;
            }

            case 99:{
                cout<<"You were caught by a snake and were demoted to 41"<<endl;
                score=41;
                cout << "              **    **    **        " << endl;
                cout << "    99 <<*  *   *  *  *  *  *  *>>  41" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 89:{
                cout<<"You were caught by a snake and were demoted to 53"<<endl;
                score=53;
                cout << "              **    **    **        " << endl;
                cout << "    89 <<*  *   *  *  *  *  *  *>>  53" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 76:{
                cout<<"You were caught by a snake and were demoted to 58"<<endl;
                score=58;
                cout << "              **    **    **        " << endl;
                cout << "    76 <<*  *   *  *  *  *  *  *>>  58" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 66:{
                cout<<"You were caught by a snake and were demoted to 45"<<endl;
                score=45;
                cout << "              **    **    **        " << endl;
                cout << "    66 <<*  *   *  *  *  *  *  *>>  45" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 54:{
                cout<<"You were caught by a snake and were demoted to 31"<<endl;
                score=31;
                cout << "              **    **    **        " << endl;
                cout << "    54 <<*  *   *  *  *  *  *  *>>  31" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 43:{
                cout<<"You were caught by a snake and were demoted to 18"<<endl;
                score=18;
                cout << "              **    **    **        " << endl;
                cout << "    43 <<*  *   *  *  *  *  *  *>>  18" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 40:{
                cout<<"You were caught by a snake and were demoted to 3"<<endl;
                score=3;
                cout << "              **    **    **        " << endl;
                cout << "    40 <<*  *   *  *  *  *  *  *>>  3" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            case 27:{
                cout<<"You were caught by a snake and were demoted to 5"<<endl;
                score=5;
                cout << "              **    **    **        " << endl;
                cout << "    27 <<*  *   *  *  *  *  *  *>>  5" << endl;
                cout << "          **     **    **    **     " << endl;
                return score;
                break;
            }

            default:{
                return score;
            }


        }


    }
    if (choice==2){
        int i;
        for(i=0;i<l;i++){
            if(score==ladders[i].start){
                score=ladders[i].end;
                cout<<"You climbed a ladder to "<<ladders[i].end<<endl;
                cout<<  "   "<<ladders[i].end<<"   "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout << "  |__|  "<<endl;
                cout<<  "  |  |  "<<endl;
                cout<<  "   "<<ladders[i].start<<"   "<<endl;
                return score;
            }

        }
        
        for(i=0;i<s;i++){
            if(score==snakes[i].start){
                score=snakes[i].end;
                cout<<"You were caught by a snake and were demoted to "<<snakes[i].end<<endl;
                cout << "              **    **    **        " << endl;
                cout << "    "<<snakes[i].start<<" <<*  *   *  *  *  *  *  *  *>>  "<<snakes[i].end<<endl;
                cout << "          **     **    **    **     " << endl;
                return score;   

        }
    }
        
    }
    return score;
    }



void getData(){
    int i;
        cout<<"Enter the number of ladders you want to play with (MAX 10): ";
        cin>>l;

        cout<<"Enter the number of snakes you want to play with (MAX 10): ";
        cin>>s;

        

        for(i=0;i<l;i++){
            cout<<"Enter the starting point of the ladder "<<i+1<<": ";
            cin>>ladders[i].start;
            cout<<"Enter the ending point of the ladder "<<i+1<<": ";
            cin>>ladders[i].end;
            cout<<endl;
        }

        for(i=0;i<s;i++){
            cout<<"Enter the starting point of the snake "<<i+1<<": ";
            cin>>snakes[i].start;
            cout<<"Enter the ending point of the snake "<<i+1<<": ";
            cin>>snakes[i].end;
            cout<<endl;
}
}