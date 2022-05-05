#include <iostream>

using namespace std;

int divPrim(int n){
int oszto=2;
int S=0;
while(n>1){
    int szamlalo=0;
    while(n%oszto==0){
        n=n/oszto;
        szamlalo++;
    }
    if(szamlalo%2>0){
        S=S+oszto;
    }
    oszto++;
}
return S;
}

int main()
{
    int S=divPrim(360);
    cout << S << endl;
    return 0;
}
