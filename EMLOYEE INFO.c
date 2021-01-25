#include<stdio.h>
#include<string.h>
#define N 1

typedef struct Myemp{
	
	char name[15]; 
	int hourlypayrate;
	int ID;
	float numofhoursworked;
	float wageaftertax,netwage,amttax,amtwage,numofhoursworkedwage;
	
}Myemp;

void display(Myemp X)
{
	printf("\n%s \t %d \t %d \t %.2f \t %.2f \t %.2f \t %.2f ",X.name,X.ID,X.hourlypayrate,X.numofhoursworked,X.amtwage,X.amttax,X.amtwage);
}	


int main()
{
	Myemp	emp_info[5];
	int i;
	char tmp;
	for(i=0;i<5;i++){ 
		printf("enter employee name:");
		if(i>0) scanf("%c", &tmp);
		scanf("%[^\n]", &emp_info[i].name);
		printf("enter employee ID:");
		scanf("%d", &emp_info[i].ID);
		printf("enter hourly payrate:");
		scanf("%d", &emp_info[i].hourlypayrate);
		printf("enter num of hours worked:");
		scanf("%f", &emp_info[i].numofhoursworked);
		

		emp_info[i].amtwage = emp_info[i].hourlypayrate * emp_info[i].numofhoursworked;		
		emp_info[i].amttax = emp_info[i].amtwage * 0.05;
		emp_info[i].wageaftertax = emp_info[i].amtwage - emp_info[i].amttax;
		emp_info[i].netwage = emp_info[i].netwage + emp_info[i].wageaftertax;
		
		printf("\n");
	}
	printf("Name \t\t ID \t HPR \t NHW \t wage   \t taxamt \t WAT"); //WAT stands for wage after tax reduction
	
	for(i = 0; i < 5;i++)
	{
		display(emp_info[i]);
		
	}
}
