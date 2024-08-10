#include"header.h"

void store(book*b1,int n)
{   int i,j=1;
    for(i=0;i<n;i++)
    {
       printf("\n------The details of %d book------",j++);
        printf("\n\tEnter the Book Id=");
        scanf("%d",&b1[i].bookId);
        printf("\n\tEnter the book name=");
        fflush(stdin);
        gets(b1[i].bookName);
        printf("\n\tEnter the book author=");
        gets(b1[i].author);
        printf("\n\tEnter th book publication=");
        scanf("%s",&b1[i].publication);
        gets(b1[i].publication);
        printf("\n\tEnter the Book pages=");
        scanf("%d",&b1[i].pages);
        printf("\n\tEnter the Book Price=");
        scanf("%lf",&b1[i].price);
        fflush(stdin);
        printf("\n\tEnter the book edition=");
        gets(b1[i].edition);
        printf("\n\tEnter the book rating=");
        scanf("%d",&b1[i].rating);
        printf("\n\tEnter the book language=");
        fflush(stdin);
        gets(b1[i].language);
        printf("\n\tEnter the book category=");
        gets(b1[i].category);


    }
}

void display(book*b1,int n)
{   int i,j=1;
    for(i=0;i<n;i++)
    {
    	printf("\n------The details of %d book------",j++);
    
        printf("\n\tThe Book Id is %d",b1[i].bookId);
       
	   	printf("\n\tThe book name is %s",b1[i].bookName);
        
        printf("\n\tThe book authorname is %s",b1[i].author);
        
        printf("\n\tThe book publication is %s",b1[i].publication);
        
        printf("\n\tThe Book pages are %d ",b1[i].pages);
        
        printf("\n\tThe Price of book is %lf",b1[i].price);
		
		printf("\n\tThe book edition is %s",b1[i].edition);
        
        printf("\n\tThe book rating is %d",b1[i].rating);
        
        printf("\n\tthe book language is %s",b1[i].language);
        
        printf("\n\tThe book category is %s",b1[i].category);
        
    }
}

void search(book*b1,int n )
{
	int i,bid,c=0;
	printf("\n\tEnter the Book id want to search");
	scanf("%d",&bid);
	for(i=0;i<n;i++)
	{
		if(b1[i].bookId==bid)
		{	c=1;
		
		printf("\n\tThe Book Id is %d",b1[i].bookId);
       
	   	printf("\n\tThe book name is %s",b1[i].bookName);
        
        printf("\n\tThe book authorname is %s",b1[i].author);
        
        printf("\n\tThe book publication is %s",b1[i].publication);
        
        printf("\n\tThe Book pages are %d ",b1[i].pages);
        
        printf("\n\tThe Price of book is %lf",b1[i].price);
        
        printf("\n\tThe book edition is %s",b1[i].edition);
        
        printf("\n\tThe book rating is %d",b1[i].rating);
        
        printf("\n\tEnter th book language is %s",b1[i].language);
        
        printf("\n\tThe book category is %s",b1[i].category);
		}
		
		
	}
	if(c==0)
			printf("\n\tYou enter the invalid bookId");
	
}


void update(book*b1,int n)
{
	int i,bid,c=0,ch;
	printf("\n\tEnter the Book id want to update");
	scanf("%d",&bid);
	for(i=0;i<n;i++)
	{	c=1;
		if(b1[i].bookId==bid)
		{
		printf("\n\t1)Book Name");
		printf("\n\t2)Author");
		printf("\n\t3)Publication");
		printf("\n\t4)Book pages");
		printf("\n\t5)Book price");
		printf("\n\t6)Book Edition");
		printf("\n\t7)Book Rating");
		printf("\n\t8)Book Language");
		printf("\n\t9)Book Category");
		
		printf("\n\tEnter your choice to update:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\n\tEnter the book name");
        		scanf("%s",&b1[i].bookName);
        		break;
        	case 2:
        		printf("\n\tEnter the book author");
        		scanf("%s",&b1[i].author);
        		break;
        	case 3:
        		printf("\n\tEnter the book publication");
        		scanf("%s",&b1[i].publication);
        		break;
        	case 4:
        		printf("\n\tEnter the Book pages ");
        		scanf("%d",&b1[i].pages);
        		break;
        	case 5:
        		printf("\n\tEnter the Book Price ");
        		scanf("%lf",&b1[i].price);
        		break;
        	case 6:
       			printf("\n\tEnter the book edition");
        		scanf("%s",&b1[i].edition);
        		break;
        	case 7:
        		printf("\n\tEnter the book rating");
        		scanf("%d",&b1[i].rating);
        		break;
        	case 8:
        		printf("\n\tEnter the book language");
        		scanf("%s",&b1[i].language);
        		break;
        	case 9:
        		printf("\n\tEnter the book category");
        		scanf("%s",&b1[i].category);
        		break;
		}
	}
		
	}
	if(c==0)
		printf("\n\tYou enter the invalid bookId");
	else
	{
		printf("\n\tUpdate Successful");
	}
		
}



void top3rating(book*b1,book*b2,int n)
{
int i;
	for(i=0;i<n;i++)
	{
		b2[i]=b1[i];
		
	}
	
	int j,k;
	book temp;
	for(j=0;j<n-1;j++)
	{
	
		for(k=j+1;k<n;k++)
		{
			if(b2[j].rating<b2[k].rating)
			{
				temp=b2[j];
				b2[j]=b2[k];
				b2[k]=temp;
			}
		}
	}
		
	printf("\n\t Top Three Rating ");
	
	j=1;
	for(i=0;i<3;i++)
	{	
		printf("\n------The details of %d book------",j++);
		printf("\n\tThe Book Id is %d",b2[i].bookId);
       
        
        printf("\n\tThe book name is %s",b2[i].bookName);
        
        printf("\n\tThe book authorname is %s",b2[i].author);
        
        printf("\n\tThe book publication is %s",b2[i].publication);
        
        printf("\n\tThe Book pages are %d ",b2[i].pages);
        
        printf("\n\tThe Price of book is %lf",b2[i].price);
//         fflush(stdin);
        
        printf("\n\tThe book edition is %s",b2[i].edition);
        
        printf("\n\tThe book rating is %d",b2[i].rating);
        
        printf("\n\tEnter th book language is %s",b2[i].language);
        
        printf("\n\tThe book category is %s",b2[i].category);
        
	}
		
	
	
}

void delete(book*b1,int *n)
{
	int id,i,j;
	printf("Enter the book id want to delete");
	scanf("%d",&id);
	int flag=0;
	for(i=0;i<*n;i++)
	{
		if(b1[i].bookId==id)
		{	
			flag=1;
			for(j=i;j<*n;j++)
			{
				b1[j]=b1[j+1];
			}
		}
	}
	if(flag==1)
	{	
		*n=*n-1;
		printf("\n\tDelete Successful");
	}
	else
	{
		printf("\n\tInvalid Id");
	}
	
}

void insert(book*b1,int* n)
{
	
	int i=*n++;
	 printf("\n------The details of %d book------",i);
        printf("\n\tEnter the Book Id=");
        scanf("%d",&b1[i].bookId);
        printf("\n\tEnter the book name=");
        fflush(stdin);
        gets(b1[i].bookName);
        printf("\n\tEnter the book author=");
        gets(b1[i].author);
        printf("\n\tEnter th book publication=");
        scanf("%s",&b1[i].publication);
        gets(b1[i].publication);
        printf("\n\tEnter the Book pages=");
        scanf("%d",&b1[i].pages);
        printf("\n\tEnter the Book Price=");
        scanf("%lf",&b1[i].price);
        fflush(stdin);
        printf("\n\tEnter the book edition=");
        gets(b1[i].edition);
        printf("\n\tEnter the book rating=");
        scanf("%d",&b1[i].rating);
        printf("\n\tEnter the book language=");
        fflush(stdin);
        gets(b1[i].language);
        printf("\n\tEnter the book category=");
        gets(b1[i].category);
        
        *n=*n+1;
}
