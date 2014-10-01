/*Harjoitus 5
Santeri Taponen
Kirjoita ohjelma, joka pyyt‰‰ k‰ytt‰j‰lt‰ kaksi kokonaislukua.

Ohjelma tulostaa tekstin BINGO, mik‰li luvut ovat samoja.

Muussa tapauksessa ohjelma tulostaa tekstin BONGO.
Versio 1.0
1.10.2014*/
#include <iostream>
using namespace std;
void main(void)
{
	int luku1;
	int luku2;
	cout << "Anna kaksi lukua \n ";
	cin >> luku1;
	cin >> luku2;
	if (luku1 == luku2)
		cout << "Bingo \n ";
	else
		cout << "Bongo \n ";
}
