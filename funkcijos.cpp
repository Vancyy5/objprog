#include "funkcijos.h"

double skaiciuotiVid(vector<int> nd) 
{
    if (nd.empty()) 
    {
        throw std::runtime_error("Namu darbu sarasas negali buti tuscias.");
    }
    else
    {
        double suma = 0.0;
        for (int nd : nd) 
        {
            suma += nd;
        }
    return suma*1.00/ nd.size();
    }
    
}
//---
double skaiciuotiMed(vector<int> nd) 
{
    if (nd.empty()) {
        throw std::runtime_error("Namu darbu sarasas negali buti tuscias.");
    }
    else
    {
        sort(nd.begin(), nd.end());
        int dydis = nd.size();
    if (dydis % 2 == 0) 
    {
        return (nd[dydis / 2 - 1] + nd[dydis / 2]) / 2.0;
    } 
    else 
    {
        return nd[dydis / 2];
    }
}  
}
//---
int readInteger() 
{
    int value;
    while (true) {
        cin >> value;
        if (cin.fail() or value < 0) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Klaida: Prasome ivesti teigiama skaiciu." << endl;
        }
        else {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
        }
    }
    return value;
}