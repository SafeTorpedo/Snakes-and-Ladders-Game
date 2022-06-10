#include <iostream>
#include <string>

#include "dice.h"
#include "snakes_ladders.h"

using namespace std;

void automode(){
    int choice=1;
    string name1, name2;
    int score1=0, score2=0;
    int prev1, prev2;
    int i;

    
    
    cout<<"Enter name of player 1: ";
    cin>>name1;
    cout<<"Enter name of player 2: ";
    cin>>name2;

    int value;
    getchar();
    while(true){
    
    
        for(i=1;i<=2;i++){

            if(i==1 && score1!=100)
            {
                cout<<name1<<"'s turn, Press Enter to roll the die: ";
                cin.get();

                value=rand()%6+1;
                cout<<"You rolled a "<<value<<endl;
                dice(value);
                prev1=score1;
                score1+=value;
                score1=jump(score1,choice);

                if (score1>=100){
                    cout<<"\n\tPrevious Positon of "<<name1<<" is : "<<prev1<<endl;
                    cout<<"\n\t"<<name1<<" has crossed 100!"<<endl;
                    cout<<name1<<" won the game"<<endl;
                    cout<<"Better luck next time "<<name2<<endl;
                    exit(0);
                }

                cout<<"\n\tPrevious Positon of "<<name1<<" is : "<<prev1<<endl;
				cout<<"\n\tCurrent Position Of "<<name1<<" is : "<<score1<<endl;

                system("pause");
            }


            if(i==2 && score2!=100)
            {
                cout<<name2<<"'s turn, Press Enter to roll the die: ";
                cin.get();

                value=rand()%6+1;
                cout<<"You rolled a "<<value<<endl;
                dice(value);
                prev2=score2;
                score2+=value;
                score2=jump(score2,choice);

                if (score2>=100){
                    cout<<"\n\tPrevious Positon of "<<name2<<" is : "<<prev2<<endl;
                    cout<<"\n\t"<<name2<<" has crossed 100!"<<endl;
                    cout<<name2<<" won the game"<<endl;
                    cout<<"Better luck next time "<<name1<<endl;
                    exit(0);
                }

                cout<<"\n\tPrevious Positon of "<<name2<<" is : "<<prev2<<endl;
                cout<<"\n\tCurrent Position Of "<<name2<<" is : "<<score2<<endl;

                system("pause");
        }
    }
    
}
}


void usermode(){
    
    int max=0;
    cout<<endl<<"Enter the size of board (n*n), For example, if you want to play with a board of size 10x10, enter 10: ";
    cin>>max;
    max=max*max;
    
    getData();
    int choice=2;
    string name1, name2;
    int score1=0, score2=0;
    int prev1, prev2;
    int i;

    cout<<"Enter name of player 1: ";
    cin>>name1;
    cout<<"Enter name of player 2: ";
    cin>>name2;

    int value;
    getchar();

    

    while(true){
        
        
            for(i=1;i<=2;i++){
    
                if(i==1 && score1!=max)
                {
                    cout<<name1<<"'s turn, Press Enter to roll the die: ";
                    cin.get();
    
                    value=rand()%6+1;
                    cout<<"You rolled a "<<value<<endl;
                    dice(value);
                    prev1=score1;
                    score1+=value;
                    score1=jump(score1,choice);

                    if (score1>=max){
                        cout<<"\n\tPrevious Positon of "<<name1<<" is : "<<prev1<<endl;
                        cout<<"\n\t"<<name1<<" has crossed "<<max<<"!"<<endl;
                        cout<<name1<<" won the game"<<endl;
                        cout<<"Better luck next time "<<name2<<endl;
                        exit(0);
                        
                    }
                    cout<<"\n\tPrevious Positon of "<<name1<<" is : "<<prev1<<endl;
                    cout<<"\n\tCurrent Position Of "<<name1<<" is : "<<score1<<endl;

                    system("pause");
                }
                
                
                if(i==2 && score2!=max)
                {
                    cout<<name2<<"'s turn, Press Enter to roll the die: ";
                    cin.get();

                    value=rand()%6+1;
                    cout<<"You rolled a "<<value<<endl;
                    dice(value);
                    prev2=score2;
                    score2+=value;
                    score2=jump(score2,choice);

                    if (score2>=max){
                        cout<<"\n\tPrevious Positon of "<<name2<<" is : "<<prev2<<endl;
                        cout<<"\n\t"<<name2<<" has crossed "<<max<<"!"<<endl;
                        cout<<name2<<" won the game"<<endl;
                        cout<<"Better luck next time "<<name1<<endl;
                        exit(0);
                    }
                    cout<<"\n\tPrevious Positon of "<<name2<<" is : "<<prev2<<endl;
                    cout<<"\n\tCurrent Position Of "<<name2<<" is : "<<score2<<endl;

                    system("pause");
        }
    }
}
}