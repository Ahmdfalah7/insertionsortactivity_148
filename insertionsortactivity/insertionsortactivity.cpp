#include <iostream>
using namespace std;

int arr[20];		// Membuat array dengan panjang data 20
int n;			// Membuat variable inputan n

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

	// Menggunakan perulangan for untuk untuk menyimpan data pada array
	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> arr[i];

	}
}
// Procedur Insertionsort
void insertionsort()
{


	int temp;		// Membuat variable daya temporer atau penyimpanan sementara
	int j;			// Membuat variable j sebagai tanda

	for (int i = 1; i < n; i++)		//1. Membuat looping dengan i dimulai dari 1 hingga n-1
	{
		temp = arr[i];		// 2. simpan nilai arr[i} ke variable sementara temp

		j = i - 1;		// 3. setting nilai j sama dengan i-j; 

		while (j >= 0 && arr[j] > temp);	// 4. looping while dimana nilai j lebih besar
		{									// arr[j]nlebih besar daripada temp
			arr[j + 1] = arr[j];			// a. simpan arr[j] ke dalam variabel arr[j + 1]
			j--;							// b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;					// 5. simpan nilai temp ke dalam arr[j + 1

		cout << endl;
		cout << "\nPass " << i << ": ";		// Output ke layar
		for (int k = 0; k < n; k++)			// looping nilai k dimulai dari 0 hingga
		{
			cout << arr[k] << " ";			// Output ke layar
		}
	}
};

void display()
{
	cout << endl;				// Output ke baris kosong
	cout << "Total Element Movement= " << n - 1 << endl; // cout movement element
	cout << "\n=====================================" << endl;	// Output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// Output ke layar
	cout << "=======================================" << endl;	// Output ke layar

	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << endl;

	}
	cout << endl;

}
int main()
{
	input();	// Memanggil Display
	insertionsort();	// Memanggil insertionsort
	display();			// Memanggil display
}