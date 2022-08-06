#include <iostream.h>
#include <stdio.h>
#include <conio.h>


void main ()
{
  char nama[50];
  char alamat[50];
  char tempatlahir[30];
  {
  cout <<"\t\t Biodata Siswa SMKN 1 Kayan Hilir \n"<<endl;
   cout <<"Nama\t\t: ";
    cin.getline(nama, sizeof(nama));
     cout <<"Alamat\t\t: ";
     cin.getline(alamat,sizeof(alamat));
	cout <<"tempatlahir\t\t: ";
	cin.getline(tempatlahir,sizeof(tempatlahir));
	cout<<endl;
	}
	cout <<"\t\t =====================================\n"<<endl;
	cout <<"\t\t Data Show InputSiswa SMKN 1 Kayan Hilir " <<endl;
	 cout << "Nama \t\t : "<< nama <<endl;
	 cout << "Alamat \t\t :" << alamat <<endl;
	 cout << "tempatlahir \t\t :" << tempatlahir <<endl;
	getch();
}