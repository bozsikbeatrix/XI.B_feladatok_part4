#include <iostream>

using namespace std;

void primek(int n, int &x, int &y){
x=0;
y=0;
for(int i=1; i<n; i++){
    bool prim=true;
    for(int oszto=2; oszto<i/2+1; oszto++){
        if(i%oszto==0){
            prim=false;
        }
    }
    if(prim && i>y){
        x=y;
        y=i;
    }
}
cout << x << " " << y;
}

int main()
{
    int n, x, y;
    cout << "n=";
    cin >> n;
    primek(n,x,y);
    return 0;
}
