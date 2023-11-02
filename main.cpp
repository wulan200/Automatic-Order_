#include <iostream>
#include <Windows.h>

using namespace std;


void setcolor(unsigned short color)
{
	HANDLE project = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(project, color);
}
int main()
{
	
	const int parkir = 2000;
	char pembelian;
	int kode, porsi, jumlah, banyak;
	long int total, akhir, bayar, harga, duit, kembalian, totalbayar;

	int nilai[6];
	nilai[0] = 15000;
	nilai[1] = 20000;
	nilai[2] = 25000;
	nilai[3] = 3000;
	nilai[4] = 5000;
	nilai[5] = 5000;

	setcolor(14);

atas: 
	cout << "          +---------------------------+" << endl;
	cout << "          |                           |" << endl;
	cout << "+=========+===      RAJA LAUT      ===+=========+" << endl;
	cout << "|             Warung Makan Seafood              |" << endl;
	cout << "|          Jl.Pahlawan No.56 Bima Kota          |" << endl;
	cout << "+===============================================+" << endl;
	cout << "" << endl;

	setcolor(3);

	cout << "+---------------+---------------+---------------+" << endl;
	cout << "|               |  MENU MAKANAN |               |" << endl;
	cout << "+---+-----------+---------------+--------+------+" << endl;
	cout << "    |   1. Nasi Ayam Bakar               |" << endl;
	cout << "    |   2. Nasi Bakar Cumi               |" << endl;
	cout << "    |   3. Ikan Gurame Bakar             |" << endl;
	cout << "+---+------------+--------------+--------+------+" << endl;
	cout << "|                | MENU MINUMAN |               |" << endl;
	cout << "+---+------------+--------------+--------+------+" << endl;
	cout << "    |   4. Air mineral                   |" << endl;
	cout << "    |   5. Es kelapa                     |" << endl;
	cout << "    |   6. Es Jeruk Peras                |" << endl;
	cout << "+---+-----------+---------------+--------+------+" << endl;
	cout << "|               | SEMOGA NYAMAN |               |" << endl;
	cout << "+---------------+---------------+---------------+" << endl;

	setcolor(11);
	cout << "Jumlah Menu yang Dipesan = ";
	cin >> banyak;
	jumlah = 1;
	bayar = 0;
	for (jumlah = 1; jumlah <= banyak; jumlah++) 

	{
	ulang: 
		cout << "" << endl;
		cout << "Masukkan Kode Menu = ";
		cin >> kode;
		cout << "" << endl;

		

		if (kode == 1)
		{
			cout << "Nama Makanan = Nasi Ayam Bakar ";
			cout << "" << endl;
			cout << "Harga        = Rp" << nilai[0] << ",-" << endl;
			cout << "Jumlah Porsi = ";
			cin >> porsi;
			harga = 15000;
			total = harga * porsi;
			cout << "" << endl;
			cout << "Total Harga  = Rp" << total << ",-";
			cout << "" << endl;
		}
		else
			if (kode == 2)
			{
				cout << "Nama Makanan = Nasi Bakar Cumi ";
				cout << "" << endl;
				cout << "Harga        = Rp" << nilai[1] << ",-" << endl;
				cout << "Jumlah Porsi = ";
				cin >> porsi;
				harga = 20000;
				total = harga * porsi;
				cout << "" << endl;
				cout << "Total Harga  = Rp" << total << ",-";
				cout << "" << endl;
			}
			else
				if (kode == 3)
				{
					cout << "Nama Makanan = Ikan Laut bakar ";
					cout << "" << endl;
					cout << "Harga        = Rp" << nilai[2] << ",-" << endl;
					cout << "Jumlah Porsi = ";
					cin >> porsi;
					harga = 25000;
					total = harga * porsi;
					cout << "" << endl;
					cout << "Total Harga  = Rp" << total << ",-";
					cout << "" << endl;
				}
				else
					if (kode == 4)
					{
						cout << "Nama Makanan = Air Mineral ";
						cout << "" << endl;
						cout << "Harga        = Rp" << nilai[3] << ",-" << endl;
						cout << "Jumlah Porsi = ";
						cin >> porsi;
						harga = 3000;
						total = harga * porsi;
						cout << "" << endl;
						cout << "Total Harga  = Rp" << total << ",-";
						cout << "" << endl;
					}
					else
						if (kode == 5)
						{
							cout << "Nama Makanan  = Es Kelapa";
							cout << "" << endl;
							cout << "Harga         = Rp" << nilai[4] << ",-" << endl; 
							cout << "Jumlah Porsi  = ";
							cin >> porsi;
							harga = 5000;
							total = harga * porsi;
							cout << "" << endl;
							cout << "Total Harga   = Rp" << total << ",-";
							cout << "" << endl;
						}
						else
							if (kode == 6)
							{
								cout << "Nama Makanan  = Es Jeruk Peras";
								cout << "" << endl;
								cout << "Harga         = Rp" << nilai[5] << ",-" << endl;
								cout << "Jumlah Porsi  = ";
								cin >> porsi;
								harga = 3000;
								total = harga * porsi;
								cout << "" << endl;
								cout << "Total Harga   = Rp" << total << ",-";
								cout << "" << endl;
							}
							else
							{
								cout << "Menu Tidak Ada" << endl;
								goto ulang;
								cout << "" << endl;
							}

		

		bayar = bayar + total;
		totalbayar = bayar + parkir; 
	}
	cout << "" << endl;;
	cout << "Total Menu               = Rp" << bayar << ",-";
	cout << "" << endl;
	cout << "Biaya Parkir             = Rp" << parkir << ",-";
	cout << "" << endl;
	cout << "Total Pembayaran         = Rp" << totalbayar << ",-";
	cout << "" << endl;
	cout << "Masukkan Pembayaran      = Rp"; cin >> duit;
	cout << "" << endl;
	akhir = totalbayar;
	kembalian = duit - akhir;
	cout << "KEMBALIAN               = Rp" << kembalian << ",-";
	cout << "" << endl;
	cout << "" << endl;

	setcolor(13);

	cout << "           +===================================+           " << endl;
	cout << "           |                                   |           " << endl;
	cout << "           |----------[TERIMA KASIH]-----------|           " << endl;
	cout << "           |                                   |           " << endl;
	cout << "+==========+=======[     RAJA LAUT    ]========+==========+" << endl;
	cout << "|          |                                   |          |" << endl;
	cout << "|          |   Pesanan Anda Sedang Disiapkan   |          |" << endl;
	cout << "|          |        Silahkan Tunggu.....       |          |" << endl;
	cout << "|          |                                   |          |" << endl;
	cout << "+==========+===================================+==========+" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;

	setcolor(14);

balik:
	cout << "Pembelian Baru [y/n] "; cin >> pembelian;
	if (pembelian == 'y' || pembelian == 'Y')
		goto atas;
	else
		if (pembelian == 'n' || pembelian == 'N')
			cout << "Program Logging Off.....";
		else
			goto balik;



	return 0;

}