#include <iostream>

using namespace std;

int main()
{
    int k, n, M[100][100];
    cout << "k=";
    cin >> k;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                M[i][j]=k*(i+1)-i;
            }else{
                M[i][j]=M[i][j-1]+1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << M[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
