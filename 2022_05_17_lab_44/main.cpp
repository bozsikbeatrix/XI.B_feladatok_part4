#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100][100], n, m, x;
    cin >> n;
    cin >> m;
    bool istrue=false;
    ifstream in("input.txt");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            in >> v[i][j];
        }
    }
    cout << "x=";
    cin >> x;
    for(int j=0; j<m; j++){
        if(v[0][j]==x){
            istrue=true;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][0]==x){
            istrue=true;
        }
    }
    for(int j=0; j<m; j++){
        if(v[n][j]==x){
            istrue=true;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][m-1]==x){
            istrue=true;
        }
    }
    if(istrue){
        cout << "DA";

    }else{
        cout << "NU";
    }
    return 0;
}
