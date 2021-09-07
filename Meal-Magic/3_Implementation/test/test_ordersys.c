/**
 * @file test_ordersys.c
 * @author Komal Ghodke
 * @brief Unity testing
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include "string.h"
#include "unity.h"
#include "unity_internals.h"
#include "unity.h"
#include "meal.h"
#include "orderit.h"

void setUp(){}
void tearDown(){}
Node starter, odr;
float fdata=0.0;
int quantity=0;
void test_Clear_Screen(void){
  		TEST_ASSERT_EQUAL(0,Clear_Screen());
}

void test_Add_Item(void){
    starter.start=NULL;
  		TEST_ASSERT_EQUAL(0, Add_Item(&starter,5,"Burger   ", 1, 100));
  		TEST_ASSERT_EQUAL(0, Add_Item(&starter,6,"Pizza   ", 1, 100));
}
void test_Item_List(void){
  		TEST_ASSERT_EQUAL(0,Item_List(&starter));
}
void test_Order_Item(void){
    fdata=5;
    quantity=2;
    odr.start=NULL;
    TEST_ASSERT_EQUAL(0,Order_Item(&starter, &odr, fdata, fquantity));
}
void test_Previous_Order(void){
  		TEST_ASSERT_EQUAL(0,Previous_Order(&odr));
}
void test_Total_Bill(void){
  		TEST_ASSERT_EQUAL(0,totalmoney(&odr));
}

void main()
{

    UNITY_BEGIN();

    RUN_TEST(test_Add_Item);
    //RUN_TEST(test_console_color);
    RUN_TEST(test_Item_List);
    RUN_TEST(test_Previous_Order);
    RUN_TEST(test_Total_Bill);
    RUN_TEST(test_Order_Item);
    RUN_TEST(test_Clear_Screen);

    return UNITY_END();

}
