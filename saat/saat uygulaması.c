#include <stdio.h>
#include <time.h>

void wait ( int seconds )
{
clock_t endwait;
endwait = clock () + seconds * CLOCKS_PER_SEC ;
while (clock() < endwait) {}
}

int main ()
{
int saat,dakika,saniye;
printf("saat-dakika-saniye giriniz:\n");
printf("\n");
printf("saati giriniz:\n");
scanf("%d",&saat);
printf("dakikayi giriniz:\n");
scanf("%d",&dakika);
printf("saniyeyi giriniz:\n");
scanf("%d",&saniye);

bas:
system("cls");
printf ("%.2d:%.2d:%.2d\n",saat,dakika,saniye);
wait (1);
saniye=saniye+1;
if(saniye<60) goto bas;

dakika=dakika+1;
saniye=saniye-60;
if(dakika<60) goto bas;
saat=saat+1;
dakika=dakika-60;
if(saat<24) goto bas;
saat=saat-24;
goto bas;
return 0;
}