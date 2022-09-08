#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];
    std::cout << "1-100 ertekek duplazasa\n";
    for (int i = 0;i<N_ELEMENTS;i++)
    {
        b[i] = (i+1) * 2;
    }
    for (int i = 0; i<N_ELEMENTS; i++)
    {
        std::cout << "Ertek: " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    float atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << std::endl;
    std::cout << "Science is what we understand well enough to explain to a computer. "
    << "Art is everything else we do.\n" << "\t/Donald Knuth/\n";
    return 0;
}
