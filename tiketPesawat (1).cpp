#include <iostream>
using namespace std;


bool statue(string username, string password){
	string cekUser[3] = {"user1", "user2", "user3"};
	string cekPass[3] = {"pass1", "pass2", "pass3"};
	bool stat;
	for(int i=0; i<3; i++){
			if(cekUser[i] == username && cekPass[i] == password){
				stat = true;
				break;
			}else{
				stat = false;
			}
		}
	return stat;
}

void login(string user, string pass){
	string cekUsr[3] = {"user1", "user2", "user3"};
	string cekPwd[3] = {"pass1", "pass2", "pass3"};
	for(int i=0; i<3; i++){
		if(cekUsr[i] == user && cekPwd[i] == pass){
			cout << "-----------------------------------------------" << endl;
			cout << "-----Login Berhasil, Selamat datang " << user <<"------"<< endl;
			cout << "-----------------------------------------------" << endl;
			break;
		}else{
			cout << "Login gagal, silahkan coba lagi" << endl;
			break;
		}
	}
	system("pause");
	system("cls");
}

int pesan(int pil, int banyak){
	int hargaDewasa = 350000;
	int hargaAnak = 250000;
	int hasil;
	if(pil == 1){
		hasil = hargaDewasa * banyak;	
	}else if(pil == 2){
		hasil = hargaAnak * banyak;
	}
	 
	return hasil;
}



int main(){
	
	int pilihan, jenis, jumlah, maskapai, pesawat;
	int gar = 20;
	int city = 30;
	int air = 40;
	string Uname, Passwd;
	bool ulang, in, cekKursi;
	
	do{
	cout << "-----------------------------------------------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "--------PROGRAM PEMESANAN TIKET PESAWAT--------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << endl;
	cout << "---------------------LOGIN---------------------" << endl;
	cout << "Username : ";
	cin >> Uname;
	cout << "Password : ";
	cin >> Passwd;
	in = statue(Uname, Passwd);
	cout << "-----------------------------------------------" << endl;
	login(Uname, Passwd);
	}while(in == false);
	
	
	do{
		system("cls");
		cout << "-----------------------------------------------" << endl;
		cout << "Menu Pilihan :" << endl;
		cout << "1. Pemesanan Tiket" << endl;
		cout << "2. Info Ketersediaan Tiket" << endl;
		cout << "3. Keluar" << endl;
		cout << "Masukkan pilihan anda : ";
		cin >> pilihan;
		cout << "-----------------------------------------------" << endl;
		
			
		if(pilihan == 1){
			cout << "-----------------------------------------------" << endl;
			cout << "-----------------------------------------------" << endl;
			cout << "Pilih Jenis Penumpang" << endl;
			cout << "1. Dewasa" << endl;
			cout << "2. Anak-anak" << endl;
			cout << "Masukkan pilihan anda : ";
			cin >> jenis;
			cout << "Masukkan jumlah penumpang : ";
			cin >> jumlah;
			do{
				cout << "-----------------------------------------------" << endl;
				cout << "Pilih Maskapai Penerbangan" << endl;
				cout << "1. Garuda Indonesia" << endl;
				cout << "2. Citylink" << endl;
				cout << "3. AirAsia" << endl;
				cout << "Masukkan pilihan anda : ";
				cin >> pesawat;
				if(pesawat == 1){
					gar = gar - jumlah;
					if(gar < 0){
						cout << "Kursi habis silahkan pilih maskapai penerbangan lain" << endl;
						cekKursi = false;
					}else{
						cout << "Total yang harus dibayar : Rp. " << pesan(jenis, jumlah) << endl;
						cekKursi = true;
					}
				}else if(pesawat == 2){
					city = city - jumlah;
					if(city < 0){
						cout << "Kursi habis silahkan pilih maskapai penerbangan lain" << endl;
						cekKursi = false;
					}else{
						cout << "Total yang harus dibayar : Rp. " << pesan(jenis, jumlah) << endl;
						cekKursi = true;
					}
				}else if(pesawat == 3){
					air = air - jumlah;
					if(air < 0){
						cout << "Kursi habis silahkan pilih maskapai penerbangan lain" << endl;
						cekKursi = false;
					}else{
						cout << "Total yang harus dibayar : Rp. " << pesan(jenis, jumlah) << endl;
						cekKursi = true;
					}
				}
			}while(cekKursi == false);
			
			
			system("pause");
			ulang = false;
			
		}else if(pilihan == 2){
			cout << "Pilih maskapai penerbangan" << endl;
			cout << "1. Garuda Indonesia" << endl;
			cout << "2. Citylink" << endl;
			cout << "3. AirAsia" << endl;
			cout << "Masukkan pilihan anda : ";
			cin >> maskapai;
			if(maskapai == 1){
				cout << "Sisa ketersediaan kursi pada maskapai penerbangan Garuda Indonesia adalah " << gar << " kursi" << endl;
			}else if(maskapai == 2){
				cout << "Sisa ketersediaan kursi pada maskapai penerbangan Citylink adalah " << city << " kursi" << endl;
			}else if(maskapai == 3){
				cout << "Sisa ketersediaan kursi pada maskapai penerbangan AirAsia adalah " << air << " kursi" << endl;	
			}
			system("pause");
			ulang = false;
			
		}else if(pilihan == 3){
			cout << "Exit program" << endl;
			ulang = true;
		}
	}while(ulang == false);
	return 0;
}
