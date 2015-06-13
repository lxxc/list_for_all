#include "proj.h"


sp insert_node_into_list();


sp insert_node_into_list_head(sp *head_addr,sp pos)
{
	pos->next=*head_addr;
	
	return *head_addr=pos;
}


sp insert_node_into_list_tail(sp *head_addr,sp pos)
{
	sp head=*head_addr;
	if(!pos)
		return pos;

	if(!(*head_addr)){
		*head_addr=pos;
		return pos;
	}
	while(head && head->next)
		head=head->next;
	head->next=pos;
	return pos;
}

sp insert_node_into_list_behind_node(sp *head_addr,int nodeid,sp pos);
int delete_node_from_list(sp *head_addr,sp);

sp find_node_in_list(sp head,int id)
{
	while(head){
		if(head->id==id)
			break;
		head=head->next;
	}
	return head;
}
