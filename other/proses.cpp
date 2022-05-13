#include "base.h"

void studi6::proses(){
	rata_tgs = (totaltugas/qtymatkul);
	rata_uas = (totaluas/qtymatkul);
	rata_uts = (totaluts/qtymatkul);
  total_rata = (rata_tgs*0.20)+(rata_uts*0.35)+(rata_uas*0.45);
}

int main()
{
  studi6 x;
  x.proses();
}