#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // A globális változó helyes neve: N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa' // sor végén ';' hiánya, kiírandó szöveget "" közé helyezni, hiszen sztring, érdemes sort emelni, hogy szebben írassuk ki az értékeket
    for (int i = 0;) // for ciklus így nem csinál semmit, 2. és 3. paraméter hiánya /for (int i = 0;i<N_ELEMENTS;i++)/
    {
        b[i] = i * 2; // Ha 1-100-ig terjedő számokat duplázunk, akkor a 0 nem tartozik bele, tehát => b[i] = (i+1) * 2
    }
    for (int i = 0; i; i++) // 2. paraméter helytelen, helyes: i < N_ELEMENTS
    {
        std::cout << "Ertek:" // Így csak az "Ertek:" üzenet jelenik meg. Célszerű megadni, melyik értéket jelenítsük meg, továbbá sor végén hiányzik a ';'
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Átlag változó egészként deklarálva pontatlan értéket ad => float/double célszerűbb int helyett, továbbá szükséges alapértéket megadni (float atlag = 0;)
    for (int i = 0; i < N_ELEMENTS, i++) // ',' helyett ';' 
    {
        atlag += b[i]  // Sor végén ';'
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
