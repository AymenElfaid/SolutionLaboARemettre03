//Auteur: Aymen Elfaid
//Date: 4 Octobre 2020
//But: Devinette
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    //Déclarion des variables
    int chances = 5; //Permet de storer le nombre de chances restante
    int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
    int nombre; //Permet de storer le nombre écrit par l'utilisateur

    srand(time(0)); // pour activer l’aléatoire dans le programme
    iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
        
        cout << "Devniez le nombre (entre 0 et 100): "; //On demande a l'utilisateur de deviner le nombre
        cin >> nombre;
        
        if (nombre > iRandom) //On donne a l'utilisateur un indice si le nombre est trop grand 
        {
            system("cls");
            cout << "Le nombre est plus petit que " << nombre << "!" << endl; //indice
            chances--; //On enleve une chance
            cout << "Il vous reste " << chances << " chances"<< endl; // On affiche le nombre de chances
            system("pause");
        }
        if (nombre < iRandom)//On donne a l'utilisateur un indice si le nombre est trop petit
        {
            system("cls");
            cout << "Le nombre est plus grand que " << nombre << "!" << endl; //indice
            chances--; //On enleve une chance
            cout << "Il vous reste " << chances << " chances"<< endl; // On affiche le nombre de chances restante
            system("pause");
        }
        if (nombre == iRandom) //l'utilisateur gagne le jeu
        {
            cout << "Vous avez gagné!"<< endl;
            system("pause");
            chances = 0; // on met les chances à 0 afin de ne pas entrer dans la boucle
        }

    while (chances != 0) //On recommence la boucle tant qu'il ne reste des chances
    {
        system("cls");
        cout << "Devniez le nombre: "; //On demande a l'utilisateur de deviner le nombre
        cin >> nombre;

       
        if (nombre > iRandom) //On donne a l'utilisateur un indice si le nombre est trop grand 
        {
            system("cls");
            cout << "Le nombre est plus petit que "<< nombre << "!" << endl; //indice
            chances--; //On enleve une chance
            cout << "Il vous reste " << chances << " chances" << endl; //On affiche le nombre de chances restantes
            system("pause");
        }
        if (nombre < iRandom)//On donne a l'utilisateur un indice si le nombre est trop petit
        {
            system("cls");
            cout << "Le nombre est plus grand que "<< nombre << "!"<< endl; //indice
            chances--; //On enleve une chance
            cout << "Il vous reste " << chances << " chances" << endl; // On affiche le nombre de chances restante
            system("pause");
        }
        if (nombre == iRandom) //On affiche un message de victoire si l'utilisateur gagne
        {
            cout << "Vous avez gagné!";
            chances = 0;
        }
       
    }
        cout << "Au revoir!"<< endl; //On affiche un message d'aurevoir si on quitte la boucle 
        system("pause");
    
}


/*
TEST
Le programme ne refuse pas les nombres negatifs car quand j'essaye d'implementer ca toute ma logique brise :(



*/