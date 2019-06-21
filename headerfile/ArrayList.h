#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0

#define LIST_LEN	100
typedef int LData;	//LData에 대한 typedef 선언

typedef struct __ArrayList
{
	LData arr[LIST_LEN];
	int numOfData;
	int curPosition;
} ArrayList;

typedef ArrayList List;

void ListInit(List * plist); //초기화
void LInsert(List * plist, LData data); //데이터저장

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif


