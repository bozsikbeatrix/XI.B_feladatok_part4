#include <iostream>
#include <fstream>

using namespace std;

int sub(int n){
    int S=0, szj;
    while(n>0){
        szj=n%10;
        n=n/10;
        S=S+szj;
    }
    return S;
}

int main()
{
    /*int n;
    cout << "n=";
    cin >> n;
    cout << sub(n); */
    int x, szj1, szj1ossz, szj2, szj2ossz, ech1=0, ech2=0;
    ifstream in("def.in");
    while(in >> x){
        szj1=x/1000;
        szj1ossz=sub(szj1);
        szj2=x%1000;
        szj2ossz=sub(szj2);
        if(x%2==0 && szj1ossz==szj2ossz){
           if(x>ech1){
            ech2= ech1;
            ech1=x;
           }
           if(x<ech1 && x>ech2){
            ech2=x;
           }

        }
    }
    cout << ech1 << " " << ech2;
    //cout << ech2 << endl;
    return 0;
}
