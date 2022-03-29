#include <iostream>

using namespace std;

int main()
{
    int i, n=11, csp;
    int v[11]={4,1,5,5,0,2,1,7,7,8,8};
    do{
        cout << "Kerem a csomopontot" << endl;
        cin >> csp;
    }while(csp > 11);
    cout << v[csp-1];
    return 0;
}
