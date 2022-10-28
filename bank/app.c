#include "main.h"

int main(void)
{
	struct profile layo;
	/* char cinput[]; */
	int iinput;

	/* scanf("%s", &cinput[]);	 issues here */
	strcpy(layo.first_name, "Jesulayomi");
	strcpy(layo.last_name, "Aina");
	strcpy(layo.middle_name, "Michael");
	strcpy(layo.nationality, "Nigerian");
	strcpy(layo.username, "Jesulayomy");
	scanf("%d", &iinput);
	layo.year_of_birth = iinput;
	layo.gender = 'M';
	layo.account_no = getacc();

	printf("Hello, %s %s %s \n", layo.first_name, layo.middle_name, layo.last_name);
	printf("From: %s \n", layo.nationality);
	printf("Your username is: %s, your gender: %c and year of birth: %d\n", layo.username, layo.gender, layo.year_of_birth);
	printf("%lli is your account number.\n", layo.account_no);

	return (0);
}
