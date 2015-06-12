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




#endif
