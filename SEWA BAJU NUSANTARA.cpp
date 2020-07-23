#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
main()
{
    char kd, ukuran[10],ksr[20],nm[25];	//membuat identifier harga string dan array
    float trs,jmlh,uang,hrg,jmlhrg,byr,kmbl,disc,hrg1;	//membuat identifier dengan float agar dapat menggunakan bilangan berkoma

/* buat nama tempat dan baju bajunya sesuai keingan kamu yaak */
cout<<"\t\t      "<<endl;	//display sampai line 54
cout<<"\t\t      "<<endl;
cout<<"\t\t      "<<endl;
cout<<"\t\t      SEWA PAKAIAN ADAT NUSANTARA"<<endl;
cout<<"*************************************************************************"<<endl;
cout<<"\n  --------------------SILAHKAN PILIH KODE PAKAIAN-----------------------"<<endl;
cout<<"\n            |NAD  = PAKAIAN ADAT NANGGROE ACEH DARUSSALAM|"<<endl;
cout<<"\n            |SU   = PAKAIAN ADAT SUMATERA UTARA|"<<endl;
cout<<"\n            |SB   = PAKAIAN ADAT SUMATERA BARAT|"<<endl;
cout<<"\n            |RU   = PAKAIAN ADAT RIAU|"<<endl;
cout<<"\n            |JMB  = PAKAIAN ADAT JMB|"<<endl;
cout<<"\n            |BKL  = PAKAIAN ADAT BENGKULU|"<<endl;
cout<<"\n            |LPG  = PAKAIAN ADAT LAMPUNG|"<<endl;
cout<<"\n            |JKT  = PAKAIAN ADAT JAKARTA|"<<endl;
cout<<"\n            |BDG  = PAKAIAN ADAT BANDUNG|"<<endl;
cout<<"\n            |BGR  = PAKAIAN ADAT BOGOR|"<<endl;
cout<<"\n            |SRG  = PAKAIAN ADAT SEMARANG|"<<endl;
cout<<"\n            |YOG  = PAKAIAN ADAT YOGYAKARTA|"<<endl;
cout<<"\n            |MLG  = PAKAIAN ADAT MALANG|"<<endl;
cout<<"\n            |SB   = PAKAIAN ADAT SURABAYA|"<<endl;
cout<<"\n            |BLI  = PAKAIAN ADAT BALI|"<<endl;
cout<<"\n            |NTB1 = PAKAIAN ADAT LOMBOK|"<<endl;
cout<<"\n            |NTB2 = PAKAIAN ADAT SUMABAWA|"<<endl;
cout<<"\n            |NTT1 = PAKAIAN ADAT KUPANG|"<<endl;
cout<<"\n            |NTT2 = PAKAIAN ADAT FLORES|"<<endl;
cout<<"\n            |NTT3 = PAKAIAN ADAT SUMBA|"<<endl;
cout<<"\n            |KB   = PAKAIAN ADAT KALIMANTAN BARAT|"<<endl;
cout<<"\n            |KS   = PAKAIAN ADAT KALIMANTAN SELATAN|"<<endl;
cout<<"\n            |KT1  = PAKAIAN ADAT KALIMANTAN TENGAH|"<<endl;
cout<<"\n            |KT2  = PAKAIAN ADAT KALIMANTAN TIMUR|"<<endl;
cout<<"\n            |KU   = PAKAIAN ADAT KALIMANTAN UTARA|"<<endl;
cout<<"\n            |MD   = PAKAIAN ADAT MANADO|"<<endl;
cout<<"\n            |GRT  = PAKAIAN ADAT GORONTALO|"<<endl;
cout<<"\n            |STH  = PAKAIAN ADAT SULAWESI TENGAH|"<<endl;
cout<<"\n            |STA  = PAKAIAN ADAT SULAWESI TENGGARA|"<<endl;
cout<<"\n            |SSN  = PAKAIAN ADAT SULAWESI SELATAN|"<<endl;
cout<<"\n            |SB   = PAKAIAN ADAT SULAWESI BARAT|"<<endl;
cout<<"\n            |MK   = PAKAIAN ADAT MALUKU|"<<endl;
cout<<"\n            |MU   = PAKAIAN ADAT MALUKU UTARA|"<<endl;
cout<<"\n            |PA   = PAKAIAN ADAT PAPUA|"<<endl;
cout<<"\n            |PB   = PAKAIAN ADAT PAPUA BARAT|"<<endl;
cout<<"\n-------------------------IKUTI LANGKAH SELANJUTNYA-----------------------"<<endl;
cout<<"\n"<<endl;	//display
cout<<"MASUKKAN KODE PAKAIAN ADAT[NAD/SU/SB..]      :";cin>>ksr; //menginputkan kode pakaian
cout<<"UKURAN PAKAIAN [S/M/L]            	     :";cin>>kd;	//menginputkan ukuran pakaian
cout<<"LAMA SEWA PAKAIAN           		     :";cin>>jmlh;	// menginpurkan lama waktu sewa pakaian

/* logika IF ELSE perhitungan harga dan jenis baju */

if(kd=='S'||kd=='s')	// jika kd = S
{strcpy(ukuran,"S");	// maka copy S ke dalam variabel "ukuran"
hrg =200000;	//harga dari ukuran baju S
}
else if(kd=='M'||kd=='m')	//kondisi lain jika kd = M
{strcpy(ukuran,"M");	//maka copy M ke dalam variabel "Ukuran"
hrg=250000;	//harga dari ukuran baju M
}
else if(kd=='L'||kd=='l')	//kondisi lain jika kd = L
{strcpy(ukuran,"L");	//maka copy L ke dalam variabel "Ukuran"
hrg=275000;	//harga dari ukuran baju L
}
else	//kondisi lain
{strcpy(ukuran,"-");	//maka masukan - kedalam ukuran
hrg=0;	//harga = 0
}

if(strcmp(ksr,"NAD")==0||strcmp(ksr,"NAD")==0)	//jika input ksr = NAD
{strcpy(nm,"NANGGROE ACEH DARUSSALAM");	//maka copy NANGGROE ACEH DARUSSALAM ke dalam nm
}
else if(strcmp(ksr,"SU")==0||strcmp(ksr,"SU")==0)	//jika input ksr = SU
{strcpy(nm,"SUMATERA UTARA");	//maka copy SUMATERA UTARA ke dalam nm
}
else if(strcmp(ksr,"SB")==0||strcmp(ksr,"SB")==0)	//jika input ksr = SB
{strcpy(nm,"SUMATERA BARAT");	//maka copy SUMATERA BARAT ke dalam nm
}
else if(strcmp(ksr,"RU")==0||strcmp(ksr,"RU")==0)	//jika input ksr = RU
{strcpy(nm,"RIAU");	//maka copy RIAU ke dalam nm
}
else if(strcmp(ksr,"JMB")==0||strcmp(ksr,"JMB")==0)	//jika input ksr = JMB
{strcpy(nm,"JAMBI");	//maka copy JAMBI ke dalam nm
}
else if(strcmp(ksr,"BKL")==0||strcmp(ksr,"BKL")==0)	//jika input ksr = BKL
{strcpy(nm,"BENGKULU");	//maka copy BENGKULU ke dalam nm
}
else if(strcmp(ksr,"LPG")==0||strcmp(ksr,"LPG")==0)	//jika input ksr = LPG
{strcpy(nm,"LAMPUNG");	//maka copy LAMPUNG ke dalam nm
}
else if(strcmp(ksr,"JKT")==0||strcmp(ksr,"JKT")==0)	//jika input ksr = JKT
{strcpy(nm,"JAKARTA");	//maka copy JAKARTA ke dalam nm
}
else if(strcmp(ksr,"BDG")==0||strcmp(ksr,"BDG")==0)	//jika input ksr = BOG
{strcpy(nm,"BANDUNG");	//maka copy BANDUNG ke dalam nm
}
else if(strcmp(ksr,"BGR")==0||strcmp(ksr,"BGR")==0)	//jika input ksr = BGR
{strcpy(nm,"BOGOR");	//maka copy BOGOR ke dalam nm
}
else if(strcmp(ksr,"SRG")==0||strcmp(ksr,"SRG")==0)	//jika input ksr = SRG
{strcpy(nm,"SEMARANG");	//maka copy SEMARANG ke dalam nm
}
else if(strcmp(ksr,"YOG")==0||strcmp(ksr,"YOG")==0)	//jika input ksr = YOG
{strcpy(nm,"YOGYAKARTA");	//maka copy YOGYAKARTA ke dalam nm
}
else if(strcmp(ksr,"MLG")==0||strcmp(ksr,"MLG")==0)	//jika input ksr = MLG
{strcpy(nm,"MALANG");	//maka copy MALANG ke dalam nm
}
else if(strcmp(ksr,"SB")==0||strcmp(ksr,"SB")==0)	//jika input ksr = SB
{strcpy(nm,"SURABAYA");	//maka copy SURABAYA ke dalam nm
}
else if(strcmp(ksr,"BLI")==0||strcmp(ksr,"BLI")==0)	//jika input ksr = BLI
{strcpy(nm,"BALI");	//maka copy BALI ke dalam nm
}
else if(strcmp(ksr,"RU")==0||strcmp(ksr,"RU")==0)	//jika input ksr = RU
{strcpy(nm,"RIAU");	//maka copy RIAU ke dalam nm
}
else if(strcmp(ksr,"NTB1")==0||strcmp(ksr,"NTB1")==0)	//jika input ksr = NTB1
{strcpy(nm,"LOMBOK");	//maka copy LOMBOK ke dalam nm
}
else if(strcmp(ksr,"NTB2")==0||strcmp(ksr,"NTB2")==0)	//jika input ksr = NTB2
{strcpy(nm,"SUMBAWA");	//maka copy SUMBAWA ke dalam nm
}
else if(strcmp(ksr,"NTT1")==0||strcmp(ksr,"NTT1")==0)	//jika input ksr = NTT1
{strcpy(nm,"KUPANG");	//maka copy KUPANG ke dalam nm
}
else if(strcmp(ksr,"NTT2")==0||strcmp(ksr,"NTT2")==0)	//jika input ksr = NTT2
{strcpy(nm,"FLORES");	//maka copy FLORES ke dalam nm
}
else if(strcmp(ksr,"NTT3")==0||strcmp(ksr,"NTT3")==0)	//jika input ksr = NTT3
{strcpy(nm,"SUMBA");	//maka copy SUMBA ke dalam nm
}
else if(strcmp(ksr,"KB")==0||strcmp(ksr,"KB")==0)	//jika input ksr = KB
{strcpy(nm,"KALIMANTAN BARAT");	//maka copy KALIMANTAN BARAT ke dalam nm
}
else if(strcmp(ksr,"KS")==0||strcmp(ksr,"KS")==0)	//jika input ksr = KS
{strcpy(nm,"KALIMANTAN SELATAN");	//maka copy KALIMANTAN SELATAN ke dalam nm
}
else if(strcmp(ksr,"KT1")==0||strcmp(ksr,"KT1")==0)	//jika input ksr = KT1
{strcpy(nm,"KALIMANTAN TENGAH");	//maka copy KALIMANTAN TENGAH ke dalam nm
}
else if(strcmp(ksr,"KT2")==0||strcmp(ksr,"KT2")==0)	//jika input ksr = KT2
{strcpy(nm,"KALIMANTAN TIMUR ");	//maka copy KALIMANTAN TIMUR ke dalam nm
}
else if(strcmp(ksr,"MD")==0||strcmp(ksr,"MD")==0)	//jika input ksr = MD
{strcpy(nm,"MANADO");	//maka copy MANADO ke dalam nm
}
else if(strcmp(ksr,"GRT")==0||strcmp(ksr,"GRT")==0)	//jika input ksr = GRT
{strcpy(nm,"GORONTALO");	//maka copy GORONTALO ke dalam nm
}
else if(strcmp(ksr,"STH")==0||strcmp(ksr,"STH")==0)	//jika input ksr = STH
{strcpy(nm,"SULAWESI TENGAH");	//maka copy SULAWESI TENGAH ke dalam nm
}
else if(strcmp(ksr,"STA")==0||strcmp(ksr,"STA")==0)	//jika input ksr = STA
{strcpy(nm,"SULAWESI TENGGARA");	//maka copy SULAWESI TENGGARA ke dalam nm
}
else if(strcmp(ksr,"SSN")==0||strcmp(ksr,"SSN")==0)	//jika input ksr = SSN
{strcpy(nm,"SULAWESI SELATAN");	//maka copy SULAWESI SELATAN ke dalam nm
}
else if(strcmp(ksr,"SB")==0||strcmp(ksr,"SB")==0)	//jika input ksr = SB
{strcpy(nm,"SULAWESI BARAT");	//maka copy SULAWESI BARAT ke dalam nm
}
else if(strcmp(ksr,"MK")==0||strcmp(ksr,"MK")==0)	//jika input ksr = MK
{strcpy(nm,"MALUKU");	//maka copy MALUKU ke dalam nm
}
else if(strcmp(ksr,"MU")==0||strcmp(ksr,"MU")==0)	//jika input ksr = MU
{strcpy(nm,"MALUKU UTARA");	//maka copy MALUKU UTARA ke dalam nm
}
else if(strcmp(ksr,"PA")==0||strcmp(ksr,"PA")==0)	//jika input ksr = PA
{strcpy(nm,"PAPUA");	//maka copy PAPUA ke dalam nm
}
else if(strcmp(ksr,"PB")==0||strcmp(ksr,"PB")==0)	//jika input ksr = PB
{strcpy(nm,"PAPUA BARAT");	//maka copy PAPUA BARAT ke dalam nm
}
else	//kondisi lain
{strcpy(nm,"-"); //copy - ke nm
}

jmlhrg=hrg*jmlh;	//jmlhrg adalah operasi bilangan hasil dari hrg x jmlh
disc=jmlhrg*15/100; //disc = jmlhrg x 15%
byr=jmlhrg-disc;	//byr = jmlhrg-disc

/* Penutup */

cout<<"*************************************************************************"<<endl;	//display
cout<<"\t              STRUK PENYEWAAN BAJU ADAT "<<endl;	//display
cout<<"*************************************************************************"<<endl;	//display
    cout<<"Nama Pakaian Adat    		:"<<nm<<endl;	//display Nama pakaian adat dengan menampilkan isi dari nm yang di inputkan
    cout<<"Ukuran Pakaian       		:"<<ukuran<<endl;	//display Ukuran Pakaian dengan menampilkan isi dari ukuran yang di inputkan
    cout<<"Harga Sewa Perhari   		:Rp."<<hrg<<endl;	//display Harga Sewa Perhari dengan menampilkan isi dari hrg yang di inputkan
    cout<<"Lama Sewa Pakaian (Hari)        :"<<jmlh<<endl;	//display Lama Sewa Pakaian (Hari) dengan menampilkan isi dari jmlh yang di inputkan
    cout<<"Jumlah Harga    		:Rp."<<jmlhrg<<endl;	//display Jumlah Harga dengan menampilkan isi dari jmlhrg yang di inputkan
    cout<<"Discount        		:Rp."<<disc<<endl;	//display Discount dengan menampilkan isi dari disc yang di inputkan
cout<<"*************************************************************************"<<endl;	//display
    cout<<"Total Bayar        	        :Rp."<<byr<<endl;	//display Total Bayar dengan menampilkan isi dari byr yang di inputkan
    cout<<"Jumlah Uang Bayar   		:Rp.";cin>>uang;	//menginputkan jumlah uang yang dibayarkan
        kmbl=uang-byr;	//operasi perhitungan untuk menghitung kembalian
    cout<<"Uang Kembalian       		:Rp."<<kmbl<<endl;	//display Uang Kembalian dengan menampilkan isi dari kmbl yang di inputkan
    cout<<"                                                       "<<endl;	//display
    cout<<"                                                       "<<endl;	//display

    cout<<"\t                       TERIMAKASIH"<<endl;	//display
   
cout<<"_________________________________________________________________________"<<endl;	//display
    cout<<"\t         ***\tKERUSAKAN DI TANGGUNG PEMINJAM   ***"<<endl;	//display
    cout<<"\t        ***\tLOS DOL...  JANGAN LUPA BERNAFAS  ***"<<endl;	//display
getch();
}
