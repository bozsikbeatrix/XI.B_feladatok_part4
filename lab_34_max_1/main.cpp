#include <iostream>
#include <fstream>

using namespace std;

int v[100][100];

bool van(int x, int y){
    if(v[x][y] > 0){
        return true;
    }
    return false;
}

int hany_db(int v[][100], int x, int N){
   int db=0;
   for(int i=1; i<N+1; i++){
    db+=v[x][i];
   }
   return db;
}

int main()
{
    int N=8;
    ifstream in("input.txt");

    for(int i=1; i<N+1; i++){
        for(int j=1; j<N+1; j++){
            v[i][j]=0;
        }
    }
    v[1][2]=1;
    v[2][1]=1;
    v[1][6]=1;
    v[2][3]=1;
    v[2][4]=1;
    v[3][4]=1;
    v[4][8]=1;
    v[5][6]=1;
    v[5][7]=1;
    v[5][8]=1;
    for(int i=1; i<N+1; i++){
        for(int j=i+1; j<N+1; j++){
            v[j][i]=v[i][j];
        }
    }
    for(int i=1; i<N+1; i++){
        for(int j=i+1; j<N+1; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    int csp[2][N+1];
    for(int i=1; i<N+1; i++){
        csp[0][i]=hany_db(v,i,N);
        csp[1][i]=i;
    }
    for(int i=1; i<N-1; i++){
        for(int j=i+1; j<N+1; j++){
            if(csp[0][i]>csp[0][j]){
                swap(csp[0][i],csp[0][j]);
                swap(csp[1][i],csp[1][j]);
            }
        }
    }
    for(int i=1; i<N+1; i++){
        cout << csp[1][i] << " ";
    }
    return 0;
}
