/**
 * @file orderit.h
 * @author Komal Ghodke
 * @brief This file is for defining structure definations here
 * @version 0.1
 * @date 2021-09-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//#include "math.h"
#ifndef ORDERIT_H
#define ORDERIT_H


        ///START Structure Here

struct Node{

	char foodname[50];
	int quantity;
	float price;
	int data;
	struct Node *next;

};

  

typedef struct Node node ;

node *head, *list;


#endif /* ORDER_H */