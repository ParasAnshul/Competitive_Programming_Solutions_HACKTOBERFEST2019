# include <stdio.h>
# include <malloc.h>
# include <conio.h>

struct link
{
	int data;
	struct link *next;
};

int i;
int number;
struct link start, *previous, *new1;

void insertion(struct link *);
void create_list(struct link *);
void display(struct link *);



void create_list(struct link *node)
{

	char ch;
	start.next = NULL;
	node = &start;
	i = 0;
	fflush(stdin);
	printf("\n Press Enter to input the node value or Input  b for breaking the link list: ");
	ch = getchar();
	while(ch != 'b')
	{
		node->next = (struct link* ) malloc(sizeof(struct link));
		node = node->next;
		printf("\n Input the node: %d: ", (i+1));
		scanf("%d", &node->data);
		node->next = NULL;
		fflush(stdin);
		printf("\n Input choice n for break: ");
		ch = getchar();
		i++;
	}
}
void insertion(struct link *node)
{
	node = start.next;

	previous = &start;

	new1 = (struct link* ) malloc(sizeof(struct link));
	new1->next = node ;
	previous->next = new1;
	printf("\n Input the value of the node you want to insert value: ");
	scanf("%d", &new1->data);
}

void display(struct link *node)
{
	node = start.next;
	printf("\n After Inserting a node list is as follows:\n");
	while (node)
	{
		printf(" %d\t", node->data);
		node = node->next;
	}
}
void main()
{
	struct link *node = (struct link *) malloc(sizeof(struct link));

	create_list(node);
	insertion(node);
	display(node);

}
