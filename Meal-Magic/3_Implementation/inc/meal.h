/**
 * @file meal.h
 * @author Komal Ghodke
 * @brief This file includes order.h file and implements all defined functions
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "orderit.h"

void cls(){

	system("cls");

}

void echo(char print[]){

	printf("%s",print);
}

void br(int line){
	int i;
	for(i=0; i<line;i++){
		printf("\n");
	}
}

void pre(int tab){
	int i;
	for(i=0; i<tab;i++){
		printf("\t");
	}

}
void span(int space){
	int i;
	for(i=0; i<space;i++){
		printf(" ");
	}

}

void main_menu(){

	cls();
	system("COLOR F3");
	printf("WEL-COME TO #MEAL-MAGIC! :) \n\n");
    printf("~The Food Order Management System~ \n");
	br(5); pre(3); echo("===> 1. Place order"); Sleep(400);;
	br(2); pre(3); echo("===> 2. Administration"); Sleep(400);
	br(2); pre(3); echo("===> 3. Exit");  Sleep(400);
	//   br(2); pre(3); echo("=> 4. Admin Panel");  Sleep(400);

	br(1);

}

void insertend(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	temp->next = NULL;


	if(head==NULL){
		head = temp;
		list = head;
	}
	else{

		while(head->next != NULL){
			head = head->next;
		}

		head->next = temp;
	}

}

void insertfirst(int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data ;

	temp->price = price;

	strcpy(temp->foodname,foodname);

	temp-> quantity = quantity;


	temp->next = head;

	head = temp;

	list = head ;

}

void insertmid(int pos, int data, char foodname[25], int quantity, float price){

	node *temp;

	temp=(node *)malloc(sizeof(node));

	temp->data = data;

	temp->price = price;

	temp-> quantity = quantity;

	strcpy(temp->foodname,foodname);

	while(head->next->data != pos ){


		head = head->next ;

	}

	temp->next = head->next;
	head->next = temp ;

	//    free(temp);
}

void deletefood(int serial){

	node *temp;
	temp=(node *)malloc(sizeof(node));

	temp = list;


	if(temp->data != serial){

		while(temp->next->data != serial){
			temp = temp->next;
		}

		if(temp->next->data == serial){
			int cs;
			temp->next = temp->next->next;
			cls();
			printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(cs=0;cs<4;cs++){printf(" .");Sleep(400);}

			printf("\n\n\n\n\t\t\tDeleted Successfylly \n"); Sleep(500);

		}
		else{
			printf("\n\n\n\n\t\t\tFood Item Not Found\n"); Sleep(500);
		}

		head = temp ;

	}
	else{
		int cs;
		temp = temp->next;
		cls();
		printf("\n\n\n\n\t\t\tDeleting Item %d ",serial);for(cs=0;cs<4;cs++){printf(" .");Sleep(400);}

		printf("\n\n\n\n\t\t\tDeleted Successfylly \n"); Sleep(500);

		head = temp ;

		list=head;
	}
}

void updatefood(int udata, int uquantity){

	node *temp;
	temp = list;

	while(temp->data!=udata){
		temp = temp->next;

	}
	if(temp->data == udata){
		temp->quantity = uquantity;
	}

}

int countitem(){

	node *temp;

	temp = list;

	int countitem=0;

	if(temp==NULL){
		countitem = 0;
	}
	else{
		countitem = 1;
		while(temp->next != NULL){
			countitem++;
			temp = temp->next;
		}

	}


	return countitem;

}
void foodlist(){

	//ccolor(26);

	printf("\n\t\t"); //ccolor(240);
	printf("______________________________________________________ "); //ccolor(26);
	printf("\n\t\t"); //ccolor(240);
	printf("|  Food No.  |   FooD Name   |  Price  |   In Stock   |"); //ccolor(26);
	printf("\n\t\t"); //ccolor(240);
	printf("-------------------------------------------------------"); //ccolor(26);

	node *temp;

	temp = list;

	while(temp != NULL){

		//ccolor(26);


		printf("\n\t\t"); //ccolor(62);
		printf("|     %d      |    %s  |    %0.2f   |    %d    |",temp->data,temp->foodname, temp->price, temp->quantity);
		//ccolor(26);
		printf("\n\t\t"); //ccolor(62);
		printf("-------------------------------------------------------");


		temp = temp->next ;

		Sleep(100);

	}

	//ccolor(26);

	//  free(temp);

}


void order_view(int order, int quantity, int or_no){



	//ccolor(26);

	node *temp;

	temp = list;

	while(temp->data != order){

		temp = temp->next;

	}
	if(temp->data == order){

		//ccolor(26);

		printf("\n\t\t"); //ccolor(62);
		printf("|     %d      |    %s  |     %d     |     %d     |",or_no,temp->foodname,quantity,temp->quantity);
		//ccolor(26);
		printf("\n\t\t"); //ccolor(62);
		printf("-------------------------------------------------------");

		Sleep(100);

	}

	//ccolor(26);

}

void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

}

void pwellcome(){
	//ccolor(26);
	system("COLOR E1");
	int wlc, wlc2, wlc3;
	char welcome[50]="WELCOME";
	char welcome2[50]=" TO";
	char welcome3[50]=" MEAL-MAGIC!";
	char welcome4[50]=" The #Food Order Management System";
	printf("\n\n\n\n\n\t\t\t");
	for(wlc=0; wlc<strlen(welcome);wlc++){
             ccolor(120+(wlc*9));

		printf(" %c",welcome[wlc]);
		Sleep(200);
	}
	ccolor(26);
	printf("\n\n\t\t\t\t ");
	for(wlc2=0; wlc2<strlen(welcome2) ;wlc2++){
            ccolor(160+(wlc2*9));

		printf(" %c",welcome2[wlc2]);
		Sleep(200);
	}
	//ccolor(26);
	printf("\n\n\n\t\t\t ");
	for(wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){
		    ccolor(121+(wlc3*4));

			printf(" %c",welcome3[wlc3]);
		}
		else{
		    ccolor(11);

			printf(" %c",welcome3[wlc3]);
		}

		Sleep(200);
	}
	//ccolor(26);
	printf("\n\n\n\t\t\t\t ");
	for(wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){
                ccolor(121+(wlc3*4));

			printf(" %c",welcome4[wlc3]);
		}
		else{
		    //ccolor(11);

			printf(" %c",welcome4[wlc3]);
		}
		Sleep(200);
	}
	//ccolor(26);

}
void loadingbar(void){
	int i, j;
	for (i=15;i<=100;i+=5){

		cls();
		//ccolor(26);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Loading...\n\n\t\t",i);

		printf("");

		for (j=0; j<i;j+=2){

			ccolor(160+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(100);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(100);
		}

	}

}
void backuploader(void){
	int i, j;
	for (i=15;i<=100;i+=5){

		cls();
		//ccolor(26);

		printf("\n\n\n\n\n\n\n\t\t\t\t");
		printf("%d %% Stay Tuned! Backing UP DATA...\n\n\t\t",i);

		printf("");

		for (j=0; j<i;j+=2){

			//ccolor(120+j);
			printf(" ");
			ccolor(26);

		}
		Sleep(50);
		if(i==90 || i==50 || i==96 || i==83){
			Sleep(50);
		}
	}

}


void middle1(void){

	printf("\n\n\n\n\n\n\n");
}

void middtab1(void){
	printf("\t\t\t\t\t");
}