#include <iostream>

using namespace std;

int dublicare(int n){
int p=1, x=n, d=0;
while(x>0){
    if(x%10%2==1){
        d=d+x%10*p;
    }else{
        d=d+x%10*p;
        p=p*10;
        d=d+x%10*p;
    }
    x=x/10;
    p=p*10;
}
if(d==n){
    d=-1;
}
return d;
}

int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << dublicare(n);
    return 0;
}
