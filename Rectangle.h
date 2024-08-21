#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <string>
using namespace std;

class Rectangle
{
    public:
        Rectangle();
        void setlongeur(int L);
        void setlargeur(int l);
    string nom;
    void afficher();
    private:
        int longeur,largeur;
};



#endif // RECTANGLE_H_INCLUDED
