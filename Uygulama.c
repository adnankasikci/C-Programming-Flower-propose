#include <stdio.h>
#include <locale.h>
#include <conio.h> 
#include <unistd.h>

#include <ctype.h>
#include <string.h>
#include <stdlib.h> 


//KULLANICI G�R�� SAYFASI

int anasayfa(){
	
	char Mensay;
	
    
    printf("---------------------------------------------------------\n");
    printf("------------------���EK �NER�S� AL-----------------------\n");
    printf("----Merhaba �i�ek �nerisi Platformuna Ho�geldiniz!-------\n");
    printf("---------------------------------------------------------\n");
    printf("*********************************************************\n\n");
    
    printf("	MEN�\n");
    printf("	1 >> �i�ek Ar�yorum Bana Bir Fikir Ver.\n");
    printf("	2 >> Sisteminizde Kay�tl� Olan �i�ekleri G�ster.\n");
    printf("  Se�ene�iniz : ");
    scanf("%c",&Mensay);
    
    //Kullan�c� istedi�i b�l�me iletmek i�in yaz�lm�� k�s�m.
    
    if(isdigit(Mensay))
    {
    	if(Mensay=='1')fikirgetir();	
		else if(Mensay=='2')gstr();
		else
		{
		 system("cls");
		 printf(">>>>>>>>>>>>> L�tfen ge�erli bir say� giriniz.\n\n");
		 anasayfa();
		}
    	
	}
	else
	{
		 system("cls");
		 printf(">>>>>>>>>>>>> L�tfen ge�erli bir say� giriniz.\n\n");
		 anasayfa();
		 
	}
}







//KULLANICIYA B�R F�K�R VER FONKS�YONU

int fikirgetir()
{

	char kategorisay;
	system("color 09");
	
	
    printf("---------------------------------------------------------\n");
    printf("---------------------------------------------------------\n");
    printf("----- Arad���n�z �i�ek Hangi Kategoride Bulunuyor. ------\n\n");
    printf("	1 >> Mevsimine G�re\n");
    printf("	2 >> Hisslere G�re\n");
    printf("	3 >> Rengine G�re\n");
    printf("  Cevab�n�z : ");
  
    scanf("%c",&kategorisay);
    
    //�SD�G�T �LE RAKAMSAL HATALARI ENGELLED�M.
    
    if(isdigit(kategorisay))
    {
	    if(kategorisay=='1'){
	    	iklimgetir();
		}
		else if(kategorisay=='2')
		{
				hissgstr();
		}
		else if(kategorisay=='3')
		{
				renkgstr();
		}
		else
		{
		 system("cls");
		 fikirgetir();
		}
	}
	else
	{
		system("cls");
		fikirgetir();		
	}
    

}

// SE�ENEK 1 DE �ZELL�KLERE G�RE KATEGOR�ZE ED�YORUZ.

int hissgstr()
{
	system("color 0A");
	system("cls");
    printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
   	printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
    printf("---------------------------- Hangi �i�ek Hangi �zelli�i Ta��yor! -------------------------------------------------");
	vertaban("hepsi",6,"bo�");
}

// SE�ENEK 1 DE RENKLERE G�RE KATEGOR�ZE ED�YORUZ.

int renkgstr()
{
	system("cls");
    printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
   	printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
    printf("---------------------------- RENKLER�NE G�RE KATEGOR�ZE ED�LM�� ���EKLER -----------------------------------------\n\n");
	vertaban("hepsi",5,"bo�");
}

// SE�ENEK 1 DE MEVS�MLER�NE G�RE KATEGOR�ZE ED�YORUZ.

int iklimgetir()
{
	system("color 0C");
	char iklimsay;
	char *mevsim;
	system("cls");
    printf("---------------------------------------------------------\n");
    printf("---------------------------------------------------------\n");
    printf("---Arad���n�z �i�e�i Hangi Kategori �le Tan�mlars�n�z.---\n\n");
    printf("	1 >> K�� Mevsimi\n");
    printf("	2 >> Yaz Mevsimi\n");
    printf("	3 >> Sonbahar Mevsimi \n");
    printf("	4 >> �lkbahar Mevsimi \n");
    printf("  Cevab�n�z : ");
    scanf("%c",&iklimsay);
    
    //KULLANICIDAN ALDI�IM VER�YE G�RE KULLANICIYA B�R �IKTI G�STERD�M VE ONLARI VER�TABANINA G�NDERD�M.
    
    if(isdigit(iklimsay))
    {
	    if(iklimsay=='1'){
	    	system("color 0B");
	    	sleep(1);
	    	printf("\n\n	KI� MEVS�M� ���EKLER�	\n\n");
	    	sleep(1);
	    	printf("		K���n solmayan �i�ekler ile ruhunuzu ar�nd�r�p evinizin en g�zel k��elerini\n");
	    	sleep(3);
	    	printf("		renklendirmeniz ad�na sizlere k��a dayan�kl� �i�ekler listesi haz�rlad�k..\n");
	    	sleep(3);
	    	printf("		Listemizde yer alan k�� �i�ekleri �e�itleri size �i�ek �nerisi konusunda fikir olu�turabilir.\n\n");
	    	mevsim="K��";
	    	vertaban(mevsim,0,"bo�");
		}
		else if(iklimsay=='2')
		{
			system("color 0E");
			sleep(1);
	    	printf("\n\n	YAZ MEVS�M� ���EKLER�	\n\n");
	    	sleep(1);
	    	printf("	Yaz aylar�n�n gelmesiyle beraber, balkon ve teraslar�m�zdaki bitkilerle daha �ok vakit ge�irmeye ba�lad�k.\n");
	    	sleep(3);
	    	printf("	Havalar�n �s�nmas�yla birlikte, yemye�il bitkilerle bezenmi� balkon ve teraslarda, uzun saatler harc�yoruz.\n");
	    	sleep(3);
	    	printf("	Listemizde yer alan yaz �i�ekleri �e�itleri size �i�ek �nerisi konusunda fikir olu�turabilir.\n\n");
	    	mevsim="Yaz";
	    	vertaban(mevsim,0,"bo�");
		}
		else if(iklimsay=='3')
		{
			system("color 08");
			sleep(1);
	    	printf("\n\n	SONBAHAR MEVS�M� ���EKLER�	\n\n");
	    	sleep(1);
	    	printf("	Nedense 4 mevsimin en h�z�nl�s� olarak resmedilir sonbahar.Oysa ki y�zlerce\n");
	    	sleep(3);
	    	printf("Film i�in ilham kayna�� olmu�ken neden hep kasvetli, donuk ve depresif ifadelerle anlat�l�r bilinmez.\n");
	    	sleep(3);
	    	printf("	Listemizde yer alan sonbahar �i�ekleri �e�itleri size �i�ek �nerisi konusunda fikir olu�turabilir.\n\n");
			mevsim="Sonbahar";
	    	vertaban(mevsim,0,"bo�");
		}
		else if(iklimsay=='4')
		{
			system("color 0A");
			sleep(1);
	    	printf("\n\n	�LKBAHAR MEVS�M� ���EKLER�	\n\n");
	    	sleep(1);
	    	printf("	Bahar� m�jdeleyen, bahar mevsiminin art�k bizimle oldu�unu duyuran �i�ekler bahar �i�ekleridir.\n");
	    	sleep(3);
	    	printf("	Bunlar�n yan�nda en g�zel ilkbahar �i�eklerini bah�elerde ve saks�larda g�rmeyi de isteriz.\n");
	    	sleep(3);
	    	printf("	Listemizde yer alan bahar �i�ekleri �e�itleri size �i�ek �nerisi konusunda fikir olu�turabilir.\n\n");
			mevsim="Bahar";
	    	vertaban(mevsim,0,"bo�");
		}
		else
		{
			iklimgetir();
		}
	}
	else
	{

		iklimgetir();
	}
    
    
	
}













//KULLANICIYA S�STEMDEK� ���EKLER� G�STERME FONKS�YONU
int gstr()
{
	system("color 0E");
	system("cls");
    printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
   	printf("---------------------------------------------------------");
   	printf("---------------------------------------------------------\n");
    printf("---------------------------- Size Sistemimizdeki Kay�tl� Olan T�m �i�ekleri G�steriyoruz! ------------------------\n\n");
	vertaban("hepsi",4,"bo�");
}





//���EK VER�TABANI

struct flowers{
	char ad[100];
	char mevsim[100];
    char ozellik[100];
    char renk[100];
    
    }flower[100];


int vertaban(char gelenver[100], int girissay,char renk[100]){
	
	
												//KI� B�TK�LER
	strcpy(flower[0].ad,"Helleborus � Noel G�l�"); strcpy(flower[0].mevsim,"K��"); strcpy(flower[0].ozellik,"Estetik"); strcpy(flower[0].renk,"K�rm�z�");
	strcpy(flower[1].ad,"Orkide �i�e�i"); strcpy(flower[1].mevsim,"K��"); strcpy(flower[1].ozellik,"Zarif"); strcpy(flower[1].renk,"Renkli");
	strcpy(flower[2].ad,"K�pe �i�e�i"); strcpy(flower[2].mevsim,"K��"); strcpy(flower[2].ozellik,"S�sl�"); strcpy(flower[2].renk,"Pembe");
	strcpy(flower[3].ad,"Kas�mpat� �i�e�i"); strcpy(flower[3].mevsim,"K��"); strcpy(flower[3].ozellik,"Zarif"); strcpy(flower[3].renk,"Renkli");
	strcpy(flower[4].ad,"Kardelen �i�e�i "); strcpy(flower[4].mevsim,"K��"); strcpy(flower[4].ozellik,"Zarif"); strcpy(flower[4].renk,"Renkli");
	
	strcpy(flower[5].ad,"�ebboy �i�e�i"); strcpy(flower[5].mevsim,"K��"); strcpy(flower[5].ozellik,"Estetik"); strcpy(flower[5].renk,"Sar�");
	strcpy(flower[6].ad,"S�klamen �i�e�i"); strcpy(flower[6].mevsim,"K��"); strcpy(flower[6].ozellik,"Estetik"); strcpy(flower[6].renk,"K�rm�z�");
	strcpy(flower[7].ad,"K�� S�mb�l�"); strcpy(flower[7].mevsim,"K��"); strcpy(flower[7].ozellik,"Kal�c�"); strcpy(flower[7].renk,"Pembe");
	strcpy(flower[8].ad,"Nergis �i�e�i"); strcpy(flower[8].mevsim,"K��"); strcpy(flower[8].ozellik,"S�sl�"); strcpy(flower[8].renk,"Sar�");
	
	strcpy(flower[9].ad,"A�elya �i�e�i"); strcpy(flower[9].mevsim,"K��"); strcpy(flower[9].ozellik,"Estetik"); strcpy(flower[9].renk,"Pembe");
	strcpy(flower[10].ad,"�uha �i�e�i"); strcpy(flower[10].mevsim,"K��"); strcpy(flower[10].ozellik,"Estetik"); strcpy(flower[10].renk,"Renkli");
	strcpy(flower[11].ad,"Hercai Menek�e"); strcpy(flower[11].mevsim,"K��"); strcpy(flower[11].ozellik,"Kal�c�"); strcpy(flower[11].renk,"Pembe");
	strcpy(flower[12].ad,"Karanfil"); strcpy(flower[12].mevsim,"K��"); strcpy(flower[12].ozellik,"Zarif"); strcpy(flower[12].renk,"K�rm�z�");
	strcpy(flower[13].ad,"On Bir Ay �i�e�i"); strcpy(flower[13].mevsim,"K��"); strcpy(flower[13].ozellik,"Zarif"); strcpy(flower[13].renk,"Pembe");
	
	strcpy(flower[14].ad,"Atat�rk �i�e�i"); strcpy(flower[14].mevsim,"K��"); strcpy(flower[14].ozellik,"Estetik"); strcpy(flower[14].renk,"K�rm�z�");
	strcpy(flower[15].ad,"Manolya"); strcpy(flower[15].mevsim,"K��"); strcpy(flower[15].ozellik,"Kal�c�"); strcpy(flower[15].renk,"Pembe");
	strcpy(flower[16].ad,"Kamelya �i�e�i"); strcpy(flower[16].mevsim,"K��"); strcpy(flower[16].ozellik,"S�sl�"); strcpy(flower[16].renk,"Renkli");
	strcpy(flower[17].ad,"Gardenya �i�e�i"); strcpy(flower[17].mevsim,"K��"); strcpy(flower[17].ozellik,"Zarif"); strcpy(flower[17].renk,"Sar�");
	strcpy(flower[18].ad,"Mum �i�e�i"); strcpy(flower[18].mevsim,"K��"); strcpy(flower[18].ozellik,"S�sl�"); strcpy(flower[18].renk,"K�rm�z�");	
	
															//YAZ B�TK�LER
	strcpy(flower[19].ad,"Begonya"); strcpy(flower[19].mevsim,"Yaz"); strcpy(flower[19].ozellik,"Kal�c�"); strcpy(flower[19].renk,"Sar�");
	strcpy(flower[20].ad,"Bodrum papatyas�"); strcpy(flower[20].mevsim,"Yaz"); strcpy(flower[20].ozellik,"Kal�c�"); strcpy(flower[20].renk,"Renkli");
	strcpy(flower[21].ad,"Cennet ku�u �al�s�"); strcpy(flower[21].mevsim,"Yaz"); strcpy(flower[21].ozellik,"S�sl�"); strcpy(flower[21].renk,"Sar�");
	strcpy(flower[22].ad,"Gaura �al�s�"); strcpy(flower[22].mevsim,"Yaz"); strcpy(flower[22].ozellik,"Kal�c�"); strcpy(flower[22].renk,"Pembe");
	strcpy(flower[23].ad,"Kadife �i�e�i"); strcpy(flower[23].mevsim,"Yaz"); strcpy(flower[23].ozellik,"Kal�c�"); strcpy(flower[23].renk,"Sar�");
	
	strcpy(flower[24].ad,"Ortanca �i�e�i"); strcpy(flower[24].mevsim,"Yaz"); strcpy(flower[24].ozellik,"Estetik"); strcpy(flower[24].renk,"Pembe	");
	strcpy(flower[25].ad,"Kalan�o bitkis"); strcpy(flower[25].mevsim,"Yaz"); strcpy(flower[25].ozellik,"S�sl�"); strcpy(flower[25].renk,"Renkli");
	strcpy(flower[26].ad,"Sardunya"); strcpy(flower[26].mevsim,"Yaz"); strcpy(flower[26].ozellik,"Estetik"); strcpy(flower[26].renk,"Renkli");
	strcpy(flower[27].ad,"Cam g�zeli"); strcpy(flower[27].mevsim,"Yaz"); strcpy(flower[27].ozellik,"Estetik"); strcpy(flower[27].renk,"K�rm�z�");
	strcpy(flower[28].ad,"Bar�� �i�e�i"); strcpy(flower[28].mevsim,"Yaz"); strcpy(flower[28].ozellik,"Kal�c�"); strcpy(flower[28].renk,"Renkli");
	
	strcpy(flower[29].ad,"Gardenya"); strcpy(flower[29].mevsim,"Yaz"); strcpy(flower[29].ozellik,"Kal�c�"); strcpy(flower[29].renk,"Renkli");
	strcpy(flower[30].ad,"Guzmanya"); strcpy(flower[30].mevsim,"Yaz"); strcpy(flower[30].ozellik,"Kal�c�"); strcpy(flower[30].renk,"K�rm�z�");
	strcpy(flower[31].ad,"Ekinezya"); strcpy(flower[31].mevsim,"Yaz"); strcpy(flower[31].ozellik,"S�sl�"); strcpy(flower[31].renk,"Pembe");
	strcpy(flower[32].ad,"Lavanta"); strcpy(flower[32].mevsim,"Yaz"); strcpy(flower[32].ozellik,"Kal�c�"); strcpy(flower[32].renk,"Pembe");
	strcpy(flower[33].ad,"Ate� �i�e�i"); strcpy(flower[33].mevsim,"Yaz"); strcpy(flower[33].ozellik,"Estetik"); strcpy(flower[33].renk,"K�rm�z�");
	
	strcpy(flower[34].ad,"Y�ld�z �i�e�i"); strcpy(flower[34].mevsim,"Yaz"); strcpy(flower[34].ozellik,"Zarif"); strcpy(flower[34].renk,"Sar�");
	strcpy(flower[35].ad,"Bodrum papatyas�"); strcpy(flower[35].mevsim,"Yaz"); strcpy(flower[35].ozellik,"Estetik"); strcpy(flower[35].renk,"Pembe");
	strcpy(flower[36].ad,"A�a� minesi"); strcpy(flower[36].mevsim,"Yaz"); strcpy(flower[36].ozellik,"S�sl�"); strcpy(flower[36].renk,"Renkli");
	strcpy(flower[37].ad,"Alisyum �i�e�i"); strcpy(flower[37].mevsim,"Yaz"); strcpy(flower[37].ozellik,"Estetik"); strcpy(flower[37].renk,"Renkli");
	strcpy(flower[38].ad,"Zinya kiti �i�e�i"); strcpy(flower[38].mevsim,"Yaz"); strcpy(flower[38].ozellik,"S�sl�"); strcpy(flower[38].renk,"Renkli");

															//SONBAHAR B�TK�LER
	strcpy(flower[39].ad,"Abelya"); strcpy(flower[39].mevsim,"Sonbahar"); strcpy(flower[39].ozellik,"S�sl�"); strcpy(flower[39].renk,"Renkli");
	strcpy(flower[40].ad,"Akasya �i�e�i"); strcpy(flower[40].mevsim,"Sonbahar"); strcpy(flower[40].ozellik,"Estetik"); strcpy(flower[40].renk,"Renkli");
	strcpy(flower[41].ad,"HELLEBORUS"); strcpy(flower[41].mevsim,"Sonbahar"); strcpy(flower[41].ozellik,"Kal�c�"); strcpy(flower[41].renk,"K�rm�z�");
	strcpy(flower[42].ad,"Selozya"); strcpy(flower[42].mevsim,"Sonbahar"); strcpy(flower[42].ozellik,"Estetik"); strcpy(flower[42].renk,"Renkli");
	strcpy(flower[43].ad,"G�ne� �apkas�"); strcpy(flower[43].mevsim,"Sonbahar"); strcpy(flower[43].ozellik,"S�sl�"); strcpy(flower[43].renk,"Sar�");
	
	strcpy(flower[44].ad,"Kuduzotu"); strcpy(flower[44].mevsim,"Sonbahar"); strcpy(flower[44].ozellik,"S�sl�"); strcpy(flower[44].renk,"Renkli");
	strcpy(flower[45].ad,"Saraypat�"); strcpy(flower[45].mevsim,"Sonbahar"); strcpy(flower[45].ozellik,"Estetik"); strcpy(flower[45].renk,"K�rm�z�");
	strcpy(flower[46].ad,"Frezya �i�e�i"); strcpy(flower[46].mevsim,"Sonbahar"); strcpy(flower[46].ozellik,"Estetik"); strcpy(flower[46].renk,"Pembe");
	strcpy(flower[47].ad,"Yasemin �i�e�i"); strcpy(flower[47].mevsim,"Sonbahar"); strcpy(flower[47].ozellik,"Kal�c�"); strcpy(flower[47].renk,"Renkli");
	strcpy(flower[48].ad,"Estolzia"); strcpy(flower[48].mevsim,"Sonbahar"); strcpy(flower[48].ozellik,"Estetik"); strcpy(flower[48].renk,"Renkli");
	
	strcpy(flower[49].ad,"Dimorfoteka"); strcpy(flower[49].mevsim,"Sonbahar"); strcpy(flower[49].ozellik,"Zarif"); strcpy(flower[49].renk,"Pembe");
	strcpy(flower[50].ad,"Kaya alyssum"); strcpy(flower[50].mevsim,"Sonbahar"); strcpy(flower[50].ozellik,"Zarif"); strcpy(flower[50].renk,"Renkli");
	strcpy(flower[51].ad,"Lobelia"); strcpy(flower[51].mevsim,"Sonbahar"); strcpy(flower[51].ozellik,"Estetik"); strcpy(flower[51].renk,"Pembe");
	strcpy(flower[52].ad,"Petunya	"); strcpy(flower[52].mevsim,"Sonbahar"); strcpy(flower[52].ozellik,"S�sl�"); strcpy(flower[52].renk,"Pembe");
	strcpy(flower[53].ad,"K�� Tatl�s�"); strcpy(flower[53].mevsim,"Sonbahar"); strcpy(flower[53].ozellik,"Zarif"); strcpy(flower[53].renk,"Sar�");
	
	strcpy(flower[54].ad,"Cad� F�nd���"); strcpy(flower[54].mevsim,"Sonbahar"); strcpy(flower[54].ozellik,"Zarif"); strcpy(flower[54].renk,"Sar�");
	strcpy(flower[55].ad,"Parlak Yaprakl� Kartopu"); strcpy(flower[55].mevsim,"Sonbahar"); strcpy(flower[55].ozellik,"Kal�c�"); strcpy(flower[55].renk,"Renkli");
	strcpy(flower[56].ad,"Dikenli ��de"); strcpy(flower[56].mevsim,"Sonbahar"); strcpy(flower[56].ozellik,"Zarif"); strcpy(flower[56].renk,"Sar�");
	strcpy(flower[57].ad,"K�� Yasemini"); strcpy(flower[57].mevsim,"Sonbahar"); strcpy(flower[57].ozellik,"Zarif"); strcpy(flower[57].renk,"Sar�");
	strcpy(flower[58].ad,"Zakkum"); strcpy(flower[58].mevsim,"Sonbahar"); strcpy(flower[58].ozellik,"Zarif"); strcpy(flower[58].renk,"K�rm�z�");
	
	
														//�LKBAHAR B�TK�LER
	strcpy(flower[59].ad,"Lale"); strcpy(flower[59].mevsim,"Bahar"); strcpy(flower[59].ozellik,"Estetik"); strcpy(flower[59].renk,"Renkli");
	strcpy(flower[60].ad,"Defne �i�e�i"); strcpy(flower[60].mevsim,"Bahar"); strcpy(flower[60].ozellik,"S�sl�"); strcpy(flower[60].renk,"Pembe");
	strcpy(flower[61].ad,"Papatya"); strcpy(flower[61].mevsim,"Bahar"); strcpy(flower[61].ozellik,"Zarif"); strcpy(flower[61].renk,"Renkli");
	strcpy(flower[62].ad,"Anemon"); strcpy(flower[62].mevsim,"Bahar"); strcpy(flower[62].ozellik,"Estetik"); strcpy(flower[62].renk,"Pembe");
	strcpy(flower[63].ad,"Ormang�l�"); strcpy(flower[63].mevsim,"Bahar"); strcpy(flower[63].ozellik,"S�sl�"); strcpy(flower[63].renk,"Renkli");
	
	strcpy(flower[64].ad,"�ris"); strcpy(flower[64].mevsim,"Bahar"); strcpy(flower[64].ozellik,"Estetik"); strcpy(flower[64].renk,"Pembe");
	strcpy(flower[65].ad,"M�ge �i�e�i"); strcpy(flower[65].mevsim,"Bahar"); strcpy(flower[65].ozellik,"Zarif"); strcpy(flower[65].renk,"Renkli");
	strcpy(flower[66].ad,"�i�dem"); strcpy(flower[66].mevsim,"Bahar"); strcpy(flower[66].ozellik,"Zarif"); strcpy(flower[66].renk,"Pembe");
	strcpy(flower[67].ad,"Hor �i�e�i"); strcpy(flower[67].mevsim,"Bahar"); strcpy(flower[67].ozellik,"Estetik"); strcpy(flower[67].renk,"Sar�	");
	strcpy(flower[68].ad,"Leylak"); strcpy(flower[68].mevsim,"Bahar"); strcpy(flower[68].ozellik,"Kal�c�"); strcpy(flower[68].renk,"Pembe");
	
	strcpy(flower[69].ad,"Weigela"); strcpy(flower[69].mevsim,"Bahar"); strcpy(flower[69].ozellik,"Kal�c�"); strcpy(flower[69].renk,"Pembe");
	strcpy(flower[70].ad,"Zambak"); strcpy(flower[70].mevsim,"Bahar"); strcpy(flower[70].ozellik,"Zarif"); strcpy(flower[70].renk,"Renkli");
	strcpy(flower[71].ad,"Ac� bakla"); strcpy(flower[71].mevsim,"Bahar"); strcpy(flower[71].ozellik,"S�sl�"); strcpy(flower[71].renk,"Renkli");
	strcpy(flower[72].ad,"Leucojum"); strcpy(flower[72].mevsim,"Bahar"); strcpy(flower[72].ozellik,"Estetik"); strcpy(flower[72].renk,"K�rm�z�");
	strcpy(flower[73].ad,"Muscari"); strcpy(flower[73].mevsim,"Bahar"); strcpy(flower[73].ozellik,"Zarif"); strcpy(flower[73].renk,"Pembe");
	
	strcpy(flower[74].ad,"Scilla"); strcpy(flower[74].mevsim,"Bahar"); strcpy(flower[74].ozellik,"Estetik"); strcpy(flower[74].renk,"Renkli");
	strcpy(flower[75].ad,"Pu�kinia"); strcpy(flower[75].mevsim,"Bahar"); strcpy(flower[75].ozellik,"Kal�c�"); strcpy(flower[75].renk,"Renkli");
	strcpy(flower[76].ad,"Fritillaria"); strcpy(flower[76].mevsim,"Bahar"); strcpy(flower[76].ozellik,"Zarif"); strcpy(flower[76].renk,"K�rm�z�");
	strcpy(flower[77].ad,"Bulbocodium"); strcpy(flower[77].mevsim,"Bahar"); strcpy(flower[77].ozellik,"Estetik"); strcpy(flower[77].renk,"Sar�");
	strcpy(flower[78].ad,"Proleski"); strcpy(flower[78].mevsim,"Bahar"); strcpy(flower[78].ozellik,"Kal�c�"); strcpy(flower[78].renk,"Sar�");
	strcpy(flower[79].ad,"Iridodiktium"); strcpy(flower[79].mevsim,"Bahar"); strcpy(flower[79].ozellik,"Kal�c�"); strcpy(flower[79].renk,"K�rm�z�");
	
	
	

	
	int i=0;
	char *vertabanoku="";
	char renkdeg[100];
	
	//SAYDIRMAK ���N KULLANDIM.
	int say=0;
	int say2=0;
	int say3=0;
	int say4=0;
	int say5=0;
	int say6=0;
	int say7=0;
	int say8=0;
	char belirleyici[100];

	
	//GELEN VER�LER� KATEGOR�ZE ED�LD��� YER
		
	if(gelenver=="Yaz"||gelenver=="K��"||gelenver=="Bahar"||gelenver=="Sonbahar")
	{
		vertabanoku="mevsim";
	}

	
	
	//KULLANININ SE�T��� B�L�ME G�RE GELECEK OLAN VER�LER

	if(girissay==0)
	{
		
		//G�NDER�LEN G�R�� SAYISI 0 SA VE MEVS�M G�NDER�LM��TE 
		//GELEN MEVS�ME G�RE SIRALAMA VE KULLANICIDAN RENK �STEME KISMI.
		if(vertabanoku=="mevsim")
			{
				
				for(i=0;i<80;i++)
					{			
						if(strcmp(flower[i].mevsim,gelenver)==0)
						{
							say2++;
							printf("		%d - %s\n",say2,flower[i].ad);
						}
						//sleep(1);
					}	
			}
			
			printf("\n		Arad���n�z �i�e�e biraz daha yak�nla��yoruz!");
			printf("\n\n		Arad���n�z �i�ek Hangi Renk?");
			printf("Renkli, Pembe, K�rm�z�, Sar� diyebilirsiniz.");
			printf("\n		Cevab�n�z : ");
			
			scanf("%s",&renkdeg);
			system("cls");
			vertaban(gelenver,1,renkdeg);
			
			
	}
	if(girissay==1)
	{
		printf("---------------------------------------------------------");
   	 	printf("---------------------------------------------------------\n");
   	 	printf("---------------------------------------------------------");
   	 	printf("---------------------------------------------------------\n");
    	
		
		renkdeg[0]=renk[0];
		renkdeg[0]=tolower(renkdeg[0]);
		
		


	
			if(strcmp(renkdeg,"k")==0)
			{
				printf("----------------------------------- Sizin ��in K�rm�z� �i�ekleri Renklerine Ay�r�yoruz ---------------------------\n\n");
				for(i=0;i<80;i++)
					{		
							
						if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"K�rm�z�")==0  )
						{
							say++;
							printf("					     %d - %s\n",say,flower[i].ad);
						}
					}
			 }
			 else if(strcmp(renkdeg,"s")==0)
			{
				printf("----------------------------------- Sizin ��in Sar� �i�ekleri Renklerine Ay�r�yoruz ---------------------------\n\n");
				for(i=0;i<80;i++)
					{		
							
						if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Sar�")==0  )
						{
							say++;
							printf("					     %d - %s\n",say,flower[i].ad);
						}
					}
			 }
			 else if(strcmp(renkdeg,"p")==0)
			{
				printf("----------------------------------- Sizin ��in Pembe �i�ekleri Renklerine Ay�r�yoruz ---------------------------\n\n");
				for(i=0;i<80;i++)
					{		
						if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Pembe")==0  )
						{
							say++;
							printf("					     %d - %s\n",say,flower[i].ad);
						}
					}
			 }
			 else if(strcmp(renkdeg,"r")==0)
			{
				printf("----------------------------------- Sizin ��in Renkli �i�ekleri Renklerine Ay�r�yoruz ---------------------------\n\n");
				for(i=0;i<80;i++)
					{		
							
						if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Renkli")==0  )
						{
							say++;
							printf("					     %d - %s\n",say,flower[i].ad);
						}
					}
			 }
			 else
			 {
			 	vertaban(gelenver,2,renkdeg);
			 }
			 
			printf("\n					Arad���n�z �i�e�e Sadece Bir Ad�m Kald�!");
			printf("\n\n			Arad���n�z �i�ekte Bu �zelliklerden Hangisinin Olmas�n� �sterdiniz?\n");
			printf("			    		Estetiklik, Zariflik, Kal�c�l�k, S�sl�l�k\n");
			printf("\n					     Cevab�n�z : ");
			scanf("%s",&belirleyici);
			
			
			if(isalpha(belirleyici[0]))
			{
				char son[100];
				son[0]=belirleyici[0];
				son[0]= tolower(son[0]);
				printf(son);
				
				if(strcmp(son,"e")==0)
				{
					system("cls");
					printf("---------------------------------------------------------");
   	 				printf("---------------------------------------------------------\n");
					printf("--------------------------------------  Edit�r�m�z�n Sizin ��in Se�tikleri �i�ekler  ----------------------------\n\n");
					
					if(strcmp(renkdeg,"k")==0)
					{
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"K�rm�z�")==0 && strcmp(flower[i].ozellik,"Estetik")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}	
					}
					
					else if(strcmp(renkdeg,"s")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Sar�")==0 && strcmp(flower[i].ozellik,"Estetik")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"p")==0)
					{
	
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Pembe")==0 && strcmp(flower[i].ozellik,"Estetik")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"r")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Renkli")==0 && strcmp(flower[i].ozellik,"Estetik")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
				
				 }
				else if(strcmp(son,"z")==0)
				{
					system("cls");
					printf("---------------------------------------------------------");
   	 				printf("---------------------------------------------------------\n");
					printf("--------------------------------------  Edit�r�m�z�n Sizin ��in Se�tikleri �i�ekler  ----------------------------\n\n");
					
					
					if(strcmp(renkdeg,"k")==0)
					{
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"K�rm�z�")==0 && strcmp(flower[i].ozellik,"Zarif")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}	
					}
					else if(strcmp(renkdeg,"m")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Mavi")==0 && strcmp(flower[i].ozellik,"Zarif")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"s")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Sar�")==0 && strcmp(flower[i].ozellik,"Zarif")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"p")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Pembe")==0 && strcmp(flower[i].ozellik,"Zarif")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"r")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Renkli")==0 && strcmp(flower[i].ozellik,"Zarif")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
				 }
				else if(strcmp(son,"k")==0)
				{
					system("cls");
					printf("---------------------------------------------------------");
   	 				printf("---------------------------------------------------------\n");
					printf("--------------------------------------  Edit�r�m�z�n Sizin ��in Se�tikleri �i�ekler  ----------------------------\n\n");
					
					if(strcmp(renkdeg,"k")==0)
					{
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"K�rm�z�")==0 && strcmp(flower[i].ozellik,"Kal�c�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}	
					}
					else if(strcmp(renkdeg,"m")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Mavi")==0 && strcmp(flower[i].ozellik,"Kal�c�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"s")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Sar�")==0 && strcmp(flower[i].ozellik,"Kal�c�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"p")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Pembe")==0 && strcmp(flower[i].ozellik,"Kal�c�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"r")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Renkli")==0 && strcmp(flower[i].ozellik,"Kal�c�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					
				 }
				else if(strcmp(son,"s")==0)
				{
					system("cls");
					printf("---------------------------------------------------------");
   	 				printf("---------------------------------------------------------\n");
					printf("--------------------------------------  Edit�r�m�z�n Sizin ��in Se�tikleri �i�ekler  ----------------------------\n\n");
					
					
					if(strcmp(renkdeg,"k")==0)
					{
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"K�rm�z�")==0 && strcmp(flower[i].ozellik,"S�sl�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}	
					}
					else if(strcmp(renkdeg,"m")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Mavi")==0 && strcmp(flower[i].ozellik,"S�sl�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"s")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Sar�")==0 && strcmp(flower[i].ozellik,"S�sl�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"p")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Pembe")==0 && strcmp(flower[i].ozellik,"S�sl�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
					else if(strcmp(renkdeg,"r")==0)
					{
						
						for(i=0;i<80;i++)
						{		
							
							if(strcmp(flower[i].mevsim,gelenver)==0 && strcmp(flower[i].renk,"Renkli")==0 && strcmp(flower[i].ozellik,"S�sl�")==0 )
							{	
								printf("		%d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk);
								
							}
						}
					}
				 }
				 else
				 {
					system("cls");
					vertaban(gelenver,2,renkdeg);
				 }
				 
				 printf("\n\n		Kategorize edilmi� �i�ekleri G�rd�n�z Geri D�nmek ��in 0'a Bas�n�z.'");
					int ver;
					scanf("%d",&ver);
					if(ver==0)
					{
						system("cls");
						anasayfa();
					}
				 
			}
			else
			{
				printf("Sistemimizde Se�mi� Oldu�unuz Renk Kaydedilmemi�tir.");
				system("cls");
				vertaban(gelenver,1,renkdeg);	
			}
			
	}
	else if(girissay==2)
	 {
	 		printf("------------------------------------------------------------------------------------------------------------------\n");
   	 		printf("------------------------------------------------------------------------------------------------------------------\n");
	    	printf(" -------------------------- Hatal� Giri� Yapt�n�z L�tfen Renk Se�iminden Devam Ediniz. --------------------------\n\n");
	 	    printf("		Arad���n�z �i�ek Hangi Renk?");
	 	    printf("Renkli, Pembe, K�rm�z�, Sar� diyebilirsiniz.");
			printf("\n		Cevab�n�z : ");
			
			scanf("%s",&renkdeg);
			system("cls");
			vertaban(gelenver,1,renkdeg);
	 }
	 else if(girissay==4)
	 {
	 	
	 	for(i=0;i<80;i++)
	 	{
	 	
	 		if(i<10)
	 		{
	 			printf("	              %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",i,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
			 }
			 else
			 {
			 	printf("	             %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",i,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
			 }
	 				 			
		}
		printf("\n\n		Kategorize edilmi� �i�ekleri G�rd�n�z Geri D�nmek ��in 0'a Bas�n�z.'");
			int ver;
			scanf("%d",&ver);
			if(ver==0)
			{
				system("cls");
				anasayfa();
			}
	 }	
	 else if(girissay==5)
	 {
	 
	 	printf("---------------------------------- Renkli �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].renk,"Renkli")==0)
				{
					say3++;
					if(say3<10)
					{
						printf("	   %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say3,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
					else
					{
						printf("	  %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say3,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
				   
				
				}
			//sleep(1);
			}
		
			printf("\n\n---------------------------------- K�rm�z� �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].renk,"K�rm�z�")==0)
				{
					say4++;
					if(say4<10)
					{
						printf("	   %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say4,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
					else
					{
						printf("	  %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say4,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
				   
				
				}
			//sleep(1);
			}
			
			printf("\n\n---------------------------------- Sar� �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].renk,"Sar�")==0)
				{
					say6++;
					if(say6<10)
					{
						 printf("	   %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say6,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
					else
					{
						 printf("	  %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say6,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
				  
				
				}
			//sleep(1);
			}
			printf("\n\n---------------------------------- Pembe �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].renk,"Pembe")==0)
				{
					say7++;
					if(say7<10)
					{
						printf("	   %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say7,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
					else
					{
						printf("	  %d - %s    >> Mevsimi : %s >> Hissiyat : %s  >> Renk : %s\n",say7,flower[i].ad,flower[i].mevsim,flower[i].ozellik,flower[i].renk); 
					}
				   
				
				}
			//sleep(1);
			}
			
			printf("\n\n		Kategorize edilmi� �i�ekleri G�rd�n�z Geri D�nmek ��in 0'a Bas�n�z.'");
			int ver;
			scanf("%d",&ver);
			if(ver==0)
			{
				system("cls");
				anasayfa();
			}
	 }
	 else if(girissay==6)
	 {
	 	
	 	printf("\n\n");

	 	printf("---------------------------------- Estetik �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].ozellik,"Estetik")==0)
				{
					say3++;
					if(say3<10)
					{
						printf("	   %d - %s     >> Hissiyat : %s\n",say3,flower[i].ad,flower[i].ozellik); 
					}
					else
					{
					printf("	  %d - %s     >> Hissiyat : %s\n",say3,flower[i].ad,flower[i].ozellik); 
					}
				   
				
				}
			//sleep(1);
			}
		
			printf("\n\n---------------------------------- Zarif �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].ozellik,"Zarif")==0)
				{
					say4++;
					if(say4<10)
					{
						printf("	   %d - %s     >> Hissiyat : %s\n",say4,flower[i].ad,flower[i].ozellik); 
					}
					else
					{
						printf("	  %d - %s     >> Hissiyat : %s\n",say4,flower[i].ad,flower[i].ozellik); 
					}
				   
				
				}
			//sleep(1);
			}
			
			printf("\n\n---------------------------------- Kal�c� �i�ekler ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].ozellik,"Kal�c�")==0)
				{
					say6++;
					if(say6<10)
					{
						printf("	   %d - %s     >> Hissiyat : %s\n",say6,flower[i].ad,flower[i].ozellik); 
					}
					else
					{
						printf("	  %d - %s     >> Hissiyat : %s\n",say6,flower[i].ad,flower[i].ozellik); 
					}
				  
				
				}
			//sleep(1);
			}
			printf("\n\n---------------------------------- S�s �i�ekleri ---------------------------------------------------------------\n\n");
	 	for(i=0;i<80;i++)
			{			
				if(strcmp(flower[i].ozellik,"S�sl�")==0)
				{
					say7++;
					if(say7<10)
					{
					printf("	   %d - %s     >> Hissiyat : %s\n",say7,flower[i].ad,flower[i].ozellik); 
					}
					else
					{
					printf("	  %d - %s     >> Hissiyat : %s\n",say7,flower[i].ad,flower[i].ozellik); 
					}
				   
				
				}
			//sleep(1);
			}
			
			printf("\n\n		Kategorize edilmi� �i�ekleri G�rd�n�z Geri D�nmek ��in 0'a Bas�n�z.'");
			int ver;
			scanf("%d",&ver);
			if(ver==0)
			{
				system("cls");
				anasayfa();
			}
			
	 }
	 
}




int main(){

	system("color 0F");
    setlocale(LC_ALL, "Turkish");
    anasayfa();
	printf("\n\n\n");
   
    return 0;
}






