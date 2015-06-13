#include "proj.h"



int create_list_finput(sp *head_addr)
{
	char choice;
	int nodenumber=0;
	st tmp;
	sp newp,head=NULL;

	while(1){
		printf("input a node ?(y/n)default yes\n");
		scanf("%c",&choice);
		if(choice=='n'){
			break;
		}else if(choice!='y'&&choice!='\n'){
			free_list(&head);
			return -1;
		}

		/*enter your code here*/
		printf("please input the node id:\n");
		scanf("%d",&tmp.id);
		printf("please input the node name:\n");
		scanf("%s",&tmp.name);
		/*over*/
		tmp.next=NULL;


		newp=create_node(&tmp);
#if 1
		insert_node_into_list_head(&head,newp);
#else 
		insert_node_into_list_tail(&head,newp);
#endif
		nodenumber++;
		getchar();
	}

	*head_addr=head;
	return 0;
}
int print_list(sp head)
{
	int scount=0;

	for(;head;head=head->next)
		scount+=show_node(head);
		

	return scount;
}

void free_list(sp *head_addr)
{
	sp back=*head_addr;

	while(*head_addr){
		*head_addr=(*head_addr)->next;
		free_node(&back);
		back=*head_addr;
	}

	return ;
}
