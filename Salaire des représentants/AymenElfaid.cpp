//Auteur: Aymen Elfaid
//Date: 4 Octobre 2020
//But: Calcule le salaire d'un employ� bas� sur les ventes hebdomadaire
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//D�claration des constantes
	const float POURCENTAGE = 7.5; 
	const int PAR_SEMAINE = 250;

	//D�claration des variables
	float vente;


	//On demande le montant des ventes total pour la premi�re fois
	cout << "Veuillez entrer le montant total de vos ventes: ";
	cin >> vente;

	while (!(vente == -1)) //tant que la r�ponse n'�tait pas de -1 on ne quitte pas le programme 
	 {
		if (vente < 0) //on v�rifie que le que la r�ponse n'est pas n�gative 
		{
			cout << "Les ventes ne peuvent pas �tre n�gatives!" << endl; //On affiche le message d'erreur
			system("pause");
			system("cls");
			cout << "Veuillez entrer le montant total de vos ventes: "; //On redemande le montant afin d'y r�pondre a la prochaine it�ration de la boucle
			cin >> vente;
		}
		else
		{
			cout << "Votre salaire de cette semaine est de: $" << PAR_SEMAINE + POURCENTAGE / 100 * vente << "!" << endl; //Si les conditions sont bonnes, on donne la r�ponse
			system("pause");
			system("cls");
			cout << "Veuillez entrer le montant total de vos ventes: "; //On redemande la question afin d'y r�pondre a la prochaine it�ration de la boucle.
			cin >> vente;
		}
	}
	cout << "Au revoir!" << endl; //On quitte le programme, au revoir!
	system("pause");


	/*
	TEST
	-500					Les ventes ne peuvent pas �tre n�gatives!
	500					287.5$
	0					250$
	5000					625$
	-1					Au revoir!
	*/
}