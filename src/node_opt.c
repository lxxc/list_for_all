#include "proj.h"

/***************************************************************
	SYNOPSIS
		#include "listfall.h"

		int show_node(sp loca);
	DESCRIPTION
		you should complete this func by your self cause I don't 
		know which member will you show!!!
		you can use the pointer "loca" who store the address of node 
		to visit members of the node.
		you should return the number of charactors that have been shown.
	RETURN VALUE
		the number of charactors that have been shown.
	AUTHOR
		yourself.
	ADDRESS & TIME

****************************************************************/
int show_node(sp loca)
{
	int scount=0;

	/*enter your code here*/
	printf("node[%d]:%s\t->%p\n",loca->id,loca->name,loca->next);
	/*over*/

	return scount;
}


/***************************************************************
	SYNOPSIS
		#include "listfall.h"

		sp create_node(sp becp);
	DESCRIPTION
		this function allow memory, which size is the same with your 
		node, and copy the memory pointed by "becp" to it.
	RETURN VALUE
		on success,return the allowd memory's address.otherwise,return 
		NULL.
	AUTHOR
		Liux
	ADRESS & TIME
		totyuedu & 2015-06-12
****************************************************************/
sp create_node(sp becp)
{
	sp new=(sp)malloc(sizeof(st));
	
	memcpy(new,becp,sizeof(st));

	return new;
}

/***************************************************************
	SYNOPSIS
		#include "listfall.h"
		
		void free_node(sp *loca_addr);
	DESCRIPTION
		this function free the allowd memory pointed by the pointer
		which address is "loca_addr".and let the pointer to be NULL.
	RETURN VALUE
		void
	AUTHOR
		Liux
	ADRESS & TIME
		totyuedu & 2015-06-12
****************************************************************/
void free_node(sp *loca_addr)
{
	free(*loca_addr);
	*loca_addr=NULL;

	return ;
}

