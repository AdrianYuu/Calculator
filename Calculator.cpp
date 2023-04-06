#include <stdio.h>
#include <string.h>
#include <math.h>

int choice;
int flag = 0;
char lanjut;

// 1. Operasi Sederhana
int choiceOperasi;
double angka1, angka2;

// 2. Keliling
int choiceKeliling2d3d;
int choiceKeliling;

// 2.1. Keliling 2D
// Persegi
double sisiPersegi;
// Persegi Panjang
double panjangPersegiPanjang;
double lebarPersegiPanjang;
// Segitiga
int choiceSegitiga;
double sisiSegitiga1;
double sisiSegitiga2;
double sisiSegitiga3;
// Jajar Genjang
double jajarAlas;
double jajarMiring;
// Trapesium
double panjangSisiAtas;
double panjangSisiBawah;
double miringTrapesium1;
double miringTrapesium2;
// Layang-layang
double sisi1L;
double sisi2L;
double sisi3L;
double sisi4L;
// Belah ketupat
double sisiKetupat;
// Lingkaran
double jari2;
double operasiKLing;
// 2.2 Keliling 3D
// Kubus

// Balok
double panjangB;
double lebarB;
double tinggiB;

// 3. Luas
int choiceLuas2d3d;
int choiceLuas;

// Segitiga
double alasSegitiga;
double tinggiSegitiga;

// Trapesium
double tinggiTrapesium;

// layang-layang
double diagonal1;
double diagonal2;

// lingkaran
double operasiLLing;

// Balok
double panjangBalok;
double lebarBalok;
double tinggiBalok;

// prisma segitiga
double tinggiPrismaSegitiga;
double alasPrismaS;
double tinggiAlasSegitiga;

// limas segiempat
double sisiLimas4;
double tinggiLimas4;

// Limas segitiga
double tinggiSegitigaL;
double sisiLimasS1;
double sisiLimasS2;
double sisiLimasS3;
double tinggiSegitigaL1;
double tinggiSegitigaL2;
double tinggiSegitigaL3;
double alasSegitigaL;

// tabung
double jariTabung;
double tinggiTabung;
int choiceTabung;

// kerucut
double jariKerucut;
double garisPelukis;

//bola
double jariBola;

// volume
double sisiKubus;
double jari2Tabung;
double tinggiTabung2;
double jari2Kerucut;
double tinggiKerucut;
double alasLimas;
double tinggiAlasLimas;
double tinggiLimas;
double panjangLimasSegi4;
int choiceVolume;

// 5. pemangkatan
int choicePemangkatan;
double angkaPemangkatan;
double pangkat;

// 6. pengakaran
int choicePengakaran;
double angkaPengakaran;
double akarBerapa;

// 7. log
int choiceLog;
double angkaLog;

// 8. Biner
int choiceBiner;
long long biner[105];
long long desimal;
long long tempD;
long long biner2;
long long countBiner;
long long sumDesimal;
long long kotakBiner[105];

// 9. Konversi
int choiceKonversi;
double bilanganKonversi;
char satuan1[5];
char satuan2[5];
int choice1;
int choice2;
int gapKonversi;
double hasilKonversi;

// 10. choice mean,median,modus
int choiceMMM;
long long jumlahData;
long long angkaMean;
long long sumMean;
long long angkaMedian[10005];
long long tempMedian;
long long angkaModus;
double tengah;
long long maxModus;
double modus;
long long kotakModus[10015];

//11. faktor dari sebuah bilangan
int choiceF;
long long bilanganF;
long long kotakF[1005];
long long countF;

// 12. matriks
int choiceM;
long long barisM;
long long kolomM;
long long barisM1;
long long kolomM1;
long long matriks1[105][105];
long long matriks2[105][105];
long long matriksHasil[105][105];
long long bilanganRealM;
long long totalAkhir[105][105];
long long matriksJumlah;
long long totalM = 0;

//printf("\n----------------------------------------------------------------------------------------------------\n");
void info(){
	printf("\nNOTE : Silahkan masukkan dalam satuan cm. Semua hasil menggunakan satuan cm.\n");
}

void info2(){
	printf("\nNOTE : Silahkan masukkan dalam satuan cm. Semua hasil menggunakan satuan cm pangkat dua.\n");
}

void info3(){
	printf("\nNOTE : Silahkan masukkan dalam satuan cm. Semua hasil menggunakan satuan cm pangkat tiga.\n");
}

void end(){
	do{
		printf("\nApakah mau lanjut menggunakan kalkulator? [Y/N]\n>> ");
		getchar();
		scanf("%c", &lanjut);
	} while (lanjut != 'Y' && lanjut != 'N');
	
	if(lanjut == 'N'){
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                            TERIMA KASIH TELAH MENGGUNAKAN KALKULATORKU! :D                             ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		flag = 1;
	}
}

void head(){
	printf("----------------------------------------------------------------------------------------------------\n");
	printf("                                      SELAMAT DATANG DI KALKULATOR                                  \n");
	printf("                                           DIBUAT OLEH ADRIAN                                       \n");
	printf("----------------------------------------------------------------------------------------------------\n");
}

void menu(){
		printf("----------------------------------------------------------------------------------------------------\n");
		printf("                                              PILIHAN MENU                                          \n");
		printf("----------------------------------------------------------------------------------------------------\n");
		printf("1. Operasi Sederhana\n");
		printf("2. Menghitung Keliling\n");	
		printf("3. Menghitung Luas\n");	
		printf("4. Menghitung Volume\n");	
		printf("5. Pemangkatan\n");	
		printf("6. Pengakaran\n");	
		printf("7. Logaritma\n");	
		printf("8. Biner\n");	
		printf("9. Konversi\n");	
		printf("10. Mean | Median | Modus\n");		
		printf("11. Faktor dari sebuah bilangan\n");		
		printf("12. Matriks\n");
		printf("13. Keluar\n");
		printf("\nSilahkan pilih menu yang ingin dilakukan [1-13]\n>> ");
		scanf("%d", &choice);				
}

void inputAngka1dan2(){
	printf("\nMasukkan angka pertama\n>> ");
	scanf("%lf", &angka1);
	printf("\nMasukkan angka kedua\n>> ");
	scanf("%lf", &angka2);
}

void case1(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                            OPERASI SEDERHANA                                       \n");
		printf("----------------------------------------------------------------------------------------------------\n");
		printf("1. Pertambahan (+)\n");
		printf("2. Pengurangan (-)\n");
		printf("3. Perkalian (*)\n");
		printf("4. Pembagian (/)\n");
		printf("5. Modulo (%%)\n");
		printf("6. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-6]\n>> ");
		scanf("%d", &choiceOperasi);
		printf("\n");
	} while (choiceOperasi < 1 || choiceOperasi > 6);
	
	switch(choiceOperasi){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PERTAMBAHAN                                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			inputAngka1dan2();
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil penjumlahan dari %.2lf dan %.2lf adalah %.2lf", angka1, angka2, angka1+angka2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PENGURANGAN                                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			inputAngka1dan2();
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil pengurangan dari %.2lf dan %.2lf adalah %.2lf", angka1, angka2, angka1-angka2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 3:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                               PERKALIAN                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			inputAngka1dan2();
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil perkalian dari %.2lf dan %.2lf adalah %.2lf", angka1, angka2, angka1*angka2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 4:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                               PEMBAGIAN                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			inputAngka1dan2();
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil pembagian dari %.2lf dan %.2lf adalah %.2lf", angka1, angka2, angka1/angka2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 5:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 MODULO                                                 ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			inputAngka1dan2();
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil dari %d modulo %d adalah %d", (int)angka1, (int)angka2, (int)angka1 % (int)angka2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 6:
			break;	
	}
	
	
}

void keliling2d(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                          KELILING 2 DIMENSI                                            ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Persegi\n");
		printf("2. Persegi Panjang\n");
		printf("3. Segitiga\n");
		printf("4. Jajar Genjang\n");
		printf("5. Trapesium\n");
		printf("6. Layang-layang\n");
		printf("7. Belah Ketupat\n");
		printf("8. Lingkaran\n");
		printf("9. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-9]\n>> ");
		scanf("%d", &choiceKeliling);
	} while (choiceKeliling < 1 || choiceKeliling > 9);
			
		switch(choiceKeliling){
			case 1:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                               PERSEGI                                                  ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang sisi persegi\n>> ");
				scanf("%lf", &sisiPersegi);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling persegi dengan panjang sisi %.2lf adalah %.2lf", sisiPersegi, sisiPersegi*4);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;
				
			case 2:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                           PERSEGI PANJANG                                              ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang sisi persegi panjang\n>> ");
				scanf("%lf", &panjangPersegiPanjang);
				printf("\nSilahkan masukkan lebar sisi persegi panjang\n>> ");
				scanf("%lf", &lebarPersegiPanjang);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling persegi panjang dengan panjang sisi %.2lf dan lebar sisi %.2lf adalah %.2lf", panjangPersegiPanjang, lebarPersegiPanjang, (2*panjangPersegiPanjang) + (2*lebarPersegiPanjang));
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 3:
				do{
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("                                               SEGITIGA                                                 ");
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("\n1. Segitiga Sama Sisi\n");
					printf("2. Segitiga Sama Kaki\n");
					printf("3. Segitiga Sembarang\n");
					printf("4. Segitiga Siku-Siku\n");
					printf("\nSilahkan masukkan jenis segitiga [1-4]\n>> ");
					scanf("%d", &choiceSegitiga);
				} while(choiceSegitiga < 1 || choiceSegitiga > 4);
				
				switch(choiceSegitiga){
					case 1:
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("                                          SEGITIGA SAMA SISI                                            ");
						printf("\n----------------------------------------------------------------------------------------------------\n");
						info();
						printf("\nSilahkan masukkan panjang sisi segitiga\n>> ");
						scanf("%lf", &sisiSegitiga1);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Keliling segitiga sama sisi dengan panjang sisi %.2lf adalah %.2lf", sisiSegitiga1, sisiSegitiga1*3);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						break;
						
					case 2:
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("                                          SEGITIGA SAMA KAKI                                            ");
						printf("\n----------------------------------------------------------------------------------------------------\n");
						info();
						printf("\nSilahkan masukkan panjang alas segitiga\n>> ");
						scanf("%lf", &sisiSegitiga1);
						printf("\nSilahkan masukkan panjang sisi segitiga yang sama\n>> ");
						scanf("%lf", &sisiSegitiga2);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Keliling segitiga sama kaki dengan panjang alas %.2lf dan panjang sisi yang sama %.2lf adalah %.2lf", sisiSegitiga1, sisiSegitiga2, sisiSegitiga1 + (2*sisiSegitiga2));
						printf("\n----------------------------------------------------------------------------------------------------\n");
						break;
						
					case 3:
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("                                          SEGITIGA SEMBARANG                                            ");
						printf("\n----------------------------------------------------------------------------------------------------\n");
						info();
						printf("\nSilahkan masukkan panjang sisi segitiga yang pertama\n>> ");
						scanf("%lf", &sisiSegitiga1);
						printf("\nSilahkan masukkan panjang sisi segitiga yang kedua\n>> ");
						scanf("%lf", &sisiSegitiga2);
						printf("\nSilahkan masukkan panjang sisi segitiga yang ketiga\n>> ");
						scanf("%lf", &sisiSegitiga3);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Keliling segitiga sembarang dengan panjang sisi %.2lf, %.2lf dan %.2lf adalah %.2lf", sisiSegitiga1, sisiSegitiga2, sisiSegitiga3, sisiSegitiga1 + sisiSegitiga2 + sisiSegitiga3);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						break;	
						
					case 4:
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("                                          SEGITIGA SIKU-SIKU                                            ");
						printf("\n----------------------------------------------------------------------------------------------------\n");
						info();
						printf("\nSilahkan masukkan panjang sisi segitiga yang pertama\n>> ");
						scanf("%lf", &sisiSegitiga1);
						printf("\nSilahkan masukkan panjang sisi segitiga yang kedua\n>> ");
						scanf("%lf", &sisiSegitiga2);
						printf("\nSilahkan masukkan panjang sisi segitiga yang ketiga\n>> ");
						scanf("%lf", &sisiSegitiga3);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Keliling segitiga siku-siku dengan panjang sisi %.2lf, %.2lf dan %.2lf adalah %.2lf", sisiSegitiga1, sisiSegitiga2, sisiSegitiga3, sisiSegitiga1 + sisiSegitiga2 + sisiSegitiga3);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						break;	
				}
				
				end();
				break;	
				
			case 4:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            JAJAR GENJANG                                               ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang alas jajar genjang\n>> ");
				scanf("%lf", &jajarAlas);
				printf("\nSilahkan masukkan panjang sisi miring jajar genjang\n>> ");
				scanf("%lf", &jajarMiring);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling jajar genjang dengan panjang alas %.2lf dan panjang sisi miring %.2lf adalah %.2lf", jajarAlas, jajarMiring, (2*jajarAlas) + (2*jajarMiring));
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 5:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                              TRAPESIUM                                                 ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang sisi bagian atas trapesium\n>> ");
				scanf("%lf", &panjangSisiAtas);
				printf("\nSilahkan masukkan panjang sisi bagian bawah trapesium\n>> ");
				scanf("%lf", &panjangSisiBawah);
				printf("\nSilahkan masukkan panjang sisi miring pertama trapesium\n>> ");
				scanf("%lf", &miringTrapesium1);
				printf("\nSilahkan masukkan panjang sisi miring pertama trapesium\n>> ");
				scanf("%lf", &miringTrapesium2);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling trapesium dengan panjang sisi datar %.2lf, %.2lf dan sisi miring %.2lf, %.2lf adalah %.2lf", panjangSisiAtas, panjangSisiBawah, miringTrapesium1, miringTrapesium2, panjangSisiAtas+panjangSisiBawah+miringTrapesium1+miringTrapesium2);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 6:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            LAYANG-LAYANG                                               ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang sisi pertama layang-layang\n>> ");
				scanf("%lf", &sisi1L);
				printf("\nSilahkan masukkan panjang sisi kedua layang-layang\n>> ");
				scanf("%lf", &sisi2L);
				printf("\nSilahkan masukkan panjang sisi ketiga layang-layang\n>> ");
				scanf("%lf", &sisi3L);
				printf("\nSilahkan masukkan panjang sisi keempat layang-layang\n>> ");
				scanf("%lf", &sisi4L);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling layang-layang dengan panjang sisi %.2lf, %.2lf, %.2lf, dan %.2lf adalah %.2lf", sisi1L, sisi2L, sisi3L, sisi4L, sisi1L+sisi2L+sisi3L+sisi4L);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 7:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            BELAH KETUPAT                                               ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan panjang sisi belah ketupat\n>> ");
				scanf("%lf", &sisiKetupat);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling belah ketupat dengan panjang sisi %.2lf adalah %.2lf", sisiKetupat, 4*sisiKetupat);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 8:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                             LINGKARAN                                                  ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info();
				printf("\nSilahkan masukkan hari-jari lingkaran\n>> ");
				scanf("%lf", &jari2);
				if((int)jari2 % 7 == 0){
					operasiKLing = 2 * (22 * jari2) / 7;
				} else {
					operasiKLing = 2 * 3.14 * jari2;
				}
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Keliling lingkaran dengan jari-jari %.2lf adalah %.2lf", jari2, operasiKLing);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;	
				
			case 9:
				break;							
		}	
			
}

void keliling3d(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                          KELILING 3 DIMENSI                                            ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Kubus\n");
		printf("2. Balok\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-3]\n>> ");
		scanf("%d", &choiceKeliling);
	} while (choiceKeliling < 1 || choiceKeliling > 3);
	
	switch(choiceKeliling){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                KUBUS                                                   ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info();
			printf("\nSilahkan masukkan panjang sisi kubus\n>> ");
			scanf("%lf", &sisiPersegi);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Keliling kubus dengan panjang sisi %.2lf adalah %.2lf", sisiPersegi, sisiPersegi*12);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                BALOK                                                   ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info();
			printf("\nSilahkan masukkan panjang balok\n>> ");
			scanf("%lf", &panjangB);
			printf("\nSilahkan masukkan lebar balok\n>> ");
			scanf("%lf", &lebarB);
			printf("\nSilahkan masukkan tinggi balok\n>> ");
			scanf("%lf", &tinggiB);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Keliling balok dengan panjang %.2lf, lebar %.2lf dan tinggi %.2lf adalah %.2lf", panjangB, lebarB, tinggiB, 4*(panjangB+lebarB+tinggiB));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 3:
		
			break;		
	}
}

void case2(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                               KELILING                                             \n");
		printf("----------------------------------------------------------------------------------------------------\n");
		printf("1. Bangun Datar (2 Dimensi)\n");
		printf("2. Bangun Ruang (3 Dimensi)\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-3]\n>> ");
		scanf("%d", &choiceKeliling2d3d);
	} while(choiceKeliling2d3d < 1 || choiceKeliling2d3d > 3);

	switch(choiceKeliling2d3d){
		case 1:
			keliling2d();
			break;
		case 2:
			keliling3d();
			break;
		case 3:
			break;	
	}

}

void luas2d(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                             LUAS 2 DIMENSI                                             ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Persegi\n");
		printf("2. Persegi Panjang\n");
		printf("3. Segitiga\n");
		printf("4. Jajar Genjang\n");
		printf("5. Trapesium\n");
		printf("6. Layang-layang\n");
		printf("7. Belah Ketupat\n");
		printf("8. Lingkaran\n");
		printf("9. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-9]\n>> ");
		scanf("%d", &choiceLuas);
	} while (choiceLuas < 1 || choiceLuas > 9);
	
	switch(choiceLuas){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                PERSEGI                                                 ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang sisi persegi\n>> ");
			scanf("%lf", &sisiPersegi);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas persegi dengan panjang sisi %.2lf adalah %.2lf", sisiPersegi, sisiPersegi*sisiPersegi);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            PERSEGI PANJANG                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang sisi persegi panjang\n>> ");
			scanf("%lf", &panjangPersegiPanjang);
			printf("\nSilahkan masukkan lebar sisi persegi panjang\n>> ");
			scanf("%lf", &lebarPersegiPanjang);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas persegi panjang dengan panjang sisi %.2lf dan lebar sisi %.2lf adalah %.2lf", panjangPersegiPanjang, lebarPersegiPanjang, (2*panjangPersegiPanjang) + (2*lebarPersegiPanjang));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 3:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                               SEGITIGA                                                 ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang alas segitiga\n>> ");
			scanf("%lf", &alasSegitiga);
			printf("\nSilahkan masukkan tinggi segitiga\n>> ");
			scanf("%lf", &tinggiSegitiga);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas segitiga panjang alas %.2lf dan tinggi %.2lf adalah %.2lf", alasSegitiga, tinggiSegitiga, alasSegitiga*tinggiSegitiga/2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 4:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             JAJAR GENJANG                                              ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang alas jajar genjang\n>> ");
			scanf("%lf", &jajarAlas);
			printf("\nSilahkan masukkan tinggi jajar genjang\n>> ");
			scanf("%lf", &jajarMiring);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas jajar genjang dengan panjang alas %.2lf dan tinggi %.2lf adalah %.2lf", jajarAlas, jajarMiring, jajarAlas*jajarMiring);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
				
		case 5:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                               TRAPESIUM                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang sisi bagian atas trapesium\n>> ");
			scanf("%lf", &panjangSisiAtas);
			printf("\nSilahkan masukkan panjang sisi bagian bawah trapesium\n>> ");
			scanf("%lf", &panjangSisiBawah);
			printf("\nSilahkan masukkan tinggi trapesium\n>> ");
			scanf("%lf", &tinggiTrapesium);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas trapesium dengan panjang sisi datar %.2lf, %.2lf dan tinggi %.2lf adalah %.2lf", panjangSisiAtas, panjangSisiBawah, tinggiTrapesium, (((panjangSisiAtas+panjangSisiBawah) * tinggiTrapesium) / 2));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
				
		case 6:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             LAYANG-LAYANG                                              ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang sisi diagonal pertama layang-layang\n>> ");
			scanf("%lf", &diagonal1);
			printf("\nSilahkan masukkan panjang sisi diagonal kedua layang-layang\n>> ");
			scanf("%lf", &diagonal2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas layang-layang dengan panjang diagonal %.2lf dan %.2lf adalah %.2lf", diagonal1, diagonal2, (diagonal1 * diagonal2) / 2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
				
		case 7:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             BELAH KETUPAT                                              ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan panjang sisi diagonal pertama belah ketupat\n>> ");
			scanf("%lf", &diagonal1);
			printf("\nSilahkan masukkan panjang sisi diagonal kedua belah ketupat\n>> ");
			scanf("%lf", &diagonal2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas belah ketupat dengan panjang diagonal %.2lf dan %.2lf adalah %.2lf", diagonal1, diagonal2, (diagonal1 * diagonal2) / 2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
				
		case 8:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                               LINGKARAN                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info2();
			printf("\nSilahkan masukkan hari-jari lingkaran\n>> ");
			scanf("%lf", &jari2);
			if((int)jari2 % 7 == 0){
				operasiLLing = ((jari2 * jari2) * 22) / 7;
			} else {
				operasiLLing = 3.14 * jari2 * jari2;
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Luas lingkaran dengan jari-jari %.2lf adalah %.2lf", jari2, operasiLLing);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
				
		case 9:
			break;			
	}
	
}

void luas3d(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                LUAS PERMUKAAN BANGUN RUANG (3 DIMENSI)                                 ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Kubus\n");
		printf("2. Balok\n");
		printf("3. Prisma Segitiga\n");
		printf("4. Limas Segiempat\n");
		printf("5. Limas Segitiga\n");
		printf("6. Tabung\n");
		printf("7. Kerucut\n");
		printf("8. Bola\n");
		printf("9. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-9]\n>> ");
		scanf("%d", &choiceLuas);
	} while (choiceLuas < 1 || choiceLuas > 9);
	
		switch(choiceLuas){
			case 1:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                                 KUBUS                                                  ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info2();
				printf("\nSilahkan masukkan panjang sisi kubus\n>> ");
				scanf("%lf", &sisiPersegi);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Luas permukaan kubus dengan panjang sisi %.2lf adalah %.2lf", sisiPersegi, sisiPersegi * sisiPersegi * 6);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;
				
			case 2:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                                 BALOK                                                  ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info2();
				printf("\nSilahkan masukkan panjang balok\n>> ");
				scanf("%lf", &panjangBalok);
				printf("\nSilahkan masukkan lebar balok\n>> ");
				scanf("%lf", &lebarBalok);
				printf("\nSilahkan masukkan tinggi balok\n>> ");
				scanf("%lf", &tinggiBalok);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Luas permukaan balok dengan panjang %.2lf, lebar %.2lf dan tinggi %.2lf adalah %.2lf", panjangBalok, lebarBalok, tinggiBalok, 2 * ((panjangBalok*lebarBalok) + (lebarBalok*tinggiBalok) + (panjangBalok*tinggiBalok)));
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;
				
			case 3:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            PRISMA SEGITIGA                                             ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info2();
				printf("\nSilahkan masukkan panjang sisi alas pertama\n>> ");
				scanf("%lf", &sisiSegitiga1);
				printf("\nSilahkan masukkan panjang sisi alas kedua\n>> ");
				scanf("%lf", &sisiSegitiga2);
				printf("\nSilahkan masukkan panjang sisi alas ketiga\n>> ");
				scanf("%lf", &sisiSegitiga3);
				printf("\nSilahkan masukkan tinggi prisma\n>> ");
				scanf("%lf", &tinggiPrismaSegitiga);
				printf("\nSilahkan masukkan panjang alas segitiga\n>> ");
				scanf("%lf", &alasPrismaS);
				printf("\nSilahkan masukkan tinggi alas segitiga\n>> ");
				scanf("%lf", &tinggiAlasSegitiga);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Luas permukaan prisma segitiga adalah %.2lf", (alasPrismaS * tinggiAlasSegitiga) + (sisiSegitiga1+sisiSegitiga2+sisiSegitiga3) * tinggiPrismaSegitiga);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;
					
			case 4:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            LIMAS SEGIEMPAT                                             ");
				printf("\n----------------------------------------------------------------------------------------------------\n");			
				info2();
				printf("\nSilahkan masukkan panjang sisi alas\n>> ");
				scanf("%lf", &sisiLimas4);
				printf("\nSilahkan masukkan tinggi segitiga selimut\n>> ");
				scanf("%lf", &tinggiLimas4);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Luas permukaan limas segiempat adalah %.2lf", sisiLimas4*sisiLimas4 + (4*1/2*sisiLimas4*tinggiLimas4));
				printf("\n----------------------------------------------------------------------------------------------------\n");
				end();
				break;
				
			case 5:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                                            LIMAS SEGITIGA                                              ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				info2();
				printf("\nSilahkan masukkan panjang sisi pertama segitiga\n>> ");
				scanf("%lf", &sisiLimasS1);
				printf("\nSilahkan masukkan panjang sisi kedua segitiga\n>> ");
				scanf("%lf", &sisiLimasS2);
				printf("\nSilahkan masukkan panjang sisi ketiga segitiga\n>> ");
				scanf("%lf", &sisiLimasS3);
				printf("\nSilahkan masukkan tinggi segitiga selimut pertama\n>> ");
				scanf("%lf", &tinggiSegitigaL1);
				printf("\nSilahkan masukkan tinggi segitiga selimut kedua\n>> ");
				scanf("%lf", &tinggiSegitigaL2);
				printf("\nSilahkan masukkan tinggi segitiga selimut ketiga\n>> ");
				scanf("%lf", &tinggiSegitigaL3);
				printf("\nSilahkan masukkan panjang segitiga alas\n>> ");
				scanf("%lf", &alasSegitigaL);
				printf("\nSilahkan masukkan tinggi segitiga alas\n>> ");
				scanf("%lf", &tinggiSegitigaL);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("Luas permukaan limas segitiga adalah %.2lf", (alasSegitigaL * tinggiSegitigaL)/2 + (sisiLimasS1 * tinggiSegitigaL1)/2 + (sisiLimasS2 * tinggiSegitigaL2)/2 + (sisiLimasS3 * tinggiSegitigaL3)/2);
				printf("\n----------------------------------------------------------------------------------------------------\n");
				break;
				
			case 6:
				do{
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("                                                 TABUNG                                                 ");
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("\n1. Tabung dengan alas dan tutup\n");
					printf("2. Tabung dengan tanpa tutup\n");
					printf("3. Tabung dengan tanpa alas\n");
					printf("\nSilahkan masukkan jenis tabung yang diinginkan [1-3]\n>> ");
					scanf("%d", &choiceTabung);
				} while(choiceTabung < 1 || choiceTabung > 3);
				
				switch(choiceTabung){
					case 1:
						info2();
						printf("NOTE : Pi yang digunakan adalah 3.14\n");
						printf("\nSilahkan masukkan jari-jari\n>> ");
						scanf("%lf", &jariTabung);
						printf("\nSilahkan masukkan tinggi tabung\n>> ");
						scanf("%lf", &tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Luas permukaan tabung dengan alas dan tutup adalah %.2lf", (2 * 3.14 * jariTabung*jariTabung) + 2 * 3.14 * jariTabung*tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						end();
						break;
						
					case 2:
						info2();
						printf("NOTE : Pi yang digunakan adalah 3.14\n");
						printf("\nSilahkan masukkan jari-jari\n>> ");
						scanf("%lf", &jariTabung);
						printf("\nSilahkan masukkan tinggi tabung\n>> ");
						scanf("%lf", &tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Luas permukaan tabung tanpa tutup adalah %.2lf", (3.14 * jariTabung*jariTabung) + 2 * 3.14 * jariTabung*tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						end();
						break;
						
					case 3:
						info2();
						printf("NOTE : Pi yang digunakan adalah 3.14\n");
						printf("\nSilahkan masukkan jari-jari\n>> ");
						scanf("%lf", &jariTabung);
						printf("\nSilahkan masukkan tinggi tabung\n>> ");
						scanf("%lf", &tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						printf("Luas permukaan tabung tanpa alas adalah %.2lf", (3.14 * jariTabung*jariTabung) + 2 * 3.14 * jariTabung*tinggiTabung);
						printf("\n----------------------------------------------------------------------------------------------------\n");
						end();
						break;		
				}
				
				case 7:
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("                                                KERUCUT                                                 ");
					printf("\n----------------------------------------------------------------------------------------------------\n");
					info2();
					printf("NOTE : Pi yang digunakan adalah 3.14\n");
					printf("\nSilahkan masukkan jari-jari alas kerucut\n>> ");
					scanf("%lf", &jariKerucut);
					printf("\nSilahkan masukkan panjang garis pelukis kerucut\n>> ");
					scanf("%lf", &garisPelukis);
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("Luas permukaan kerucut adalah %.2lf", (3.14 * jariKerucut * garisPelukis) + (3.14 * jariKerucut * jariKerucut));
					printf("\n----------------------------------------------------------------------------------------------------\n");
					end();
					break;	
					
				case 8:
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("                                                 BOLA                                                   ");
					printf("\n----------------------------------------------------------------------------------------------------\n");
					info2();
					printf("NOTE : Pi yang digunakan adalah 3.14\n");
					printf("\nSilahkan masukkan jari-jari\n>> ");
					scanf("%lf", &jariBola);
					printf("\n----------------------------------------------------------------------------------------------------\n");
					printf("Luas permukaan bola adalah %.2lf", 4*3.14*jariBola*jariBola);
					printf("\n----------------------------------------------------------------------------------------------------\n");
					end();
					break;		
			}
		
}

void case3(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                                  LUAS                                                  ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Luas Bangun Datar (2 Dimensi)\n");
		printf("2. Luas Permukaan Bangun Ruang (3 Dimensi)\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-3]\n>> ");
		scanf("%d", &choiceLuas2d3d);
	} while(choiceLuas2d3d < 1 || choiceLuas2d3d > 3);
	
	switch(choiceLuas2d3d){
		case 1:
			luas2d();
			break;
			
		case 2:	
			luas3d();
			break;
			
		case 3:
			break;	
	}
	
}

void case4(){

	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                                 VOLUME                                                 ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Kubus\n");
		printf("2. Balok\n");
		printf("3. Tabung\n");
		printf("4. Kerucut\n");
		printf("5. Prisma Segitiga\n");
		printf("6. Limas Segitiga\n");
		printf("7. Limas Segiempat\n");
		printf("8. Bola\n");
		printf("9. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-9]\n>> ");
		scanf("%d", &choiceVolume);
	} while(choiceVolume < 1 || choiceVolume > 9);
	
	switch(choiceVolume){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 KUBUS                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info3();
			printf("\nSilahkan masukkan panjang sisi kubus\n>> ");
			scanf("%lf", &sisiKubus);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume kubus dengan panjang sisi %.2lf adalah %.2lf", sisiKubus, sisiKubus*sisiKubus*sisiKubus);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 BALOK                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info3();
			printf("\nSilahkan masukkan panjang balok\n>> ");
			scanf("%lf", &panjangBalok);
			printf("\nSilahkan masukkan lebar balok\n>> ");
			scanf("%lf", &lebarBalok);
			printf("\nSilahkan masukkan tinggi balok\n>> ");
			scanf("%lf", &tinggiBalok);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume balok dengan panjang %.2lf, lebar %.2lf, dan tinggi %.2lf adalah %.2lf", panjangBalok, lebarBalok, tinggiBalok, panjangBalok*lebarBalok*tinggiBalok);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 3:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                TABUNG                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info3();
			printf("NOTE : Pi yang digunakan adalah 3.14\n");
			printf("\nSilahkan masukkan jari-jari\n>> ");
			scanf("%lf", &jari2Tabung);
			printf("\nSilahkan masukkan tinggi tabung\n>> ");
			scanf("%lf", &tinggiTabung2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume tabung dengan jari-jari %.2lf dan tinggi %.2lf adalah %.2lf", jari2Tabung, tinggiTabung2, 3.14*jari2Tabung*jari2Tabung*tinggiTabung2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 4:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                KERUCUT                                                 ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info3();
			printf("NOTE : Pi yang digunakan adalah 3.14\n");
			printf("\nSilahkan masukkan jari-jari\n>> ");
			scanf("%lf", &jari2Kerucut);
			printf("\nSilahkan masukkan tinggi kerucut\n>> ");
			scanf("%lf", &tinggiKerucut);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume kerucut dengan jari-jari %.2lf dan tinggi %.2lf adalah %.2lf", jari2Kerucut, tinggiKerucut, (3.14*jari2Kerucut*jari2Kerucut*tinggiKerucut) / 3);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 5:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            PRISMA SEGITIGA                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");	
			info3();
			printf("\nSilahkan masukkan panjang segitiga alas\n>> ");
			scanf("%lf", &alasPrismaS);
			printf("\nSilahkan masukkan tinggi segitiga alas\n>> ");
			scanf("%lf", &tinggiAlasSegitiga);
			printf("\nSilahkan masukkan tinggi prisma\n>> ");
			scanf("%lf", &tinggiPrismaSegitiga);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume prisma segitiga dengan panjang segitiga %.2lf, tinggi segitiga %.2lf dan tinggi prisma %.2lf adalah %.2lf", alasPrismaS, tinggiAlasSegitiga, tinggiPrismaSegitiga, (alasPrismaS*tinggiAlasSegitiga)/2 * tinggiPrismaSegitiga);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 6:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            LIMAS SEGITIGA                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");	
			info3();
			printf("\nSilahkan masukkan panjang segitiga alas\n>> ");
			scanf("%lf", &alasLimas);
			printf("\nSilahkan masukkan tinggi segitiga alas\n>> ");
			scanf("%lf", &tinggiAlasLimas);
			printf("\nSilahkan masukkan tinggi limas\n>> ");
			scanf("%lf", &tinggiLimas);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume limas segitiga dengan panjang segitiga %.2lf, tinggi segitiga %.2lf dan tinggi limas %.2lf adalah %.2lf", alasLimas, tinggiAlasLimas, tinggiLimas, (((alasLimas*tinggiAlasLimas)/2) * tinggiLimas)/3);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 7:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            LIMAS SEGIEMPAT                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");	
			info3();
			printf("\nSilahkan masukkan panjang sisi segiempat alas\n>> ");
			scanf("%lf", &panjangLimasSegi4);
			printf("\nSilahkan masukkan tinggi limas\n>> ");
			scanf("%lf", &tinggiLimas);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume limas segitiga dengan panjang segiempat %.2lf dan tinggi limas %.2lf adalah %.2lf", panjangLimasSegi4, tinggiLimas, (panjangLimasSegi4*panjangLimasSegi4*tinggiLimas)/3);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 8:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 BOLA                                                   ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			info3();
			printf("NOTE : Pi yang digunakan adalah 3.14\n");
			printf("\nSilahkan masukkan jari-jari\n>> ");
			scanf("%lf", &jariBola);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Volume bola dengan jari-jari %.2lf adalah %.2lf", jariBola, (4*3.14*jariBola*jariBola*jariBola)/3);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 9:
			break;		
	}
}

void case5(){
	do{
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PEMANGKATAN                                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("1. Pemangkatan\n");
			printf("2. Kembali ke menu utama\n");
			printf("\nSilahkan pilih menu yang tersedia [1-2]\n>> ");
			scanf("%d", &choicePemangkatan);
	} while(choicePemangkatan < 1 || choicePemangkatan > 2);
	
	switch(choicePemangkatan){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PEMANGKATAN                                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angka yang ingin dipangkatkan\n>> ");
			scanf("%lf", &angkaPemangkatan);
			printf("\nSilahkan masukkan pangkat yang diinginkan\n>> ");
			scanf("%lf", &pangkat);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil dari %.2lf pangkat %.2lf adalah %.6lf", angkaPemangkatan, pangkat, pow(angkaPemangkatan, pangkat));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		case 2:
			break;	
	}	
}

void case6(){
	do{
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PENGAKARAN                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("1. Pengakaran\n");
			printf("2. Kembali ke menu utama\n");
			printf("\nSilahkan pilih menu yang tersedia [1-2]\n>> ");
			scanf("%d", &choicePengakaran);
	} while(choicePengakaran < 1 || choicePengakaran > 2);
	
	switch(choicePengakaran){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              PENGAKARAN                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angka yang ingin diakarkan\n>> ");
			scanf("%lf", &angkaPengakaran);
			printf("\nSilahkan masukkan akar pangkat yang diinginkan?\n>> ");
			scanf("%lf", &akarBerapa);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil dari %.2lf akar pangkat %.2lf adalah %.2lf", angkaPengakaran, akarBerapa, pow(angkaPengakaran, 1/akarBerapa));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			break;	
	}
	
}

void case7(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                                  LOG                                                   ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. 10 Log\n");
		printf("2. Natural Log\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-2]\n>> ");
		scanf("%d", &choiceLog);
	} while(choiceLog < 1 || choiceLog > 3);
	
	switch(choiceLog){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                10 LOG                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angka yang ingin di 10 log-kan\n>> ");
			scanf("%lf", &angkaLog);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil dari 10 log %.2lf adalah %.5lf", angkaLog, log10(angkaLog));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:	
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              NATURAL LOG                                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angka yang ingin di natural log-kan\n>> ");
			scanf("%lf", &angkaLog);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil dari natural log %.2lf adalah %.5lf", angkaLog, log(angkaLog));
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 3:
			break;	
	}
}

void case8(){
	do{
		countBiner = 0;
		sumDesimal = 0;
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                                 BINER                                                  ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Desimal ke Biner\n");
		printf("2. Biner ke Desimal\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-3]\n>> ");
		scanf("%d", &choiceBiner);
	} while(choiceBiner < 1 || choiceBiner > 3);
	
	switch(choiceBiner){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                           DESIMAL KE BINER                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angka desimal\n>> ");
			scanf("%lld", &desimal);
			tempD = desimal;
			for(int x = 0; desimal != 0; x++){
				biner[countBiner] = desimal % 2;
				countBiner++;
				desimal /= 2;
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Biner dari angka desimal %lld adalah ", tempD);
			for(int x = 0; x < countBiner; x++){
				printf("%d", biner[countBiner-1-x]);
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
		
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                           BINER KE DESIMAL                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan biner\n>> ");
			scanf("%lld", &biner2);
			tempD = biner2;
			for(int x = 0; biner2 != 0; x++){
				kotakBiner[countBiner] = biner2 % 10;
				countBiner++;
				biner2 /= 10;
			}
			
			for(int x = 0; biner2 != 0; x++){
				kotakBiner[countBiner] = biner2 % 10;
				countBiner++;
				biner2 /= 10;
			}
			
			for(int x = 0; x < countBiner; x++){
				if(kotakBiner[x] == 1){
					sumDesimal += pow(2, x);
				}
			}
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Angka desimal dari biner %lld adalah %lld", tempD, sumDesimal);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 3:
			break;	
	}
}

void cekKonversi(){
	
	if(strcmp(satuan1, "kg") == 0){
		choice1 = 7;
	} else if (strcmp(satuan1, "hg") == 0){
		choice1 = 6;
	} else if (strcmp(satuan1, "dag") == 0){
		choice1 = 5;
	} else if (strcmp(satuan1, "g") == 0){
		choice1 = 4;
	} else if (strcmp(satuan1, "dg") == 0){
		choice1 = 3;
	} else if (strcmp(satuan1, "cg") == 0){
		choice1 = 2;
	} else if (strcmp(satuan1, "mg") == 0){
		choice1 = 1;
	}
	
	if(strcmp(satuan2, "kg") == 0){
		choice2 = 7;
	} else if (strcmp(satuan2, "hg") == 0){
		choice2 = 6;
	} else if (strcmp(satuan2, "dag") == 0){
		choice2 = 5;
	} else if (strcmp(satuan2, "g") == 0){
		choice2 = 4;
	} else if (strcmp(satuan2, "dg") == 0){
		choice2 = 3;
	} else if (strcmp(satuan2, "cg") == 0){
		choice2 = 2;
	} else if (strcmp(satuan2, "mg") == 0){
		choice2 = 1;	
	}
}

void case9(){
	int cekkv = 1;
	int cekkv2 = 1;
	double ts;
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                               KONVERSI                                                 ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Konversi Massa\n");
		printf("2. Konversi Panjang\n");
		printf("3. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-3]\n>> ");
		scanf("%d", &choiceKonversi);
	} while(choiceKonversi < 1 || choiceKonversi > 3);
	
	switch(choiceKonversi){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            KONVERSI MASSA                                              ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angkanya [tanpa satuan]\n>> ");
			scanf("%lf", &bilanganKonversi);
			getchar();
			ts = bilanganKonversi;
			
			do{
				cekkv = 1;
				printf("\nSilahkan masukkan satuannya [kg|hg|dag|g|dg|cg|mg]\n>> ");
				scanf("%s", satuan1);
				getchar();
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "kg");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "hg");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "dag");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "g");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "dg");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "cg");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "mg");
				} 
			} while(cekkv == 1 || cekkv == -1);
			
			do{
				cekkv2 = 1;
				printf("\nSilahkan masukkan ingin diubah ke satuan apa [kg|hg|dag|g|dg|cg|mg]\n>> ");
				scanf("%s", satuan2);
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "kg");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "hg");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "dag");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "g");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "dg");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "cg");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "mg");
				} 			
			} while (cekkv2 == 1 || cekkv2 == -1);
			
			cekKonversi();
			if(choice1 > choice2){
				gapKonversi = choice1 - choice2;
				for(int x = 0; x < gapKonversi; x++){
					bilanganKonversi *= 10; 
				}
			} else if (choice1 < choice2){
				gapKonversi = choice2 - choice1;
				for(int x = 0; x < gapKonversi; x++){
					bilanganKonversi /= 10; 
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil konversi dari %.2lf %s adalah %.2lf %s", ts, satuan1, bilanganKonversi, satuan2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                           KONVERSI PANJANG                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan angkanya [tanpa satuan]\n>> ");
			scanf("%lf", &bilanganKonversi);
			getchar();
			ts = bilanganKonversi;
			
			do{
				cekkv = 1;
				printf("\nSilahkan masukkan satuannya [km|hm|dam|m|dm|cm|mm]\n>> ");
				scanf("%s", satuan1);
				getchar();
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "km");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "hm");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "dam");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "m");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "dm");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "cm");
				} 
				if(cekkv == 1 || cekkv == -1){
					cekkv = strcmp(satuan1, "mm");
				} 
			} while(cekkv == 1 || cekkv == -1);
			
			do{
				cekkv2 = 1;
				printf("\nSilahkan masukkan ingin diubah ke satuan apa [km|hm|dam|m|dm|cm|mm]\n>> ");
				scanf("%s", satuan2);
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "km");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "hm");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "dam");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "m");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "dm");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "cm");
				} 
				if(cekkv2 == 1 || cekkv2 == -1){
					cekkv2 = strcmp(satuan2, "mm");
				} 			
			} while (cekkv2 == 1 || cekkv2 == -1);
			
			cekKonversi();
			if(choice1 > choice2){
				gapKonversi = choice1 - choice2;
				for(int x = 0; x < gapKonversi; x++){
					bilanganKonversi *= 10; 
				}
			} else if (choice1 < choice2){
				gapKonversi = choice2 - choice1;
				for(int x = 0; x < gapKonversi; x++){
					bilanganKonversi /= 10; 
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Hasil konversi dari %.2lf %s adalah %.2lf %s", ts, satuan1, bilanganKonversi, satuan2);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;	
			
		case 3:
			break;	
	}
	
}

void case10(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                          MEAN | MEDIAN | MODUS                                         ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Mean\n");
		printf("2. Median\n");
		printf("3. Modus\n");
		printf("4. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-4]\n>> ");
		scanf("%d", &choiceMMM);
	} while(choiceMMM < 1 || choiceMMM > 4);
	
	switch(choiceMMM){
		case 1:
			sumMean = 0;
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                  MEAN                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan jumlah data\n>> ");
			scanf("%lld", &jumlahData);
			for(int x = 0; x < jumlahData; x++){
				printf("\nMasukkan angka ke %lld:\n>> ", x + 1);
				scanf("%lld", &angkaMean);
				sumMean += angkaMean;
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Rata-rata dari data tersebut adalah %.2lf", (double)sumMean / jumlahData);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                MEDIAN                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan jumlah data\n>> ");
			scanf("%lld", &jumlahData);
			for(int x = 0; x < jumlahData; x++){
				printf("\nMasukkan angka ke %lld:\n>> ", x + 1);
				scanf("%lld", &angkaMedian[x]);
			}
			for(int x = 0; x < jumlahData; x++){
				for(int y = 0; y < jumlahData; y++){
					if(angkaMedian[y] > angkaMedian[y+1]){
						tempMedian = angkaMedian[y];
						angkaMedian[y] = angkaMedian[y+1];
						angkaMedian[y+1] = tempMedian;
					}
				}
			}
			
			if(jumlahData % 2 == 0){
				tengah = (angkaMedian[jumlahData/2] + angkaMedian[(jumlahData/2) + 1]) / 2; 
			} else {
				tengah = angkaMedian[(jumlahData/2) + 1];
			}
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Median dari data tersebut adalah %.2lf", tengah);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 3:
			maxModus = -9999;
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 MODUS                                                  ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nNOTE : Apabila ada dua data yang banyak kemunculannya sama, maka akan diambil angka yang lebih besar\n");
			printf("\nSilahkan masukkan jumlah data\n>> ");
			scanf("%lld", &jumlahData);
			for(int x = 0; x < 10005; x++){
				kotakModus[x] = 0;
			}
			
			for(int x = 0; x < jumlahData; x++){
				printf("\nMasukkan angka ke %lld:\n>> ", x + 1);
				scanf("%lld", &angkaModus);
				kotakModus[angkaModus]++;
			}
			
			for(int x = 0; x < 10005; x++){
				if(kotakModus[x] >= maxModus){
					maxModus = kotakModus[x];
					modus = x;
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Modus dari data tersebut adalah %.2lf", modus);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 4:
			break;			
	}
}

void case11(){
	do{
		countF = 1;
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                       FAKTOR DARI SEBUAH BILANGAN                                      ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Faktor dari sebuah bilangan\n");
		printf("2. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-2]\n>> ");
		scanf("%d", &choiceF);
	} while(choiceF< 1 || choiceF> 2);
	
	switch(choiceF){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                       FAKTOR DARI SEBUAH BILANGAN                                      ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan bilangannya\n>> ");
			scanf("%lld", &bilanganF);
			for(int x = 1; x <= bilanganF; x++){
				if(bilanganF % x == 0){
					kotakF[countF] = x;
					countF++;
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("Faktor dari bilangan %lld adalah ", bilanganF);
			for(int x = 1; x < countF; x++){
				if(x == countF-1){
					printf("%lld", kotakF[x]);
				} else {
					printf("%lld ", kotakF[x]);
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			break;	
	}
		
}

void case12(){
	do{
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("                                                  MATRIKS                                               ");
		printf("\n----------------------------------------------------------------------------------------------------\n");
		printf("1. Penjumlahan dua Matriks\n");
		printf("2. Pengurangan dua Matriks\n");
		printf("3. Perkalian Matriks dengan Bilangan Real\n");
		printf("4. Perkalian Matriks dengan Matriks\n");
		printf("5. Kembali ke menu utama\n");
		printf("\nSilahkan pilih menu yang tersedia [1-4]\n>> ");
		scanf("%d", &choiceM);
	} while(choiceM < 1 || choiceM > 5);
	
	switch(choiceM){
		case 1:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                           PENJUMLAHAN MATRIKS                                          ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nNOTE : Kedua matriks harus memiliki ordo yang sama. Contohnya: 2x3 dan 2x3\n");
			printf("\nSilahkan masukkan ukuran matriks [Contoh : 2 2]\n>> ");
			scanf("%lld %lld", &barisM, &kolomM);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             MATRIKS PERTAMA                                            ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks1[x][y]);
				}
			}
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              MATRIKS KEDUA                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks2[x][y]);
				}
			}
			
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					matriksHasil[x][y] = matriks1[x][y] + matriks2[x][y]; 
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              HASIL MATRIKS                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\n");
			printf("Matriks 1:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks1[x][y]);
					} else {
						printf("%lld ", matriks1[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Matriks 2:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks2[x][y]);
					} else {
						printf("%lld ", matriks2[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Apabila keduanya dijumlahkan maka akan menghasilkan matriks:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriksHasil[x][y]);
					} else {
						printf("%lld ", matriksHasil[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 2:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                           PENGURANGAN MATRIKS                                          ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nNOTE : Kedua matriks harus memiliki ordo yang sama. Contohnya: 2x3 dan 2x3\n");
			printf("\nSilahkan masukkan ukuran matriks [Contoh : 2 2]\n>> ");
			scanf("%lld %lld", &barisM, &kolomM);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             MATRIKS PERTAMA                                            ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks1[x][y]);
				}
			}
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              MATRIKS KEDUA                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks2[x][y]);
				}
			}
			
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					matriksHasil[x][y] = matriks1[x][y] - matriks2[x][y]; 
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              HASIL MATRIKS                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\n");
			printf("Matriks 1:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks1[x][y]);
					} else {
						printf("%lld ", matriks1[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Matriks 2:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks2[x][y]);
					} else {
						printf("%lld ", matriks2[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Apabila keduanya dikurangkan maka akan menghasilkan matriks:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriksHasil[x][y]);
					} else {
						printf("%lld ", matriksHasil[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 3:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                  PERKALIAN MATRIKS DENGAN BIILANGAN REAL                               ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan ukuran matriks [Contoh : 2 2]\n>> ");
			scanf("%lld %lld", &barisM, &kolomM);
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                                 MATRIKS                                                ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks1[x][y]);
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              BILANGAN REAL                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nSilahkan masukkan sebuah bilangan real\n>> ");
			scanf("%lld", &bilanganRealM);
			
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					matriksHasil[x][y] = matriks1[x][y] * bilanganRealM;
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              HASIL MATRIKS                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\n");
			printf("Matriks:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks1[x][y]);
					} else {
						printf("%lld ", matriks1[x][y]);
					}
				}
				printf("\n");
			}
			
			printf("\nBilangan real: %lld\n", bilanganRealM);
			printf("\nApabila matriks tersebut dikalikan dengan bilangan real %lld maka akan menghasilkan matriks:\n", bilanganRealM);
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriksHasil[x][y]);
					} else {
						printf("%lld ", matriksHasil[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;
			
		case 4:
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                            PERKALIAN MATRIKS                                           ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\nNOTE : Matriks pertama harus memiliki jumlah kolom yang sama dengan jumlah baris di matriks kedua\n");
			printf("\nSilahkan masukkan ukuran matriks pertama [Contoh : 2 3]\n>> ");
			scanf("%lld %lld", &barisM, &kolomM);
			
			do{
				printf("\nNOTE : Matriks pertama harus memiliki jumlah kolom yang sama dengan jumlah baris di matriks kedua\n");
				printf("\nSilahkan masukkan ukuran matriks kedua [Contoh : 3 2]\n>> ");
				scanf("%lld %lld", &barisM1, &kolomM1);
			} while(barisM1 != kolomM);
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                             MATRIKS PERTAMA                                            ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks1[x][y]);
				}
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              MATRIKS KEDUA                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			for(int x = 1; x <= barisM1; x++){
				for(int y = 1; y <= kolomM1; y++){
					printf("\nSilahkan masukkan angka pada baris ke %lld dan kolom ke %lld\n>> ", x, y);
					scanf("%lld", &matriks2[x][y]);
				}
			}
	
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM1; y++){
					totalM = 0;
					for(int z = 1; z <= barisM1; z++){
						matriksJumlah = matriks1[x][z] * matriks2[z][y];
						totalM = totalM + matriksJumlah;
					}
					totalAkhir[x][y] = totalM;
				}
			}
			
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("                                              HASIL MATRIKS                                             ");
			printf("\n----------------------------------------------------------------------------------------------------\n");
			printf("\n");
			printf("Matriks 1:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM; y++){
					if(y == kolomM){
						printf("%lld", matriks1[x][y]);
					} else {
						printf("%lld ", matriks1[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Matriks 2:\n");
			for(int x = 1; x <= barisM1; x++){
				for(int y = 1; y <= kolomM1; y++){
					if(y == kolomM){
						printf("%lld", matriks2[x][y]);
					} else {
						printf("%lld ", matriks2[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n");
			printf("Apabila keduanya dikalikan maka akan menghasilkan matriks:\n");
			for(int x = 1; x <= barisM; x++){
				for(int y = 1; y <= kolomM1; y++){
					if(y == kolomM1){
						printf("%lld", totalAkhir[x][y]);
					} else {
						printf("%lld ", totalAkhir[x][y]);
					}
				}
				printf("\n");
			}
			printf("\n----------------------------------------------------------------------------------------------------\n");
			end();
			break;			
	}
}

int main(){

	do{
		do{
			head();
			menu();
		} while (choice < 1 || choice > 13);
		
		switch(choice){
			case 1:
				case1();
				break;
			case 2:
				case2();
				break;
			case 3:	
				case3();
				break;
			case 4:
				case4();
				break;
			case 5:
				case5();
				break;
			case 6:
				case6();	
				break;
			case 7:
				case7();
				break;
			case 8:
				case8();
				break;
			case 9:
				case9();
				break;
			case 10:	
				case10();
				break;
			case 11:
				case11();
				break;
			case 12:
				case12();
				break;
			
			case 13:
				printf("\n----------------------------------------------------------------------------------------------------\n");
				printf("                            TERIMA KASIH TELAH MENGGUNAKAN KALKULATORKU! :D                             ");
				printf("\n----------------------------------------------------------------------------------------------------\n");
				flag = 1;
				break;			
		}
		
	} while(flag == 0);	
	
	
	return 0;
}
