#include <proj.h>

int main(void)
{
	st fir;
	sp newp;

	fir.id=3;
	strcpy(fir.name,"liux");
	fir.next=NULL;

	newp=create_node(&fir);
	show_node(newp);
	free_node(&newp);

	printf("newp=%p\n",newp);

	return 0;
}
