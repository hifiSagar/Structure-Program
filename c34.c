// staructure in C program
/*student details*/
#include<stdio.h>
struct students
{
    int roll_no;
    char name[10];
    int ph_no;
};
int main(){
    struct students s1 = {19,"sagar",1234567890};
    printf("Roll no is: %d\n",s1.roll_no);
    printf("Name is: ");
    puts(s1.name);
    printf("Contact no is: %d\n",s1.ph_no);
    return 0;
}
