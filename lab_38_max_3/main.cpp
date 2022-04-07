#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("in.txt");
    ofstream out("out.txt");
    int n, v[10000], min=999999, max=-1, counter=0;
    in >> n;
    for(int i=0; i<n; i++){
        int a, b;
        in >> a;
        in >> b;
        if(a<min){
            min=a;
        }
        if(b>max){
            max=b;
        }
        for(int j=a; j<=b; j++){
            v[j]= 1;
        }
    }
    for(int i=min; i<max; i++){
        if(v[i]==1 && v[i+1]==0) counter++;
    }
    out << counter << endl;
    return 0;
}
