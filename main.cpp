#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
string vokabel[100] = {};//add foreign vocabularies in here
string meaning[100] ={};//add translations here
string lernvok[100] ={};
string lernbed[100] ={};
int vokabel_count = 0;
int vokabel_count_false = 0;
string vokabel_own;
int vokabel_limit = 0;//number of total Vocabularies here
int multiplier;
char buffer[100];
int main()
{


    cout << "How many 'rounds'?\n";
    cin >> multiplier;
    system("cls");
    for(int i = 0; i<vokabel_limit*multiplier; i++){
        cout << vokabel[vokabel_count] << " : ";
        cin >> vokabel_own;
        if(vokabel_own == meaning[vokabel_count]){
            cout << "\nCorrect\n";
            vokabel_count++;
            system("cls");
        }
        else{

            cout << "\nwrong";
            lernvok[vokabel_count_false]=vokabel[vokabel_count];
            lernbed[vokabel_count_false]=meaning[vokabel_count];
            vokabel_count++;
            vokabel_count_false++;
            system("cls");
        }
        if(vokabel_count>=(vokabel_limit)){
            vokabel_count = 0;
            system("cls");

        }

    }
    cout << "You have to learn these vocabularies" << endl;
    for(int i = 0; i<vokabel_count_false;i++){
            cout << lernvok[i] << " : " << lernbed[i] << "\n";
    }
    cin >> buffer;
    return 0;
}
