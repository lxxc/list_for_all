#ifndef MY_PORJ_H_
#define MY_PROJ_H_

struct mnode
{
	int id;
	char name[32];
	struct mnode *next;
};

#include "listfall.h"


#endif
