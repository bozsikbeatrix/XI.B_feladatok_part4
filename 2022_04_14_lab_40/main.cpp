#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szo, szo2;
    cin >> szo;
    int pos= 'a'- 'A';
    for(int j=0; j<szo.size(); j++){
        if(szo[j]=='a' || szo[j]=='e' || szo[j]=='i' || szo[j]=='o' || szo[j]=='u'){
           szo2+=szo[j];
           szo2+=(szo[j]-pos);
        }else{
           szo2+=szo[j];
        }
    }
    cout << szo2;
    return 0;
}
