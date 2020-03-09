#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	srand(time(NULL));
	int highs=0,im,jm,score=0,rscore=0,x,j,i,looka=1,k=0,l=0,y;
	int a[4][4],ar[4][4],da[5]={2,2,2,4,4};
	char ent,bos=' ',z='|';
	printf("                                                    WELCOME 2048 game          \n");
	printf("                                        this game was created by CEMAL EFE TEZCAN");
	printf("\n");
	//matrisin sifirlanmasi
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			a[i][j]=0;
		}
	}//matrise ilk degerin atanmasi
	x=rand()%5;
	im=rand()%4;
	jm=rand()%4;
	a[im][jm]=da[x];
	//matrisin ilk defa yazdirilmasi
	printf("_________________________________________\n");
	for(i=0;i<4;i++){
	printf("|         |         |         |         |\n");
	printf("%c   ",z);
	if(a[i][0]!=0){
		printf("%3d   ",a[i][0]);
	 }
	 else{
	 	printf("%3c   ",bos);
	 }
	 printf("%c   ",z);
	 if(a[i][1]!=0){
		printf("%3d   ",a[i][1]);
	 }
	 else{
	 	printf("%3c   ",bos);
	 }
	 printf("%c   ",z);
	 if(a[i][2]!=0){
		printf("%3d   ",a[i][2]);
	 }
	 else{
	 	printf("%3c   ",bos);
	 }
	 printf("%c   ",z);
	 if(a[i][3]!=0){
		printf("%3d   ",a[i][3]);
	 }
	 else{
	 	printf("%3c   ",bos);
	 }
	 printf("%c\n",z);
	 printf("|_________|_________|_________|_________|\n");
 }
	printf("Please enter the key(just this key(you cannot enter r if you play first time)): w(up), a(left), s(down), d(right), x(restart), r(return), e(exit)\n");
	scanf("%c",&ent);
	while(ent!='e'&& looka!=0){
	//x(restart)girilmesi halinde oyun sifirlanir
		if(ent=='x'){
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					a[i][j]=0;
				}
			}
			score=0;
		}
		//oyundaki bir adim öncesini kopyalama
	if(ent!='r'&& ent!='x'){
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				ar[i][j]=a[i][j];
			}
		}
		rscore=score;
	}
	//yapilacak islemlerde 1.for döngüsünde basilan tusa göre matrisin ilgili yeri bos ise bos olan yere kadar atama yapilir.2.for dögüsünde ise basilan tusa göre matrisin sutun veya satirdaki gözleri karþýlaþtýrýlýp ayni ise ilgili matris gözü iki ile çarpilir.
	//w tusuna basildiginda yapilacak islemler
	if(ent=='w'){
		for(i=0;i<4;i++){
			if(a[0][i]==0){
				a[0][i]=a[1][i];
				a[1][i]=0;
				if(a[0][i]==0){
					a[0][i]=a[2][i];
					a[2][i]=0;
					if(a[0][i]==0){
						a[0][i]=a[3][i];
						a[3][i]=0;
					}
				}
			}
			if(a[1][i]==0){
				a[1][i]=a[2][i];
				a[2][i]=0;
				if(a[1][i]==0){
					a[1][i]=a[3][i];
					a[3][i]=0;
				}
			}
			if(a[2][i]==0){
				a[2][i]=a[3][i];
				a[3][i]=0;
			}	
		}
	for(i=0;i<4;i++){
		if(a[0][i]==a[1][i]){
			a[0][i]=a[1][i]*2;
			a[1][i]=a[2][i];
			a[2][i]=a[3][i];
			a[3][i]=0;
			score=score+a[0][i];
		}
		if(a[1][i]==a[2][i]){
			a[1][i]=a[2][i]*2;
			a[2][i]=a[3][i];
			a[3][i]=0;
			score=score+a[1][i];
		}
		if(a[2][i]==a[3][i]){
			a[2][i]=a[3][i]*2;
			a[3][i]=0;
			score=score+a[2][i];
		 }
    	}
	}//a tusuna basildiginda yapilacak islemler
		if(ent=='a'){
		for(i=0;i<4;i++){
			if(a[i][0]==0){
				a[i][0]=a[i][1];
				a[i][1]=0;
				if(a[i][0]==0){
					a[i][0]=a[i][2];
					a[i][2]=0;
					if(a[i][0]==0){
						a[i][0]=a[i][3];
						a[i][3]=0;
					}
				}
			}
			if(a[i][1]==0){
				a[i][1]=a[i][2];
				a[i][2]=0;
				if(a[i][1]==0){
					a[i][1]=a[i][3];
					a[i][3]=0;
				}
			}
			if(a[i][2]==0){
				a[i][2]=a[i][3];
				a[i][3]=0;
			}	
		}
	for(i=0;i<4;i++){
		if(a[i][0]==a[i][1]){
			a[i][0]=a[i][1]*2;
			a[i][1]=a[i][2];
			a[i][2]=a[i][3];
			a[i][3]=0;
			score=score+a[i][0];
		}
		if(a[i][1]==a[i][2]){
			a[i][1]=a[i][2]*2;
			a[i][2]=a[i][3];
			a[i][3]=0;
			score=score+a[i][1];
		}
		if(a[i][2]==a[i][3]){
			a[i][2]=a[i][3]*2;
			a[i][3]=0;
			score=score+a[i][2];
		 }
    	}
	}//s tusuna basildiginda yapilacak islemler
		if(ent=='s'){
		for(i=0;i<4;i++){
			if(a[3][i]==0){
				a[3][i]=a[2][i];
				a[2][i]=0;
				if(a[3][i]==0){
					a[3][i]=a[1][i];
					a[1][i]=0;
					if(a[3][i]==0){
						a[3][i]=a[0][i];
						a[0][i]=0;
					}
				}
			}
			if(a[2][i]==0){
				a[2][i]=a[1][i];
				a[1][i]=0;
				if(a[2][i]==0){
					a[2][i]=a[0][i];
					a[0][i]=0;
				}
			}
			if(a[1][i]==0){
				a[1][i]=a[0][i];
				a[0][i]=0;
			}	
		}
	for(i=0;i<4;i++){
		if(a[3][i]==a[2][i]){
			a[3][i]=a[2][i]*2;
			a[2][i]=a[1][i];
			a[1][i]=a[0][i];
			a[0][i]=0;
			score=score+a[3][i];
		}
		if(a[2][i]==a[1][i]){
			a[2][i]=a[1][i]*2;
			a[1][i]=a[0][i];
			a[0][i]=0;
			score=score+a[2][i];
		}
		if(a[1][i]==a[0][i]){
			a[1][i]=a[0][i]*2;
			a[0][i]=0;
			score=score+a[1][i];
		 }
    	}
	}//d tusuna basildiginda yapilacak islemler
		if(ent=='d'){
		for(i=0;i<4;i++){
			if(a[i][3]==0){
				a[i][3]=a[i][2];
				a[i][2]=0;
				if(a[i][3]==0){
					a[i][3]=a[i][1];
					a[i][1]=0;
					if(a[i][0]==0){
						a[i][3]=a[i][0];
						a[i][0]=0;
					}
				}
			}
			if(a[i][2]==0){
				a[i][2]=a[i][1];
				a[i][1]=0;
				if(a[i][2]==0){
					a[i][2]=a[i][0];
					a[i][0]=0;
				}
			}
			if(a[i][1]==0){
				a[i][1]=a[i][0];
				a[i][0]=0;
			}	
		}
	for(i=0;i<4;i++){
		if(a[i][3]==a[i][2]){
			a[i][3]=a[i][2]*2;
			a[i][2]=a[i][1];
			a[i][1]=a[i][0];
			a[i][0]=0;
			score=score+a[i][3];
		}
		if(a[i][2]==a[i][1]){
			a[i][2]=a[i][1]*2;
			a[i][1]=a[i][0];
			a[i][0]=0;
			score=score+a[i][2];
		}
		if(a[i][1]==a[i][0]){
			a[i][1]=a[i][0]*2;
			a[i][0]=0;
			score=score+a[i][1];
		 }
    	}
	}//tablonun dolup dolmadigina bakilir
	looka=0,i=0;j=0;
	while(i<4 && looka==0){
		while(j<4 && looka==0){
			if(a[i][j]==0){
				looka=1;
			}j++;
		}j=0;i++;
	}// r girilmesi halinde bir adim onceki matrise doneriz
	if(ent=='r'){
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				a[i][j]=ar[i][j];
			}
		}score=rscore;
	}
//olusan matrisin ekrana yazdirilmasi
	printf("\n");
		printf("_________________________________________\n");
		for(i=0;i<4;i++){
		printf("|         |         |         |         |\n");
			printf("%c   ",z);
			if(a[i][0]!=0){
				printf("%3d",a[i][0]);
				if(i==im && jm==0){
					printf("*  ");
				}
				else{
					printf("   ");
				}
			}
			else{
				printf("%3c   ",bos);
			}
			printf("%c   ",z);
			if(a[i][1]!=0){
				printf("%3d",a[i][1]);
				if(i==im && jm==1){
					printf("*  ");
				}
				else{
					printf("   ");
				}
			}
			else{
				printf("%3c   ",bos);	
			}
			printf("%c   ",z);
			if(a[i][2]!=0){
				printf("%3d",a[i][2]);
				if(i==im && jm==2){
					printf("*  ");
				}
				else{
					printf("   ");
				}
			}
			else{
				printf("%3c   ",bos);
			}
			printf("%c   ",z);
			if(a[i][3]!=0){
				printf("%3d",a[i][3]);
				if(i==im && jm==3){
					printf("*  ");
				}
				else{
					printf("   ");
				}
			}
			else{
				printf("%3c   ",bos);
			}
			printf("%c\n",z);
			printf("|_________|_________|_________|_________|\n");
		}//tabloda bosluklar varsa o bosluklara random sayi atama
	if(ent!='r' && looka==1){
		y=0;
		while(y==0){
			im=rand()%4;
			jm=rand()%4;
			if(a[im][jm]==0){
			x=rand()%5;
			a[im][jm]=da[x];
			y=1;	
			}
		}
	}//islemler icin kullanicidan key alma
		if(looka==1){
			printf("Please enter the key(just this key): w(up), a(left), s(down), d(right), x(restart), r(return), e(exit)\n");
			scanf("%c",&ent);
		}
		//puanlari yazdirma
		if(score>highs){
			highs=score;
		}
		printf("Score : %d\n",score);
		printf("HighScore : %d\n",highs);
		//tablo dolu ise veya kullanici (e) girdiyse oyunu bitirme
		if(looka==0 || ent=='e'){
			printf(" The Game is end \n");		
		}
	}
	return 0;
}
