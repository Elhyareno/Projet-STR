#include <iostream>

int main()
{
    std::cout << "Bienvenue dans RTS2D !" << std::endl;

    int nourriture = 50;
    int bois = 120;
    int gold = 30;
    int coutNourritureOuvrier = 10;
    int coutBoisOuvrier = 25;
    int coutOrOuvrier = 5;

    std::cout << "Nourriture : " << nourriture << std::endl;
    std::cout << "Bois : " << bois << std::endl;
    std::cout << "Or : " << gold << std::endl;
    std::cout << "Coût pour créer un ouvrier : " << coutNourritureOuvrier << " nourriture, "
              << coutBoisOuvrier << " bois, " << coutOrOuvrier << " or." << std::endl;      
    if (nourriture >= coutNourritureOuvrier && bois >= coutBoisOuvrier && gold >= coutOrOuvrier)
    {
        nourriture -= coutNourritureOuvrier;
        bois -= coutBoisOuvrier;
        gold -= coutOrOuvrier;
        std::cout << "Ouvrier créé avec succès !" << std::endl;
    }
    else
    {
        std::cout << "Ressources insuffisantes pour créer un ouvrier." << std::endl;
    }

    return 0;
}