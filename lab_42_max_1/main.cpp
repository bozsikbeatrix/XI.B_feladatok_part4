#include <iostream>

using namespace std;

int main()
{
    int n, k, szamlalo=0;
    string szo;
    string szavak[100];
    cout << "n=";
    cin >> n;
    cout << "k=";
    cin >> k;
    for(int i=0; i<n; i++){
        cin >> szo;
        if(szo[szo.size()-1]=='a' || szo[szo.size()-1]=='e' || szo[szo.size()-1]=='i' || szo[szo.size()-1]=='o' || szo[szo.size()-1]=='u'){
            szavak[szamlalo]=szo;
            szamlalo++;
        }
    }
    cout << endl;
    if(szamlalo<k){
        cout << "nu exista";
    } else{
    for(int i=0; i<k; i++){
        cout << szavak[i] << endl;
    }
    }
    return 0;
}
