#include <iostream>
using namespace std;

int arr[20]			// Membuat array dengan panjang data 20
int n;				// Membuat variable inputan n

void input()
{	// Procedure Input
	while (true)
	{
		cout << "Masukkan jumlah data pada Array : ";		// Membuat inputan jumlah element array
		cin >> n;											// Memanggil variabel inputan n
	
		if (n <= 20)
		{	// Membuat kondisi n tidak lebih dari 20
			break;

		}
		else
		{
			cout << "\nArray yang anda Masukkan maksimal 20 elemen. \n";
		}
	}
	cout << endl;
	cout << "======================" << endl;
	cout << "Masukkan element array" << endl;
	cout << "======================" << endl;

	// Menggunakan perulangan

}