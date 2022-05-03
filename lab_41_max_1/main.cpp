#include <iostream>
#include <fstream>

using namespace std;

int digit(int n){
int first=n/10;
int last=n%10;
if(first>last){
    return last*10+first;
} else{
    return first*10+last;
}
}

int main()
{
    int n, m, x, counter=0;
    int stat[100]={0};
    ifstream in("numere.in");
    in >> n >> m;
    for(int i=0; i<n; i++){
        in >> x;
        int nr=digit(x%100);
        stat[nr]++;
    }
    for(int i=0; i<m; i++){
        in >> x;
        int nr=digit(x%100);
        counter+=stat[nr];
    }
    cout << counter << endl;
    return 0;
}
