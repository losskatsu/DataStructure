#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
	int data;
	struct _node * next;
} Node;

int main()
{
	Node * head = NULL; 
	Node * tail = NULL;
	Node * cur = NULL;

	Node * newNode = NULL; 
	int readData; 

	//데이터 입력 받는 과정
	while(1)
	{
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if(readData < 1)
			break;
		
		// adding node 
		newNode = (Node*)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;

		if(head==NULL)
			head = newNode;
		else
			tail->next = newNode; 

		tail = newNode; 
	}
	printf("\n"); 

	//입력받은 데이터 출력
	printf("입력받은 데이터의 전체출력! \n");
	if(head == NULL)
	{
		printf("저장된 자연수가 존재하지 않습니다.\n"); 
	}
	else 
	{
		cur = head; 
		printf("%d ", cur->data);
		while(cur->next != NULL)
		{
			cur = cur->next; 
			printf("%d ", cur->data);
		}
	}
	printf("\n");

	//메모리 해제 과정
	if(head == NULL)
	{
		printf("해제할 노드가 존재하지 않습니다. \n");
		return 0;
	}
	else 
	{
		Node * delNode = head;
		Node * delNextNode = head->next;

		printf("%d를 삭제합니다. \n", head->data);
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
