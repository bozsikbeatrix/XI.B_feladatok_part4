#include<iostream>
using namespace std;
struct lista {
   float szam;
   string gyumolcs;
   lista * kov;
};
int main() {
   lista * mutato = NULL;
   int n;
   cout << "n = " ;
   cin >> n ;
   int i;
   for(i=0;i<n;i++) {
      lista * ujelem = new lista;
      cout << "Kerem a szamot " ;
      cin >>ujelem->szam;
      cout << "Kerem a gyumolcsot " ;
      cin >> ujelem->gyumolcs;
      ujelem->kov  = mutato;
      mutato = ujelem;
   }
    lista * tempmutato = mutato;
    float szamertek=0;
   while(tempmutato) {
      if(tempmutato->szam > szamertek){
        szamertek= tempmutato->szam;
      }
      tempmutato = tempmutato->kov ;
   }

   while(mutato) {
      //cout << tempmutato->nev << " ";
      if (mutato->szam >= szamertek)
      {
      cout << mutato->gyumolcs << " " << endl ;
      }
      mutato = mutato->kov ;

   }
   cout << endl;
   return 0;
}
