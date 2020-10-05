//Auteur: Aymen Elfaid
//Date: 4 Octobre 2020
//But: Calcule le salaire d'un employé basé sur les ventes hebdomadaire
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//Déclaration des constantes
	const float POURCENTAGE = 7.5; 
	const int PAR_SEMAINE = 250;

	//Déclaration des variables
	float vente;


	//On demande le montant des ventes total pour la première fois
	cout << "Veuillez entrer le montant total de vos ventes: ";
	cin >> vente;

	while (!(vente == -1)) //tant que la réponse n'était pas de -1 on ne quitte pas le programme 
	 {
		if (vente < 0) //on vérifie que le que la réponse n'est pas négative 
		{
			cout << "Les ventes ne peuvent pas être négatives!" << endl; //On affiche le message d'erreur
			system("pause");
			system("cls");
			cout << "Veuillez entrer le montant total de vos ventes: "; //On redemande le montant afin d'y répondre a la prochaine itération de la boucle
			cin >> vente;
		}
		else
		{
			cout << "Votre salaire de cette semaine est de: $" << PAR_SEMAINE + POURCENTAGE / 100 * vente << "!" << endl; //Si les conditions sont bonnes, on donne la réponse
			system("pause");
			system("cls");
			cout << "Veuillez entrer le montant total de vos ventes: "; //On redemande la question afin d'y répondre a la prochaine itération de la boucle.
			cin >> vente;
		}
	}
	cout << "Au revoir!" << endl; //On quitte le programme, au revoir!
	system("pause");


	/*
	TEST
	-500					Les ventes ne peuvent pas être négatives!
	500					287.5$
	0					250$
	5000					625$
	-1					Au revoir!
	*/
}