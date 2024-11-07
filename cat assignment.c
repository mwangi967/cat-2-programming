#include<stdio.h>
#include<string.h>

struct employee{
	char name[30];
	int ID;
	char department[20];
	float salary;
	char email[50];
}employee;
	
  int main(){
  strcpy(employee.name,"John Doe");
  employee.ID = 12345;
  strcpy(employee.department,"human resource");
  employee.salary = 55000.50;
  strcpy(employee.email,"john.doe@company.com"); 	
  
  printf("name: %s \n",employee.name );
  printf("ID: %d \n",employee.ID );
  printf("department: %s \n",employee.department );
  printf("salary: %f \n",employee.salary );
  printf("email: %s \n",employee.email );

return 0;    
}

