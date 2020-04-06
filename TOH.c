#include<stdio.h>

void TOH(int,char,char,char,char,char);

void main()
{
	int n=3;
	//printf("How many plates");
	//scanf("%d",&n);
	TOH(n,'A','B','C','D','E');
}

void TOH(int n,char p,char q,char r,char s, char t)
{
	if(n>0)
	{
	    int m;
        m=n/3;

 		TOH(m-1,p,t,r,q,s);
		printf("\n Move disk %d from Tower %c to Tower %c",n,p,r);
		TOH(m-1,t,r,p,s,q);

		TOH((2*m)-2,p,t,s,q,r);
		printf("\n Move disk %d from Tower %c to Tower %c",n-1,p,s);
		TOH((2*m)-2,t,s,p,q,r);

		TOH(m-3,p,t,q,r,s);
        printf("\n Move disk %d from Tower %c to Tower %c",n-2,p,q);
		TOH(m-3,t,q,p,r,s);

		TOH((2*m)-2,s,t,q,p,r);
		printf("\n Move disk %d from Tower %c to Tower %c",n-1,s,q);
		TOH((2*m)-2,t,q,s,p,r);

		TOH(m-1,r,t,q,p,s);
		printf("\n Move disk %d from Tower %c to Tower %c",n,r,q);
		TOH(m-1,t,q,r,p,s);



	}

}
