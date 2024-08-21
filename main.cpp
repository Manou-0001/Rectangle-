#include <iostream>
#include "Rectangle.h"
#include <string>
using namespace std;

int main()
{
    Rectangle Rect1= Rectangle();
    Rect1.nom="Rectangle 1";
    Rect1.setlongeur(6);
    Rect1.setlargeur(4);
    Rect1.afficher();
     Rectangle Rect2=Rectangle();
    Rect2.nom="Rectangle 2";
    Rect2.setlongeur(3);
    Rect2.setlargeur(1);
    Rect2.afficher();
    return 0;
}
