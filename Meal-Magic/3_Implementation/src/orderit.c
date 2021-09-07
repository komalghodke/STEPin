/**
 * @file orderit.c
 * @author This file includes order.h file and calls all the defined functions
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "orderit.h"

///Logic Functions

   /// Update & Insert Function
void insertfirst(int data, char foodname[25], int quantity, float price);
void insertmid(int pos, int data, char foodname[25], int quantity, float price);
void insertend(int data, char foodname[25], int quantity, float price);
void updatefood(int udata, int uquantity);

     /// Display Function
void foodlist();
void order_view(int order, int quantity, int or_no);
void main_menu();

    ///Delete & Count Function
void deletefood(int serial);
int countitem();



///extra design Function

void cls();
void echo(char print[]);
void br(int line);
void pre(int tab);
void span(int space);
void ccolor(int clr);
void pwellcome();
void loadingbar();
void middle1(void);
void middtab1(void);
void backuploader(void);
