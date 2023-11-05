#include "Header.h"
#include "Kvadratni.h"
#include "Pryamokytni.h"
#include "Trykutni.h"

int main()
{
    int n = 15;
    Sheets** sheets = new Sheets * [n] {
        new Kvadratni(2),
        new Kvadratni(4),
        new Kvadratni(5),
        new Kvadratni(8),
        new Kvadratni(12),
        new Pryamokytni(2, 6),
        new Pryamokytni(1, 3),
        new Pryamokytni(6, 9),
        new Pryamokytni(10, 9),
        new Pryamokytni(5, 7),
        new Pryamokytni(12, 32),
        new Pryamokytni(4 ,9),
        new Trykutni(4, 8),
        new Trykutni(2, 6),
        new Trykutni(6, 12)
    };

    double s = 0;
    double w = 0;
    for (int i = 0; i < n; i++) {
        sheets[i]->display();
        s += sheets[i]->calcArea();
        w += sheets[i]->calcWeight();
    }
    
    std::cout << std::endl;
    std::cout << "Total area:  " << s << std::endl;
    std::cout << "Total weight  " << w << std::endl;

    for (int i = 0; i < n; i++) {
        delete sheets[i];
    }
    delete[] sheets;
    //fin
    std::cout << "\n\nFinish";
    
}

