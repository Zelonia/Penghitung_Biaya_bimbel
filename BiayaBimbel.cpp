

#include<iostream>
using namespace std;

int biayaBimbel(int jmlhJam, int b_perjam){
	int biaya_bimbel=jmlhJam*b_perjam;
	return biaya_bimbel;
}

int totalBiayaBimbel(int b_bimbel, int pot_bimbel){
	int totBiaya=b_bimbel-pot_bimbel;
	return totBiaya;
}

int potongan1(int potBiaya){
	int potongan=0.2*potBiaya;
	return potongan;
}

int potongan2(int potBiaya){
	int potongan=0.1*potBiaya;
	return potongan;
}

void hasil(string h_nama, string h_nomor, string h_namaGol, int h_total){
	cout<<"================================================================================"<<endl;
		cout<<"\tData Buku "<<endl;
		cout<<"\tNama Peserta\t\t : "<<h_nama<<endl; 
		cout<<"\tNomor Peserta\t\t : "<<h_nomor<<endl;
		cout<<"\tNama Golongan\t\t : "<<h_namaGol<<endl;
		cout<<"\tTotal Biaya Bimbel\t : "<<h_total;
	cout<<"\n================================================================================\n"<<endl;
}

void gol1(string g_nama, string g_nomor){
	cout<<"================================================================================"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | 1 | \n"<<endl;
	cout<<"================================================================================\n"<<endl;
	string namaGolongan="Sempoa";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tBiaya per jam = Rp. 100000"<<endl;
	int biayaPerJam=100000;
	int jumlahJam;
	cout<<"\n\tBerapa jumlah jam  = ";
	cin>>jumlahJam;

	int biaya_Bimbel=biayaBimbel(jumlahJam, biayaPerJam);
	cout<<"\tBiaya Bimbel\t   = "<<biaya_Bimbel<<endl;

	if(jumlahJam>=8){
		cout<<"\n\t\tJumlah Jam Bimbel "<<jumlahJam<<" lebih dari sama dengan 8 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan1(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam>=5 && jumlahJam<=7){
		cout<<"\nJumlah Jam "<<jumlahJam<<" , lebih dari sama dengan 5 dan kurang dari sama dengan 7 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 10 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan2(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
}
	else if(jumlahJam<5){
		cout<<"\tTidak mendapatkan Potongan"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, biaya_Bimbel);
	}
}

void gol2(string g_nama, string g_nomor){
	cout<<"================================================================================"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | 2 | \n"<<endl;
	cout<<"================================================================================\n"<<endl;
	string namaGolongan="English Kids";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tBiaya per jam = Rp. 150000"<<endl;
	int biayaPerJam=150000;
	int jumlahJam;
	cout<<"\n\tBerapa jumlah jam  = ";
	cin>>jumlahJam;

	int biaya_Bimbel=biayaBimbel(jumlahJam, biayaPerJam);
	cout<<"\tBiaya Bimbel\t   = "<<biaya_Bimbel<<endl;

	if(jumlahJam>=8){
		cout<<"\n\t\tJumlah Jam Bimbel "<<jumlahJam<<" lebih dari 8 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan1(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam>=5 && jumlahJam<=7){
		cout<<"\nJumlah Jam "<<jumlahJam<<" , lebih dari sama dengan 5 dan kurang dari sama dengan 7 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 10 persen\n"<<endl;
		cout<<"\t"<<endl;
	int besarPotongan=potongan2(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));	
	}
	else if(jumlahJam<5){
		cout<<"\tTidak mendapatkan Potongan"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, biaya_Bimbel);
	}
}

void gol3(string g_nama, string g_nomor){
	cout<<"================================================================================"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | 3 | \n"<<endl;
	cout<<"================================================================================\n"<<endl;
	string namaGolongan="Tematik";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tBiaya per jam = Rp. 170000"<<endl;
	int biayaPerJam=170000;
	int jumlahJam;
	cout<<"\n\tBerapa jumlah jam  = ";
	cin>>jumlahJam;

	int biaya_Bimbel=biayaBimbel(jumlahJam, biayaPerJam);
	cout<<"\tBiaya Bimbel\t   = "<<biaya_Bimbel<<endl;

	if(jumlahJam>=8){
		cout<<"\n\t\tJumlah Jam Bimbel "<<jumlahJam<<" lebih dari 8 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan1(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam>=5 && jumlahJam<=7){
		cout<<"\nJumlah Jam "<<jumlahJam<<" , lebih dari sama dengan 5 dan kurang dari sama dengan 7 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 10 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan2(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam<5){
		cout<<"\tTidak mendapatkan Potongan"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, biaya_Bimbel);
	}
}

void gol4(string g_nama, string g_nomor){
	cout<<"================================================================================"<<endl;
	cout<<"\t\t\t    G O L O N G A N   | 4 | \n"<<endl;
	cout<<"================================================================================\n"<<endl;
	string namaGolongan="Art";
	cout<<"\tKeterangan : "<<endl;
	cout<<"\tBiaya per jam = Rp. 140000"<<endl;
	int biayaPerJam=140000;
	int jumlahJam;
	cout<<"\n\tBerapa jumlah jam  = ";
	cin>>jumlahJam;

	int biaya_Bimbel=biayaBimbel(jumlahJam, biayaPerJam);
	cout<<"\tBiaya Bimbel\t   = "<<biaya_Bimbel<<endl;

	if(jumlahJam>=8){
		cout<<"\n\t\tJumlah Jam Bimbel "<<jumlahJam<<" lebih dari 8 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 20 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan1(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam>=5 && jumlahJam<=7){
		cout<<"\nJumlah Jam  "<<jumlahJam<<" , lebih dari sama dengan 5 dan kurang dari sama dengan 7 jam"<<endl;
		cout<<"\tmaka akan mendapatkan potongan sebesar 10 persen\n"<<endl;
		cout<<"\t"<<endl;
		int besarPotongan=potongan2(biaya_Bimbel);
		cout<<"\tTotal Biaya Bimbel = "<<biaya_Bimbel<<" - "<<besarPotongan<<endl;
		cout<<"\t                   = "<<totalBiayaBimbel(biaya_Bimbel, besarPotongan)<<endl;
		cout<<"\n"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, totalBiayaBimbel(biaya_Bimbel, besarPotongan));
	}
	else if(jumlahJam<5){
		cout<<"\tTidak mendapatkan Potongan"<<endl;
		hasil(g_nama, g_nomor, namaGolongan, biaya_Bimbel);
	}
}

int main(){
	int pilihan;
	string userInput, passInput;
	string username="zelonia";
	string password="345687";
	int j;
	j=0;
	string nama, nomor;
	char pilih, lagi;
	string login="berhasil";
	
	
		mulai:
		cout<<"================================================================================"<<endl;
		cout<<"\t\t\t S I L A K A N   M A S U K K A N  \n"<<endl;
		cout<<"\t\t\tU S E R N A M E   &   P A S W O R D \n"<<endl;
		cout<<"\t\tAnda hanya diberi 3x kesempatan dalam percobaan Login"<<endl;
		cout<<"================================================================================"<<endl;
		
	do{	
		awal:
			
		cout<<"\tMasukkan Username\t : "; cin>>userInput;
		cout<<"\tMasukkan Password\t : "; cin>>passInput;
		
		if(userInput==username && passInput==password){
			j=4;
			system("cls"); 
			
			
			do{
			menu:
			cout<<"================================================================================"<<endl;
			cout<<"\t\t  P E M B A Y A R A N    B I M B I N G A N    B E L A J A R \n"<<endl;
			cout<<"================================================================================"<<endl;
			cout<<"Silakan Pilih Golongan Bimbel\n"<<endl;
			cout<<"\t1. Sempoa"<<endl;
			cout<<"\t2. English Kids"<<endl;
			cout<<"\t3. Tematik"<<endl;
			cout<<"\t4. Art\n"<<endl;
			cout<<"Silakan Input Data Buku"<<endl;
			cout<<"\tNama Peserta\t\t : "; 
			cin>>nama;
			cout<<"\tNomor Peserta\t\t : "; 
			cin>>nomor;
			cout<<"\tPilih Golongan (1-4)\t : "; 
			cin>>pilihan;
			
			system("cls");
			
			switch(pilihan){
				case 1 : 
					gol1(nama, nomor);
					break;
				case 2 :
					gol2(nama, nomor);
					break;
				case 3:
					gol3(nama, nomor);
					break;
				case 4:
					gol4(nama, nomor);
					break;
				default:
					cout<<"Maaf Pilihan Anda belum tersedia, Silakan coba kembali"<<endl;
					break;
			}
			
			cout<<"\nApakah Anda ingin menghitung Pembayaran Bimbel lagi? (Y/N) = ";
			cin>>pilih;
			system("cls");
			if(pilih=='y' || pilih=='Y'){	
			}
			if(pilih=='n' || pilih=='N'){
				goto akhir;
			}
		 
		}while(pilih=='y' || pilih=='Y');
				
		}
		
		else{
			
			j=j+1;
			
			cout<<"\n Percobaan login ke ("<<j<<") salah!  Coba ulangi kembali."<<endl;
			cout<<"================================================================================"<<endl;
		}
		
	} while (j<3); 
		if(login != "gagal"){
		cout<<"\tAnda telah 3x memasukkan username & password yang salah.\n";
		cout<<"\tApakah anda ingin login kembali ? | Y/N : ";        
				
		cin>>lagi;
		system("cls");
	        if(lagi=='y' || lagi=='Y'){
	            goto mulai;
	        }
			if (lagi=='N' || lagi=='n'){
	            goto akhir;
		}
}
	
	akhir:
	system("cls");
		cout<<"================================================================================"<<endl;
		cout<<"\t\t\t    T E R I M A   K A S I H \n"<<endl;
		cout<<"================================================================================"<<endl;
	return 0;
	}
