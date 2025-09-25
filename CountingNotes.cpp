#include<bits/stdc++.h>
using namespace std;
int main(){
    int amount;cin>>amount;
    int notes=0;
    int num=1;
    switch(num){
        case 1:{notes=amount/100;
            cout<<"100rs notes are - "<<notes<<endl;
            amount=amount-(notes*100);
        }
        case 2:{notes=amount/50;
            cout<<"50rs notes are - "<<notes<<endl;
            amount=amount-(notes*50);
        }
        case 3:{notes=amount/20;
            cout<<"20rs notes are - "<<notes<<endl;
            amount=amount-(notes*20);
        }
        case 4:{notes=amount/10;
            cout<<"10rs notes are - "<<notes<<endl;
            amount=amount-(notes*10);
        }
        case 5:{notes=amount/1;
            cout<<"1rs notes are - "<<notes<<endl;
            
        }
    }
}