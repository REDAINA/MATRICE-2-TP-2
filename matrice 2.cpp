#include<stdio.h>
#include<stdlib.h>
	int main()
	{
		int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
		int t;
		int i,j;
		printf("tablau initial:\n");
			for (i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
				{
					printf("%d\t",a[i][j]);	
				}
				printf("\n");
			}
			for (i=0;i<3;i++)
			{
				for(j=i+1;j<4;j++){
					t=a[i][j];
					a[i][j]=a[j][i];
					a[j][i]=t;
				}	
			}
			printf("tablau echange:\n");
			for (i=0;i<4;i++)
			{
				for(j=0;j<4;j++)
				{
					printf("%d\t",a[i][j]);
				}
				printf("\n");
			}
			return 0;
			
}

