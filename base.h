#include <iostream>
using namespace std;
class studi6
{
  public:
    void input();
    void output();
    void proses();

  private:
		float qtymatkul, totaluas, totaluts, totaltugas, rata_tgs, rata_uts, rata_uas,total[100], i, total_rata;
		float tugas[100], uts[100], uas[100];
		string nama,matkul[100];
};

void studi6::input()
{
	cout<<"Masukkan Nama Mahasiswa  : ";getline(cin,nama);
	cout<<"Jumlah Matkul            : ";cin>>qtymatkul;
	for(int i=0;i<qtymatkul;i++)
  {
    
	  cout<<"Matakuliah "<<i+1<<"   : ";cin>>matkul[i];
	  cout<<"Nilai Tugas "<<i+1<<"  : ";cin>>tugas[i];
		cout<<"Nilai UTS   "<<i+1<<"  : ";cin>>uts[i];
	  cout<<"Nilai UAS   "<<i+1<<"  : ";cin>>uas[i];
		totaltugas+=tugas[i];
		totaluts  +=uts[i];
		totaluas  +=uas[i];
		total[i] = (tugas[i]*0.20) + (uts[i]*0.35) + (uas[i]*0.45);
    }
}

void studi6::proses(){
	rata_tgs = (totaltugas/qtymatkul);
	rata_uas = (totaluas/qtymatkul);
	rata_uts = (totaluts/qtymatkul);
  total_rata = (rata_tgs*0.20)+(rata_uts*0.35)+(rata_uas*0.45);
	
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