#include "Rectangle.h"
#include <iostream>
#include <math.h>

Rectangle::Rectangle()
{

}
void Rectangle::setlongeur(int L)
{
    longeur=L;
}
void Rectangle::setlargeur(int l)
{
    largeur=l;
}

void Rectangle:: afficher()
{
    int S,P;
    float d;
    S=longeur*largeur;
    P=(longeur+largeur)*2;
    d=sqrt((longeur*longeur)+(largeur*largeur));
    cout<<"Nom: "<<nom<<endl;
    cout<<"Surface: "<<S<<endl;
    cout<<"Perimetre: "<<P<<endl;
    cout<<"diagonal: "<<d<<endl;


}
