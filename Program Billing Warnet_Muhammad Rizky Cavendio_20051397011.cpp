//Muhammad Rizky Cavendio 20051397011
//Tugas membuat program billing warnet
#include <iostream>
using namespace std;
int main ()
{
	char nama [36];
	int jam, totjam, mulai_jam, selesai_jam,jumlah_jam,a, b;
	cout<<"Syarat : Waktu memasukkan JAM, hanya memasukkan angka bilangan bulat !\n";
	cout<<"============================================================\n\n";
	cout<<"               Selamat Datang Di Warnet CAVENDIO\n";
	cout<<"\n";
	cout<<"TARIF RENTAL WARNET PER 1 JAM : Rp. 5000.\n\n";
	cout<<"============================================================\n\n";
	cout<<"~NAMA PELANGGAN :";cin>>nama;
	cout<<"\n";
	
	cout<<"~WAKTU MULAI\n";
	cout<<"Mulai Pada JAM :";cin>>mulai_jam;
	cout<<"\n";
	cout<<"~WAKTU SELESAI\n";
	cout<<"Selesai pada JAM :";cin>>selesai_jam;
	
	a=mulai_jam;
	b=selesai_jam;
	jumlah_jam=b-a;
	cout<<"\n";
	
	cout<<"               Lama Penggunaan Billing Warnet\n";
	cout<<"\n";
	cout<<"~Total Jam Pemakaian :";jumlah_jam;
	cout<<jumlah_jam;
     
	totjam=jumlah_jam*5000;
	cout<<"\n";
	cout<<"~Pelanggan Harus Membayar Sebesar = Rp.";totjam;
	cout<<totjam<<endl<<endl;
	cout<<"=====================================================\n";
	cout<<"               TERIMA KASIH SUDAH BERKUNJUNG";
}
	
