#include <stdio.h>
#include <stdlib.h>
typedef struct driver
{
    char name[34];
    char DLNUM[40];
    char route[47];
    int kms;
}dr;
int main()
{
    struct driver d1,d2,d3;
    printf("ENTER THE DETAILS OF THE DRIVERS:\n");
    printf("\n\n");
    printf("ENTER THE NAME OF THE FIRST DRIVER:\n");
    scanf("%s",&d1.name);
    printf("ENTER THE DRIVING LICENSE NUMBER OF THE FIRST DRIVER:\n");
    scanf("%s",&d1.DLNUM);
    printf("ENTER THE ROUTE OF THE FIRST DRIVER:\n");
    scanf("%s",&d1.route);
    printf("ENTER THE KILOMETERES TRAVELED BY THE FIRST DRIVER:\n");
    scanf("%d",&d1.kms);
    printf("\n\n");
    printf("ENTER THE DETAILS OF THE SECOND DRIVER:\n");
    printf("\n\n");
    printf("ENTER THE NAME OF THE SECOND DRIVER:\n");
    scanf("%s",&d2.name);
    printf("ENTER THE DRIVING LICENSE NUMBER OF THE SECOND DRIVER:\n");
    scanf("%s",&d2.DLNUM);
    printf("ENTER THE ROUTE OF THE SECOND DRIVER:\n");
    scanf("%s",&d2.route);
    printf("ENTER THE KILOMETERES TRAVELED BY THE SECOND DRIVER:\n");
    scanf("%d",&d2.kms);
    printf("\n\n");
    printf("ENTER THE DETAILS OF THE THIRD DRIVER:\n");
    printf("\n\n");
    printf("ENTER THE NAME OF THE THIRD DRIVER:\n");
    scanf("%s",&d3.name);
    printf("ENTER THE DRIVING LICENSE NUMBER OF THE THIRD DRIVER:\n");
    scanf("%s",&d3.DLNUM);
    printf("ENTER THE ROUTE OF THE THIRD DRIVER:\n");
    scanf("%s",&d3.route);
    printf("ENTER THE KILOMETERES TRAVELED BY THE THIRD DRIVER:\n");
    scanf("%d",&d3.kms);
    printf("\n\n");
    printf("THE DETAILS OF THE FIRST DRIVER ARE:\n");
    printf("\n\n");
    printf("NAME:%s\n",d1.name);
    printf("DRIVING LICENSE NUMBER:%s\n",d1.DLNUM);
    printf("ROUTE:%s\n",d1.route);
    printf("KILOMETRES TRAVELLED:%d\n",d1.kms);
    printf("\n\n");
    printf("THE DETAILS OF THE SECCOND DRIVER ARE:\n");
    printf("\n\n");
    printf("NAME:%s\n",d2.name);
    printf("DRIVING LICENSE NUMBER:%s\n",d2.DLNUM);
    printf("ROUTE:%s\n",d2.route);
    printf("KILOMETRES TRAVELLED:%d\n",d2.kms);
    printf("\n\n");
     printf("THE DETAILS OF THE THIRD DRIVER ARE:\n");
    printf("\n\n");
    printf("NAME:%s\n",d3.name);
    printf("DRIVING LICENSE NUMBER:%s\n",d3.DLNUM);
    printf("ROUTE:%s\n",d3.route);
    printf("KILOMETRES TRAVELLED:%d\n",d3.kms);
    printf("\n\n");
    return 0;
}
