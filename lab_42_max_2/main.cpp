#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("bac.txt");
    int sufix, szam1, szam2, utolso=-1, elozo=-1;
    in >> sufix >> szam1;
    while(in >> szam2){
        if(szam1%1000==sufix && szam2%1000==sufix){
            utolso=szam2;
            elozo=szam1;
        }
        szam1=szam2;
    }
    if(utolso!=-1){
        cout << elozo << " " << utolso;
    }else{
        cout << "nu exista";
    }
    return 0;
}
