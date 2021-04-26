#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void player1();
void player2();
int c1=0,c2=0;
int main()
{
	int dice,choice;
    srand(time(NULL));// use for rand() function to don't repeat the same value. srand is create seed value for it and it is different all time.
	printf("--------------SNAKE AND LADDERS----------------");
do{
		printf("\n\npress 1 for play");
		printf("\npress 2 for exit");
		printf("\nenter your choice=>");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				player1();
				printf("\nplayer1=%d\nplayer2=%d",c1,c2);
				if(c1<c2){
					printf("\n\nplayer1 WINNER\n\n");
				}
				else if(c1>c2){
					printf("\n\nplayer 2 WINNER\n\n");
				}
				else{
					printf("\n\nDRAW\n\n");
				}
				c1=0,c2=0;
				break;
			case 2:
				exit(0);
				printf("GAME OVER");
				default:
					printf("wronge choice");			
		}

	}while(choice!=2);
}

void player1()
{
	printf("\n----PLAYER 1----\n");
	int sum=0,get;
	do{
	int d=1+(rand()%6);  //take random values
//////snakes//////
if(sum<51){
	
	if(sum==49){
		printf("\nthere is snake from 49 to 2 bad luck\n");

	sum=2;
	printf("your position=%d\n",sum);
}
else if(sum==23){
	printf("\nthere is snake from 23 to 7 bad luck\n");

	sum=7;
	printf("your position=%d\n",sum);
}
else if(sum==18){
	printf("\nthere is snake from 18 to 10 bad luck\n");

	sum=10;
	printf("your position=%d\n",sum);

	//hello
}
else if(sum==34){
printf("\nthere is snake from 34 to 16 bad luck\n");
	sum=16;
	printf("your position=%d\n",sum);
}
else if(sum==46){
	printf("\nthere is snake from 46 to 44 bad luck\n");

	sum=44;
	printf("your position=%d\n",sum);
}
else if(sum==36){
	printf("\nthere is snake from 36 to 27 bad luck\n");

	sum=27;
	printf("your position=%d\n",sum);
}
////////Ladders/////////
else if(sum==3){
	printf("\nthere is ladder from 3 to 19\n");
	sum=19;
	printf("your position=%d\n",sum);
}
else if(sum==9){
	printf("\nthere is ladder from 9 to 24\n");
	sum=24;
	printf("your position=%d\n",sum);
}
else if(sum==14){
	printf("\nthere is ladder from 14 to 29\n");
	sum=29;
	printf("your position=%d\n",sum);
}
else if(sum==20){
	printf("\nthere is ladder from 20 to 47\n");
	sum=47;
	printf("your position=%d\n",sum);
}
else if(sum==28){
	printf("\nthere is ladder from 28 to 42\n");
	sum=42;
	printf("your position=%d\n",sum);
}
else if(sum==37){
	printf("\nthere is ladder from 37 to 45\n");
	sum=45;
	printf("your position=%d\n",sum);
}
else{
	printf("\n");
}
}
	printf("\n\nthrow dice::%d\n",d);
	get=d;
	sum=sum+get;
	c1++;
	printf("your position=%d\n",sum);
}while(sum<51);
player2();
}
void player2()//////player 2/////////
{
	printf("\n----PLAYER 2----\n");
	int sum=0,get;
	do{
	int d=1+(rand()%6);
	
//////snakes//////

if(sum<51){
	
	if(sum==49){
		printf("\nthere is snake from 49 to 2 bad luck\n");

	sum=2;
	printf("your position=%d\n",sum);
}
else if(sum==23){
	printf("\nthere is snake from 23 to 7 bad luck\n");

	sum=7;
	printf("your position=%d\n",sum);
}
else if(sum==18){
	printf("\nthere is snake from 18 to 10 bad luck\n");

	sum=10;
	printf("your position=%d\n",sum);
}
else if(sum==34){
printf("\nthere is snake from 34 to 16 bad luck\n");
	sum=16;
	printf("your position=%d\n",sum);
}
else if(sum==46){
	printf("\nthere is snake from 46 to 44 bad luck\n");

	sum=44;
	printf("your position=%d\n",sum);
}
else if(sum==36){
	printf("\nthere is snake from 36 to 27 bad luck\n");

	sum=27;
	printf("your position=%d\n",sum);
}
////////Ladders/////////
else if(sum==3){
	printf("\nthere is ladder from 3 to 19\n");
	sum=19;
	printf("your position=%d\n",sum);
}
else if(sum==9){
	printf("\nthere is ladder from 9 to 24\n");
	sum=24;
	printf("your position=%d\n",sum);
}
else if(sum==14){
	printf("\nthere is ladder from 14 to 29\n");
	sum=29;
	printf("your position=%d\n",sum);
}
else if(sum==20){
	printf("\nthere is ladder from 20 to 47\n");
	sum=47;
	printf("your position=%d\n",sum);
}
else if(sum==28){
	printf("\nthere is ladder from 28 to 42\n");
	sum=42;
	printf("your position=%d\n",sum);
}
else if(sum==37){
	printf("\nthere is ladder from 37 to 45\n");
	sum=45;
	printf("your position=%d\n",sum);
}
else{
	printf("\n");
}
}		
printf("\nthrow dice::%d\n",d);
get=d;	
sum=sum+get;
c2++;
printf("your position=%d\n",sum);
}while(sum<51);
}
