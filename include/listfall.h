#ifndef LXX_LIST_FOR_ALL_H_
#define LXX_LIST_FOR_ALL_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*enter your node structure name*/
typedef struct mnode st;
typedef st *sp;

/************************node options**************************/
/************************node options**************************/

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
****************************************************************/
int show_node(sp loca);


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
****************************************************************/
sp create_node(sp becp);

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
****************************************************************/
void free_node(sp *loca_addr);

/*to be continue...*/
int create_list_farr();


int create_list_finput(sp *head_addr);
int print_list(sp head);
void free_list(sp *head_addr);

sp insert_node_into_list();
sp insert_node_into_list_head(sp *head_addr,sp pos);
sp insert_node_into_list_tail(sp *head_addr,sp pos);
sp insert_node_into_list_behind_node(sp *head_addr,int nodeid,sp pos);
int delete_node_from_list(sp *head_addr,sp);
sp find_node_in_list(sp head,int id,sp *back_addr);





#endif
