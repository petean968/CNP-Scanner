// ConsoleApplication12.cpp : 
// This file contains the 'main' function. 
// Program execution begins and ends there.


#include <iostream>
using namespace std;

int main()
{
	long long int cnp;
	int s, z, l, a, j;
	cout << "Introduceti CNP:";
	cin >> cnp;
	cout << '\n';
	s = cnp / 1000000000000;//12 zero

	if (s % 2 == 0)
		cout << "Sex feminin" << " ";
	else
		cout << "Sex masculin" << " " << '\n';
	cout << '\n';
	a = cnp / 10000000000;//10zero

	if (a < 10)
		cout << "0" << a << " ";
	else
		cout << a << " ";

	l = cnp / 100000000 % 100;//8 zero

	if (l < 10)
		cout << "0" << l << " ";
	else
		cout << l << " ";

	z = cnp / 1000000 % 100;//6 zero

	if (z < 10)
		cout << "0" << z << " " << '\n';
	else
		cout << z << " " << '\n';
	cout << '\n';
	/*pana aici codul a fost preluat din manualul TIC cl. a VIII-a
	pagina 59 scris de familia Giurgiulescu,de aici scriu eu,Petean I.S.*/

	long long int n = cnp;
	int arr[13];
	for (int i = 12; i >= 0; i--)
	{
		arr[i] = n % 10;
		n = n / 10;
	}
	cout << '\n';
	if
		(arr[7] == 0 and arr[8] == 1)
		cout << "Alba" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 2)
		cout << "Arad" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 3)
		cout << "Arges" << '\n';

	else if
		(arr[7] == 0 and arr[8] == 4)
		cout << "Bacau" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 5)
		cout << "Bihor" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 6)
		cout << "Bistrita Nasaud" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 7)
		cout << "Botosani" << '\n';

	else if
		(arr[7] == 0 and arr[8] == 8)
		cout << "Brasov" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 9)
		cout << "Braila" << '\n';
	else if
		(arr[7] == 0 and arr[8] == 0)
		cout << "Buzau" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 1)
		cout << "Caras Severin" << '\n';

	else if
		(arr[7] == 1 and arr[8] == 2)
		cout << "Cluj" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 3)
		cout << "Constanta" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 4)
		cout << "Covasna" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 5)
		cout << "Dambovita" << '\n';

	else if
		(arr[7] == 1 and arr[8] == 6)
		cout << "Dolj" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 7)
		cout << "Galati" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 8)
		cout << "Gorj" << '\n';
	else if
		(arr[7] == 1 and arr[8] == 9)
		cout << "Harghita" << '\n';

	else if
		(arr[7] == 2 and arr[8] == 0)
		cout << "Hunedoara" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 1)
		cout << "Ialomita" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 2)
		cout << "Iasi" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 3)
		cout << "Ilfov" << '\n';

	else if
		(arr[7] == 2 and arr[8] == 4)
		cout << "Maramures" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 5)
		cout << "Mehedinti" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 6)
		cout << "Mures" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 7)
		cout << "Neamt" << '\n';

	else if
		(arr[7] == 2 and arr[8] == 8)
		cout << "Olt" << '\n';
	else if
		(arr[7] == 2 and arr[8] == 9)
		cout << "Prahova" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 0)
		cout << "Satu Mare" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 1)
		cout << "Salaj" << '\n';

	else if
		(arr[7] == 3 and arr[8] == 2)
		cout << "Sibiu" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 3)
		cout << "Suceava" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 4)
		cout << "Teleorman" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 5)
		cout << "Timis" << '\n';

	else if
		(arr[7] == 3 and arr[8] == 6)
		cout << "Tulcea" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 7)
		cout << "Vaslui" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 8)
		cout << "Valcea" << '\n';
	else if
		(arr[7] == 3 and arr[8] == 9)
		cout << "Vrancea" << '\n';

	else if
		(arr[7] == 4 and arr[8] == 0)
		cout << "Bucuresti" << '\n';
	else if
		(arr[7] == 4 and arr[8] == 1)
		cout << "Bucuresti Sectorul 1" << '\n';
	else if
		(arr[7] == 4 and arr[8] == 2)
		cout << "Bucuresti Sectorul 2" << '\n';
	else if
		(arr[7] == 4 and arr[8] == 3)
		cout << "Bucuresti Sectorul 3" << '\n';

	else if
		(arr[7] == 4 and arr[8] == 4)
		cout << "Bucuresti Sectorul 4" << '\n';
	else if
		(arr[7] == 4 and arr[8] == 5)
		cout << "Bucuresti Sectorul 5" << '\n';
	else if
		(arr[7] == 4 and arr[8] == 6)
		cout << "Bucuresti Sectorul 6" << '\n';

	else if
		(arr[7] == 5 and arr[8] == 1)
		cout << "Calarasi" << '\n';
	else if
		(arr[7] == 5 and arr[8] == 2)
		cout << "Giurgiu" << '\n';
	else
		cout << "Fuck Off !Dispari !Nu exista!" << '\n';
	cout << '\n';
	if
		(arr[0] == 1)
		cout << "Persoana de sex masculin, nascuta intre 01 ianuarie 1900 - 31 decembrie 1999" << '\n';

	else if
		(arr[0] == 2)
		cout << "Persoana de sex feminin,nascuta intre 01 ianuarie 1900 - 31 decembrie 1999" << '\n';

	else if
		(arr[0] == 3)
		cout << "Persoana de sex masculin,nascuta intre 01 ianuarie 1800 - -31 decembrie 1899" << '\n';

	else if
		(arr[0] == 4)
		cout << "Persoana de sex feminin,nascuta intre 01 ianuarie 1800 - -31 decembrie 1899" << '\n';

	else if
		(arr[0] == 5)
		cout << "Persoana de sex masculin,nascuta intre 01 ianuarie 2000 - -31 decembrie 2099" << '\n';

	else if
		(arr[0] == 6)
		cout << "Persoana de sex feminin,nascuta intre 01 ianuarie 2000 - -31 decembrie 2099" << '\n';

	else if
		(arr[0] == 7)
		cout << "Persoana straina de sex masculin, rezidenta in Romania" << '\n';
	else if
		(arr[0] == 8)
		cout << "Persoana straina de sex feminin, rezidenta in Romania" << '\n';
	else if
		(arr[0] == 9)
		cout << "Reprezinta persoanele straine" << '\n';
	else
		cout << "Cod incorect" << '\n';
	return 0;


}


