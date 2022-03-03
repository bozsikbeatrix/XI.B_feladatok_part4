#include<iostream>


using namespace std;

//a lista deklaralasa globalisan

//C++ ban ezt kulon classbe kellene deklaralni

struct lista {

    //a szamertek egy elemen belul

   int ertek;

   //mutato a kovetkezo elemre

   lista * kov;

};


int main() {

    //ures lista letrehozasa, amely egy nulla elemre mutat tovabb

   lista * mutato = NULL;

   int i;

   for(i=0;i<10;i++) {

        //uj nem ures elem letrehozasa

      lista * ujelem = new lista;

    //az uj elem int mezojenek adunk erteket

      ujelem->ertek = i;

    //a kovetkezo elem az a mutatora fog mutatni, ami eloszor a semmibe mutat (vagyis jelzi, hogy vege van)
    //aztan az elso elemre, majd a semmibe mutat, aztan a masodik elemre, elso elemre majd a semmibe mutat, stb
      ujelem->kov  = mutato;

      //a mutatonak megfeleltetjuk az ujonnan letrehozott elemet
      mutato = ujelem;
   }

   //lista kiirasa
   while(mutato) {

      cout << mutato->ertek << " ";
      mutato = mutato->kov ;
   }

   return 0;

}
