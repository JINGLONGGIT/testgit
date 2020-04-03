List CreatList(void)
{
	List L1, L2, head;
	L1 = L2 = head = (List)malloc(LEN);
	scanf("%d", &L1->val);
	head->next = NULL;
	while(getchar() != '\n')
		;
	while(L1 != 0)
	{
		if(head->next == NULL)
			head->next = L1;
		L2->next = L1;
		L2 = L1;
		L1 = (List)malloc(LEN);
		if(NULL == L1)
			printf("Error: OUT OF SPACE...\n");
		scanf("%d", &L1->val);
		while(getchar() != '\n')
			;
	}
	L2->next = NULL;
	return head;
}

// 测试文件1
##### 测试文件2：修复文件