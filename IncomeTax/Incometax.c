#include<stdio.h>
#include<process.h>
int income2tax();
int tax2income();
int main()
{
    int n;
    printf("Choose your option\n");
    printf("\t1.Income to Tax\n\t2.Tax to Income\n");
    printf("\t3.Exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1: income2tax();
        break;
    case 2: tax2income();
        break;
    case 3: exit(0);
        break;
    default: printf("\nEnter a valid option\n");
        break;
    }

}

int income2tax()
{
    int salary,tax;
    printf("Enter your salary\n");
    scanf("%d",&salary);
    if(salary<=250000)
    {
        tax=salary*0.05;
    }
    else if ((salary>250000)&&(salary<=500000))
    {
        int a=salary-250000;
        tax=(a*0.10)+12500;
    }
    else if ((salary>500000)&&(salary<=1000000))
    {   
        int b=salary-500000;
        tax=(b*0.20)+37500;
    }
    printf("tax is=%d",tax);
}
int tax2income()
{
    int mtax,mtax1,mtax2,tax,salary;
    printf("Enter tax youhave been charged\n");
    scanf("%d",&tax);
    mtax=(250000*0.05);
    mtax1=(250000*0.10);
    mtax2=(500000*0.20);
    if(tax<=mtax)
    {
        salary=(tax/0.05);
    }
    else if((tax>mtax)&&(tax<=mtax1))
    {
        int a=tax-mtax;
        salary=(mtax/0.05)+(a/0.10);
    }
    else if((tax>mtax1)&&(tax<=mtax2))
    {
        int b=tax-(mtax1+mtax);
        salary=(mtax/0.05)+(mtax1/0.10)+(b/0.20);
    }
    printf("Your Salary is=%d",salary);
    
}
