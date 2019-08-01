#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next; 
} Node;

int main()
{
	// 만들고
	Node * head = NULL;
	Node * tail = NULL;
	Node * cur = NULL; 

	Node * newNode = NULL;
	int readData;

	while(1){
		printf("자연수를 입력하세요. \n");
		scanf("%d", &readData);
		if(readData < 1)
			break;
		
		newNode = (Node *)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL; 

		if(head==NULL){
			head = newNode;
		}else{
			tail->next = newNode;
		}

		tail = newNode;	
	}
	printf("\n");

	// 출력하고
	printf("입력받은 데이터의 전체 출력!\n");
	if(head==NULL)
	{
		printf("저장된 자연수가 없습니다.\n");
	}
	else
	{	
		cur = head;
		printf("%d ", cur->data);
		
		while(cur->next != NULL){
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n"); 

	// 지우자
	if(head==NULL){
		return 0;
	}else{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d를 삭제합니다.\n", head->data);
		free(delNode);

		while(delNextNode != NULL)
		{
			delNode = delNextNode; 
			delNextNode = delNextNode->next;

			printf("%d를 삭제합니다. \n", delNode->data);
			free(delNode);
		}
	}

	return 0;
}
