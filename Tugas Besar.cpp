#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


void Lanjut(void)
{

    char JnsKel[10];
    string name, ruangan, an, NamaDr;
    char alamat[50], diagnosa[50];
    int dokter, kamar, lama, rm, tgl;
    long int HrgKamar, JasaDr, TotalObat, tindakan;
    int pil, PilihDr;
    
    cout<<"\nMasukan Tanggal Masuk = ";cin>>tgl;
    cout<<endl;
	
    cout<<"Nama                  = ";cin>>name;
    cout<<endl;

    cout<<"No. Rekam Medis       = ";cin>>rm;
    cout<<endl;

    cout<<"Alamat                = ";cin>>alamat;
    cout<<endl;

    cout<<"Jenis Kelamin         = ";cin>>JnsKel;
    cout<<endl;

    cout<<"Diagnosa              = ";cin>>diagnosa;

    system("cls");
    cout<<endl;

    cout<<"Pilih Poli :  "<<endl;
    cout<<"1.Poli Bedah Umum     : Dr. Jamie Robert "<<endl;
    cout<<"2.Poli Anak           : Dr. Anggi Venusia "<<endl;
    cout<<"3.Poli Mata           : Dr. Reyna A Lily"<<endl;
    cout<<"4.Poli Penyakit Dalam : Dr. Ibnu Sina"<<endl;
    cout<<"5.Poli Umum           : Dr. Giallyn Geneva C "<<endl;
    cout<<endl;
    cout<<"Pilih [ 1-8 ]= ";cin>>PilihDr;

            switch (PilihDr)
            {
            case 1:
                cout<<"--- Poli Bedah Umum ---\n";
                NamaDr="Dr. Jamie Robert";
                JasaDr=150000;
                break;

            case 2:
                cout<<"--- Poli Anak ---\n";
                NamaDr="Dr. Anggi Venusia";
                JasaDr=200000;
                break;

            case 3:
                cout<<"--- Poli Mata ---\n";
                NamaDr="Dr. Reyna A Lily";
                JasaDr=150000;
                break;

            case 4:
                cout<<"--- Poli Penyakit Dalam ---\n";
                NamaDr="Dr. Ibnu Sina";
                JasaDr=175000;
                break;

            case 5:
                cout<<"--- Poli Umum ---\n";
                NamaDr="Dr. Harvey R Horan";
                JasaDr=150000;
                break;

            default:
                cout<<"Tidak Tersedia";
                break;
            }
        system("cls");
        cout<<endl;

        cout<<"Tanggal Masuk    = "<<tgl<<endl;
		cout<<"Nama             = "<<name<<endl;
        cout<<"No. Rekam Medis  = "<<rm<<endl;
        cout<<"Jenis Kelamin    = "<<JnsKel<<endl;
        cout<<"Jenis Kamar      = "<<kamar<<endl;
        cout<<"Dokter Tujuan    = "<<dokter<<endl;

        cout<<"========================================\n";
        cout<<"     TOTAL YANG HARUS DIBAYAR        \n";
        cout<<"========================================\n";

        cout<<"Nama Pasien      = "<<name<<endl;
        cout<<"No. Rekam Medis  = "<<rm<<endl;
        cout<<"Atas Nama        = ";
        cin>>an;

        cout<<"Dokter           = "<<NamaDr<<endl;
        cout<<"Jasa Dokter      = Rp. "<<JasaDr<<endl;
        cout<<"Total Obat       = Rp. ";
        cin>>TotalObat;
        cout<<"Tindakan         = Rp. ";
        cin>>tindakan;
        long int TotalBiaya;

        TotalBiaya = JasaDr+TotalObat+tindakan;
        cout<<"Total Biaya      = Rp. "<<TotalBiaya;
}

main()
 {
	int p;
  	char choice(2);
  
		cout<<endl ;
		cout<<"       SELAMAT DATANG DI PROGRAM SAYA, SELAMAT MENCOBA\n";
		cout<<"                  Ach Luthfi Imron Juhari\n";
		cout<<"          Tugas Besar Membuat Program Puskesmas\n\n";	
		cout<<endl<<endl;
		a:
		cout<<"          Tekan 1 Untuk Memulai Program : ";
		cin>>p;
			  	if(p == 1){
			   Lanjut();
			   system("cls");
			  }
	  			else{
			  cout<<"\n\n        Yang Anda Masukan Anda Salah"<<endl;
			  cout<<"        =============================";
			  }
			  cout<<endl;

		
  cout<<endl;

        cout<<"          Kembali Ke menu Pilih Menu [Y / N] : ";cin>>choice;
        if(choice == 'y'){
            goto a;
            system("cls");
        }
        else{
            system("cls");
        }
   getch ();
 }
