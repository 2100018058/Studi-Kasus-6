#include "base.h"

void studi6::input()
{
	cout<<"Masukkan Nama Mahasiswa  : ";getline(cin,nama);
	cout<<"Jumlah Matkul            : ";cin>>qtymatkul;
	for(int i=0;i<qtymatkul;i++)
  {
    
	  cout<<"Matakuliah   "<<i+1<<" : ";cin>>matkul[i];
	  cout<<"Nilai Tugas	"<<i+1<<" : ";cin>>tugas[i];
		cout<<"Nilai UTS    "<<i+1<<" : ";cin>>uts[i];
	  cout<<"Nilai UAS	  "<<i+1<<" : ";cin>>uas[i];
		totaltugas+=tugas[i];
		totaluts  +=uts[i];
		totaluas  +=uas[i];
		total[i] = (tugas[i]*0.20) + (uts[i]*0.35) + (uas[i]*0.45);
    }
}

void studi6::output()
{
	cout << "===========================" <<endl <<endl <<endl;
	cout << "Nama : " << nama <<endl;
	cout << "==========================================================================================" <<endl;
	cout << "Nama Matakuliah\t||\t" << "Tugas\t||" << "\tUTS\t||" << "\tUAS\t||" << "\tNilai Total\t||" <<endl;
	cout << "==========================================================================================" <<endl;
	for(int i=0;i<qtymatkul;i++)
	{
		cout << matkul[i] << "\t\t\t\t " << tugas[i] << "\t\t" << uts[i] << "\t\t" << uas[i] << " \t\t    " << total[i] <<endl;
	}
	cout << "Nilai Rata-Rata ||\t " << rata_tgs << "\t\t" << rata_uts << "\t\t" << rata_uas << "\t\t" << total_rata <<endl;
	cout << "==========================================================================================" <<endl;
}

int main()
{
  studi6 x;
  x.input();
  x.output();
}