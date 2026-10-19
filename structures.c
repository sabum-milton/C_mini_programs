/* collection of data of different types, each data is called a member 
and can be accessed individually
we use the struct keyword to create a structure name
just like functions, structures are not created within the main.
A union differs from a structure in that, it stores only a single value at a time and will only display the last correct value.
*/
#include <stdio.h>
#include <string.h>
union student{
	char name[200];
	int rollno;
	float marks;
};
int main(){
	union student student1;
	strcpy(student1.name ,"Milton");
	student1.rollno = 001;
	student1.marks = 99.4;
	printf("Student Name: %s\n",student1.name);
	printf("Student Rollno: %d\n",student1.rollno);
	printf("Student Marks: %f\n",student1.marks);
	return 0;
}



