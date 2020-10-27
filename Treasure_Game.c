#include <stdio.h>
#include <stdlib.h> 
#include<time.h> 
#include <unistd.h>
#include <ctype.h>
#include <conio.h> 
#include <math.h>

//Created by Emre Heosağ

#define karakter 126
#define person 219

void PrintMap(unsigned char map[25][25]);
void PrintScreen(void);

int main(){
	unsigned char map[25][25] = {};
	int i,j,x,y,obx,oby,key;
	x = 0;
	y = 0;
	srand(time(0)); 
	obx = rand()%25;
	sleep(1);
	srand(time(0)); 
	oby = rand()%25;
	PrintScreen();
	
	
	while(1){
		for(i=0;i<25;i++){
			for(j=0;j<25;j++){
				map[i][j] = karakter;
			}
		}
		map[x][y] = person;
		PrintMap(map);
		Naber:
		printf("=>YOUR LOCATION IS X = %d, Y = %d\n",y,25-x);
		printf("\t\t\t\t\t\t\t\t\t=>TO GO SOMEWHERE PRESS W,A,S OR D  \n");
		printf("\t\t\t\t\t\t\t\t\t=>YOUR DISTANCE TO THE TREASURE IS %f\n",sqrt(pow(x-obx,2)+pow(y-oby,2)));
		key = getch();
		key = toupper(key);
		switch(key){
			case 'D':
				y++;
				break;
			case 'A':
				y--;
				break;
			case 'W':
				x--;
				break;
			case 'S':
				x++;
				break;
			default :
				printf("\t\t\t\t\t\t\t\t\t=>Did i tell you that you can press %c !? \n\a",key);
				sleep(3);
		}
		if ( (x<0) || (x>25) || (y>25) || (y<0)){
			printf("\n \t\t\t\t\t\t\t\t\tBUDY YOU CAN NOT GET OUT OF THE MAP GET IN!!!\a\n");
			goto Naber;
		}
		if(x == obx && y == oby){
			system("cls");
			for(i = 0;i<15;i++){
				printf("\a\t\t\t\t\t\t\t\t\t\tYOU WON!!!\n\n");
				sleep(1);
			}
			break;
		}
		
		
	}
	
	
	
	
	system("PAUSE");
}

void PrintMap(unsigned char map[25][25]){
	system("cls");
	int i,j;
	for(i=0;i<5;i++)
		puts("");
	printf("\t\t\t\t\t\t\t\t\t");
	for(i=0;i<25;i++){
		for(j=0;j<25;j++){
			printf("%c ",map[i][j]);
		}
		puts("");
		printf("\t\t\t\t\t\t\t\t\t");
	}
}

void PrintScreen(void){
	int i,j,start;
	start = 0;
	while(start == 0){
		system("cls");
		for(j=0;j<5;j++)
		puts("");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t\t\t\t\t\t\t\t\t\t");
		printf("WELCOME TO THE TREASURE GAME \n");
		printf("\t\t\t\t\t\t\t\t\t\t");
		printf("IF YOU DO NOT KNOW HOW TO PLAY\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		printf("PRESSS  =>1<=\n");
		printf("\t\t\t\t\t\t\t\t\t\t");
		printf("IF YOU WANT TO KNOW THE CREATOR\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		printf("PRESSS  =>2<=\n");
		printf("\t\t\t\t\t\t\t\t\t\t");
		printf("IF YOU WANT TO PLAY THE GAME\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		printf("PRESSS  =>3<=\n");
		printf("\t\t\t\t\t\t\t\t\t\t");
		printf("IF YOU WANT TO KNOW THE STORY\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		printf("PRESSS  =>4<=\n");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t\t\t\t\t\t\t\t\t");
		printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
		scanf("%d",&i);
		if(i == 1){
			system("cls");
			for(j=0;j<5;j++)
		    puts("");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("TO GO UP PRESS =>W<= \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("TO GO DOWN PRESS =>S<= \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("TO GO LEFT PRESS =>A<= \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("TO GO UP RIGHT =>D<= \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			system("PAUSE");
		}else if(i == 2){
			system("cls");
			for(j=0;j<5;j++)
			puts("");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("HELLO EVERYONE I AM EMRE HEPSAG \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("I HAVE BEEN CREATING THIS GAME FOR LONG LONG TIME \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t");
			printf("I AM GLAD TO SEE YOU TO PLAY THIS GAME \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("NO MORE THINGS TO SAY. GOOD LUCK AND HAVE FUN... \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			system("PAUSE");
		}else if(i == 3){
			system("cls");
			for(j=0;j<5;j++)
			puts("");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("OBJECT IS HIDDEN TO A MYSTERIOUS PLACE \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t");
			printf("==>SHALL<== \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t");
			printf("==>WE<== \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t");
			printf("==>BEGIN<== \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			system("PAUSE");
			start++;
		}else if(i == 4){
			system("cls");
			for(j=0;j<5;j++)
			puts("");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("YOU ARE IN A SIMPLE TREASURE MAP.  \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("AND X REPRESENTS YOU. YOUR PURPOSE IS TO FIND\n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("THE TREASURE AND WIN THE GAME. I BELIEVE THAT YOU CAN \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("BE THE BEST TREASURE HUNTER IN THE WORLD. GOOD LUCK.. \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			system("PAUSE");
		}else{
			system("cls");
			for(j=0;j<5;j++)
			puts("");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t");
			printf("COME ON DUDE!!! \n\n");
			printf("\t\t\t\t\t\t\t\t\t    ");
			printf("ARE YOU REALLY TRYING TO DOWN THIS GAME!? \n\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t");
			printf("THAT IS IMPOSSIBLE!!! \n\n");
			printf("\t\t\t\t\t\t\t\t\t    ");
			printf("GO AND PRESS ANOTHER BUTTON WHIC IS VALID \n\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			printf("\t\t\t\t\t\t\t\t\t");
			printf("* * * * * * * * * * * * * * * * * * * * * * * * *\n");
			system("PAUSE");
		}
	}
}
