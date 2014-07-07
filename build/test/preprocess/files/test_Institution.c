#include "unity.h"
#include "mock_Stack.h"
#include "mock_LinkedList.h"
#include "Institution.h"




void setUp(void)

{

}



void tearDown(void)

{

}



void test_Institution_reverse_given_TARC_MMU_should_reverse_become_MMU_TARC(void)

{

   Institution TARC= { .name = "TARC" };



   Institution MMU= { .name = "MMU" };









    LinkedList inputList;

    LinkedList outputList;

    Stack stack;



 Stack_create_CMockExpectAndReturn(29, &stack);





 List_removeHead_CMockExpectAndReturn(32, &inputList, &TARC);

 Stack_push_CMockExpect(33, &stack, &TARC);

 List_removeHead_CMockExpectAndReturn(34, &inputList, &MMU);

 Stack_push_CMockExpect(35, &stack, &MMU);

 List_removeHead_CMockExpectAndReturn(36, &inputList, ((void *)0));





 Stack_pop_CMockExpectAndReturn(39, &stack, &MMU);

 List_addTail_CMockExpect(40, &outputList, &MMU);

 Stack_pop_CMockExpectAndReturn(41, &stack, &TARC);

 List_addTail_CMockExpect(42, &outputList, &TARC);

 Stack_pop_CMockExpectAndReturn(43, &stack, ((void *)0));





 Institution_reverse(&inputList, &outputList);



 }



void test_isUniversityCollege_given_TARUC_should_return_1(void){



   Institution TARUC= { .name = "TARUC",

                          .type = 3 };













}





void test_Institution_select_that_can_slect_the_school_InstitutionTypr(void)

{



 Institution TARUC= { .name = "TARUC",

                         .address ="abc",

       .postcode=01000,

       .telephone=001,

       .type=3,

       .yearEstablished=1940

     };



   Institution MMU= { .name = "MMU",

                         .address ="abc",

       .postcode=10000,

       .telephone=000,

       .type=3,

       .yearEstablished=2013

     };





   Institution UTAR= { .name = "UTAR",

                         .address ="abc",

       .postcode=10000,

       .telephone=000,

       .type=2,

       .yearEstablished=2002

     };



 LinkedList inputList;

    LinkedList outputList;

    Stack stack;











}