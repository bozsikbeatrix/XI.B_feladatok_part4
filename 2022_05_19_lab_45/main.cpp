#include <iostream>

using namespace std;

int factori(int m, int n){
    int oszto=2, S=0;
    while(n>1 && m>1){
    int nNr=0, mNr=0;
    while(n%oszto==0){
        nNr++;
        n/=oszto;
    }
    while(m%oszto==0){
        mNr++;
        m/=oszto;
    }
    if(mNr==nNr && mNr>0) S++;
    oszto++;
}
return S;
}

int main()
{
    cout << factori(16500, 10780) << endl;
    return 0;
}
