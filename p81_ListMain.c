#include <stdio.h>
#include "./headerfile/ArrayList.h"

int main(void)
{
	//Init
	List list;
	int data;
	ListInit(&list);
	
	//Save 5 data
	LInsert(&list, 11); 
	LInsert(&list, 11); 
	LInsert(&list, 22); 
	LInsert(&list, 22); 
	LInsert(&list, 33); 

	printf("현재 데이터 수: %d \n", LCount(&list));

	return 0;
}
