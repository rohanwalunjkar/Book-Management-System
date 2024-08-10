#include "header.h"


void main() 
{   
    book*b1;
    book* b2;
    int n,ch;
    printf("\tBook Management System");
    //printf("\n\t----------------------------------");
    printf("\n\tEnter no of book :");
    scanf("%d",&n);
    b1=(book*)malloc(sizeof(book)*n);
    b2=(book*)malloc(sizeof(book)*n);
    printf("Book Management System");
    while(1)
	{
	printf("\n\t----------------------------------");
	printf("\n\n\t1)Store");
	printf("\n\t2)Display");
	printf("\n\t3)Search");
	printf("\n\t4)Update");
	printf("\n\t5)Delete");
	printf("\n\t6)Top 3 rating");
	printf("\n\t7)Insert");
	printf("\n\t8)Exit");
	printf("\n\t----------------------------------");
	
	printf("\n\n\tEnter your choice:");
	scanf("%d",&ch);
	if(ch==8)
		break;
	switch(ch)
	{
		case 1:
			store(b1,n);
			break;
		case 2:
    		display(b1,n);
    		break;
    	case 3:
    		search(b1,n);
    		break;
    	case 4:
    		update(b1,n);
    		break;
    	case 5:
    		delete(b1,&n);
    		break;
    	case 6:
    		top3rating(b1,b2,n);
    		break;
    	case 7:
    		insert(b1,&n);
    		break;
    	case 8:
    		printf("Invalid Choice");
    		break;
    		
    	}
	
    
	}
}
