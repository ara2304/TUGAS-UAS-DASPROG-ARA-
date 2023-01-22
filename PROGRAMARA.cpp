 #include<iostream>
using namespace std;

int main()
{
	string merk, masuk, login, password, loginD, passwordD;
	char ukuran, ulang, ulang1;
	int harga, total_harga, pilihan, jumlah,jumlah1, hasil, hasil2, harga1, harga2, total_harga1;
	long  total_harga2;

    cout << "\t\t\t\t\t";
	cout << "=======PROGRAM TOKO DAILY MAYOUTFIT=======" << endl;
	cout << "Masuk / Daftar: ";
	cin >> masuk;
		if (masuk == "daftar" || masuk == "Daftar"){
			cout << "\tDAFTAR AKUN" <<endl;
			cout << "\tMasukan Username: ";
			cin >> loginD;
			cout << "\tMasukan Password: ";
			cin >> passwordD;
			cout << "\tSELESAI" << endl;
		}
		system("cls");
		cout << "\tPROGRAM TOKO DAILY MYAOUTFIT" << endl;
		cout << "\tMasuk / Daftar: Masuk " << endl;
        cout << "\tMasukan Username: ";
        cin >> login;
        cout << "\tMasukan Password: ";
        cin >> password;

	do
	{
		if (login == "test" && password == "uts123" || login == loginD && password == passwordD){
            system("cls");
			cout << "\tSILAHKKAN PILIH BARANG BELANJAAN ANDA" << endl;
			cout << "\t1. Dress" << endl;
			cout << "\t2. Celana" << endl;
			cout << "\tPilihan Anda: ";
			cin >> pilihan;
			system("cls");
			switch (pilihan){
				case 1:
					cout << "\tSELAMAT DATANG DI DAILY MAYOUTFIT " << endl;
					cout << "\t1. Nevada     = Rp. 340000" << endl;
					cout << "\t2. Zara       = Rp. 450000" << endl;
					cout << "\t3. Uniqlo     = Rp. 350000" << endl;
					cout << "\t4. Erigo      = Rp. 330000" << endl;
					cout << "\t5. Levi's     = Rp. 400000" << endl;
					cout << "\tPilihan Anda: ";
					cin >> pilihan ;
					switch (pilihan){
						case 1:
							hasil = 140000;
							cout << "\tAnda Memilih Nevada" << endl;
							cout << "\tHarga Rp. 340000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah;
							total_harga = hasil * jumlah;
							cout << "\tHarga Barang: " << total_harga << endl;
							break;
						case 2:
							hasil = 150000;
							cout << "\tAnda Memilih Zara" << endl;
							cout << "\tHarga Rp. 450000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah;
							total_harga = hasil * jumlah;
							cout << "\tHarga Barang: " << total_harga << endl;
							break;
						case 3:
							hasil = 120000;
							cout << "\tAnda Memilih Uniqlo" << endl;
							cout << "\tHarga Rp. 350000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah;
							total_harga = hasil * jumlah;
							cout << "\tHarga Barang: " << total_harga << endl;
							break;
						case 4:
							hasil = 130000;
							cout << "\tAnda Memilih Erigo" << endl;
							cout << "\tHarga Rp. 330000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah;
							total_harga = hasil * jumlah;
							cout << "\tHarga Barang: " << total_harga << endl;
							break;
						case 5:
							hasil = 100000;
							cout << "\tAnda Memilih Levi's" << endl;
							cout << "\tHarga Rp. 400000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah;
							total_harga = hasil * jumlah;
							cout << "\tHarga Barang: " << total_harga << endl;
							break;
						}
						break;
				case 2:
					cout << "\tSELAMAT DATANG DI DAILY MAYOUTFIT" << endl;
					cout << "\t1. Nevada     = Rp. 340000" << endl;
					cout << "\t2. Zara       = Rp. 450000" << endl;
					cout << "\t3. Uniqlo     = Rp. 300000" << endl;
					cout << "\t4. Erigo      = Rp. 330000" << endl;
					cout << "\t5. Levi's     = Rp. 400000" << endl;
					cout << "\tPilihan Anda: ";
					cin >> pilihan;
					switch (pilihan){
						case 1:
							hasil2 = 140000;
							cout << "\tAnda Memilih Nevada" << endl;
							cout << "\tHarga Rp. 340000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah1;
							total_harga1 = hasil2 * jumlah1;
							cout << "\tHarga Barang: " << total_harga1 << endl;
							break;
						case 2:
							hasil2 = 150000;
							cout << "\tAnda Memilih Zara" << endl;
							cout << "\tHarga Rp. 450000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah1;
							total_harga1 = hasil2 * jumlah1;
							cout << "\tHarga Barang: " << total_harga1 << endl;
							break;
						case 3:
							hasil2 = 120000;
							cout << "\tAnda Memilih Uniqlo" << endl;
							cout << "\tHarga Rp. 350000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah1;
							total_harga1 = hasil2 * jumlah1;
							cout << "\tHarga Barang: " << total_harga1 << endl;
							break;
						case 4:
							hasil2 = 130000;
							cout << "\tAnda Memilih Erigo" << endl;
							cout << "\tHarga Rp. 330000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah1;
							total_harga1 = hasil2 * jumlah1;
							cout << "\tHarga Barang: " << total_harga1 << endl;
							break;
						case 5:
							hasil2 = 100000;
							cout << "\tAnda Memilih Levi's" << endl;
							cout << "\tHarga Rp. 400000" << endl;
							cout << "\tBerapa Unit: ";
							cin >> jumlah1;
							total_harga1 = hasil2 * jumlah1;
							cout << "\tHarga Barang: " << total_harga1 << endl;
							break;
					 }
					 harga1 = total_harga;
					 harga2 = total_harga1;
					 total_harga2 = harga1 + harga2;
					}
					cout << "\tApakah Anda Ingin Memesan Yang lain(y/t): ";
					cin >> ulang;
					if(ulang == 'y'){
					system("cls");
					} else
					system("cls");
					{
						cout<<"\tJumlah Unit Yang Anda Pesan :" << jumlah<<"\t"<<"pcs"<<endl;
						cout<<"\tTotal Harga Dress Yang Harus Di Bayar :"<< total_harga<<endl;
						cout<<endl;
					    cout<<"\tJumlah Unit Yang Anda Pesan :" << jumlah1<<"\t"<<"pcs"<<endl;
						cout<<"\tTotal Harga Celana Yang Harus Di Bayar :"<< total_harga1<<endl;
						cout<<endl;
						cout << "\tTotal Harga Pesanan Anda: " << total_harga2 << endl;
						cout<<endl;
						cout << "\tMOHON DITUNGGU PESANANNYA" << endl;
						cout<<endl;
						cout << "\tTERIMA KASIH" << endl;
					}
				}
			}
	while (ulang == 'y');
	return 0;
}
