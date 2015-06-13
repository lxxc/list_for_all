#include <proj.h>

int main(void)
{
	sp head;

	create_list_finput(&head);
	printf("out put %d bytes\n",print_list(head));
	free_list(&head);
	printf("head=%p\n",head);

	return 0;
}
