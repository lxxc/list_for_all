#include <proj.h>

int main(void)
{
	sp head;
	sp pos,back;

	create_list_finput(&head);
	printf("out put %d bytes\n",print_list(head));
	
	pos=find_node_in_list(head,1,&back);
	printf("find id=%d\n",pos);
	printf("back =%p\n",back);
	if(back)
		printf("back->id=%d\n",back->id);

	free_list(&head);
	printf("head=%p\n",head);

	return 0;
}
